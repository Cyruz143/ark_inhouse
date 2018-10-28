ark_player_paradrop_fnc_setJumpHeight = {
    params ["_logic", "", "_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Player Paradrop) - Logic not activated";
    };
    
    private _jumpHeight = _logic getVariable ["Chute_Height", 200];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpHeight", _jumpHeight];

    if (hasInterface) then {
        [_jumpHeight] call ark_player_paradrop_fnc_addBriefing;
    };
};

ark_player_paradrop_fnc_addBriefing = {
    params ["_jumpHeight"];

private _briefingText = format ["
<br/>
JUMP MASTER
<br/>
The pilot of the plane has control of the jump, once you're over the target AO, they can ACE self-interact and select Start Paradrop, this will drop all of the player cargo one unit at a time. Be warned, once you start this process you can't stop it so make sure everyone is ready!
<br/><br/>
CHUTE DEPLOY HEIGHT
<br/>
The chute will auto deply when you reach %1m, this requires no input from the player.
",_jumpHeight];

    player createDiaryRecord ["Diary", ["Static Line Jump", _briefingText]];
};