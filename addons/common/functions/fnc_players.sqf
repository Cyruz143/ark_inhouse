#include "..\script_component.hpp"
/*
 * Author: Mike
 * Wrapper of CBA_fnc_players, removing players in spectator
 * and optionally any units not touching the ground (eg. in the air/water).
 *
 * Arguments:
 * 0: Skip units not touching the ground <BOOL>
 *
 * Return Value:
 * Players <ARRAY>
 *
 * Example:
 * [] call ark_common_fnc_players
 */

params [["_skipNotGround", false]];

// If you ever use a HC, change allPlayers to (allPlayers - entities "HeadlessClient_F")
private _players = allPlayers select {!(_x getVariable ["ace_spectator_isSet", false])};

if (_skipNotGround) then {
    _players = _players select {isTouchingGround (vehicle _x)}; // Check vehicle, not the unit
};

_players
