#include "script_component.hpp"

if !(call EFUNC(main,isTownSweep)) exitWith {};

GVAR(playerCount) = 0;
GVAR(positionActive) = false;
GVAR(positionSize) = 700;
GVAR(selectedPosition) = [0, 0, 0];

if (isServer) then {
    GVAR(aiCount) = 0;
    GVAR(availableMissions) = [1, 2, 3, 4];
    GVAR(cleanupMarkerName) = "";
    GVAR(customAICount) = 0;
    GVAR(cqcCount) = 0;
    GVAR(cqcPercentage) = 0.4;
    GVAR(patrolArmourGroupCount) = 0;
    GVAR(patrolInfantryGroupCount) = 0;
    GVAR(patrolTechnicalGroupCount) = 0;
    GVAR(placedFortifications) = [];
};

[QGVAR(objectiveDestroyCacheActionsEvent), {
    call FUNC(objectiveDestroyCacheAction);
}] call CBA_fnc_addEventHandler;

[QGVAR(objectiveDestroyCachePFHEvent), {
    call FUNC(objectiveDestroyCachePFH);
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
