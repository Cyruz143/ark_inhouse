#ifndef ADMIRAL_MACROS_H
#define ADMIRAL_MACROS_H

#include "\userconfig\admiral\log\global.h"

#define ADMIRAL_VERSION                     0.8.0
#define STR_ADMIRAL_VERSION                 "0.8.0"

#define CONCAT_ADDON_PATH(FILE)             x\ark\addons\admiral\FILE
#define ADDON_PATH(FILE)                    #CONCAT_ADDON_PATH(FILE)

#define ADMIRAL_BASE_CONFIG                 "Admiral"
#define ADMIRAL_MISSION_CONFIG_FILE         missionConfigFile >> ADMIRAL_BASE_CONFIG
#define ADMIRAL_CONFIG_FILE                 configFile >> ADMIRAL_BASE_CONFIG

#define ALL_UNITS                           ([] call adm_common_fnc_getPlayerUnits)

#define CAMP_SPAWN_CIRCLE_MAX_DIST          30

#define CQC_MAX_ENGAGE_DIST                 50

#define ZONE_SKILLS                         ["aimingAccuracy", "aimingShake", "aimingSpeed", "spotDistance", "spotTime", "courage", "reloadSpeed", "commanding", "general"]

#define SIDE_ARRAY                          [east, west, resistance, civilian]
#define SIDE_TEXT_ARRAY                     ["east", "west", "resistance", "civilian"]
#define SIDE_east                           0
#define SIDE_west                           1
#define SIDE_IND                            2
#define SIDE_CIV                            3

#define UNIT_TYPE_ARRAY                     ["infantry", "crewmen", "pilots"]
#define UNIT_TYPE_INF                       0
#define UNIT_TYPE_CREW                      1
#define UNIT_TYPE_PILOT                     2

#define GROUP_TYPE_ARRAY                    ["infantry", "technicals", "armour"]
#define GROUP_TYPE_INF                      0
#define GROUP_TYPE_TECH                     1
#define GROUP_TYPE_ARMOUR                   2

#define CAMP_TYPE_ARRAY                     ["periodic", "ondemand", "random"]
#define CAMP_DEFAULT_DELAY                  10

#define CAMP_DEFAULT_ENDTRIGGER_AREA        [400,400,0,false]

#define GROUP_TYPE_DEBUG_MARKERS            ["b_inf", "b_motor_inf", "b_armor"]
#define GROUP_TYPE_DEBUG_MARKER_SIZES       [[0.7,0.7], [1,1], [1.3,1.3]]
#define WAYPOINT_DEBUG_MARKER_SIZE          [0.5,0.5]
#define CQC_DEBUG_MARKER_SIZE               [0.5,0.5]
#define CQC_DEBUG_MARKER                    "mil_triangle"
#define COUNTER_DEBUG_MARKER_TOTAL          "hd_dot"
#define COUNTER_DEBUG_MARKER_SIZE           [1,1]
#define COUNTER_DEBUG_MARKER_X_POS          100
#define COUNTER_DEBUG_MARKER_X_INCREMENT    200
#define SIDE_DEBUG_MARKER_COLORS            ["ColorRed", "ColorBlue", "ColorGreen", "ColorPink"]

#define BEHAVIOR_MAX_REINFORCEMENT_DIST         750
#define BEHAVIOR_REINF_TURNAROUND_DIST          300
#define BEHAVIOR_ENEMY_CHECK_RADIUS             200
#define BEHAVIOR_REINF_COOLDOWN                 600
#define BEHAVIOR_CANCALL_PERCENT_CHANCE         25

#define BEHAVIOR_AVG_FT_SIZE                    4
#define BEHAVIOR_AVG_CAR_SIZE                   2.5
#define BEHAVIOR_AVG_AIR_SIZE                   2

