#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_createLocationZones
 */

private _size = [GVAR(positionSize), GVAR(positionSize)];

[
    ["type", "cqc"],
    ["position", GVAR(selectedPosition)],
    ["area", [_size, _size, 0, false]],
    ["pool", ts_spawn_cqcCount],
    ["unitTemplate", adm_cqc_defaultUnitTemplate],
    ["zoneTemplate", adm_cqc_defaultZoneTemplate],
    ["enabled", GVAR(positionActive)]
] call adm_api_fnc_initZone;

[
    ["type", "patrol"],
    ["position", GVAR(selectedPosition)],
    ["area", [_size, _size, 0, false]],
    ["pool", [ts_spawn_patrolInfGroupCount, ts_spawn_patrolTechGroupCount, ts_spawn_patrolArmourGroupCount]],
    ["unitTemplate", adm_patrol_defaultUnitTemplate],
    ["zoneTemplate", adm_patrol_defaultZoneTemplate],
    ["enabled", GVAR(positionActive)]
] call adm_api_fnc_initZone;
