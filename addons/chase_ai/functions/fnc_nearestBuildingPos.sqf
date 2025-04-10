#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Finds the nearest buildingPos to the supplied unit
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * building position
 *
 * Example:
 * [] call ark_chase_ai_fnc_nearestBuildingPos
 */

params ["_unit"];

private _nearBuildings = nearestObjects [_unit, ["House", "Ruins"], 20] select {(alive _x) && {!(isObjectHidden _x)}};
if (_nearBuildings isEqualTo []) exitWith {"outside"};

private _buildingPositions = (_nearBuildings #0) buildingPos -1;
if (_buildingPositions isEqualTo []) exitWith {"outside"};

_buildingPositions = _buildingPositions apply {[_unit distance _x, _x]};
_buildingPositions sort true;

(_buildingPositions #0) #1 //return
