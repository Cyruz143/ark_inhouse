#include "script_component.hpp"

if (!hasInterface && {!isServer}) exitWith {};

GVAR(missionStartTime) = diag_tickTime;
GVAR(conditionEvaluationCount) = 0;
GVAR(previousTickTime) = 0;
GVAR(previousConditionEvaluationCount) = 0;
GVAR(monitorDelay) = 5;
QGVAR(extension) callExtension ["mission.init", []];
call FUNC(startMonitoring);
INFO("fnc_postInit, ARK_ASM enabled, stating monitoring.")