#define BEHAVIOR_REINF_NUM(NUMS,INF,CAR,AIR)    \
    round (((NUMS) select 0) / BEHAVIOR_AVG_FT_SIZE / (INF)) \
    + round (((NUMS) select 1) / BEHAVIOR_AVG_CAR_SIZE / (CAR)) \
    + round (((NUMS) select 2) / BEHAVIOR_AVG_AIR_SIZE / (AIR))

#define STATE_TEXT_ARRAY                        ["INIT", "MOVING", "ENEMY FOUND", "SAD ENEMY", "COMBAT", "CONTINUE MOVING"]
#define STATE_INIT                              0
#define STATE_MOVING                            1
#define STATE_ENEMYFOUND                        2
#define STATE_SADENEMY                          3
#define STATE_COMBAT                            4
#define STATE_CONTINUEMOVING                    5

#define ASSERT_NOTNIL(VARNAME,MSG)                  {if (!isNil (VARNAME)) then {""} else {call (MSG)}}
#define ASSERT_TYPE(VAR,TYPE,MSG)                   {if (typename (VAR) == toUpper (TYPE)) then {""} else {call (MSG)}}
#define ASSERT_NOTEMPTY(VAR,MSG)                    {if (count (VAR) > 0) then {""} else {call (MSG)}}
#define ASSERT_ARRAYSIZE(VAR,SIZE,MSG)              {if (count (VAR) == (SIZE)) then {""} else {call (MSG)}}
#define ASSERT_ARRAYMINSIZE(VAR,MIN,MSG)            {if (count (VAR) >= (MIN)) then {""} else {call (MSG)}}
#define ASSERT_MIN(VAR,MINVAL,MSG)                  {if ((VAR) >= (MINVAL)) then {""} else {call (MSG)}}
#define ASSERT_MAX(VAR,MAXVAL,MSG)                  {if ((VAR) <= (MAXVAL)) then {""} else {call (MSG)}}
#define ASSERT_BETWEEN(VAR,MINVAL,MAXVAL,MSG)       {if ((VAR) >= (MINVAL) && (VAR) <= (MAXVAL)) then {""} else {call (MSG)}}
#define ASSERT_BOUNDARY(VAR,MSG)                    {if ((VAR) select 0 <= (VAR) select 1) then {""} else {call (MSG)}}
#define ASSERT_ISKINDOF(CLASSNAME,BASETYPE,MSG)     {if ((CLASSNAME) isKindOf (BASETYPE)) then {""} else {call (MSG)}}
#define ASSERT_INARRAY(VAR,ARRAY,MSG)               {if ((VAR) in (ARRAY)) then {""} else {call (MSG)}}
#define ASSERT_ISCLASS(SELECTOR,MSG)                {if (isClass (SELECTOR)) then {""} else {call (MSG)}}
#define ASSERT_ISNUMBER(SELECTOR,MSG)               {if (isNumber (SELECTOR)) then {""} else {call (MSG)}}
#define ASSERT_ISARRAY(SELECTOR,MSG)                {if (isArray (SELECTOR)) then {""} else {call (MSG)}}

#define CC_VAR                                      (call compile _variableName)

#define DEF_ASSERT_NOTNIL                           ASSERT_NOTNIL(_variableName,DEF_NOTNIL_MSG)
#define DEF_ASSERT_TYPE(TYPE)                       ASSERT_TYPE(CC_VAR,TYPE,DEF_TYPE_MSG)
#define DEF_ASSERT_NOTEMPTY                         ASSERT_NOTEMPTY(CC_VAR,DEF_NOTEMPTY_MSG)
#define DEF_ASSERT_ARRAYSIZE(SIZE)                  ASSERT_ARRAYSIZE(CC_VAR,SIZE,DEF_ARRAYSIZE_MSG)
#define DEF_ASSERT_MIN(MINVAL)                      ASSERT_MIN(CC_VAR,MINVAL,DEF_MIN_MSG)
#define DEF_ASSERT_MAX(MAXVAL)                      ASSERT_MAX(CC_VAR,MAXVAL,DEF_MAX_MSG)
#define DEF_ASSERT_BETWEEN(MINVAL,MAXVAL)           ASSERT_BETWEEN(CC_VAR,MINVAL,MAXVAL,DEF_BETWEEN_MSG)
#define DEF_ASSERT_BOUNDARY                         ASSERT_BOUNDARY(CC_VAR,DEF_BOUNDARY)

