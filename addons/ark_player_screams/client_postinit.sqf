ark_player_screams_var_soundList = [
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

["ace_unconscious", {
    params ["_unit", "_state"];
    
    if (!local _unit  || { !_state } || { !alive _unit } || { !isNull objectParent _unit }) exitWith {};

    private _sound = selectRandom ark_player_screams_var_soundList;
    playSound3D [_sound, _unit, false, getPosASL _unit, 1.25, (random [0.95,1,1.05]), 200];
}] call CBA_fnc_addEventHandler;