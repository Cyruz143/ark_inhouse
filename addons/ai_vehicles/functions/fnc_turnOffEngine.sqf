#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds an ACE Action to turn off car engines.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_vehicles_fnc_turnOffEngine
 */

params ["_vehicle"];

private _action = [
    "turnOffEngine",
    "Turn Off Engine",
    "\a3\ui_f\data\igui\cfg\actions\engine_off_ca.paa",
    {["ace_common_engineOn", [_target, false], _target] call CBA_fnc_targetEvent},
    {isEngineOn _target && {!alive driver _target}}
] call ace_interact_menu_fnc_createAction;

[_vehicle, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
