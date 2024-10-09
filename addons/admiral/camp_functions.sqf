#include "admiral_macros.h"

#include "\userconfig\admiral\log\camp.h"
#include "logbook.h"


adm_camp_fnc_placeMan = {
    params ["_position","_group","_unitTemplate","_zoneTemplate","_unitType"];

    private _unit = [
        _position,
        _group,
        [_unitTemplate, _unitType] call adm_common_fnc_getUnitTemplateArray,
        [_zoneTemplate] call adm_common_fnc_getZoneTemplateSkillValues
    ] call adm_common_fnc_placeMan;
    //DEBUG("admiral.camp.create",FMT_5("Spawned unit '%1' at position '%2', in group '%3' with type '%4' and classname '%5'.",_unit,_position,_group,_unitType,typeOf _unit));

    _unit;
};

adm_camp_fnc_spawnCrew = {
    params ["_vehicle","_group","_unitTemplate","_zoneTemplate","_unitType"];

    private _crew = [
        _vehicle,
        _group,
        [_unitTemplate, _unitType] call adm_common_fnc_getUnitTemplateArray,
        ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues,
        ["ZoneTemplates", _zoneTemplate, "canSpawnFfvCrew"] call adm_config_fnc_getBool
    ] call adm_common_fnc_spawnCrew;
    //DEBUG("admiral.camp.create",FMT_4("Spawned crew '%1' for vehicle '%2', in group '%3' with type '%4'.",_crew,_vehicle,_group,_unitType));

    _crew;
};

adm_camp_getLogicPaths = {
    entities "Logic"
        select { count (waypoints _x) > 1 }
        apply {
            [ waypoints _x apply { waypointPosition _x }
            , _x getVariable ["usedBy", [true, true, true]]
            , nil
            , nil
            ];
        };
};

adm_camp_getPaths = {
    entities "C_Bob_VR"
        select { count (waypoints _x) > 1 }
        select { _x getVariable ["admiral_path", true] }
        apply {
            private _path = [ waypoints _x apply { waypointPosition _x }
            , _x getVariable ["usedBy", [true, true, true]]
            , nil
            , nil
            ];
            deleteVehicle _x;
            _path;
        };
};

adm_camp_initPaths = {
    adm_camp_paths = [];
    adm_camp_paths append ([] call adm_camp_getPaths);
    adm_camp_paths append ([] call adm_camp_getLogicPaths);
};

adm_camp_fnc_tryAddPaths = {
    params ["_zone","_paths"];

    {
        private _pathPositions = GET_PATH_POSITIONS(_x);
        private _pathEndTrigger = [_pathPositions select (count _pathPositions - 1)] call adm_camp_fnc_getLogicEndTrigger;
        SET_PATH_END_TRIGGER(_x,_pathEndTrigger);
        if ([_pathPositions select 0, GET_ZONE_AREA(_zone), GET_ZONE_POSITION(_zone)] call adm_common_fnc_isPositionInArea) then {
            private _zonePaths = GET_CAMP_PATHS(_zone);
            PUSH(_zonePaths,_x);
            //DEBUG("admiral.camp.create",FMT_2("Path '%1' is inside Camp Zone '%2'. Adding it to zone paths.",_x,GET_ZONE_ID(_zone)));
        };
    } forEach _paths;
};

adm_camp_fnc_getGroupPaths = {
    params ["_zone","_groupType"];

    GET_CAMP_PATHS(_zone) select {GET_PATH_USED_BY(_x) select _groupType};
};

adm_camp_fnc_getLogicEndTrigger = {
    params ["_wpPos"];

    private _trigger = [nearestObjects [_wpPos, [], 50], {typeOf _x == "EmptyDetector"}] call adm_common_fnc_filterFirst;
    if (count _trigger == 0) then {
        _trigger = createTrigger ["EmptyDetector", _wpPos];
        _trigger setTriggerArea CAMP_DEFAULT_ENDTRIGGER_AREA;
        _trigger setTriggerActivation["NONE", "PRESENT", false];
        //DEBUG("admiral.camp.create",FMT_2("No end trigger was found. Created new end trigger '%1' at position '%2'.",_trigger,_wpPos));
    } else {
        _trigger = _trigger select 0;
    };

    _trigger;
};

