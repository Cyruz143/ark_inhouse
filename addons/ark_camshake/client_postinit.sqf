{[_x, "Killed", {call ark_camshake_fnc_doShake}] call CBA_fnc_addClassEventHandler} forEach ["Car","Tank"];
enableCamShake true;

ark_camshake_fnc_doShake = {
    params ["_unit"];

    private _dist = player distance2D _unit;
    if (_dist > 1000) exitWith {};

    private _force = (1000 / _dist) min 20;
    private _delay = _dist / 343;

    [{addCamShake [(_this #0), 1, 5]}, [_force], _delay] call CBA_fnc_waitAndExecute;
};