#define DEF_NOTNIL_MSG                              {format ["Variable '%1' can not be nil!", _variableName]}
#define DEF_TYPE_MSG                                {format ["Variable '%1' is not type of %2!", _variableName, (TYPE)]}
#define DEF_NOTEMPTY_MSG                            {format ["Array '%1' can not be empty!", _variableName]}
#define DEF_ARRAYSIZE_MSG                           {format ["Array '%1' size must be %2!", _variableName, (SIZE)]}
#define DEF_MIN_MSG                                 {format ["Variable '%1' can not be less, than %2!", _variableName, (MINVAL)]}
#define DEF_MAX_MSG                                 {format ["Variable '%1' can not be greater, than %2!", _variableName, (MAXVAL)]}
#define DEF_BETWEEN_MSG                             {format ["Variable '%1' must be between values %2 and %3!", _variableName, (MINVAL), (MAXVAL)]}
#define DEF_BOUNDARY                                {format ["Variable '%1's first value '%2' must be less, than the second value '%3'!", _variableName, CC_VAR select 0, CC_VAR select 1]}

#define IS_GROUP_ALIVE(GROUP)                       ({alive _x} count units GROUP > 0)
#define MOVING_GROUPS                               [adm_patrol_infGroups, adm_patrol_techGroups, adm_patrol_armourGroups, adm_camp_infGroups, adm_camp_techGroups, adm_camp_armourGroups]



#define IDX_PATH_POSITIONS                          0
#define IDX_PATH_USED_BY                            1
#define IDX_PATH_END_TRIGGER                        2
#define IDX_PATH_DEBUG_MARKERS                      3

#define GET_PATH_VALUE(PATH,IDX)                    ((PATH) select IDX)
#define SET_PATH_VALUE(PATH,IDX,VAL)                ((PATH) set [IDX,VAL])

#define GET_PATH_POSITIONS(PATH)                    GET_PATH_VALUE(PATH,IDX_PATH_POSITIONS)
#define GET_PATH_USED_BY(PATH)                      GET_PATH_VALUE(PATH,IDX_PATH_USED_BY)
#define GET_PATH_END_TRIGGER(PATH)                  GET_PATH_VALUE(PATH,IDX_PATH_END_TRIGGER)
#define GET_PATH_DEBUG_MARKERS(PATH)                GET_PATH_VALUE(PATH,IDX_PATH_DEBUG_MARKERS)

#define SET_PATH_END_TRIGGER(PATH,VAL)              SET_PATH_VALUE(PATH,IDX_PATH_END_TRIGGER,VAL)
#define SET_PATH_DEBUG_MARKERS(PATH,VAL)            SET_PATH_VALUE(PATH,IDX_PATH_DEBUG_MARKERS,VAL)



#define IDX_ZONE_ID                                 0
#define IDX_ZONE_NAME                               1
#define IDX_ZONE_TYPE                               2
#define IDX_ZONE_POSITION                           3
#define IDX_ZONE_AREA                               4
#define IDX_ZONE_ENABLED                            5
#define IDX_ZONE_DEBUG_MARKER                       6
#define IDX_ZONE_UNIT_TEMPLATE                      7
#define IDX_ZONE_SPAWNED_GROUPS                     8
#define IDX_ZONE_POOL                               9
#define IDX_ZONE_TEMPLATE                           10
#define IDX_ZONE_SPECIFIC_VALUES                    11
#define IDX_ZONE_INIT_FUNCTION                      12

#define GET_ZONE_VALUE(ZONE,IDX)                    ((ZONE) select IDX)
#define SET_ZONE_VALUE(ZONE,IDX,VAL)                ((ZONE) set [IDX,VAL])

