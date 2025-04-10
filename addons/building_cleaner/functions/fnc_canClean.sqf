#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if there any objects/units within inside or on top of the building
 *
 * Arguments:
 * Arguments from BuildingChanged missionEventHandler
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_building_cleaner_canClean
 */

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

{
    _nObjs deleteAt (_nObjs find _x);
} forEach [_buildingOld,_buildingNew];

private _xAxis = ((_p2 #0) - (_p1 #0)) / 2;
private _yAxis = ((_p2 #1) - (_p1 #1)) / 2;
private _zAxis = ((_p2 #2) - (_p1 #2)) + 10;

if (_nObjs isNotEqualTo []) then {
    private _fObjs = _nObjs inAreaArray [_buildingPos, _xAxis, _yAxis, _buildDir, true, _zAxis];
    {
        _x call FUNC(doClean);
    } forEach _fObjs;
};

INFO_1("fnc_canClean, Running for %1",_buildingOld);
