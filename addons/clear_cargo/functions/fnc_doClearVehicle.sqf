#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Actually clears vehicle inventory
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * true
 *
 * Example:
 * [] call ark_clear_cargo_fnc_doClearVehicle
 */

params ["_vehicle"];

clearMagazineCargoGlobal _vehicle;
clearWeaponCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;
clearBackpackCargoGlobal _vehicle;
