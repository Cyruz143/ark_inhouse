#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Can stop paradrop
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Stop Drop <BOOL>
 *
 * Example:
 * [] call ark_player_paradrop_fnc_canStopDrop
 */

private _stopDrop = objectParent player getVariable [QGVAR(jumpInProgress), false];

_stopDrop
