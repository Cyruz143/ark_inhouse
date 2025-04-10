#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Selects sound if the unit is unconscious
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: State <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_voices_fnc_unconscious
 */

params ["_unit", "_state"];

if (
    isPlayer _unit ||
    { !local _unit } ||
    { isAgent teamMember _unit } ||
    { !alive _unit } ||
    { _state } ||
    { _unit getVariable [QGVAR(disableVoice), false] }
) exitWith {};

_unit setVariable [QGVAR(isSpeaking), true];
[_unit, "wakeup"] call FUNC(selectSound);

// Stop units spam shouting
[_unit, (random [5, 10, 15])] call FUNC(stopSpam);
