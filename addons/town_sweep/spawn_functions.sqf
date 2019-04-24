#include "\x\ark\addons\admiral\admiral_macros.h"



ts_spawn_location_sizeChange = 100;

ts_spawn_fnc_preinit = {
    ts_spawn_selectedLocationMarkerName = "ts_spawn_selectedLocation";
    ts_spawn_selectedLocation = [];
    ts_spawn_ai_multiplier = 2;
    ts_spawn_cqc_percent = 0.3;
    ts_spawn_playerCount = 0;
    ts_spawn_aiCount = 0;
    ts_spawn_cqcCount = 0;
    ts_spawn_patrolInfGroupCount = 0;
    ts_spawn_patrolTechGroupCount = 0;
    ts_spawn_patrolArmourGroupCount = 0;
    ts_spawn_unitTemplate = "Base";

    call ts_spawn_fnc_createLocationMarker;
};

ts_spawn_fnc_onAdmiralInit = {
    private _templateConfigs = "ts_camouflage in getArray (_x >> 'camouflage') && {configName _x != 'Base'} && {getText (_x >> 'side') != ts_player_factionRawSide}" configClasses (ADMIRAL_CONFIG_FILE >> "UnitTemplates");
    private _templateConfig = selectRandom _templateConfigs;
    ts_spawn_unitTemplate = configName _templateConfig;
    adm_camp_defaultUnitTemplate = ts_spawn_unitTemplate;
    adm_patrol_defaultUnitTemplate = ts_spawn_unitTemplate;
    adm_cqc_defaultUnitTemplate = ts_spawn_unitTemplate;
    adm_common_fnc_getUnitTemplateSide = { ts_enemy_side };
};

