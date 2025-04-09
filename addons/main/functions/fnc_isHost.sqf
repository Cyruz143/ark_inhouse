#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Returns true for known admins or current loggedIn admin
 *
 * Arguments:
 * None
 *
 * Return Value:
 * 0: Is host <BOOL>
 *
 * Example:
 * [] call ark_main_fnc_isHost
 */

private _adminWhiteList = ["76561197969272205", "76561198001868030", "76561197980517821", "76561197972043388"];

!isMultiplayer || {serverCommandAvailable "#logout"} || (getPlayerUID player) in _adminWhiteList
