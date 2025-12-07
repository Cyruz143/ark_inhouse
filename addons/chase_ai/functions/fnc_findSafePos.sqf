#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Finds an empty position near the target
 *
 * Arguments:
 * 0: Target <UNKNOWN>
 *
 * Return Value:
 * Target Position
 *
 * Example:
 * [] call ark_chase_ai_fnc_findSafePos
 */

params ["_target", "_unit"];

// Account for moving units
private _distance = _unit distance2D _target;
private _targetEffectiveLocation = (getPosATL _target) vectorAdd ((velocity _target) vectorMultiply (_distance / 10));

private _targetPos = _targetEffectiveLocation findEmptyPosition [0, 10, "CAManBase"];
if (_targetPos isEqualTo []) then {
    _targetPos = _target getPos [ark_chase_ai_var_wpAccuracy, random 360];
};

_targetPos // return
