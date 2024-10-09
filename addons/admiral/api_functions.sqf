#include "admiral_macros.h"

#include "\userconfig\admiral\log\api.h"
#include "logbook.h"


// HC

/**
 * Executes code if the current machine is HC. If not present, the code is not executed.
 * @param _arguments Arguments for the code to be executed
 * @param _code The code to be executed
 */
adm_api_fnc_executeIfHc = {
    FUN_ARGS_2(_arguments,_code);

    [_arguments, _code] call adm_hc_fnc_adm_api_fnc_executeIfHc;
};

/*
 * Returns wheter the is HC present or not.
 */
adm_api_fnc_isHcPresent = {
    [] call adm_hc_fnc_isHcPresent;
};

/*
 * Returns the player object of HC. 'objNull' if there is no HC.
 */
adm_api_fnc_getHcUnit = {
    [] call adm_hc_fnc_getHcUnit;
};

/*
 * Returns wheter the current machine is HC or not.
 */
adm_api_fnc_isHc = {
    [] call adm_hc_fnc_isHc;
};




// Zone

/**
 * Initializes a zone with the given config entries.
 * @param _configEntry1 First config entry
 * @param _configEntry2 Second config entry
 * @param _configEntryN Nth config entry
 * OR
 * Initializes a zone with the given trigger and config entries.
 * @param _trigger Trigger object representing a zone
 * @param _configEntries Array of config entries
 */
adm_api_fnc_initZone = {
    _this call adm_zone_fnc_tryInitZone;
};

/**
 * Returns the ID of the zone.
 * @_zone The array representing a zone
 * @return ID (number) that uniquely identifies the zone
 */
adm_api_fnc_getZoneId = {
    FUN_ARGS_1(_zone);

    GET_ZONE_ID(_zone);
};

/**
 * Returns the zone that has the given ID. If no zone exists
 * with given ID, return nil.
 * @_id Number that uniquely identifies the zone
 * @return Zone or nil if not found
 */
adm_api_fnc_getZoneById = {
    FUN_ARGS_1(_id);

    [_id] call adm_zone_fnc_getZoneById
};

/**
 * Returns the name of the zone.
 * @_zone The array representing a zone
 * @return Name of the zone, name of global variable in missionNamespace that equals with the zone
 */
adm_api_fnc_getZoneName = {
    FUN_ARGS_1(_zone);

    GET_ZONE_NAME(_zone);
};

/**
 * Returns the type (cqc, patrol, camp) of the zone.
 * @_zone The array representing a zone
 * @return Type of the zone
 */
adm_api_fnc_getZoneType = {
    FUN_ARGS_1(_zone);

    GET_ZONE_TYPE(_zone);
};

/**
 * Returns the center position of the zone's area.
 * @_zone The array representing a zone
 * @return Position array
 */
adm_api_fnc_getZonePosition = {
    FUN_ARGS_1(_zone);

    GET_ZONE_POSITION(_zone);
};

/**
 * Returns the zone's area array containing the size, angle and shape.
 * @_zone The array representing a zone
 * @return Trigger area array
 */
adm_api_fnc_getZoneArea = {
    FUN_ARGS_1(_zone);

    GET_ZONE_AREA(_zone);
};

/**
 * Returns if the zone is enabled or not.
 * @_zone The array representing a zone
 * @return Wether the zone is enabled or not
 */
adm_api_fnc_isZoneEnabled = {
    FUN_ARGS_1(_zone);

    IS_ZONE_ENABLED(_zone);
};

/**
 * Returns the zone's unit template class name.
 * @_zone The array representing a zone
 * @return Unit template class name
 */
adm_api_fnc_getZoneUnitTemplate = {
    FUN_ARGS_1(_zone);

    GET_ZONE_UNIT_TEMPLATE(_zone);
};

/**
 * Returns the zone's spawned groups. Array of groups for CQC,
 * array of infantry, technical and armour groups for Patrol and Camp.
 * @_zone The array representing a zone
 * @return Unit template class name
 */
adm_api_fnc_getZoneSpawnedGroups = {
    FUN_ARGS_1(_zone);

    GET_ZONE_SPAWNED_GROUPS(_zone);
};

/**
 * Returns the zone's zone template class name.
 * @_zone The array representing a zone
 * @return Zone template class name
 */
adm_api_fnc_getZoneTemplate = {
    FUN_ARGS_1(_zone);

    GET_ZONE_TEMPLATE(_zone);
};



// Settings

/**
 * Sets the _enemySide as enemy of _side.
 * @param _side The side to set the enemy of
 * @param _enemySide The side that will be the enemy
 */
adm_api_fnc_setEnemy = {
    FUN_ARGS_2(_side,_enemySide);

    [_side, _enemySide] call adm_settings_fnc_setEnemy;
};