adm_camp_fnc_createPatrolWaypoints = {
    params ["_group","_unitType","_area","_areaPosition","_waypointBehaviours","_noOfWaypoints"];

    private _initialWaypointIndex = 0;
    if (count waypoints _group > 0) then {
        _initialWaypointIndex = (count waypoints _group) - 1;
    };
    for "_i" from 1 to _noOfWaypoints do {
        [_group, [[_area, _areaPosition, _unitType] call adm_common_fnc_getRandomEmptyPositionInArea, 0], 'MOVE', selectRandom _waypointBehaviours, 'RED'] call adm_common_fnc_createWaypoint;
    };
    [_group, (count waypoints _group) - 1] setWaypointStatements ["true", format["(group this) setCurrentWaypoint [group this, %1]", _initialWaypointIndex]];
    //DEBUG("admiral.camp.create",FMT_2("Created '%1' patrol waypoint(s) for group '%2'.",_noOfWaypoints,_group));
};

adm_camp_fnc_createCampWaypoints = {
    params ["_group","_unitType","_paths","_waypointBehaviours","_noOfWaypoints"];

    private _path = selectRandom _paths;
    private _pathPositions = GET_PATH_POSITIONS(_path);
    {
        [_group, [_x, 0], 'MOVE', selectRandom _waypointBehaviours, 'RED'] call adm_common_fnc_createWaypoint;
    } forEach _pathPositions;
    private _endTrigger = GET_PATH_END_TRIGGER(_path);
    [_group, _unitType, triggerArea _endTrigger, getPosATL _endTrigger, _waypointBehaviours, _noOfWaypoints] call adm_camp_fnc_createPatrolWaypoints;
    //DEBUG("admiral.camp.create",FMT_3("Created '%1' path waypoint(s) for group '%2' using path '%3'.",count _pathPositions,_group,_path));
};

adm_camp_fnc_isPoolEmpty = {
    params ["_zone"];

    private _pool = GET_ZONE_POOL(_zone);

    _pool select 0 == 0 && {_pool select 1 == 0} && {_pool select 2 == 0};
};

adm_camp_fnc_disableCamp = {
    params ["_zone"];

    SET_CAMP_ENABLED(_zone,false);
    //INFO("admiral.camp.create",FMT_1("Camp Zone '%1' has been disabled.",GET_ZONE_ID(_zone)));
};

adm_camp_fnc_spawnInfGroup = {
    params ["_zone","_groupType","_unitType","_placeManFunc"];

    private _unitTemplate = GET_ZONE_UNIT_TEMPLATE(_zone);
    private _zoneTemplate = GET_ZONE_TEMPLATE(_zone);
    private _initialPos = [GET_ZONE_AREA(_zone), GET_ZONE_POSITION(_zone), "SoldierWB"] call adm_common_fnc_getRandomEmptyPositionInArea;
    private _group = createGroup ([_unitTemplate] call adm_common_fnc_getUnitTemplateSide);
    _group deleteGroupWhenEmpty true;
    private _groupSize = ["ZoneTemplates", _zoneTemplate, "infFireteamSize"] call adm_config_fnc_getNumber;
    for "_i" from 1 to _groupSize do {
        private _position = _initialPos findEmptyPosition [1, CAMP_SPAWN_CIRCLE_MAX_DIST, "SoldierWB"];
        private _unit = [_position, _group, _unitTemplate, _zoneTemplate, UNIT_TYPE_ARRAY select _unitType] call _placeManFunc;
        [format ["%1.spawned.unit", GET_ZONE_TYPE(_zone)], [_unit, UNIT_TYPE_ARRAY select _unitType, _zone]] call adm_event_fnc_emitEvent;
        ["zone.spawned.unit", [_unit, UNIT_TYPE_ARRAY select _unitType, _zone]] call adm_event_fnc_emitEvent;
    };
    //DEBUG("admiral.camp.create",FMT_4("Spawned '%1' unit(s) for group '%2' of type '%3' in Zone '%4'.",_groupSize,_group,GROUP_TYPE_ARRAY select _groupType,GET_ZONE_ID(_zone)));
    _group setVariable ["adm_zone_parent", _zone];
    _group setVariable ["adm_group_type", _groupType, false];
    [format ["%1.spawned.group", GET_ZONE_TYPE(_zone)], [_group, GROUP_TYPE_ARRAY select _groupType, _zone]] call adm_event_fnc_emitEvent;
    ["zone.spawned.group", [_group, GROUP_TYPE_ARRAY select _groupType, _zone]] call adm_event_fnc_emitEvent;

    _group;
};

