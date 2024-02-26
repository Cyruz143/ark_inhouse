ark_ai_voices_fnc_eh_firing = {
    params ["_unit", "_weapon"];

    if (_unit getVariable ["ark_ai_voices_var_isSpeaking", false] ||
        { isPlayer _unit } ||
        { !local _unit } ||
        { isAgent teamMember _unit } ||
        { _unit getVariable ["ark_ai_voices_var_disableVoice", false] } ) exitWith {};

    _unit setVariable ["ark_ai_voices_var_isSpeaking", true];

    if ((toLowerANSI _weapon) isEqualTo "throw") then {
       [_unit, "grenade"] call ark_ai_voices_fnc_selectSound;
    } else {
       [_unit, "firing"] call ark_ai_voices_fnc_selectSound;
   };

    // Stop units spam shouting
    [{(_this #0) setVariable ["ark_ai_voices_var_isSpeaking", false]}, [_unit], random [5,10,15]] call CBA_fnc_waitAndExecute;
};
