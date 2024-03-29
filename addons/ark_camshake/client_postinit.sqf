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

ark_camshake_fnc_addEH = {
    ark_camshake_idx = player addEventHandler ["Suppressed", {
        params ["_unit", "_distance"];

        // Dont run if scoped. already shaking or in a vehicle
        if (cameraView in ["GUNNER", "GROUP"] || {_unit getVariable ["ark_camshake_inProgress", false]} || {!isNull objectParent _unit}) exitWith {};

        addCamShake [(20 / _distance) min 0.75, 0.25, 10];
        _unit setVariable ["ark_camshake_inProgress", true];
        [{_this setVariable ["ark_camshake_inProgress", false]}, _unit, 0.125] call CBA_fnc_waitAndExecute;
    }];
};

if (ark_camshake_enabled) then {
    call ark_camshake_fnc_addEH;
};


["CBA_SettingChanged", {
    params ["_setting", "_value"];

    if (_setting isEqualTo "ark_camshake_enabled") then {
        if (_value) then {
            if (isNil "ark_camshake_idx") then {
                call ark_camshake_fnc_addEH;
            }
        } else {
            player removeEventHandler ["Suppressed", ark_camshake_idx];
            ark_camshake_idx = nil;
        };
    };
}] call CBA_fnc_addEventHandler;