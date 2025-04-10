#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Finds a safe position for spawning
 *
 * Arguments:
 * 0: Target <UNKNOWN>
 *
 * Return Value:
 * Target Position
 *
 * Example:
 * [] call ark_chase_ai_fnc_createGroup
 */

params ["_target"];

private _targetPos = (getPos _target) findEmptyPosition [0, 10, "CAManBase"];
if (_targetPos isEqualTo []) then {
    _targetPos = _target getPos [ark_chase_ai_var_wpAccuracy, random 360];
};

_targetPos // return
