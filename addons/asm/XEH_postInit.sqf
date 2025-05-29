#include "script_component.hpp"

if (!hasInterface && {!isServer}) exitWith {};

GVAR(enabled) = true;

// Ref from https://github.com/acemod/ACE3/blob/master/addons/common/functions/fnc_checkFiles.sqf
private _platform = toLowerANSI (productVersion select 6);
if (_platform isEqualTo "linux") exitWith {
    WARNING("fnc_postInit, Operating system does not support extensions");
    GVAR(enabled) = false;
};

GVAR(missionStartTime) = diag_tickTime;
GVAR(conditionEvaluationCount) = 0;
GVAR(previousTickTime) = 0;
GVAR(previousConditionEvaluationCount) = 0;
GVAR(monitorDelay) = 5;
QGVAR(extension) callExtension ["mission.init", []];
call FUNC(startMonitoring);
INFO("fnc_postInit, ARK_ASM enabled, stating monitoring.")