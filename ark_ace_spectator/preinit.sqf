if (!isDedicated) then {
    ["player.respawned", {
    	5 fadeSound 0;
    	cutText ["", "BLACK OUT", 5];
    	sleep 5;
    	cutText ["", "PLAIN", 0];
    	2 fadeSound 1;
    	["west", "east", "guer", "civ"] call acre_api_fnc_babelSetSpokenLanguages;
        [true] call ace_spectator_fnc_setSpectator;
    }] call hull3_event_fnc_addEventHandler;
};