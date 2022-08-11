enableCamShake true;
{[_x, "Killed", {call ark_camshake_fnc_explosionShake}] call CBA_fnc_addClassEventHandler} forEach ["Air","Car","Tank"];

ark_camshake_fnc_explosionShake = {
    params ["_unit"];

    private _dist = player distance2D _unit;
    if (_dist > 1000) exitWith {};

    // If you pass 0 in _dist (vehicle blows up with you in it) you get a zero divisor error
    if (_dist == 0) then {
        _dist = 50;
    };

    [{addCamShake [(1000 / _this) min 20, 1, 5]}, _dist, _dist / 343] call CBA_fnc_waitAndExecute;
};

player addEventHandler ["FiredNear", {
    params ["_unit", "_firer", "_distance"];

    if (!local _unit) exitWith {};

    if ([side group _unit, side group _firer] call BIS_fnc_sideIsEnemy) then {
        if (_distance == 0) then {
            _distance = 1
        };

        addCamShake [(20 / _distance) min 0.75, 0.25, 10];
    };
}];