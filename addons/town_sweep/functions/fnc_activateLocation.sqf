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

if (GVAR(availableMissions) == []) exitWith {
    "No more objectives to activate." call CBA_fnc_notify;
};

GVAR(positionActive) = true;
publicVariable QGVAR(positionActive);

// Minimum 60 AI as this doesn't scale well at low numbers
ts_spawn_aiCount = (ceil (GVAR(playerCount) * ts_spawn_ai_multiplier)) max 60;
ts_spawn_cqcCount = ceil (ts_spawn_aiCount * ts_spawn_cqc_percent);

private _fireTeamSize = ["ZoneTemplates", adm_patrol_defaultZoneTemplate, "infFireteamSize"] call adm_config_fnc_getNumber;
private _patrolAiCount = ceil (ts_spawn_aiCount * (1 - ts_spawn_cqc_percent));
ts_spawn_patrolInfGroupCount = ceil (_patrolAiCount / _fireTeamSize);
ts_spawn_patrolTechGroupCount = 2 + (floor (GVAR(playerCount) / 10));
ts_spawn_patrolArmourGroupCount = 1 + (floor (GVAR(playerCount) / 25));

call FUNC(createLocationZones);
call FUNC(createFortifications);
call FUNC(selectObjective);

[{(allPlayers inAreaArray QGVAR(selectedLocationMarker)) isNotEqualTo []}, {
    [{
        (selectRandom ["paradrop","insert"]) call FUNC(enableRotor);
    }, [], 240] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_waitUntilAndExecute;
