["ark_ai_voices_ps3d", {
    params ["_unit","_snd"];

    if ((AGLToASL positionCameraToWorld [0,0,0]) distance _unit > 100) exitWith {};

    playSound3D [_snd, _unit, false, getPosASL _unit, 5, 1, 150, 0, true];

    _unit setRandomLip true;
    [{(_this #0) setRandomLip false}, [_unit], 1] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;