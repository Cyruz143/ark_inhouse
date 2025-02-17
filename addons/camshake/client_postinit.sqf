enableCamShake ark_camshake_enabled;
{[_x, "Killed", {call ark_camshake_fnc_explosionShake}] call CBA_fnc_addClassEventHandler} forEach ["Air","Car","Tank"];

ark_camshake_fnc_explosionShake = {
    params ["_unit"];

    private _dist = player distance2D _unit;
    if (!ark_camshake_enabled || _dist > 1000) exitWith {};

    // If you pass 0 in _dist (vehicle blows up with you in it) you get a zero divisor error
    if (_dist == 0) then {
        _dist = 50;
    };

    [{addCamShake [(1000 / _this) min 20, 1, 5]}, _dist, _dist / 343] call CBA_fnc_waitAndExecute;
};

player addEventHandler ["Suppressed", {
    params ["_unit", "_distance"];

    // Dont run if scoped. already shaking or in a vehicle
    if ((!ark_camshake_enabled || !isNull objectParent _unit || _unit getVariable ["ark_camshake_inProgress", false]) || {cameraView in ["GUNNER", "GROUP"]}) exitWith {};

    addCamShake [(20 / _distance) min 0.75, 0.25, 10];
    _unit setVariable ["ark_camshake_inProgress", true];
    [{_this setVariable ["ark_camshake_inProgress", false]}, _unit, 0.125] call CBA_fnc_waitAndExecute;
}];

["CBA_SettingChanged", {
    params ["_setting", "_value"];

    if (_setting isNotEqualTo "ark_camshake_enabled") exitWith {};

    enableCamShake _value;
}] call CBA_fnc_addEventHandler;