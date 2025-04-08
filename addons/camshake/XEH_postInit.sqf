#include "script_component.hpp"

if (!hasInterface) exitWith {};

enableCamShake GVAR(enabled);

{
    [_x, "Killed", {
        call FUNC(explosionShake);
    }] call CBA_fnc_addClassEventHandler;
} forEach ["Air","Car","Tank"];

player addEventHandler ["Suppressed", {
    params ["_unit", "_distance"];

    // Dont run if scoped. already shaking or in a vehicle
    if (
        (!GVAR(enabled) ||
        !isNull objectParent _unit ||
        _unit getVariable [QGVAR(inProgress), false]) ||
        {cameraView in ["GUNNER", "GROUP"]}
    ) exitWith {};

    addCamShake [(20 / _distance) min 0.75, 0.25, 10];
    _unit setVariable [QGVAR(inProgress), true];

    [{
        _this setVariable [QGVAR(inProgress), false];
    }, _unit, 0.125] call CBA_fnc_waitAndExecute;
}];

["CBA_SettingChanged", {
    params ["_setting", "_value"];

    if (_setting isNotEqualTo QGVAR(enabled)) exitWith {};

    enableCamShake _value;
}] call CBA_fnc_addEventHandler;