ts_spawn_fnc_selectLocation = {
    hintSilent "Click on map to select attack location.";
    ["ts_mapClick", "onMapSingleClick", {
        [0, { _this call ts_spawn_fnc_moveLocationMarker; ts_spawn_selectedLocation set [0, (_this #0)]; ts_spawn_selectedLocation set [1, (_this #1)]; ts_spawn_selectedLocation set [2, (_this #2)]; ts_spawn_playerCount = count (playableUnits select { isPlayer _x });}, [_pos, 1000, false]] call CBA_fnc_globalExecute;
        ["ts_mapClick", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
    }] call BIS_fnc_addStackedEventHandler;
};

ts_spawn_fnc_canLocationBeActivated = {
    count ts_spawn_selectedLocation > 0 && {!(ts_spawn_selectedLocation #2)}
};

ts_spawn_fnc_changeLocationSize = {
    params ["_sizeChange"];

    if !(call ts_spawn_fnc_canLocationBeActivated) exitWith {};
    private _size = (ts_spawn_selectedLocation #1) + _sizeChange;
    ts_spawn_selectedLocation set [1, _size];
    ts_spawn_selectedLocationMarkerName setMarkerSize [_size, _size];
};

ts_spawn_fnc_activateLocation = {
    if !(call ts_spawn_fnc_canLocationBeActivated) exitWith {};
    call ts_spawn_fnc_activateLocationMarker;
    ts_spawn_aiCount = ceil (ts_spawn_playerCount * ts_spawn_ai_multiplier);
    ts_spawn_cqcCount = ceil (ts_spawn_aiCount * ts_spawn_cqc_percent);
    private _fireTeamSize = ["ZoneTemplates", adm_patrol_defaultZoneTemplate, "infFireteamSize"] call adm_config_fnc_getNumber;
    private _patrolAiCount = ceil (ts_spawn_aiCount * (1 - ts_spawn_cqc_percent));
    ts_spawn_patrolInfGroupCount = ceil (_patrolAiCount / _fireTeamSize);
    ts_spawn_patrolTechGroupCount = 1 + (floor (ts_spawn_playerCount / 10));
    ts_spawn_patrolArmourGroupCount = 1 + (floor (ts_spawn_playerCount / 25));
    call ts_spawn_fnc_createLocationZones;
    ts_spawn_selectedLocation set [2, true];
    [
        {count (allPlayers inAreaArray ts_spawn_selectedLocationMarkerName) > 0},
        {
            private _insertType = selectRandomWeighted ["paradrop", 0.5, "insert", 0.5];
            _insertType call ts_spawn_fnc_enableRotor;
        }
    ] call CBA_fnc_waitUntilAndExecute;
};

ts_spawn_fnc_createLocationMarker = {
    private _marker = createmarker [ts_spawn_selectedLocationMarkerName, [0, 0, 0]];
    _marker setMarkerSize [1, 1];
    _marker setMarkerAlpha 0.5;
    _marker setMarkerShape "ELLIPSE";
    _marker setMarkerBrush "Solid";
    _marker setMarkerColor "ColorRed";
};

ts_spawn_fnc_moveLocationMarker = {
    params ["_position", "_size"];
    ts_spawn_selectedLocationMarkerName setMarkerPos _position;
    ts_spawn_selectedLocationMarkerName setMarkerSize [_size, _size];
    ts_spawn_selectedLocationMarkerName setMarkerAlpha 0.5;
    ts_spawn_selectedLocationMarkerName setMarkerBrush "Solid";
    ts_spawn_selectedLocationMarkerName setMarkerColor "ColorRed";
};

ts_spawn_fnc_activateLocationMarker = {
    ts_spawn_selectedLocationMarkerName setMarkerAlpha 0.4;
    ts_spawn_selectedLocationMarkerName setMarkerBrush "Solid";
    ts_spawn_selectedLocationMarkerName setMarkerColor "ColorRed";
};

ts_spawn_fnc_createLocationZones = {
    ts_spawn_selectedLocation params ["_position", "_size", "_active"];

    [ ["type", "cqc"]
    , ["position", _position]
    , ["area", [_size, _size, 0, false]]
    , ["pool", ts_spawn_cqcCount]
    , ["unitTemplate", adm_cqc_defaultUnitTemplate]
    , ["zoneTemplate", adm_cqc_defaultZoneTemplate]
    , ["enabled", _active]
    ] call adm_api_fnc_initZone;

    [ ["type", "patrol"]
    , ["position", _position]
    , ["area", [_size, _size, 0, false]]
    , ["pool", [ts_spawn_patrolInfGroupCount, ts_spawn_patrolTechGroupCount, ts_spawn_patrolArmourGroupCount]]
    , ["unitTemplate", adm_patrol_defaultUnitTemplate]
    , ["zoneTemplate", adm_patrol_defaultZoneTemplate]
    , ["enabled", _active]
    ] call adm_api_fnc_initZone;
};

ts_spawn_fnc_enableRotor = {
    params ["_insertType"];
    ts_spawn_selectedLocation params ["_position"];

    private _spawnPos = AGLToASL (_position getPos [3000, random 360]);
    private _spawnZone = createTrigger ["EmptyDetector", _spawnPos, false];
    private _grp = createGroup civilian;
    private _jeff = _grp createUnit ["C_Jeff_VR", _spawnPos, [], 0, "NONE"];
    _grp addWaypoint [_position, 100, 1];
    _grp addWaypoint [[worldSize, worldSize, 0], 100, 2];

    private "_module";
    if (_insertType isEqualTo "paradrop") then {
        _module = "ARK_Rotor_Paradrop" createVehicleLocal _spawnPos;
        _module setVariable ["Routine_Function", "ark_rotor_fnc_paradrop"];
    } else {
        _module = "ARK_Rotor_Insert" createVehicleLocal _spawnPos;
        _module setVariable ["Routine_Function", "ark_rotor_fnc_insert"];
        _module setVariable ["Fly_Height", 75];
    };

    _module setVariable ["Crew_Percentage", 100];
    _spawnZone synchronizeObjectsAdd [_module,_jeff];
};
