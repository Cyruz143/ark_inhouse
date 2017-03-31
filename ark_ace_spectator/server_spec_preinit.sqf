[] call ark_fnc_initServer;

ark_fnc_initServer = {
    if (isServer) then {
        ark_ace_spectator_initialPlayableUnits = playableUnits;
        [ark_ace_spectator_initialPlayableUnits, {
            ark_ace_spectator_initialPlayableUnits = _this;
        }] remoteExec ["bis_fnc_call", -2, "ark_ace_spectator_initialPlayableUnits_JIP_ID"];
    };
};