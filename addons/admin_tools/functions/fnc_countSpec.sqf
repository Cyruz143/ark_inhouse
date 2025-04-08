#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Counts spectators
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_admin_tools_fnc_countSpec
 */

systemChat format ['There are %1 people in spectator', count (call ace_spectator_fnc_players)];
