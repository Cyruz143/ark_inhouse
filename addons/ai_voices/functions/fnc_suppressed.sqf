#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Selects sound if the unit is suppressed
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_voices_fnc_suppressed
 */

params ["_unit"];

if (_unit getVariable [QGVAR(isSpeaking), false] ||
    { isPlayer _unit } ||
    { !local _unit } ||
    { isAgent teamMember _unit } ||
    { _unit getVariable [QGVAR(disableVoice), false] } ||
    { !(_unit checkAIFeature "PATH") } ) exitWith {};

_unit setVariable [QGVAR(isSpeaking), true];
[_unit, "suppressed"] call FUNC(selectSound);

// Stop units spam shouting
[_unit, (random [5, 10, 15])] call FUNC(stopSpam);
