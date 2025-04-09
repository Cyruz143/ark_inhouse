#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Makes a vehicle a really good rearm source.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_rearm_fnc_makeSource
 */

params ["_vehicle"];

[_vehicle, 9999] call ace_rearm_fnc_makeSource;
INFO_1("fnc_enableRearm, Rearm enabled for %1",_vehicle);
