#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Server (event from ace action)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_activateLocation
 */

if (GVAR(positionActive)) exitWith {
    "Objective must be completed before a new one is started" call CBA_fnc_notify;
};

if (GVAR(availableMissions) isEqualTo []) exitWith {
    "No more objectives to activate." call CBA_fnc_notify;
};

// Prevent cleanup from running on first run.
if (GVAR(missionNumber) > 0) then {
    [GVAR(missionNumber)] call FUNC(cleanupPreviousZone);
};

GVAR(missionNumber) = GVAR(missionNumber) + 1;

GVAR(positionActive) = true;
publicVariable QGVAR(positionActive);

// Minimum 60 AI as this doesn't scale well at low numbers
//ts_spawn_aiCount = (ceil (GVAR(playerCount) * ts_spawn_ai_multiplier)) max 60;
GVAR(aiCount) = [60, 80] select {GVAR(playerCount) > 8}; // 60 base unless more than 8 players.
GVAR(cqcCount) = ceil (GVAR(aiCount) * GVAR(cqcPercentage));

private _fireTeamSize = ["ZoneTemplates", adm_patrol_defaultZoneTemplate, "infFireteamSize"] call adm_config_fnc_getNumber;
private _patrolAiCount = ceil (GVAR(aiCount) * (1 - GVAR(cqcPercentage)));
GVAR(patrolInfantryGroupCount) = ceil (_patrolAiCount / _fireTeamSize);

GVAR(patrolTechnicalGroupCount) = 2 + floor (random [0, 1, 2]);
GVAR(patrolArmourGroupCount) = 1 + round (random 1);

call FUNC(createCleanupMarker);
call FUNC(createLocationZones);
call FUNC(createFortifications);
call FUNC(selectObjective);

[{(allPlayers inAreaArray QGVAR(selectedLocationMarker)) isNotEqualTo []}, {
    [{
        (selectRandom ["paradrop","insert"]) call FUNC(enableRotor);
    }, [], 240] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_waitUntilAndExecute;
