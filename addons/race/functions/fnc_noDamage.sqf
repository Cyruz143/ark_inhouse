#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Disables damage for race missions.
 *
 * Arguments:
 * Arguments from GetInMan/GetOutMan eventhandlers.
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_race_fnc_noDamage
 */

params ["_unit", "", "_vehicle"];

_unit allowDamage false;

if (!isNil "_vehicle") then {
    [
        {local (_this #0)},
        {(_this #0) allowDamage false},
        [_vehicle]
    ] call CBA_fnc_waitUntilAndExecute;
};
