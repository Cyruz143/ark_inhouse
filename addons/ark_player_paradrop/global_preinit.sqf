ark_player_paradrop_fnc_setJumpHeight = {
    params ["_logic", "", "_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Player Paradrop) - Logic not activated";
    };
    
    private _jumpHeight = _logic getVariable ["Chute_Height", 200];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpHeight", _jumpHeight, true];

    private _jumpGap = _logic getVariable ["Jump_Gap", 2];
    missionNamespace setVariable ["ark_player_paradrop_var_jumpGap", _jumpGap, true];

    if (hasInterface) then {
        [_jumpHeight,_jumpGap] call ark_player_paradrop_fnc_addBriefing;
    };
};

ark_player_paradrop_fnc_addBriefing = {
    params ["_jumpHeight","_jumpGap"];

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