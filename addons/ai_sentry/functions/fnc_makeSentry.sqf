#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Makes a unit a sentry, used from the module.
 *
 * Arguments:
 * 0: Module <MODULE>
 * 1: Units <ARRAY>
 *
 * Return Value:
 * true
 *
 * Example:
 * [] call ark_ai_sentry_fnc_makeSentry
 */

params ["_logic", "_units"];

if (_units isEqualTo []) exitWith {
    ERROR_MSG_1("fnc_makeSentry, Module (%1) is not sync'd to any units.",_logic);
};

private _enabledNightvision = _logic getVariable ["Enabled_Nightvision", true];

{
    [_x, _enabledNightvision] call ark_ai_sentry_fnc_make_sentry;
} forEach _units;

INFO_1("fnc_makeSentry, Deleting Module (%1)",_logic);
deleteVehicle _logic;

//Return true because spawnd from module
true;
