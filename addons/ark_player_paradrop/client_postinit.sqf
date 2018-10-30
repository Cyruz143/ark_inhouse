ark_player_paradrop_fnc_canDrop = {
    private _isModuleActive = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", false];
    
    if (typeName _isModuleActive != "SCALAR") then {
        ark_player_paradrop_var_canDrop = false;
    } else {
        ark_player_paradrop_var_canDrop = (vehicle player) isKindOf "Plane" && (driver (vehicle player)) isEqualTo player && (getPosATL (vehicle player) #2) >= (missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200]) && count (fullCrew [(vehicle player), "cargo", false]) > 0 && !((vehicle player) getVariable ["ark_player_paradrop_var_jumpInProgress", false]);
    };

    ark_player_paradrop_var_canDrop
};

ark_player_paradrop_fnc_stopDrop = {
    private _isModuleActive = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", false];

    if (typeName _isModuleActive != "SCALAR") then {
        ark_player_paradrop_var_stopDrop = false;
    } else {
        ark_player_paradrop_var_stopDrop = (vehicle player) getVariable ["ark_player_paradrop_var_jumpInProgress", false];
    };

    ark_player_paradrop_var_stopDrop
};

ark_player_paradrop_fnc_addBriefing = {
    private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];
    private _jumpGap = missionNamespace getVariable ["ark_player_paradrop_var_jumpGap", 1];
    private _briefingText = format ["
<br/>
JUMP MASTER
<br/>
The pilot of the plane has control of the jump, once you're over the target AO, they can ACE self-interact and select Start Paradrop, this will drop all of the player cargo one unit at a time. Once the jump has started you'll have an option to stop the jump if run out of room.
<br/><br/>
CHUTE DEPLOY HEIGHT
<br/>
The chute will auto deply when you reach %1m, this requires no input from the player.
<br/><br/>
GAP BETWEEN JUMPS
<br/>
A player will be ejected every %2 seconds.
",_jumpHeight,_jumpGap];

    player createDiaryRecord ["Diary", ["Static Line Jump", _briefingText]];
};

["ark_player_paradrop_eh_playerJump", {
    private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];
    player allowDamage false;
    moveOut player;

    [
        {(getPosATL (_this #0) #2) < (_this #1)}, 
        {
            private _chute = createVehicle ["Steerable_Parachute_F", [0,0,0], [], 0, "NONE"];
            _chute allowDamage false;
            _chute setPos (getPosATL (_this #0));
            (_this #0) assignAsDriver _chute;
            (_this #0) moveInDriver _chute;
        },
        [player,_jumpHeight]
    ] call CBA_fnc_waitUntilAndExecute;

    [
        {isTouchingGround _this}, 
        {
            [{_this allowDamage true}, _this] call CBA_fnc_execNextFrame;
        },
        player,
        90,
        {_this allowDamage true}
    ] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;

if (typeName (missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", false]) isEqualTo "SCALAR") then {
    call ark_player_paradrop_fnc_addBriefing;
};