adm_camp_fnc_spawnVehicleGroup = {
    params ["_zone","_groupType","_unitType","_placeManFunc"];

    private _unitTemplate = GET_ZONE_UNIT_TEMPLATE(_zone);
    private _zoneTemplate = GET_ZONE_TEMPLATE(_zone);
    private _vehicle = [[_unitTemplate, GROUP_TYPE_ARRAY select _groupType] call adm_common_fnc_getUnitTemplateArray, GET_ZONE_AREA(_zone), GET_ZONE_POSITION(_zone)] call adm_common_fnc_placeVehicle;
    [format ["%1.spawned.vehicle", GET_ZONE_TYPE(_zone)], [_vehicle, GROUP_TYPE_ARRAY select _groupType, _zone]] call adm_event_fnc_emitEvent;
    ["zone.spawned.vehicle", [_vehicle, GROUP_TYPE_ARRAY select _groupType, _zone]] call adm_event_fnc_emitEvent;
    private _group = createGroup ([_unitTemplate] call adm_common_fnc_getUnitTemplateSide);
    _group setVariable ["adm_group_type", _groupType, false];
    _group deleteGroupWhenEmpty true;
    private _crew = [_vehicle, _group, _unitTemplate, _zoneTemplate, UNIT_TYPE_ARRAY select _unitType] call adm_camp_fnc_spawnCrew;
    [format ["%1.spawned.crew", GET_ZONE_TYPE(_zone)], [_crew, UNIT_TYPE_ARRAY select _unitType, GROUP_TYPE_ARRAY select _groupType, _zone]] call adm_event_fnc_emitEvent;
    ["zone.spawned.crew", [_crew, UNIT_TYPE_ARRAY select _unitType, GROUP_TYPE_ARRAY select _groupType, _zone]] call adm_event_fnc_emitEvent;
    //DEBUG("admiral.camp.create",FMT_4("Spawned crew for vehicle '%1' for group '%2' of type '%3' in Zone '%4'.",_vehicle,_group,GROUP_TYPE_ARRAY select _groupType,GET_ZONE_ID(_zone)));
    [format ["%1.spawned.group", GET_ZONE_TYPE(_zone)], [_group, GROUP_TYPE_ARRAY select _groupType, _zone]] call adm_event_fnc_emitEvent;
    ["zone.spawned.group", [_group, GROUP_TYPE_ARRAY select _groupType, _zone]] call adm_event_fnc_emitEvent;

    _group;
};

adm_camp_fnc_trySpawnGroups = {
    params ["_zone","_groupType","_canSpawnFunc","_spawnFunc"];

    private _spawnedGroups = [];
    if ([_zone, _groupType] call _canSpawnFunc) then {
        _spawnedGroups = [_zone, _groupType] call _spawnFunc;
    };

    _spawnedGroups;
};

