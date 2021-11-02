["ark_ai_voices_ps3d", {
    params ["_unit","_snd"];

    if ((positionCameraToWorld [0,0,0]) distance _unit > 150) exitWith {};

    playSound3D [_snd, _unit, (!isNull objectParent _unit), getPosASL _unit, 5, 1, 200, 0, true];

    _unit setRandomLip true;
    [{(_this #0) setRandomLip false}, [_unit], 1] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;