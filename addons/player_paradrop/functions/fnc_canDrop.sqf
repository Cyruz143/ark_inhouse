#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if player can paradrop
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Can Drop <BOOL>
 *
 * Example:
 * [] call ark_player_paradrop_fnc_canDrop
 */

private _canDrop = false;

if (missionNamespace getVariable [QGVAR(enabled), false]) then {
    private _veh = objectParent player;
    _canDrop = _veh isKindOf "Air" &&
    { (driver _veh) isEqualTo player } &&
    { (getPosATL _veh #2) >= (missionNamespace getVariable [QGVAR(jumpHeight), 200]) } &&
    { count (fullCrew [_veh, "cargo", false]) > 0 } &&
    { !(_veh getVariable [QGVAR(jumpInProgress), false]) };
};

_canDrop
