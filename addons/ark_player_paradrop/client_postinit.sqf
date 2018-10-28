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

["ark_player_paradrop_eh_playerJump", {
    private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];
    player allowdamage false;
    moveOut player;

    [
        {(getPosATL (_this #0) #2) < (_this #1)}, 
        {
            private _chute = createVehicle ["Steerable_Parachute_F", [0,0,0], [], 0, "NONE"];
            _chute setPos (getPosATL (_this #0));
            _chute allowDamage false;
            (_this #0) assignAsDriver _chute;
            (_this #0) moveInDriver _chute;
        },
        [player,_jumpHeight]
    ] call CBA_fnc_waitUntilAndExecute;

    [
        {isTouchingGround (_this #0)}, 
        {
            {(_this #0) allowDamage true} call CBA_fnc_execNextFrame;
        },
        [player],
        90,
        {(_this #0) allowDamage true}
    ] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;