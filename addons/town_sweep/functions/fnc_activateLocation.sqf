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
 * [] call ark_town_sweep_fnc_activateLocation
 */

if !(call FUNC(canLocationBeActivated)) exitWith {};
call FUNC(activateLocationMarker);

// Minimum 60 AI as this doesn't scale well at low numbers
ts_spawn_aiCount = (ceil (ts_spawn_playerCount * ts_spawn_ai_multiplier)) max 60;
ts_spawn_cqcCount = ceil (ts_spawn_aiCount * ts_spawn_cqc_percent);

private _fireTeamSize = ["ZoneTemplates", adm_patrol_defaultZoneTemplate, "infFireteamSize"] call adm_config_fnc_getNumber;
private _patrolAiCount = ceil (ts_spawn_aiCount * (1 - ts_spawn_cqc_percent));
ts_spawn_patrolInfGroupCount = ceil (_patrolAiCount / _fireTeamSize);
ts_spawn_patrolTechGroupCount = 2 + (floor (ts_spawn_playerCount / 10));
ts_spawn_patrolArmourGroupCount = 1 + (floor (ts_spawn_playerCount / 25));

call FUNC(createLocationZones);
ts_spawn_selectedLocation set [2, true];
call FUNC(createFortifications);

// Remove the picked mission so subsequent choices will be different
private _selectedMission = selectRandom ts_spawn_availableMissions;
switch (_selectedMission) do {
    case 1: { call FUNC(objDestroyVeh) };
    case 2: { call FUNC(objRecoverIntel) };
    default { call FUNC(objDestroyAmmo) };
};

ts_spawn_availableMissions deleteAt (ts_spawn_availableMissions find _selectedMission);

[{(allPlayers inAreaArray ts_spawn_selectedLocationMarkerName) isNotEqualTo []}, {
    [{
        (selectRandom ["paradrop","insert"]) call FUNC(enableRotor);
    }, [], 240] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_waitUntilAndExecute;
