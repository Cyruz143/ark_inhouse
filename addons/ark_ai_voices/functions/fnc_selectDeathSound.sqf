ark_ai_voices_fnc_selectDeathSound = {
    params ["_unit"];

    ["ark_ai_voices_ps3d", [_unit, (selectRandom ark_ai_voices_deathSounds)]] call CBA_fnc_globalEvent;
};