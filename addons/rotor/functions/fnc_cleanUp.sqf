#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Delete crew and vehicle provided a player hasn't stolen said vehicle.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Logic <MODULE>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_cleanUp
 */

params ["_vehicle", "_logic"];

private _crew = crew _vehicle;

if ((_crew select {isPlayer _x}) isEqualTo []) then {
    deleteVehicleCrew _vehicle;
    deleteVehicle [_vehicle,_logic];
    INFO_1("fnc_cleanUp, Cleaned up Vehicle (%1)",_vehicle);
} else {
    deleteVehicle _logic;
    INFO("fnc_cleanUp, Not removing vehicle as player crew was detected");
};
