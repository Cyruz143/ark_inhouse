#include "script_component.hpp"
#include "admiral_macros.h"
#include "\userconfig\admiral\log\patrol.h"


adm_patrol_fnc_placeMan = {
    FUN_ARGS_5(_position,_group,_unitTemplate,_zoneTemplate,_unitType);

    DECLARE(_unit) = [
        _position,
        _group,
        [_unitTemplate, _unitType] call adm_common_fnc_getUnitTemplateArray,
        [_zoneTemplate] call adm_common_fnc_getZoneTemplateSkillValues
    ] call adm_common_fnc_placeMan;
    DEBUG_5("admiral.patrol.create: Created unit '%1' at position '%2', in group '%3' with type '%4' and classname '%5'.",_unit,_position,_group,_unitType,typeOf _unit));

    _unit;
};

adm_patrol_fnc_createWaypoints = {
    FUN_ARGS_4(_group,_unitType,_zone,_noOfWaypoints);

    private ["_waypointBehaviours", "_defaultWp"];
    _waypointBehaviours = ["ZoneTemplates", GET_ZONE_TEMPLATE(_zone), "waypointBehaviours"] call adm_config_fnc_getArray;
    [_group, _unitType, GET_ZONE_AREA(_zone), GET_ZONE_POSITION(_zone), _waypointBehaviours, _noOfWaypoints] call adm_camp_fnc_createPatrolWaypoints;
    _defaultWp = (waypoints _group) select 0;
    _defaultWp setWaypointPosition [getPosATL (leader _group), 0];
    _defaultWp setWaypointType 'MOVE';
    _defaultWp setWaypointBehaviour (selectRandom _waypointBehaviours);
    _defaultWp setWaypointCombatMode 'RED';
    DEBUG_3("admiral.patrol.create: Created '%1' patrol waypoint(s) for group '%2' in Camp Zone '%3'.",_noOfWaypoints,_group,GET_ZONE_ID(_zone)));
};

adm_patrol_fnc_spawnInfGroup = {
    FUN_ARGS_1(_zone);

    DECLARE(_group) = [_zone, GROUP_TYPE_INF, UNIT_TYPE_INF, adm_patrol_fnc_placeMan] call adm_camp_fnc_spawnInfGroup;
    [_group, "SoldierWB", _zone, ["ZoneTemplates", GET_ZONE_TEMPLATE(_zone), "infWaypointAmount"] call adm_config_fnc_getNumber] call adm_patrol_fnc_createWaypoints;
    DEBUG_3("admiral.patrol.create: Created group '%1' of type '%2' in Patrol Zone '%3'.",_group,GROUP_TYPE_ARRAY select GROUP_TYPE_INF,GET_ZONE_ID(_zone)));

    _group;
};

adm_patrol_fnc_spawnTechGroup = {
    FUN_ARGS_1(_zone);

    DECLARE(_group) = [_zone, GROUP_TYPE_TECH, UNIT_TYPE_INF, adm_patrol_fnc_placeMan] call adm_camp_fnc_spawnVehicleGroup;
    [_group, typeOf vehicle leader _group, _zone, ["ZoneTemplates", GET_ZONE_TEMPLATE(_zone), "techWaypointAmount"] call adm_config_fnc_getNumber] call adm_patrol_fnc_createWaypoints;
    DEBUG_4("admiral.patrol.create: Created crew for vehicle type of '%1' for group '%2' of type '%3' in Patrol Zone '%4'.",typeOf vehicle leader _group,_group,GROUP_TYPE_ARRAY select GROUP_TYPE_TECH,GET_ZONE_ID(_zone)));

    _group;
};

adm_patrol_fnc_spawnArmorGroup = {
    FUN_ARGS_1(_zone);

    DECLARE(_group) = [_zone, GROUP_TYPE_ARMOUR, UNIT_TYPE_CREW, adm_patrol_fnc_placeMan] call adm_camp_fnc_spawnVehicleGroup;
    [_group, typeOf vehicle leader _group, _zone, ["ZoneTemplates", GET_ZONE_TEMPLATE(_zone), "armourWaypointAmount"] call adm_config_fnc_getNumber] call adm_patrol_fnc_createWaypoints;
    DEBUG_4("admiral.patrol.create: Created crew for vehicle type of '%1' for group '%2' of type '%3' in Patrol Zone '%4'.",typeOf vehicle leader _group,_group,GROUP_TYPE_ARRAY select GROUP_TYPE_ARMOUR,GET_ZONE_ID(_zone)));

    _group;
};

adm_patrol_fnc_moveZone = {
    FUN_ARGS_3(_zone,_position,_newArea);

    [_zone, _position, _newArea] call adm_patrol_fnc_updateZonePositionAndArea;
    [_zone] call adm_patrol_fnc_moveUpdateAllGroupWaypoints;
    INFO_2("Admiral Patrol Move: Patrol zone %1 was moved to position %2.",GET_ZONE_ID(_zone),_position);
};

