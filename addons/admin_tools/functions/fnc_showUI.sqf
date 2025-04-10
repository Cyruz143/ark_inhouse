#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Toggles UI
 *
 * Arguments:
 * 0: Show <BOOL>
 * 1: Mute <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [true, false] call ark_admin_tools_fnc_showUI
 */

params ["_shown", "_mute"];

showChat _shown;
showHUD _shown;
missionNamespace setVariable ["diwako_dui_main_toggled_off", !_shown];
player setVariable ["acre_sys_core_isDisabled", _mute, true];
