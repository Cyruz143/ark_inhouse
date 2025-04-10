#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Switches driver into gunner seat
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 * 1: Driver <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_vehicles_fnc_moveInGunner
 */

params ["_vehicle", "_driver"];

private _gunnerTurret = _vehicle call ace_common_fnc_getTurretGunner;
_driver assignAsTurret [_vehicle,_gunnerTurret];
_driver moveInTurret [_vehicle,_gunnerTurret];