adm_patrol_fnc_followZone = {
    FUN_ARGS_4(_zone,_object,_delay,_newArea);

    INFO_3("Admiral Patrol Follow: Patrol zone %1 has started following object %2 with update delay %3.",GET_ZONE_ID(_zone),_object,_delay);
    SET_PATROL_FOLLOWING(_zone,true);
    [_zone, _object, _delay, _newArea] spawn {
        FUN_ARGS_4(_zone,_object,_delay,_newArea);

        waitUntil {
            [_zone, getPosATL _object, _newArea] call adm_patrol_fnc_updateZonePositionAndArea;
            [_zone, getPosATL _object] call adm_patrol_fnc_followUpdateAllGroupWaypoints;
            DEBUG_3("admiral.patrol.follow: Updated follow position for Patrol zone '%1' on object '%2' with position '%3'.",GET_ZONE_ID(_zone),_object,getPosATL _object));
            sleep _delay;
            !IS_PATROL_FOLLOWING(_zone);
        };
        INFO_2("Admiral Patrol Follow: Patrol zone %1 has stopped following object %2.",GET_ZONE_ID(_zone),_object);
    };
};

adm_patrol_fnc_stopFollowZone = {
    FUN_ARGS_1(_zone);

    if (IS_PATROL_FOLLOWING(_zone)) then {
        SET_PATROL_FOLLOWING(_zone,false);
        [_zone] call adm_patrol_fnc_moveUpdateAllGroupWaypoints;
    };
    INFO_1("Admiral Patrol Follow: Patrol zone %1 has stopped following.",GET_ZONE_ID(_zone));
};

adm_patrol_fnc_updateZonePositionAndArea = {
    FUN_ARGS_3(_zone,_position,_newArea);

    if (!isNil "_newArea") then {
        SET_ZONE_AREA(_zone,_newArea);
    };
    SET_ZONE_POSITION(_zone,_position);
    DEBUG_3("admiral.patrol.move: Patrol Zone '%1' updated with position '%2' and with area '%3'.",GET_ZONE_ID(_zone),_position,_newArea));
};

adm_patrol_fnc_moveUpdateAllGroupWaypoints = {
    FUN_ARGS_1(_zone);

    {
        [_zone, _x, "SoldierWB", ["ZoneTemplates", GET_ZONE_TEMPLATE(_zone), "infWaypointAmount"] call adm_config_fnc_getNumber] call adm_patrol_fnc_moveUpdateGroupWaypoints;
    } forEach (GET_ZONE_SPAWNED_GROUPS(_zone) select 0);

    {
        [_zone, _x, typeOf vehicle leader _x, ["ZoneTemplates", GET_ZONE_TEMPLATE(_zone), "techWaypointAmount"] call adm_config_fnc_getNumber] call adm_patrol_fnc_moveUpdateGroupWaypoints;
    } forEach (GET_ZONE_SPAWNED_GROUPS(_zone) select 1);

    {
        [_zone, _x, typeOf vehicle leader _x, ["ZoneTemplates", GET_ZONE_TEMPLATE(_zone), "armourWaypointAmount"] call adm_config_fnc_getNumber] call adm_patrol_fnc_moveUpdateGroupWaypoints;
    } forEach (GET_ZONE_SPAWNED_GROUPS(_zone) select 2);
};

adm_patrol_fnc_followUpdateAllGroupWaypoints = {
    FUN_ARGS_2(_zone,_position);

    {
        [_x, _position] call adm_patrol_fnc_followUpdateGroupWaypoints;
    } forEach (GET_ZONE_SPAWNED_GROUPS(_zone) select 0);

    {
        [_x, _position] call adm_patrol_fnc_followUpdateGroupWaypoints;
    } forEach (GET_ZONE_SPAWNED_GROUPS(_zone) select 1);

    {
        [_x, _position] call adm_patrol_fnc_followUpdateGroupWaypoints;
    } forEach (GET_ZONE_SPAWNED_GROUPS(_zone) select 2);
};

adm_patrol_fnc_moveUpdateGroupWaypoints = {
    FUN_ARGS_4(_zone,_group,_unitType,_noOfWaypoints);

    [_group] call adm_patrol_fnc_deleteGroupWaypoints;
    [_group, _unitType, _zone, _noOfWaypoints] call adm_patrol_fnc_createWaypoints;
    [_group, [GET_ZONE_AREA(_zone), GET_ZONE_POSITION(_zone), _unitType] call adm_common_fnc_getRandomEmptyPositionInArea] call adm_patrol_fnc_updateDefaultWaypoint;
};