#define GET_ZONE_ID(ZONE)                           GET_ZONE_VALUE(ZONE,IDX_ZONE_ID)
#define GET_ZONE_NAME(ZONE)                         GET_ZONE_VALUE(ZONE,IDX_ZONE_NAME)
#define GET_ZONE_TYPE(ZONE)                         GET_ZONE_VALUE(ZONE,IDX_ZONE_TYPE)
#define GET_ZONE_POSITION(ZONE)                     GET_ZONE_VALUE(ZONE,IDX_ZONE_POSITION)
#define GET_ZONE_AREA(ZONE)                         GET_ZONE_VALUE(ZONE,IDX_ZONE_AREA)
#define IS_ZONE_ENABLED(ZONE)                       GET_ZONE_VALUE(ZONE,IDX_ZONE_ENABLED)
#define GET_ZONE_DEBUG_MARKER(ZONE)                 GET_ZONE_VALUE(ZONE,IDX_ZONE_DEBUG_MARKER)
#define GET_ZONE_UNIT_TEMPLATE(ZONE)                GET_ZONE_VALUE(ZONE,IDX_ZONE_UNIT_TEMPLATE)
#define GET_ZONE_SPAWNED_GROUPS(ZONE)               GET_ZONE_VALUE(ZONE,IDX_ZONE_SPAWNED_GROUPS)
#define GET_ZONE_POOL(ZONE)                         GET_ZONE_VALUE(ZONE,IDX_ZONE_POOL)
#define GET_ZONE_TEMPLATE(ZONE)                     GET_ZONE_VALUE(ZONE,IDX_ZONE_TEMPLATE)
#define GET_ZONE_INIT_FUNCTION(ZONE)                GET_ZONE_VALUE(ZONE,IDX_ZONE_INIT_FUNCTION)

#define SET_ZONE_ID(ZONE,VAL)                       SET_ZONE_VALUE(ZONE,IDX_ZONE_ID,VAL)
#define SET_ZONE_NAME(ZONE,VAL)                     SET_ZONE_VALUE(ZONE,IDX_ZONE_NAME,VAL)
#define SET_ZONE_TYPE(ZONE,VAL)                     SET_ZONE_VALUE(ZONE,IDX_ZONE_TYPE,VAL)
#define SET_ZONE_POSITION(ZONE,VAL)                 SET_ZONE_VALUE(ZONE,IDX_ZONE_POSITION,VAL)
#define SET_ZONE_AREA(ZONE,VAL)                     SET_ZONE_VALUE(ZONE,IDX_ZONE_AREA,VAL)
#define SET_ZONE_ENABLED(ZONE,VAL)                  SET_ZONE_VALUE(ZONE,IDX_ZONE_ENABLED,VAL)
#define SET_ZONE_DEBUG_MARKER(ZONE,VAL)             SET_ZONE_VALUE(ZONE,IDX_ZONE_DEBUG_MARKER,VAL)
#define SET_ZONE_UNIT_TEMPLATE(ZONE,VAL)            SET_ZONE_VALUE(ZONE,IDX_ZONE_UNIT_TEMPLATE,VAL)
#define SET_ZONE_SPAWNED_GROUPS(ZONE,VAL)           SET_ZONE_VALUE(ZONE,IDX_ZONE_SPAWNED_GROUPS,VAL)
#define SET_ZONE_POOL(ZONE,VAL)                     SET_ZONE_VALUE(ZONE,IDX_ZONE_POOL,VAL)
#define SET_ZONE_TEMPLATE(ZONE,VAL)                 SET_ZONE_VALUE(ZONE,IDX_ZONE_TEMPLATE,VAL)
#define SET_ZONE_INIT_FUNCTION(ZONE,VAL)            SET_ZONE_VALUE(ZONE,IDX_ZONE_INIT_FUNCTION,VAL)


