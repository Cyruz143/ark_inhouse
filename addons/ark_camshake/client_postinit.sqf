enableCamShake true;
{[_x, "Killed", {call ark_camshake_fnc_explosionShake}] call CBA_fnc_addClassEventHandler} forEach ["Air","Car","Tank"];

ark_camshake_fnc_explosionShake = {
    params ["_unit"];

    private _dist = player distance2D _unit;
    if (_dist > 1000) exitWith {};

    // If you pass 0 in _dist (vehicle blows up with you in it) you get a zero divisor error
    if (_dist isEqualTo 0) then {
        _dist = 50;
    };

    private _force = (1000 / _dist) min 20;
    private _delay = _dist / 343;

    [{addCamShake [(_this #0), 1, 5]}, [_force], _delay] call CBA_fnc_waitAndExecute;
};