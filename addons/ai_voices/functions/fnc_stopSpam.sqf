#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Stops units from spam speaking.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Delay <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_voices_fnc_stopSpam
 */

params ["_unit", "_delay"];

[{
    params ["_unit"];
    _unit setVariable [QGVAR(isSpeaking), false];
}, [_unit], _delay] call CBA_fnc_waitAndExecute;
