#include "script_component.hpp"

if !(call EFUNC(main,isTownSweep)) exitWith {};

GVAR(selectedPosition) = [0, 0, 0];
GVAR(positionSize) = 700;
GVAR(positionActive) = false;
GVAR(availableMissions) = [1, 2, 3, 4];

[QGVAR(objDestroyActionEvent), {
    if (!hasInterface) exitWith {};
    call FUNC(objectiveDestroyAction);
}] call CBA_fnc_addEventHandler;

[QGVAR(objDestroyCacheEvent), {
    call FUNC(objectiveDestroyCache);
}] call CBA_fnc_addEventHandler;

[QGVAR(downloadIntelActionEvent), {
    _this call FUNC(objectiveDownloadIntelAction);
}] call CBA_fnc_addEventHandler;

[QGVAR(downloadIntelPFH), {
    _this call FUNC(objectiveDownloadIntelPFH);
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
