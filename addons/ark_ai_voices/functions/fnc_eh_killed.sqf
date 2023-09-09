ark_ai_voices_fnc_eh_killed = {
    params ["_unit"];

    if (isPlayer _unit ||
        { !local _unit } ||
        { isAgent teamMember _unit } ||
        { _unit getVariable ["ark_ai_voices_var_disableVoice", false] } ||
        { random 1 > 0.75 } ) exitWith {};

    _unit setVariable ["ark_ai_voices_var_isSpeaking", true];

    // If already speaking stop the voiceline to avoid doubling
    ["ark_ai_voices_stopSound", [_unit]] call CBA_fnc_globalEvent;

    // Wait 1 frame to stopSound first
    [{[(_this #0), "dead"] call ark_ai_voices_fnc_selectDeathSound}, [_unit]] call CBA_fnc_execNextFrame;

    // Shouldn't matter because they're dead but just to be safe...
    [{(_this #0) setVariable ["ark_ai_voices_var_isSpeaking", false]}, [_unit], 5] call CBA_fnc_waitAndExecute;
};
