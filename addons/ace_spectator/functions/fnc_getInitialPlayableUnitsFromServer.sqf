#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Gets initial playable units from server.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_spectator_fnc_getInitialPlayableUnitsFromServer
 */

if (!isMultiplayer || !didJIP) exitWith {};

[[clientOwner], {
    params ["_clientId"];

    [[ark_ace_spectator_initialPlayableUnits], {
        params ["_initialPlayableUnits"];

        ark_ace_spectator_initialPlayableUnits = _initialPlayableUnits;
        [] spawn FUNC(checkIfNotInitialPlayableUnit);
    }] remoteExecCall ["BIS_fnc_call", _clientId, false];
}] remoteExecCall ["BIS_fnc_call", 2, false];
