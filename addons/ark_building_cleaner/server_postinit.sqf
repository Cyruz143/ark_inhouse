addMissionEventHandler ["BuildingChanged", {call ark_building_cleaner_fnc_canClean}];

ark_building_cleaner_fnc_canClean = {
    params ["_buildingOld", "_buildingNew", "_isRuin"];

    if (_isRuin) then {
        private _buildingPos = getPos _buildingOld;
        private _bbr = 0 boundingBoxReal _buildingOld;
        private _p1 = _bbr #0;
        private _p2 = _bbr #1;
        private _p3 = _bbr #2;
        private _p3per = _p3 * 0.15;
        private _nObjs = _buildingPos nearObjects (_p3 + _p3per);

        {_nObjs deleteAt (_nObjs find _x)} forEach [_buildingOld,_buildingNew];

        private _xAxis = ((_p2 #0) - (_p1 #0)) / 2;
        private _yAxis = ((_p2 #1) - (_p1 #1)) / 2;
        private _zAxis = ((_p2 #2) - (_p1 #2)) + 10;

        if (_nObjs isNotEqualTo []) then {
            private _fObjs = _nObjs inAreaArray [_buildingPos, _xAxis, _yAxis, 0, true, _zAxis];
            {_x call ark_building_cleaner_fnc_doClean} forEach _fObjs;
        };

        ["Building Cleaner","INFO","fnc_canClean","Running for", _buildingOld] call ark_admin_tools_fnc_log;
    };
};

ark_building_cleaner_fnc_doClean = {
    params ["_obj"];

    if (_obj isKindOf "Logic") exitWith {};

    // Dont kill players and kill AI (they get stuck in ruins)
    if (_obj isKindOf "CAManBase") exitWith {
        if (!isPlayer _obj) then {
            // Can remove deleteVehicle on 2.10 ref: T63050
            if (alive _obj) then {
                _obj setDamage 1;
            } else {
                deleteVehicle _obj;
            };
        };
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