adm_camp_fnc_spawnGroups = {
    params ["_zone","_groupType","_unitType","_groupCount","_placeManFunc"];

    private _spawnedGroups = [];
    for "_i" from 1 to _groupCount do {
        private _spawnGroupFunc = adm_camp_fnc_spawnInfGroup;
        private _waypointAmount = "infWaypointAmount";
        private _groupsByType = adm_camp_infGroups;
        call {
            if (_groupType == GROUP_TYPE_TECH) exitWith {
                _spawnGroupFunc = adm_camp_fnc_spawnVehicleGroup;
                _waypointAmount = "techWaypointAmount";
                _groupsByType = adm_camp_techGroups;
            };
            if (_groupType == GROUP_TYPE_ARMOUR) exitWith {
                _spawnGroupFunc = adm_camp_fnc_spawnVehicleGroup;
                _waypointAmount = "armourWaypointAmount";
                _groupsByType = adm_camp_armourGroups;
            };
        };
        private _group = [[_zone, _groupType, _unitType, _placeManFunc], _spawnGroupFunc] call adm_common_fnc_delayGroupSpawn;
        _groupsByType pushBack _group;
        private _zoneTemplate = GET_ZONE_TEMPLATE(_zone);
        [
            _group,
            typeOf vehicle leader _group,
            [_zone, _groupType] call adm_camp_fnc_getGroupPaths,
            ["ZoneTemplates", _zoneTemplate, "waypointBehaviours"] call adm_config_fnc_getArray,
            ["ZoneTemplates", _zoneTemplate, _waypointAmount] call adm_config_fnc_getNumber
        ] call adm_camp_fnc_createCampWaypoints;
        _spawnedGroups pushBack _group;
    };

    _spawnedGroups
};

adm_camp_fnc_getGroupCount = {
    params ["_initialGroupCount","_waveSize","_pool","_groupType"];

    private _groupCount = _initialGroupCount;
    if (_pool select _groupType != -1) then {
        if ((_pool select _groupType) < _waveSize) then {
            _groupCount = _pool select _groupType;
            _pool set [_groupType, 0];
        } else {
            _pool set [_groupType, (_pool select _groupType) - _waveSize];
        };
    };

    _groupCount;
};

adm_camp_fnc_getSpawnFunction = {
    params ["_zone"];

    private _campType = GET_CAMP_TYPE(_zone);
    call {
        if (_campType == "random") exitWith {adm_camp_fnc_randomSpawn};
        if (_campType == "periodic") exitWith {adm_camp_fnc_periodicSpawn};
        if (_campType == "ondemand") exitWith {adm_camp_fnc_onDemandSpawn};
    };
};



// ==========================================
// Periodic functions
// ==========================================

adm_camp_fnc_periodicCanSpawnGroups = {
    params ["_zone","_groupType"];

    private _poolCount = GET_ZONE_POOL(_zone) select _groupType;
    private _lastSpawnTime = GET_CAMP_LAST_SPAWN_TIME(_zone) select _groupType;
    private _delay = GET_CAMP_GROUP_DELAY(_zone) select _groupType;

    (_poolCount == -1 || {_poolCount > 0}) && {ceil diag_tickTime - _lastSpawnTime >= _delay};
};

adm_camp_fnc_periodicSpawnGroups = {
    params ["_zone","_groupType","_unitType","_placeManFunc"];

    private _pool = GET_ZONE_POOL(_zone);
    private _waveSize = GET_CAMP_WAVE(_zone) select _groupType;
    private _lastSpawnTime = GET_CAMP_LAST_SPAWN_TIME(_zone);
    _lastSpawnTime set [_groupType, floor diag_tickTime];

    [_zone, _groupType, _unitType, [_waveSize, _waveSize, _pool, _groupType] call adm_camp_fnc_getGroupCount, _placeManFunc] call adm_camp_fnc_spawnGroups;
};

adm_camp_fnc_periodicSpawnInfGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_INF, UNIT_TYPE_INF, adm_camp_fnc_placeMan] call adm_camp_fnc_periodicSpawnGroups;
};

adm_camp_fnc_periodicSpawnTechGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_TECH, UNIT_TYPE_INF, adm_camp_fnc_placeMan] call adm_camp_fnc_periodicSpawnGroups;
};

