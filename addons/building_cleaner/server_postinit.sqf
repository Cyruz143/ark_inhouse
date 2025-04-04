#include "script_component.hpp"

addMissionEventHandler ["BuildingChanged", {call ark_building_cleaner_fnc_canClean}];

ark_building_cleaner_fnc_canClean = {
    params ["_buildingOld", "_buildingNew", "_isRuin"];

    if (!_isRuin) exitWith {};

    private _buildingPos = getPos _buildingOld;
    private _buildDir = getDir _buildingOld;
    private _bbr = 0 boundingBoxReal _buildingOld;
    private _p1 = _bbr #0;
    private _p2 = _bbr #1;
    private _p3 = _bbr #2;
    private _p3per = _p3 * 0.5;
    private _nObjs = _buildingPos nearObjects (_p3 + _p3per);

    {_nObjs deleteAt (_nObjs find _x)} forEach [_buildingOld,_buildingNew];

    private _xAxis = ((_p2 #0) - (_p1 #0)) / 2;
    private _yAxis = ((_p2 #1) - (_p1 #1)) / 2;
    private _zAxis = ((_p2 #2) - (_p1 #2)) + 10;

    if (_nObjs isNotEqualTo []) then {
        private _fObjs = _nObjs inAreaArray [_buildingPos, _xAxis, _yAxis, _buildDir, true, _zAxis];
        {_x call ark_building_cleaner_fnc_doClean} forEach _fObjs;
    };

    INFO_1("fnc_canClean, Running for %1",_buildingOld);
};

ark_building_cleaner_fnc_doClean = {
    params ["_obj"];

    if (_obj isKindOf "Logic") exitWith {};

    // Dont kill players and kill AI (they get stuck in ruins)
    if (_obj isKindOf "CAManBase" && {!isPlayer _obj && alive _obj}) exitWith {
        _obj setDamage 1;
    };

    // simpleObjects & buildings float regardless so delete
    if (isSimpleObject _obj || {_obj isKindOf "Building"}) exitWith {deleteVehicle _obj};

    // enableSim on objects to allow them to fall and destroy them as they were simDisabled
    if (!(simulationEnabled _obj)) then {
        _obj enableSimulation true;
        [{
            _this setDamage [1, false];
            _this enableSimulation false;
        }, _obj, 3] call CBA_fnc_waitAndExecute;
    };
};
