#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Clears the targets array from a unit
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Radius <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_chase_ai_fnc_forgetTargets
 */

params ["_unit", "_radius"];

private _targets = _unit targets [true, _radius];
if (_targets isNotEqualTo []) then {
    {_unit forgetTarget _x} forEach _targets;
};
