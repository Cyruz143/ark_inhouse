#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Creates blood on the ground, ACE blood module handles cleanup.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_blood_effects_createBlood
 */

params ["_unit"];

// Ignore units in vehicles
if (!(_unit isKindOf "CAManBase") || { !(isNull objectParent _unit) }) exitWith {};

private _pos = getPosASL _unit;
private _lisPos = (lineIntersectsSurfaces [_pos, _pos vectorAdd [0,0,-1e11], objNull, objNull, true, 1, "ROADWAY", "FIRE"]) #0;
private _blood = createSimpleObject [(selectRandom GVAR(bloodModels)), (_lisPos #0)];
_blood setDir (random 360);
_blood setVectorUp _lisPos #1;

// Using ACE's medical_blood module to handle clean up
["ace_medical_blood_bloodDropCreated", [_blood, _unit]] call CBA_fnc_serverEvent;
