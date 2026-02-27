#include "..\script_component.hpp"
/*
 * Author: Mike
 * N/A
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objDownloadIntelAction
 */

params ["_object"];

private _action = [
    QGVAR(terminalAction),
    "Activate Terminal",
    "",
    {
        [QGVAR(downloadIntelPFH), [_target]] call CBA_fnc_serverEvent;
    },
    {
        !(_target getVariable [QGVAR(downloadInProgress), false])
    }
] call ace_interact_menu_fnc_createAction;

[_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
