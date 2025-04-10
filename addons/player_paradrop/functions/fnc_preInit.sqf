#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Initialises module in preInit
 *
 * Arguments:
 * 0: Logic <OBJECT>
 *
 * Return Value:
 * true
 *
 * Example:
 * [] call ark_player_paradrop_fnc_preInit
 */

if (!is3DENPreview && {!isServer}) exitWith {};

params ["_logic"];

missionNamespace setVariable [QGVAR(enabled), true, true];
missionNamespace setVariable [QGVAR(jumpHeight), (_logic getVariable ["Chute_Height", 200]), true];
missionNamespace setVariable [QGVAR(jumpGap), (_logic getVariable ["Jump_Gap", 1]), true];

INFO("fnc_init, Player paradrop system is enabled");
INFO_1("fnc_init, Deleting Module (%1)",_logic);
deleteVehicle _logic;

//Return true because spawnd from module
true;