adm_patrol_fnc_followUpdateGroupWaypoints = {
    FUN_ARGS_2(_group,_position);

    [_group] call adm_patrol_fnc_deleteGroupWaypoints;
    [_group, _position] call adm_patrol_fnc_updateDefaultWaypoint;
};

adm_patrol_fnc_deleteGroupWaypoints = {
    FUN_ARGS_1(_group);

    while {count (waypoints _group) > 1} do {
        deleteWaypoint ((waypoints _group) select 0);
    };
};

adm_patrol_fnc_updateDefaultWaypoint = {
    FUN_ARGS_2(_group,_position);

    DECLARE(_defultWp) = (waypoints _group) select 0;
    _defultWp setWaypointPosition [_position, 0];
    _group setCurrentWaypoint _defultWp;
    _defultWp setWaypointStatements ["true", "(group this) setVariable ['adm_patrol_hasTarget', false, false];"];
    _group setVariable ["adm_patrol_hasTarget", true, false];
};


adm_patrol_fnc_spawnGroups = {
    FUN_ARGS_1(_zone);

    private _zoneInfGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 0;
    private _zoneTechGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 1;
    private _zoneArmourGroups = GET_ZONE_SPAWNED_GROUPS(_zone) select 2;
    private _pool = GET_ZONE_POOL(_zone);

    private _spawnedGroups = [];
    for "_i" from 1 to (_pool select 0) do {
        private _group = [[_zone], adm_patrol_fnc_spawnInfGroup] call adm_common_fnc_delayGroupSpawn;
        _spawnedGroups pushBack _group;
        adm_patrol_infGroups pushBack _group;
        _zoneInfGroups pushBack _group;
    };
    INFO_2("Admiral Patrol: Patrol Zone %1 spawned %2 infantry group(s).",GET_ZONE_ID(_zone),count _spawnedGroups);

    _spawnedGroups = [];
    for "_i" from 1 to (_pool select 1) do {
        private _group = [[_zone], adm_patrol_fnc_spawnTechGroup] call adm_common_fnc_delayGroupSpawn;
        _spawnedGroups pushBack _group;
        adm_patrol_techGroups pushBack _group;
        _zoneTechGroups pushBack _group;
    };
    INFO_2("Admiral Patrol: Patrol Zone %1 spawned %2 technical group(s).",GET_ZONE_ID(_zone),count _spawnedGroups);

    _spawnedGroups = [];
    for "_i" from 1 to (_pool select 2) do {
        private _group = [[_zone], adm_patrol_fnc_spawnArmorGroup] call adm_common_fnc_delayGroupSpawn;
        _spawnedGroups pushBack _group;
        adm_patrol_armourGroups pushBack _group;
        _zoneArmourGroups pushBack _group;
    };
    INFO_2("Admiral Patrol: Patrol Zone %1 spawned %2 armour group(s).",GET_ZONE_ID(_zone),count _spawnedGroups);

    ["patrol.spawned.groups", [_zoneInfGroups, _zoneTechGroups, _zoneArmourGroups, _zone]] call adm_event_fnc_emitEvent;
};

adm_patrol_fnc_initZone = {
    FUN_ARGS_1(_zone);

    adm_patrol_zones pushBack _zone;
    [_zone] call adm_patrol_fnc_spawnGroups;
    INFO_1("Admiral Patrol: Patrol Zone %1 has been succesfully initialized.",GET_ZONE_ID(_zone));
};

adm_patrol_fnc_getAliveInfGroups = {
    [[adm_patrol_infGroups]] call adm_common_fnc_getAliveGroups;
};

adm_patrol_fnc_getAliveTechGroups = {
    [[adm_patrol_techGroups]] call adm_common_fnc_getAliveGroups;
};

adm_patrol_fnc_getAliveArmGroups = {
    [[adm_patrol_armourGroups]] call adm_common_fnc_getAliveGroups;
};

adm_patrol_fnc_getAliveGroups = {
   [[adm_patrol_infGroups, adm_patrol_techGroups, adm_patrol_armourGroups]] call adm_common_fnc_getAliveGroups;
};

adm_patrol_fnc_getAliveInfUnits = {
   [[adm_patrol_infGroups]] call adm_common_fnc_getAliveUnits;
};

adm_patrol_fnc_getAliveTechUnits = {
   [[adm_patrol_techGroups]] call adm_common_fnc_getAliveUnits;
};

adm_patrol_fnc_getAliveArmUnits = {
   [[adm_patrol_armourGroups]] call adm_common_fnc_getAliveUnits;
};

adm_patrol_fnc_getAliveUnits = {
   [[adm_patrol_infGroups, adm_patrol_techGroups, adm_patrol_armourGroups]] call adm_common_fnc_getAliveUnits;
};

adm_patrol_fnc_init = {
    adm_patrol_infGroups = [];
    adm_patrol_techGroups = [];
    adm_patrol_armourGroups = [];
    adm_patrol_zones = [];
};
