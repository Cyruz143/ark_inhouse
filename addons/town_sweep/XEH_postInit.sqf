#include "script_component.hpp"

if !(call EFUNC(main,isTownSweep)) exitWith {};

[QGVAR(objDestroyActionEvent), {
    if (!hasInterface) exitWith {};
    call FUNC(objDestroyAction);
}] call CBA_fnc_addEventHandler;

[QGVAR(objDestroyCacheEvent), {
    if (isServer) then {
        call FUNC(objDestroyCache);
    };
}] call CBA_fnc_addEventHandler;

[QGVAR(downloadIntelActionEvent), {
    if (!hasInterface) exitWith {};
    _this call FUNC(objDownloadIntelAction);
}] call CBA_fnc_addEventHandler;

[QGVAR(downloadIntelPFH), {
    _this call FUNC(objDownloadIntelPFH);
}] call CBA_fnc_addEventHandler;

[QGVAR(downloadIntelCompletedEvent), {
    ["task4", "SUCCEEDED"] call BIS_fnc_taskSetState;
}] call CBA_fnc_addEventHandler;

[QGVAR(activateLocationEvent), {
    [] call FUNC(activateLocation);
}] call CBA_fnc_addEventHandler;

[QGVAR(enableGroupDeployEvent), {
    [] call FUNC(enableGroupDeploy);
}] call CBA_fnc_addEventHandler;

// This is a nightmare, it works and do not touch.
// Params are Array - Array - Bool but they are mismatched to know when to update.
[QGVAR(updateSelectedLocation), {
    params [["_position", ""], ["_size", ""], ["_active", 0]];

    if (_position != "") then {
        ts_spawn_selectedLocation set [0, _position];
    };

    if (_size != "") then {
        ts_spawn_selectedLocation set [1, _size];
    };

    if (_active != 0) then {
        ts_spawn_selectedLocation set [2, _active];
    };
}] call CBA_fnc_addEventHandler;

if (hasInterface) then {
    call FUNC(addInteractions);
};
