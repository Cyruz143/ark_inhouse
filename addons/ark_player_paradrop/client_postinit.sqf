ark_player_paradrop_fnc_canDrop = {
    private _isModuleActive = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", false];
    private _canDrop = false;

    if (typeName _isModuleActive != "SCALAR") then {
        _canDrop = false;
    } else {
        private _veh = objectParent player;
        _canDrop = _veh isKindOf "Air" && { (driver _veh) isEqualTo player } && { (getPosATL _veh #2) >= (missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200]) } && { count (fullCrew [_veh, "cargo", false]) > 0 } && { !(_veh getVariable ["ark_player_paradrop_var_jumpInProgress", false]) };
    };

    _canDrop
};

ark_player_paradrop_fnc_stopDrop = {
    private _isModuleActive = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", false];
    private _stopDrop = false;

    if (typeName _isModuleActive != "SCALAR") then {
        _stopDrop = false;
    } else {
        private _veh = objectParent player;
        _stopDrop = _veh getVariable ["ark_player_paradrop_var_jumpInProgress", false];
    };

    _stopDrop
};

ark_player_paradrop_fnc_addBriefing = {
    private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];
    private _jumpGap = missionNamespace getVariable ["ark_player_paradrop_var_jumpGap", 1];
    private _briefingText = format ["<br/>
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

ark_player_paradrop_fnc_doJump = {
    params ["_unit"];

    private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];
    _unit allowDamage false;
    moveOut _unit;

    [
        {(getPosATL (_this #0) #2) < (_this #1)},
        {
            private _chute = createVehicle ["Steerable_Parachute_F", [0,0,0], [], 0, "NONE"];
            _chute allowDamage false;
            _chute setPos (getPosATL (_this #0));
            (_this #0) assignAsDriver _chute;
            (_this #0) moveInDriver _chute;
        },
        [_unit,_jumpHeight]
    ] call CBA_fnc_waitUntilAndExecute;

    [
        {isTouchingGround _this},
        {
            [{(_this #0) allowDamage true}, [_this], 5] call CBA_fnc_waitAndExecute;
        },
        _unit,
        120,
        {_this allowDamage true}
    ] call CBA_fnc_waitUntilAndExecute;
};

["ark_player_paradrop_eh_playerJump", {
    player call ark_player_paradrop_fnc_doJump;
}] call CBA_fnc_addEventHandler;

if (typeName (missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", false]) isEqualTo "SCALAR") then {
    call ark_player_paradrop_fnc_addBriefing;
};