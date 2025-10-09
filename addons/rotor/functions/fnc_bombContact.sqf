#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Gets impact pos of barrel and spawns explosion
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
createVehicle ["HelicopterExploBig", _impactPos, [], 0, "CAN_COLLIDE"];
_gbu setVelocity [0,0,-100];
deleteVehicle _barrel;
