["ark_ai_voices_ps3d", {
    params ["_unit","_snd"];

    if ((positionCameraToWorld [0,0,0]) distance _unit > 150) exitWith {};

    private _isInside = !isNull objectParent _unit || { insideBuilding _unit > 0.2 };

    private _sid = playSound3D [_snd, _unit, _isInside, getPosASL _unit, 5, 1, 200, 0, true];
    _unit setVariable ["ark_ai_voices_sid", _sid];

    _unit setRandomLip true;
    [{(_this #0) setRandomLip false}, [_unit], 1] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;