#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds camshake from explosions
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit] call ark_camshake_explosionShake
 */

params ["_unit"];

private _dist = player distance2D _unit;
if (!GVAR(enabled) || _dist > 1000) exitWith {};

// If you pass 0 in _dist (vehicle blows up with you in it) you get a zero divisor error
if (_dist == 0) then {
    _dist = 50;
};

[{
    addCamShake [(1000 / _this) min 20, 1, 5]
}, _dist, _dist / 343] call CBA_fnc_waitAndExecute;
