#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Random chance of vehicle dismounting
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_medical_fnc_vehicleDismount
 */

params ["_vehicle"];

private _chance = floor (random 10);
if (_chance <= 5) then {
    _vehicle setVariable ["ace_vehicle_damage_allowCrewInImmobile", true, true];
};
