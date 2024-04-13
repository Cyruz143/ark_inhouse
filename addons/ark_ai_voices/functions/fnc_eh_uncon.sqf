ark_ai_voices_fnc_eh_uncon = {
    params ["_unit", "_state"];

    if (isPlayer _unit ||
        { !local _unit } ||
        { isAgent teamMember _unit } ||
        { !alive _unit } ||
        { _state } ||
        { _unit getVariable ["ark_ai_voices_var_disableVoice", false] } ) exitWith {};

    _unit setVariable ["ark_ai_voices_var_isSpeaking", true];
    [_unit, "suppressed"] call ark_ai_voices_fnc_selectSound;

    // Stop units spam shouting
    [{(_this #0) setVariable ["ark_ai_voices_var_isSpeaking", false]}, [_unit], random [5,10,15]] call CBA_fnc_waitAndExecute;
};