#define IDX_CAMP_TYPE                               0
#define IDX_CAMP_ENABLED                            1
#define IDX_CAMP_WAVE                               2
#define IDX_CAMP_PATHS                              3
#define IDX_CAMP_LAST_SPAWN_TIME                    4
#define IDX_CAMP_DELAY                              5
#define IDX_CAMP_GROUP_DELAY                        6
#define IDX_CAMP_SPAWN_CHANCE                       7

#define IDX_PATROL_FOLLOWING                        0

#define IDX_CQC_MIN_HEIGHT                          0
#define IDX_CQC_FORCE_FIRE_ENABLED                  1
#define IDX_CQC_FORCE_FIRE_RUNNING                  2

#define GET_ZONE_SPECIFIC_VALUE(ZONE,IDX)           ((ZONE) select IDX_ZONE_SPECIFIC_VALUES select IDX)
#define SET_ZONE_SPECIFIC_VALUE(ZONE,IDX,VAL)       ((ZONE) select IDX_ZONE_SPECIFIC_VALUES set [IDX,VAL])

#define GET_CAMP_TYPE(ZONE)                         GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_TYPE)
#define IS_CAMP_ENABLED(ZONE)                       GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_ENABLED)
#define GET_CAMP_WAVE(ZONE)                         GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_WAVE)
#define GET_CAMP_PATHS(ZONE)                        GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_PATHS)
#define GET_CAMP_LAST_SPAWN_TIME(ZONE)              GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_LAST_SPAWN_TIME)
#define GET_CAMP_DELAY(ZONE)                        GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_DELAY)
#define GET_CAMP_GROUP_DELAY(ZONE)                  GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_GROUP_DELAY)
#define GET_CAMP_SPAWN_CHANCE(ZONE)                 GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_SPAWN_CHANCE)

#define IS_PATROL_FOLLOWING(ZONE)                   GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_PATROL_FOLLOWING)

#define GET_CQC_MIN_HEIGHT(ZONE)                    GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CQC_MIN_HEIGHT)
#define IS_CQC_FORCE_FIRE_ENABLED(ZONE)             GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CQC_FORCE_FIRE_ENABLED)
#define IS_CQC_FORCE_FIRE_RUNNING(ZONE)             GET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CQC_FORCE_FIRE_RUNNING)

#define SET_CAMP_TYPE(ZONE,VAL)                     SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_TYPE,VAL)
#define SET_CAMP_ENABLED(ZONE,VAL)                  SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_ENABLED,VAL)
#define SET_CAMP_WAVE(ZONE,VAL)                     SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_WAVE,VAL)
#define SET_CAMP_PATHS(ZONE,VAL)                    SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_PATHS,VAL)
#define SET_CAMP_LAST_SPAWN_TIME(ZONE,VAL)          SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_LAST_SPAWN_TIME,VAL)
#define SET_CAMP_DELAY(ZONE,VAL)                    SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_DELAY,VAL)
#define SET_CAMP_GROUP_DELAY(ZONE,VAL)              SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_GROUP_DELAY,VAL)
#define SET_CAMP_SPAWN_CHANCE(ZONE,VAL)             SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CAMP_SPAWN_CHANCE,VAL)

#define SET_PATROL_FOLLOWING(ZONE,VAL)              SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_PATROL_FOLLOWING,VAL)

#define SET_CQC_MIN_HEIGHT(ZONE,VAL)                SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CQC_MIN_HEIGHT,VAL)
#define SET_CQC_FORCE_FIRE_ENABLED(ZONE,VAL)        SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CQC_FORCE_FIRE_ENABLED,VAL)
#define SET_CQC_FORCE_FIRE_RUNNING(ZONE,VAL)        SET_ZONE_SPECIFIC_VALUE(ZONE,IDX_CQC_FORCE_FIRE_RUNNING,VAL)

