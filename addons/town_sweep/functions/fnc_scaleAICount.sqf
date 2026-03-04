#include "..\script_component.hpp"
/*
 * Author: Cyruz, MikeMF
 * Handles scaling of AI spawned in town sweep, supports custom AI number
 *
 * Locality: Server (called from activateLocation)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_scaleAICount
 */

// Minimum 60 AI as this doesn't scale well at low numbers, can be customised on the fly.
if (GVAR(customAICount) == 0) then {
    GVAR(aiCount) = [60, 80] select (GVAR(playerCount) > 8); // 60 base unless more than 8 players.
} else {
    GVAR(aiCount) = GVAR(customAICount);
};

GVAR(cqcCount) = ceil (GVAR(aiCount) * GVAR(cqcPercentage));

private _fireTeamSize = ["ZoneTemplates", adm_patrol_defaultZoneTemplate, "infFireteamSize"] call adm_config_fnc_getNumber;
private _patrolAiCount = ceil (GVAR(aiCount) * (1 - GVAR(cqcPercentage)));
GVAR(patrolInfantryGroupCount) = ceil (_patrolAiCount / _fireTeamSize);

GVAR(patrolTechnicalGroupCount) = 2 + floor (random [0, 1, 2]);
GVAR(patrolArmourGroupCount) = 1 + round (random 1);
