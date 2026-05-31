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
 * [] call ark_building_cleaner_fnc_canClean
 */

params ["_buildingOld", "_buildingNew", "_isRuin"];

if (!_isRuin) exitWith {};

private _buildingPos = getPos _buildingOld;
private _buildingDir = getDir _buildingOld;

private _bbr = 0 boundingBoxReal _buildingOld params ["_p1", "_p2", "_p3"];
private _p3HalfHeight = _p3 * 0.5;
private _nearObjs = _buildingPos nearObjects (_p3 + _p3HalfHeight);

// Remove old building / new building from nearObjects
{
    _nearObjs deleteAt (_nearObjs find _x);
} forEach [_buildingOld,_buildingNew];

// Math wizardry
private _xAxis = ((_p2 #0) - (_p1 #0)) / 2;
private _yAxis = ((_p2 #1) - (_p1 #1)) / 2;
private _zAxis = ((_p2 #2) - (_p1 #2)) + 10;

if (_nearObjs isNotEqualTo []) then {
    private _finalObjects = _nearObjs inAreaArray [_buildingPos, _xAxis, _yAxis, _buildingDir, true, _zAxis];
    {
        _x call FUNC(doClean);
    } forEach _finalObjects;
};

INFO_1("fnc_canClean, Running for %1",_buildingOld);
