#include "script_component.hpp"

if (!hasInterface) exitWith {};

player addEventHandler ["GetInMan", {
    call FUNC(setVolume);
}];
player addEventHandler ["GetOutMan", {
    call FUNC(restoreVolume);
}];

["CBA_SettingChanged", {
    params ["_setting"];

    if (_setting in [QGVAR(ground), QGVAR(water), QGVAR(air)]) then {
        [player, nil, objectParent player] call FUNC(setVolume);
    };
}] call CBA_fnc_addEventHandler;