adm_camp_fnc_periodicSpawnArmourGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_ARMOUR, UNIT_TYPE_CREW, adm_camp_fnc_placeMan] call adm_camp_fnc_periodicSpawnGroups;
};

adm_camp_fnc_periodicSpawn = {
    params ["_zone"];

    private _zoneInfGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 0;
    private _zoneTechGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 1;
    private _zoneArmourGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 2;
    SET_CAMP_LAST_SPAWN_TIME(_zone,AS_ARRAY_3(diag_tickTime,diag_tickTime,diag_tickTime));

    [
        {
            params ["_args", "_id"];
            _args params ["_zone","_zoneInfGroups","_zoneTechGroups","_zoneArmourGroups"];

            private _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_INF, adm_camp_fnc_periodicCanSpawnGroups, adm_camp_fnc_periodicSpawnInfGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneInfGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("Periodic Camp Zone '%1' spawned '%2' infantry group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_TECH, adm_camp_fnc_periodicCanSpawnGroups, adm_camp_fnc_periodicSpawnTechGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneTechGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("Periodic Camp Zone '%1' spawned '%2' technical group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_ARMOUR, adm_camp_fnc_periodicCanSpawnGroups, adm_camp_fnc_periodicSpawnArmourGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneArmourGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("Periodic Camp Zone '%1' spawned '%2' armour group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            ["camp.spawned.groups", [_zoneInfGroups, _zoneTechGroups, _zoneArmourGroups, _zone]] call adm_event_fnc_emitEvent;

            if ([_zone] call adm_camp_fnc_isPoolEmpty || {!IS_CAMP_ENABLED(_zone)}) exitWith {
                //INFO("admiral.camp",FMT_1("Periodic Camp Zone '%1' has stopped.",GET_ZONE_ID(_zone)));
                _id call CBA_fnc_removePerFrameHandler;
            };
        },
        GET_CAMP_DELAY(_zone),
        [_zone,_zoneInfGroups,_zoneTechGroups,_zoneArmourGroups]
    ] call CBA_fnc_addPerFrameHandler;
};



// ==========================================
// OnDemand functions
// ==========================================
adm_camp_fnc_onDemandCanSpawnGroups = {
    params ["_zone","_groupType"];

    private _poolCount = GET_ZONE_POOL(_zone) select _groupType;
    private _waveSize = GET_CAMP_WAVE(_zone) select _groupType;
    private _groups = GET_ZONE_SPAWNED_GROUPS(_zone) select _groupType;
    private _aliveGroups = {IS_GROUP_ALIVE(_x)} count _groups;
    (_poolCount == -1 || {_poolCount > 0}) && {_aliveGroups < _waveSize};
};

adm_camp_fnc_onDemandSpawnGroups = {
    params ["_zone","_groupType","_unitType","_placeManFunc"];

    private _pool = GET_ZONE_POOL(_zone);
    private _waveSize = GET_CAMP_WAVE(_zone) select _groupType;
    private _groups = GET_ZONE_SPAWNED_GROUPS(_zone) select _groupType;
    private _aliveGroups = {IS_GROUP_ALIVE(_x)} count _groups;
    [_zone, _groupType, _unitType, [_waveSize - _aliveGroups, _waveSize - _aliveGroups, _pool, _groupType] call adm_camp_fnc_getGroupCount, _placeManFunc] call adm_camp_fnc_spawnGroups;
};

adm_camp_fnc_onDemandSpawnInfGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_INF, UNIT_TYPE_INF, adm_camp_fnc_placeMan] call adm_camp_fnc_onDemandSpawnGroups;
};

adm_camp_fnc_onDemandSpawnTechGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_TECH, UNIT_TYPE_INF, adm_camp_fnc_placeMan] call adm_camp_fnc_onDemandSpawnGroups;
};

adm_camp_fnc_onDemandSpawnArmourGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_ARMOUR, UNIT_TYPE_CREW, adm_camp_fnc_placeMan] call adm_camp_fnc_onDemandSpawnGroups;
};

