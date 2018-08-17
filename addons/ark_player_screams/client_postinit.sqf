ark_player_screams_eh_onHit = player addEventHandler ["Hit", {call ark_player_screams_fnc_doScream}];

ark_player_screams_fnc_doScream = {
    params ["_unit", "", "_damage"];

    if (_damage > 0.1) then {
        private _lastScreamTime = _unit getVariable ["ark_player_screams_lastScreamTime", 0];
        if (!isNull objectParent _unit || time - _lastScreamTime <= 3) exitWith {};
        private _sound = selectRandom [
            "A3\Sounds_F\characters\human-sfx\P01\Max_Hit_01.wss",
            "A3\Sounds_F\characters\human-sfx\P02\Mid_Hit_01.wss",
            "A3\Sounds_F\characters\human-sfx\P03\Hit_Mid_1.wss",
            "A3\Sounds_F\characters\human-sfx\P03\Hit_Mid_3.wss",
            "A3\Sounds_F\characters\human-sfx\P04\Hit_Max_3.wss",
            "A3\Sounds_F\characters\human-sfx\P05\Hit_Max_2.wss",
            "A3\Sounds_F\characters\human-sfx\P05\Hit_Max_4.wss",
            "A3\Sounds_F\characters\human-sfx\P04\Hit_Mid_3.wss",
            "A3\Sounds_F\characters\human-sfx\P08\Hit_Max_4.wss",
            "A3\Sounds_F\characters\human-sfx\P09\Hit_Max_3.wss"
        ];
        playSound3D [_sound, _unit, false, getPosASL _unit, 1.25, (random [0.95,1,1.05]), 200];
        _unit setVariable ["ark_player_screams_lastScreamTime", time, true];
    };
};