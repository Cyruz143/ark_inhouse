ark_player_screams_eh_onHit = player addEventHandler ["Hit", {call ark_player_screams_fnc_doScream}];

ark_player_screams_fnc_doScream = {
    params ["_unit", "", "_damage"];

    if (_damage > 0.1) then {
        private _lastScreamTime = _unit getVariable ["ark_player_screams_lastScreamTime", 0];
        if (!isNull objectParent _unit || time - _lastScreamTime <= 3) exitWith {};
        private _sound = selectRandom [
            "ark_scream_1",
            "ark_scream_2",
            "ark_scream_3",
            "ark_scream_4",
            "ark_scream_5",
            "ark_scream_6",
            "ark_scream_7",
            "ark_scream_8",
            "ark_scream_9",
            "ark_scream_10"
        ];
        _unit say3D [_sound, 45, (random [0.95,1,1.05])];
        _unit setVariable ["ark_player_screams_lastScreamTime", time, true];
    };
};