#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Stop paradrop
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Stop Drop <BOOL>
 *
 * Example:
 * [] call ark_player_paradrop_fnc_stopDrop
 */

(vehicle player) setVariable [QGVAR(jumpInProgress), false, true];
