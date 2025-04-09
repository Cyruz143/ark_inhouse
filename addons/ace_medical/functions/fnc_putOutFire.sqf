#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Puts out fire faster than default.
 *
 * Arguments:
 * 0: Unused
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_medical_fnc_putOutFire
 */

params ["", "_patient"];

_patient setVariable ["ace_fire_intensity", 0, true];
