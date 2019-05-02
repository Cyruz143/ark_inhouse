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