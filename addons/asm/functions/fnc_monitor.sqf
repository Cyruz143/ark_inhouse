#include "..\script_component.hpp"
/*
 * Author: Kami
 * Collects performance data and sends to extension
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_asm_fnc_monitor
 */

private _playerCount = count ([false] call EFUNC(common,players));
private _totalAiCount = count (allUnits select { alive _x && {!isPlayer _x} });
private _activeAiCount = count (allUnits select { alive _x && {simulationEnabled _x} && {!isPlayer _x} });
private _entityCount = count (entities [[], [], true, false]);
private _snapshot = [
    "profileName", profileName,
    "isServer", isServer,
    "missionName", missionName,
    "worldName", worldName,
    "missionStartTime", GVAR(missionStartTime),
    "tickTime", diag_tickTime,
    "fps", diag_fps,
    "fpsMin", diag_fpsMin,
    "cps", call FUNC(getCurrentCps),
    "playerCount", _playerCount,
    "totalAiCount", _totalAiCount,
    "activeAiCount", _activeAiCount,
    "entityCount", _entityCount
];
QGVAR(extension) callExtension ["mission.snapshot", _snapshot];
GVAR(previousConditionEvaluationCount) = GVAR(conditionEvaluationCount);
GVAR(previousTickTime) = diag_tickTime;