#define DEFAULT_CAMP_VALUES                         [-1,"","camp",[0,0,0],[0,0,0,false],true,"",adm_camp_defaultUnitTemplate,[[],[],[]],[0,0,0],adm_camp_defaultZoneTemplate,["ondemand",false,[0,0,0],[],[0,0,0],CAMP_DEFAULT_DELAY,[10,10,10],[100,100,100]],adm_camp_fnc_initZone]
#define DEFAULT_PATROL_VALUES                       [-1,"","patrol",[0,0,0],[0,0,0,false],true,"",adm_patrol_defaultUnitTemplate,[[],[],[]],[0,0,0],adm_patrol_defaultZoneTemplate,[false],adm_patrol_fnc_initZone]
#define DEFAULT_CQC_VALUES                          [-1,"","cqc",[0,0,0],[0,0,0,false],true,"",adm_cqc_defaultUnitTemplate,[],0,adm_cqc_defaultZoneTemplate,[0,adm_cqc_forceFireEnabled,false],adm_cqc_fnc_initZone]



// WARNING
// Macros are sensitive for "," (comma), "(", ")" (parenthese) and " " (space).
// Provide only the asked numbers of arguments, without additional commas and without spaces beetween commas.
// Example:
//      PUSH_ALL(_units, [_unit] call getPlayersAroundUnit);
//      This will work as intended.
//      PUSH_ALL(_units, [_unit, 100] call getPlayersAroundUnit);
//      This won't work, as the macro identifies 100 as a third parameter.
//      Use AS_ARRAY_* instead of passing actual arrays.
//      PUSH_ALL(_units, AS_ARRAY_2(_unit, 100) call getPlayersAroundUnit);

// Creates private declaritions for arguments.
// Example:
//      GIVEN:
//      WHEN:
//          PVT_3(_unit,_group,_trigger); 
//      THEN:
//          private ["_unit","_group","_trigger"];
#define PVT_1(VAR1) private #VAR1
#define PVT_2(VAR1,VAR2) private [#VAR1,#VAR2]
#define PVT_3(VAR1,VAR2,VAR3) private [#VAR1,#VAR2,#VAR3]
#define PVT_4(VAR1,VAR2,VAR3,VAR4) private [#VAR1,#VAR2,#VAR3,#VAR4]
#define PVT_5(VAR1,VAR2,VAR3,VAR4,VAR5) private [#VAR1,#VAR2,#VAR3,#VAR4,#VAR5]
#define PVT_6(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6) private [#VAR1,#VAR2,#VAR3,#VAR4,#VAR5,#VAR6]
#define PVT_7(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7) private [#VAR1,#VAR2,#VAR3,#VAR4,#VAR5,#VAR6,#VAR7]
#define PVT_8(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8) private [#VAR1,#VAR2,#VAR3,#VAR4,#VAR5,#VAR6,#VAR7,#VAR8]
#define PVT_9(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9) private [#VAR1,#VAR2,#VAR3,#VAR4,#VAR5,#VAR6,#VAR7,#VAR8,#VAR9]


// Creates array selection for arguments. Only works if the array is a variable!
// Example:
//      GIVEN:
//          _strings = ["unit", "group", "trigger"];
//      WHEN:
//          SELECT_3(_strings,_unit,_group,_trigger); 
//      THEN:
//          _unit == "unit";
//          _group == "group";
//          _trigger == "trigger";
#define SELECT_1(ARRAY,VAR1) VAR1 = (ARRAY) select 0
#define SELECT_2(ARRAY,VAR1,VAR2) SELECT_1(ARRAY,VAR1); VAR2 = (ARRAY) select 1
#define SELECT_3(ARRAY,VAR1,VAR2,VAR3) SELECT_2(ARRAY,VAR1,VAR2); VAR3 = (ARRAY) select 2
#define SELECT_4(ARRAY,VAR1,VAR2,VAR3,VAR4) SELECT_3(ARRAY,VAR1,VAR2,VAR3); VAR4 = (ARRAY) select 3
#define SELECT_5(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5) SELECT_4(ARRAY,VAR1,VAR2,VAR3,VAR4); VAR5 = (ARRAY) select 4
#define SELECT_6(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6) SELECT_5(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5); VAR6 = (ARRAY) select 5
#define SELECT_7(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7) SELECT_6(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6); VAR7 = (ARRAY) select 6
#define SELECT_8(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8) SELECT_7(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7); VAR8 = (ARRAY) select 7
#define SELECT_9(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9) SELECT_8(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8); VAR9 = (ARRAY) select 8

