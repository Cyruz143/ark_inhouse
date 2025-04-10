#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if a vehicle is able to be repaired
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_vehicles_fnc_canRepair
 */

params ["_vehicle"];

if (_vehicle getVariable ["ark_ai_vehicles_gunner_dead", false]) exitWith {
    INFO("fnc_canRepair, Aborting repair due to the gunners death.");
};

_vehicle setVariable ["ark_ai_vehicles_awaiting_repair", true];

[
    {
        private _lastHit = (_this #0) getVariable ["ark_ai_vehicles_last_hit", 0];
        private _outOfCombatDelayTime = _lastHit + 10;

        time >= _outOfCombatDelayTime
    },
    {(_this #0) call FUNC(doRepair)},
    [_vehicle],
    30,
    {(_this #0) call FUNC(doRepair)}
] call CBA_fnc_waitUntilAndExecute;
