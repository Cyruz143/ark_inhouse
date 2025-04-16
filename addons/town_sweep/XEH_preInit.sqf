#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

ts_spawn_location_sizeChange = 100;

if (call EFUNC(main,isTownSweep) && isServer) then {
    ts_spawn_selectedLocationMarkerName = "ts_spawn_selectedLocation";
    ts_spawn_selectedLocation = [];
    ts_spawn_placedFortifications = [];
    ts_spawn_ai_multiplier = 2;
    ts_spawn_cqc_percent = 0.4;
    ts_spawn_playerCount = 0;
    ts_spawn_aiCount = 0;
    ts_spawn_cqcCount = 0;
    ts_spawn_patrolInfGroupCount = 0;
    ts_spawn_patrolTechGroupCount = 0;
    ts_spawn_patrolArmourGroupCount = 0;
    ts_spawn_unitTemplate = "Base";
    ts_spawn_availableMissions = [1, 2, 3, 4];

    call FUNC(createLocationMarker);

    ts_camouflage = ["woodland", "desert", "snow"] select (["TownSweep_Camouflage", 0] call BIS_fnc_getParamValue);
    ts_player_faction = "Default";
    ts_player_factionRawSide = "west";
    ts_player_factionSide = west;
    ts_player_gearTemplate = "Default";
    ts_player_uniformTemplate = "Default";
    ts_player_side = west;
    ts_enemy_side = east;

    hull3_gear_fnc_validateFaction = { true };
    hull3_gear_fnc_getFaction = { ts_player_faction };
    hull3_gear_fnc_getTemplate = { ts_player_gearTemplate };
    hull3_uniform_fnc_getTemplate = { ts_player_uniformTemplate };

    ["admiral.initialized", FUNC(onAdmiralInit)] call adm_event_fnc_addEventHandler;

    [] call FUNC(selectRandomFaction);
};

ADDON = true;