// Creates private declarations and selection from given array for local variables.
// Example:
//      GIVEN:
//          _array = ["unit", "group", "trigger"];
//      WHEN:
//          DECLARE_3(_array,_unit,_group,_trigger);
//      THEN:
//          private ["_unit","_group","_trigger"];
//          _unit == "unit";
//          _group == "group";
//          _trigger == "trigger";
#define DECLARE_1(ARRAY,VAR1) \
    PVT_1(VAR1); \
    SELECT_1(ARRAY,VAR1)

#define DECLARE_2(ARRAY,VAR1,VAR2) \
    PVT_2(VAR1,VAR2); \
    SELECT_2(ARRAY,VAR1,VAR2)

#define DECLARE_3(ARRAY,VAR1,VAR2,VAR3) \
    PVT_3(VAR1,VAR2,VAR3); \
    SELECT_3(ARRAY,VAR1,VAR2,VAR3)

#define DECLARE_4(ARRAY,VAR1,VAR2,VAR3,VAR4) \
    PVT_4(VAR1,VAR2,VAR3,VAR4); \
    SELECT_4(ARRAY,VAR1,VAR2,VAR3,VAR4)

#define DECLARE_5(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5) \
    PVT_5(VAR1,VAR2,VAR3,VAR4,VAR5); \
    SELECT_5(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5)

#define DECLARE_6(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6) \
    PVT_6(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6); \
    SELECT_6(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6)

#define DECLARE_7(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7) \
    PVT_7(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7); \
    SELECT_7(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7)

#define DECLARE_8(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8) \
    PVT_8(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8); \
    SELECT_8(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8)

#define DECLARE_9(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9) \
    PVT_9(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9); \
    SELECT_9(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9)

// Creates private declarations and selection from _this array for arguments.
// Recommended for function/script argument processing.
// Example:
//      GIVEN:
//          _this = ["unit", "group", "trigger"];
//      WHEN:
//          FUN_ARGS_3(_unit,_group,_trigger);
//      THEN:
//          private ["_unit","_group","_trigger"];
//          _unit == "unit";
//          _group == "group";
//          _trigger == "trigger";
#define FUN_ARGS_1(VAR1) \
    DECLARE_1(_this,VAR1);

#define FUN_ARGS_2(VAR1,VAR2) \
    DECLARE_2(_this,VAR1,VAR2)

#define FUN_ARGS_3(VAR1,VAR2,VAR3) \
    DECLARE_3(_this,VAR1,VAR2,VAR3)

#define FUN_ARGS_4(VAR1,VAR2,VAR3,VAR4) \
    DECLARE_4(_this,VAR1,VAR2,VAR3,VAR4)

#define FUN_ARGS_5(VAR1,VAR2,VAR3,VAR4,VAR5) \
    DECLARE_5(_this,VAR1,VAR2,VAR3,VAR4,VAR5)

#define FUN_ARGS_6(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6) \
    DECLARE_6(_this,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6)

#define FUN_ARGS_7(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7) \
    DECLARE_7(_this,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7)

#define FUN_ARGS_8(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8) \
    DECLARE_8(_this,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8)

#define FUN_ARGS_9(VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9) \
    DECLARE_9(_this,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9)

// Adds a value to the end of an array.
// Example:
//      GIVEN:
//          _numbers = [1, 3, 5, 1];
//          _number = 1;
//      WHEN:
//          PUSH(_numbers, _number);
//      THEN:
//          _numbers == [1, 3, 5, 1, 1];
#define PUSH(ARRAY,VAL) (ARRAY) set [count (ARRAY), (VAL)]

