#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Triggered when a vehicle takes damage. Records time of last hit and checks if vehicle elligble for repair.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Unused
 * 2: Damage <NUMBER>
 * 3: Unused
 * 4: Hitpoint <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_vehicles_fnc_vehicleDamaged
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params ["_vehicle","","_damage","","_hitPoint"];

_vehicle setVariable ["ark_ai_vehicles_last_hit", time];

if (_damage < 1) exitWith {};
if !(_hitPoint in GVAR(wheelArray)) exitWith {};
if (!isNull (driver _vehicle) && { !isPlayer (driver _vehicle) } && { !(_vehicle getVariable ["ark_ai_vehicles_awaiting_repair", false]) }) then {
    _vehicle call FUNC(canRepair);
};
