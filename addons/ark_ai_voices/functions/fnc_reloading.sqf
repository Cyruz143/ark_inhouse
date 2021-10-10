ark_ai_voices_fnc_reloading = {
    params ["_unit", "_gesture"];

    if (_unit getVariable ["ark_ai_voices_var_isSpeaking", false] || { isPlayer _unit } || { !local _unit } || { _unit getVariable ["ark_ai_voices_var_disableVoice", false] } ) exitWith {};

    if ((weaponState _unit) #6 isNotEqualTo 0) then {
        _unit setVariable ["ark_ai_voices_var_isSpeaking", true];
        [_unit, "reloading"] call ark_ai_voices_fnc_selectSound;
    };

    // Stop units spam shouting
    [{(_this #0) setVariable ["ark_ai_voices_var_isSpeaking", false]}, [_unit], random [5,10,15]] call CBA_fnc_waitAndExecute;
};