// Adds all values from one array to another.
// Example:
//      GIVEN:
//          _numbers = [5, 9, 6];
//          _otherNumbers = [1, 3, 8];
//      WHEN:
//          PUSH_ALL(_numbers, _otherNumbers);
//      THEN:
//          _numbers == [5, 9, 6, 1, 3, 8];
#define PUSH_ALL(TO,FROM) { PUSH(TO,_x); } forEach (FROM)

// Filters the FROM array with a condition and adds the values that return true to the TO array.
// The values from the FROM array can be referenced by variable "_x".
// Example:
//      GIVEN:
//          _numbers = [];
//          _otherNumbers = [1, 2, 3, 6, 8];
//          _condition = {_x % 2 == 0};
//      WHEN:
//          FILTER_PUSH_ALL(_numbers, _otherNumbers, _condition);
//      THEN:
//          _numbers == [2, 6, 8];
#define FILTER_PUSH_ALL(TO,FROM,COND) { if (call COND) then { PUSH(TO,_x); }; } forEach (FROM)

// Finds the first element in FROM array that returns true for the COND condition. Returns nil otherwise.
// The values from the FROM array can be referenced by variable "_x".
// Example:
//      GIVEN:
//          _numbers = [];
//          _otherNumbers = [1, 2, 3, 6, 8];
//          _condition = {_x % 2 == 0};
//      WHEN:
//          
//      THEN:
//          FIND(_numbers,_condition) == 2;
#define FIRST(FROM,COND) { if (call COND) exitWith {_x}; } forEach (FROM)

// Selects a random value from an array.
// Example:
//      GIVEN:
//          _behaviours = ['AWARE', 'SAFE'];
//      WHEN:
//          _random = SELECT_RAND(_behaviours);
//      THEN:
//          _random == 'AWARE' or _random == 'AWARE'
#define SELECT_RAND(ARRAY) selectRandom (ARRAY)

// Adds 1 to the variable.
// Example:
//      GIVEN:
//          _i = 0;
//      WHEN:
//          INC(_i);
//      THEN:
//          _i == 1;
#define INC(VAR) VAR = VAR + 1

// Subtracts 1 from the variable.
// Example:
//      GIVEN:
//          _i = 3;
//      WHEN:
//          DEC(_i);
//      THEN:
//          _i == 2;
#define DEC(VAR) VAR = VAR - 1

// Creates an array from given arguments.
// Example:
//      GIVEN:
//      WHEN:
//          _array = AS_ARRAY_2('AWARE','SAFE');
//      THEN:
//          _array == ['AWARE', 'SAFE'];
#define AS_ARRAY_1(VAL1) [VAL1]
#define AS_ARRAY_2(VAL1,VAL2) [VAL1,VAL2]
#define AS_ARRAY_3(VAL1,VAL2,VAL3) [VAL1,VAL2,VAL3]
#define AS_ARRAY_4(VAL1,VAL2,VAL3,VAL4) [VAL1,VAL2,VAL3,VAL4]
#define AS_ARRAY_5(VAL1,VAL2,VAL3,VAL4,VAL5) [VAL1,VAL2,VAL3,VAL4,VAL5]

// Returns the longest axis of trigger.
// Example:
//      GIVEN:
//          _trigger = trigger;
//          triggerArea _trigger == [300, 400, -31.2, false];
//      WHEN:
//          _longestAxis = LONGEST_AXIS(_trigger);
//      THEN:
//          _longestAxis == 400;
#define LONGEST_AXIS(TRG) (if ((triggerArea (TRG)) select 0 > (triggerArea (TRG)) select 1) then {(triggerArea (TRG)) select 0} else {(triggerArea (TRG)) select 1})

// Creates a private declaration for a variable and enables instant assigment.
// Example:
//      GIVEN:
//      WHEN:
//          DECLARE(_group) = _x;
//      THEN:
//          private "_group"; _group = _x;
#define DECLARE(VAR) private #VAR; VAR

#endif //ADMIRAL_MACROS_H