adm_camp_fnc_onDemandSpawn = {
    params ["_zone"];

    private _zoneInfGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 0;
    private _zoneTechGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 1;
    private _zoneArmourGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 2;

    [
        {
            params ["_args", "_id"];
            _args params ["_zone","_zoneInfGroups","_zoneTechGroups","_zoneArmourGroups"];

            private _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_INF, adm_camp_fnc_onDemandCanSpawnGroups, adm_camp_fnc_onDemandSpawnInfGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneInfGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("On-demand Camp Zone '%1' spawned '%2' infantry group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_TECH, adm_camp_fnc_onDemandCanSpawnGroups, adm_camp_fnc_onDemandSpawnTechGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneTechGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("On-demand Camp Zone '%1' spawned '%2' technical group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_ARMOUR, adm_camp_fnc_onDemandCanSpawnGroups, adm_camp_fnc_onDemandSpawnArmourGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneArmourGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("On-demand Camp Zone '%1' spawned '%2' armour group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            ["camp.spawned.groups", [_zoneInfGroups, _zoneTechGroups, _zoneArmourGroups, _zone]] call adm_event_fnc_emitEvent;

            if ([_zone] call adm_camp_fnc_isPoolEmpty || {!IS_CAMP_ENABLED(_zone)}) exitWith {
                //INFO("admiral.camp",FMT_1("On-demand Camp Zone '%1' has stopped.",GET_ZONE_ID(_zone)));
                _id call CBA_fnc_removePerFrameHandler;
            };
        },
        GET_CAMP_DELAY(_zone),
        [_zone,_zoneInfGroups,_zoneTechGroups,_zoneArmourGroups]
    ] call CBA_fnc_addPerFrameHandler;
};



// ==========================================
// Random functions
// ==========================================
adm_camp_fnc_randomCanSpawnGroups = {
    params ["_zone","_groupType"];

    private _poolCount = GET_ZONE_POOL(_zone) select _groupType;
    private _chance = GET_CAMP_SPAWN_CHANCE(_zone) select _groupType;

    (_poolCount == -1 || {_poolCount > 0}) && {(floor random 100) + 1 <= _chance};
};

adm_camp_fnc_randomSpawnGroups = {
    params ["_zone","_groupType","_unitType","_placeManFunc"];

    private _pool = GET_ZONE_POOL(_zone);
    private _waveSize = GET_CAMP_WAVE(_zone) select _groupType;
    private _groupCount = floor random (_waveSize + 1);

    [_zone, _groupType, _unitType, [_groupCount, _groupCount, _pool, _groupType] call adm_camp_fnc_getGroupCount, _placeManFunc] call adm_camp_fnc_spawnGroups;
};

adm_camp_fnc_randomSpawnInfGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_INF, UNIT_TYPE_INF, adm_camp_fnc_placeMan] call adm_camp_fnc_randomSpawnGroups;
};

adm_camp_fnc_randomSpawnTechGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_TECH, UNIT_TYPE_INF, adm_camp_fnc_placeMan] call adm_camp_fnc_randomSpawnGroups;
};

adm_camp_fnc_randomSpawnArmourGroups = {
    params ["_zone"];

    [_zone, GROUP_TYPE_ARMOUR, UNIT_TYPE_CREW, adm_camp_fnc_placeMan] call adm_camp_fnc_randomSpawnGroups;
};

