#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Server initialisation for race missions.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_race_fnc_serverInit
 */

if ((briefingName find "ark_race") isEqualTo -1) exitWith {};

INFO("fnc_serverInit, Race Mission Detected");

[{
    [nil, nil, nil, ['confirm']] call compileScript ['x\ark\addons\hull3\mission_host_safetytimer_stop.sqf'];
}, [], 30] call CBA_fnc_waitAndExecute;

["Car", "init", {
    params ["_vehicle"];
    _vehicle call EFUNC(clear_cargo,doClearVehicle);
}, true] call CBA_fnc_addClassEventHandler;
