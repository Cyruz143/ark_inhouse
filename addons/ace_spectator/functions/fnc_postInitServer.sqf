#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Heresy, this function does heresy.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ace_spectator_fnc_postInitServer
 */

ark_ace_spectator_initialPlayableUnits = playableUnits;
[ark_ace_spectator_initialPlayableUnits, {
    ark_ace_spectator_initialPlayableUnits = _this;
}] remoteExec ["bis_fnc_call", -2, "ark_ace_spectator_initialPlayableUnits_JIP_ID"];