adm_camp_fnc_randomSpawn = {
    params ["_zone"];

    private _zoneInfGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 0;
    private _zoneTechGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 1;
    private _zoneArmourGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 2;

    [
        {
            params ["_args", "_id"];
            _args params ["_zone","_zoneInfGroups","_zoneTechGroups","_zoneArmourGroups"];

            private _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_INF, adm_camp_fnc_randomCanSpawnGroups, adm_camp_fnc_randomSpawnInfGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneInfGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("Random Camp Zone '%1' spawned '%2' infantry group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_TECH, adm_camp_fnc_randomCanSpawnGroups, adm_camp_fnc_randomSpawnTechGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneTechGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("Random Camp Zone '%1' spawned '%2' technical group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            _spawnedGroups = [];
            _spawnedGroups = [_zone, GROUP_TYPE_ARMOUR, adm_camp_fnc_randomCanSpawnGroups, adm_camp_fnc_randomSpawnArmourGroups] call adm_camp_fnc_trySpawnGroups;
            _zoneArmourGroups append _spawnedGroups;
            //INFO("admiral.camp",FMT_2("Random Camp Zone '%1' spawned '%2' armour group(s).",GET_ZONE_ID(_zone),count _spawnedGroups));
            ["camp.spawned.groups", [_zoneInfGroups, _zoneTechGroups, _zoneArmourGroups, _zone]] call adm_event_fnc_emitEvent;

            if ([_zone] call adm_camp_fnc_isPoolEmpty || {!IS_CAMP_ENABLED(_zone)}) exitWith {
                //INFO("admiral.camp",FMT_1("Random Camp Zone '%1' has stopped.",GET_ZONE_ID(_zone)));
                _id call CBA_fnc_removePerFrameHandler;
            };
        },
        GET_CAMP_DELAY(_zone),
        [_zone,_zoneInfGroups,_zoneTechGroups,_zoneArmourGroups]
    ] call CBA_fnc_addPerFrameHandler;
};

adm_camp_setGroupDelay = {
    params ["_zone"];

    private _campDelay = GET_CAMP_DELAY(_zone);
    private _groupDelay = GET_CAMP_GROUP_DELAY(_zone);
    for "_i" from 0 to (count _groupDelay) - 1 do {
        _groupDelay set [_i, (_groupDelay select _i) * _campDelay];
    };
    //DEBUG("admiral.camp",FMT_1("Multiplied variable 'adm_camp_groupDelay' with variable 'adm_camp_campDelay' in Camp Zone '%1'.",GET_ZONE_ID(_zone)));
};

adm_camp_fnc_initZone = {
    params ["_zone"];

    [_zone] call adm_camp_setGroupDelay;
    [_zone, adm_camp_paths] call adm_camp_fnc_tryAddPaths;
    //INFO("admiral.camp",FMT_1("Camp Zone '%1' has been succesfully initialized.",GET_ZONE_ID(_zone)));
    SET_CAMP_ENABLED(_zone,true);
    PUSH(adm_camp_zones,_zone);
    [_zone] spawn ([_zone] call adm_camp_fnc_getSpawnFunction);
};

adm_camp_fnc_getAliveInfGroups = {
    [[adm_camp_infGroups]] call adm_common_fnc_getAliveGroups;
};

adm_camp_fnc_getAliveTechGroups = {
    [[adm_camp_techGroups]] call adm_common_fnc_getAliveGroups;
};

adm_camp_fnc_getAliveArmGroups = {
    [[adm_camp_armourGroups]] call adm_common_fnc_getAliveGroups;
};

adm_camp_fnc_getAliveGroups = {
   [[adm_camp_infGroups, adm_camp_techGroups, adm_camp_armourGroups]] call adm_common_fnc_getAliveGroups;
};

adm_camp_fnc_getAliveInfUnits = {
   [[adm_camp_infGroups]] call adm_common_fnc_getAliveUnits;
};

adm_camp_fnc_getAliveTechUnits = {
   [[adm_camp_techGroups]] call adm_common_fnc_getAliveUnits;
};

adm_camp_fnc_getAliveArmUnits = {
   [[adm_camp_armourGroups]] call adm_common_fnc_getAliveUnits;
};

adm_camp_fnc_getAliveUnits = {
   [[adm_camp_infGroups, adm_camp_techGroups, adm_camp_armourGroups]] call adm_common_fnc_getAliveUnits;
};

adm_camp_fnc_init = {
    adm_camp_infGroups = [];
    adm_camp_techGroups = [];
    adm_camp_armourGroups = [];
    adm_camp_zones = [];
    [] call adm_camp_initPaths;
};
