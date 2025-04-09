#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Sets volume based on which vehicle you are in.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Unused
 * 2: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit] call ark_volume_fnc_setVolume
 */

params ["_unit", "", "_vehicle"];

if (isNull _vehicle) exitWith {};

if (_vehicle isKindOf "Car" || { _vehicle isKindOf "Truck" } || { _vehicle isKindOf "Tank" }) then {
    1 fadeSound GVAR(ground);
    QGVAR(ground) call FUNC(notify);
};

if (_vehicle isKindOf "Ship") then {
    1 fadeSound GVAR(water);
    QGVAR(water) call FUNC(notify);
};

if (_vehicle isKindOf "Air") then {
    1 fadeSound GVAR(air);
    QGVAR(air) call FUNC(notify);
};
