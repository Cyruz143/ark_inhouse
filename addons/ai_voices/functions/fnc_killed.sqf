#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Selects sound if the unit is killed
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_voices_fnc_killed
 */

params ["_unit"];

if (
    isPlayer _unit ||
    { !local _unit } ||
    { isAgent teamMember _unit } ||
    { _unit getVariable [QGVAR(disableVoice), false] }
) exitWith {};

_unit setVariable [QGVAR(isSpeaking), true];

// If already speaking stop the voiceline to avoid doubling
[QGVAR(stopSound), [_unit]] call CBA_fnc_globalEvent;

// Only shout sometimes
if (random 1 > 0.33) then {
    [{
        params ["_unit"];
        [QGVAR(ps3d), [_unit, (selectRandom GVAR(deathSounds))]] call CBA_fnc_globalEvent;
    }, [_unit]] call CBA_fnc_execNextFrame;
};

// Shouldn't matter because they're dead but just to be safe...
[_unit, 5] call FUNC(stopSpam);
