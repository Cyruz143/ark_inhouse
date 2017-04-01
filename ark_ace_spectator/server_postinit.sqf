diag_log str ["------------", "postinit"];

[] call ark_fnc_postInitServer;

ark_fnc_postInitServer = {
    diag_log str ["------------", "ark_fnc_postInitServer"];
    if (isServer) then {
        ark_ace_spectator_initialPlayableUnits = playableUnits;
        diag_log str ["------------", "ark_ace_spectator_initialPlayableUnits", ark_ace_spectator_initialPlayableUnits];
        [ark_ace_spectator_initialPlayableUnits, {
            ark_ace_spectator_initialPlayableUnits = _this;
            diag_log str ["------------", "client JIP remote exec", "ark_ace_spectator_initialPlayableUnits", ark_ace_spectator_initialPlayableUnits];
        }] remoteExec ["bis_fnc_call", -2, "ark_ace_spectator_initialPlayableUnits_JIP_ID"];
        diag_log str ["------------", "remoteExec done"];
    };
};