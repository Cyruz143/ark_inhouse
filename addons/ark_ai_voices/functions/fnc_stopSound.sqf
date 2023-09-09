["ark_ai_voices_stopSound", {
    params ["_unit"];

    if ((positionCameraToWorld [0,0,0]) distance _unit > 150) exitWith {};

    stopSound (_unit getVariable ["ark_ai_voices_sid", nil]);
}] call CBA_fnc_addEventHandler;