/**
 * Sets the _friendlySide as friend of _side.
 * @param _side The side to set the friend of
 * @param _enemySide The side that will be the friend
 */
adm_api_fnc_setFriend = {
    FUN_ARGS_2(_side,_friendlySide);

    [_side, _friendlySide] call adm_settings_fnc_setFriend;
};



// Debugging

/**
 * Enables debugging of AI.
 */
adm_api_fnc_enableDebugging = {
    [] call adm_debug_fnc_enableDebugging;
};

/**
 * Disables debugging of AI.
 */
adm_api_fnc_disableDebugging = {
    [] call adm_debug_fnc_disableDebugging;
};



// CQC

/**
 * Disables force fire of a CQC zone.
 */
adm_api_fnc_disableForceFire = {
    FUN_ARGS_1(_trigger);

    [_trigger] call adm_cqc_fnc_disableForceFire;
};

/**
 * Enables force fire of a CQC zone.
 */
adm_api_fnc_enableForceFire = {
    FUN_ARGS_1(_trigger);

    [_trigger] call adm_cqc_fnc_enableForceFire;
};

/**
 * Returns all infantry groups spawned by Patrol zones.
 * @return Array of infantry groups
 */
adm_api_fnc_getCqcGroups = {
    [] call adm_cqc_fnc_getAliveGroups;
};

/**
 * Returns all units spawned by CQC zones.
 * @return Array of units
 */
adm_api_fnc_getCqcUnits = {
    [] call adm_cqc_fnc_getAliveUnits;
};



// Patrol

/**
 * Moves a Patrol zone to a given position. Optional triggerArea parameter will resize the zone.
 * The zone's groups will move to the new position and patrol there.
 * @param _trigger Trigger object representing a Patrol zone
 * @param _position Position where the zone will be moved
 * @param _triggerArea (optional) TriggerArea array containing the new size and shape of the zone
 */
adm_api_fnc_moveZone = {
    FUN_ARGS_3(_trigger,_position,_triggerArea);

    [_trigger, _position, _triggerArea] call adm_patrol_fnc_moveZone;
};

/**
 * Makes the groups of a Patrol zone to follow a given object. Optional triggerArea parameter will resize the zone.
 * The waypoints of the groups will be updated with the objects new position every _delay seconds.
 * @param _trigger Trigger object representing a Patrol zone
 * @param _object An object that has a position
 * @param _delay The delay in seconds between updating group waypoints
 * @param _triggerArea (optional) TriggerArea array containing the new size and shape of the zone
 */
adm_api_fnc_followZone = {
    FUN_ARGS_4(_trigger,_object,_delay,_triggerArea);

    [_trigger, _object, _delay, _triggerArea] call adm_patrol_fnc_followZone;
};

/**
 * Stops a follow Patrol zone. Groups waypoints will be updated one more time.
 * @param _trigger Trigger object representing a Patrol zone
 */
adm_api_fnc_stopFollowZone = {
    FUN_ARGS_1(_trigger);

    [_trigger] call adm_patrol_fnc_stopFollowZone;
};

/**
 * Returns all infantry groups spawned by Patrol zones.
 * @return Array of infantry groups
 */
adm_api_fnc_getPatrolInfGroups = {
    [] call adm_patrol_fnc_getAliveInfGroups;
};

/**
 * Returns all technical groups spawned by Patrol zones.
 * @return Array of technical groups
 */
adm_api_fnc_getPatrolTechGroups = {
    [] call adm_patrol_fnc_getAliveTechGroups;
};

/**
 * Returns all armour groups spawned by Patrol zones.
 * @return Array of armour groups
 */
adm_api_fnc_getPatrolArmGroups = {
    [] call adm_patrol_fnc_getAliveArmGroups;
};

/**
 * Returns all groups spawned by Patrol zones. This includes the infantry,
 * technical and armour groups. 
 * @return Array of groups
 */
adm_api_fnc_getPatrolGroups = {
    [] call adm_patrol_fnc_getAliveGroups;
};

/**
 * Returns all units of infantry groups spawned by Patrol zones.
 * @return Array of infantry units
 */
adm_api_fnc_getPatrolInfUnits = {
    [] call adm_patrol_fnc_getAliveInfUnits;
};

/**
 * Returns all units of technical groups spawned by Patrol zones.
 * @return Array of technical units
 */
adm_api_fnc_getPatrolTechUnits = {
    [] call adm_patrol_fnc_getAliveTechUnits;
};

/**
 * Returns all units of armour groups spawned by Patrol zones.
 * @return Array of armour units
 */
adm_api_fnc_getPatrolArmUnits = {
    [] call adm_patrol_fnc_getAliveArmUnits;
};

