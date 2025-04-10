#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Selects sound if the unit is reloading
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_voices_fnc_reloading
 */

params ["_unit","_gesture"];

if (
    _unit getVariable [QGVAR(isSpeaking), false] ||
    { isPlayer _unit } ||
    { !local _unit } ||
    { isAgent teamMember _unit } ||
    { _unit getVariable [QGVAR(disableVoice), false] }
) exitWith {};

if (_gesture isEqualTo "") exitWith {};

if ((weaponState _unit) #6 isNotEqualTo 0) then {
    _unit setVariable [QGVAR(isSpeaking), true];
    [_unit, "reloading"] call FUNC(selectSound);

    // Stop units spam shouting
    [_unit, (random [5, 10, 15])] call FUNC(stopSpam);
};
