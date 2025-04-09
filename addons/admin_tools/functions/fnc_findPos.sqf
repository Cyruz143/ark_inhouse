#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Tries to find a position on, or near a road. Falls back to general position if not found.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * 0: Position <POSITION>
 *
 * Example:
 * [_unit] call ark_admin_tools_fnc_findPos
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params ["_unit"];

private _pos = [0,0,0];
private _roadsMax = _unit nearRoads 1000;
private _roadsMin = _unit nearRoads 800;
private _roads = _roadsMax - _roadsMin;

if (_roads isEqualTo []) then {
    _pos = [_unit, 850, 1000, 3, 0, 20, 0] call BIS_fnc_findSafePos;
} else {
    _pos = getPosATL (selectRandom _roads);
};

_pos