/**
 * Returns all units spawned by Patrol zones. This includes the units of infantry,
 * technical and armour groups. 
 * @return Array of units
 */
adm_api_fnc_getPatrolUnits = {
    [] call adm_patrol_fnc_getAliveUnits;
};



// Camp

/**
 * Disables a Camp zone, stopping it from spawning new groups. It's not possible to reenable it after.
 * @param _trigger Trigger object representing a Camp zone
 */
adm_api_fnc_disableCamp = {
    FUN_ARGS_1(_trigger);

    [_trigger] call adm_camp_fnc_disableCamp;
};

/**
 * Returns all infantry groups spawned by Camp zones.
 * @return Array of infantry groups
 */
adm_api_fnc_getCampInfGroups = {
    [] call adm_camp_fnc_getAliveInfGroups;
};

/**
 * Returns all technical groups spawned by Camp zones.
 * @return Array of technical groups
 */
adm_api_fnc_getCampTechGroups = {
    [] call adm_camp_fnc_getAliveTechGroups;
};

/**
 * Returns all armour groups spawned by Camp zones.
 * @return Array of armour groups
 */
adm_api_fnc_getCampArmGroups = {
    [] call adm_camp_fnc_getAliveArmGroups;
};

/**
 * Returns all groups spawned by Camp zones. This includes the infantry,
 * technical and armour groups. 
 * @return Array of groups
 */
adm_api_fnc_getCampGroups = {
    [] call adm_camp_fnc_getAliveGroups;
};

/**
 * Returns all units of infantry groups spawned by Camp zones.
 * @return Array of infantry units
 */
adm_api_fnc_getCampInfUnits = {
    [] call adm_camp_fnc_getAliveInfUnits;
};

/**
 * Returns all units of technical groups spawned by Camp zones.
 * @return Array of technical units
 */
adm_api_fnc_getCampTechUnits = {
    [] call adm_camp_fnc_getAliveTechUnits;
};

/**
 * Returns all units of armour groups spawned by Camp zones.
 * @return Array of armour units
 */
adm_api_fnc_getCampArmUnits = {
    [] call adm_camp_fnc_getAliveArmUnits;
};

/**
 * Returns all units spawned by Camp zones. This includes the units of infantry,
 * technical and armour groups. 
 * @return Array of units
 */
adm_api_fnc_getCampUnits = {
    [] call adm_camp_fnc_getAliveUnits;
};



// Common

/**
 * Generates a random position in a given area. Exclude positions above water, does not
 * guarantee the function will return and can take multiple tries to find a suitable position.
 * @param _area Trigger area array containing the size, angle and shape of the area
 * @param _areaPosition Position array that will be the center of the area
 * @param _canBeWater (optional) True by default for allowing position above water, false for disallowing
 * @return A random position array from the given area
 */
adm_api_fnc_getRandomPositionInArea = {
    FUN_ARGS_3(_area,_areaPosition,_canBeWater);

    [_area, _areaPosition, _canBeWater] call adm_common_fnc_getRandomPositionInArea;
};

/**
 * Returns if a position is in the given area.
 * @param _position Position array to check
 * @param _area Trigger area array containing the size, angle and shape of the area
 * @param _areaPosition Position array that will be the center of the area
 * @return Wheter the position is in the area
 */
adm_api_fnc_isPositionInArea = {
    FUN_ARGS_3(_position,_area,_areaPosition);

    [_position, _area, _areaPosition] call adm_common_fnc_isPositionInArea;
};

/**
 * Returns if a player is closer to a trigger, than the given distance.
 * The trigger's longest axis is added to the distance.
 * @param _trigger Trigger object
 * @param _distance The distance to check for players
 * @return Wether a player is close enough to the trigger or not
 */
adm_api_fnc_isPlayerNearTrigger = {
    FUN_ARGS_2(_trigger,_distance);

    [_trigger, _distance] call adm_common_fnc_isPlayerNearZone;
};

/**
 * Sorts a given array with the given compare function using insertion sort.
 * A new sorted array is retuned, while the original array is left intact.
 * @param _array Array to be sorted
 * @param _compareFunc Code that returns true if _x is greater, than _y, where
 * _x and _y are elements from the array
 * @return Sorted array
 */
adm_api_fnc_insertionSort = {
    FUN_ARGS_2(_array,_compareFunc);

    [_array, _compareFunc] call adm_common_fnc_insertionSort;
};

/**
 * Shuffles a given array. A new shuffled array is retuned, while the
 * original array is left intact.
 * @param _array Array to be shuffled
 * @return Shuffled array
 */
adm_api_fnc_shuffle = {
    FUN_ARGS_1(_array);

    [_array] call adm_common_fnc_shuffle;
};