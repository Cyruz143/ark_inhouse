#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Start Drop
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_player_paradrop_fnc_startDrop
 */

private _vehicle = vehicle player;

[QGVAR(jumpControllerEvent), [_vehicle]] call CBA_fnc_serverEvent;
_vehicle setVariable [QGVAR(jumpInProgress), true, true];
