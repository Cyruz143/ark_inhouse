ark_admin_tools_fnc_countSpec = {
    systemChat format ['There are %1 people in spectator',count (call ace_spectator_fnc_players)];
};

// Custom CBA chat commands
["endmission", {
    ["end1",true] remoteExecCall ['BIS_fnc_endMission',0];
}, "adminLogged"] call CBA_fnc_registerChatCommand;

["failmission", {
    ["loser",false] remoteExecCall ['BIS_fnc_endMission',0];
}, "adminLogged"] call CBA_fnc_registerChatCommand;

["boogie", {
    private _dance = selectRandom [["Acts_Dance_01", 25],["Acts_Dance_02",21]];
    [player, _dance #0, 2] call ace_common_fnc_doAnimation;
    [{[player, "", 2] call ace_common_fnc_doAnimation}, [], _dance #1] call CBA_fnc_waitAndExecute;
}, "all"] call CBA_fnc_registerChatCommand;