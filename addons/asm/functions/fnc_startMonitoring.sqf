#include "..\script_component.hpp"
/*
 * Author: Kami
 * Starts monitoring loop
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_asm_fnc_startMonitoring
 */

[QGVAR(monitor), "onEachFrame", {
    GVAR(conditionEvaluationCount) = GVAR(conditionEvaluationCount) + 1;
}] call BIS_fnc_addStackedEventHandler;

GVAR(handleId) = [FUNC(monitor), GVAR(monitorDelay)] call CBA_fnc_addPerFrameHandler;
