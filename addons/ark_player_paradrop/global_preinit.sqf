ark_player_paradrop_fnc_setJumpHeight = {
    params ["_logic", "", "_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Player Paradrop) - Logic not activated";
    };

    private _jumpHeight = _logic getVariable ["Chute_Height", 200];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpHeight", _jumpHeight, true];

    private _jumpGap = _logic getVariable ["Jump_Gap", 1];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpGap", _jumpGap, true];
};

ark_player_paradrop_fnc_doJump = {
    params ["_unit"];

    private _jumpHeight = missionNamespace getVariable ["ark_player_paradrop_var_jumpHeight", 200];
    private _jumpDirection = ((getDir (vehicle player)) - 180);
    _unit allowDamage false;
    moveOut _unit;
    _unit setDir _jumpDirection;

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
