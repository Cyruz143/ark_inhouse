#include "script_component.hpp"

if !(call EFUNC(main,isTownSweep)) exitWith {};

GVAR(selectedPosition) = [0, 0, 0];
GVAR(positionSize) = 700;
GVAR(positionActive) = false;

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

if (hasInterface) then {
    call FUNC(addInteractions);
};
