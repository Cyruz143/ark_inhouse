#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Selects sound if the unit is firing
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_voices_fnc_firing
 */

params ["_unit", "_weapon"];

if (
    _unit getVariable [QGVAR(isSpeaking), false] ||
    { isPlayer _unit } ||
    { !local _unit } ||
    { isAgent teamMember _unit } ||
    { _unit getVariable [QGVAR(disableVoice), false]}
) exitWith {};

_unit setVariable [QGVAR(isSpeaking), true];

if ((toLowerANSI _weapon) isEqualTo "throw") then {
    [_unit, "grenade"] call FUNC(selectSound);
} else {
    [_unit, "firing"] call FUNC(selectSound);
};

// Stop units spam shouting
[_unit, (random [5, 10, 15])] call FUNC(stopSpam);
