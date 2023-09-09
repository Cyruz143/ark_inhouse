["ark_ai_voices_stopSound", {
    params ["_unit"];

    stopSound (_unit getVariable ["ark_ai_voices_sid", nil]);
}] call CBA_fnc_addEventHandler;