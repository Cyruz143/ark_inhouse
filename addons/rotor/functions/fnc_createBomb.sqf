#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * NEED DESC.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_rotor_fnc_createBomb
 */

params ["_vehicle"];

private _barrelClassname = selectRandom ["Land_WaterBarrel_F", "Land_MetalBarrel_F", "Land_BarrelEmpty_F"];
private _barrel = createVehicle [_barrelClassname, (_vehicle modelToWorld [0,-15,-10]), [], 0, "FLY"];
_barrel disableCollisionWith _vehicle;
_barrel setVelocity (velocity _vehicle);
_barrel addTorque (_vehicle vectorModelToWorld [0,-500, 0]);

_barrel addEventHandler ["EpeContactStart", {
    call FUNC(bombContact);
}];
