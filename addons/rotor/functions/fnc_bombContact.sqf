#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * NEED DESC.
 *
 * Arguments:
 * 0: Barrel <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_bombContact
 */

params ["_barrel"];

private _impactPos = getPosATL _barrel;
private _gbu = createVehicle ["Bo_GBU12_LGB", _impactPos, [], 0, "CAN_COLLIDE"];
private _explosion = createVehicle ["HelicopterExploBig", _impactPos, [], 0, "CAN_COLLIDE"];
_gbu setVelocity [0,0,-100];
deleteVehicle _barrel;
