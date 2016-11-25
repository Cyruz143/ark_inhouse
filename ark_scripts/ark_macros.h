#ifndef ARK_MACROS_H
#define ARK_MACROS_H

#define ARK_SCRIPTS_VERSION            "0.4.4"

#define CONCAT_ADDON_PATH(FILE)        x\ark\addons\ark_scripts\FILE
#define ADDON_PATH(FILE)               #CONCAT_ADDON_PATH(FILE)

#define CONCAT_HULL_PATH(FILE)         x\ark\addons\hull3\FILE
#define HULL_PATH(FILE)                #CONCAT_HULL_PATH(FILE)

#define CONCAT_ADM_PATH(FILE)          x\ark\addons\admiral\FILE
#define ADM_PATH(FILE)                 #CONCAT_ADM_PATH(FILE)

#define ARK_BASE_CONFIG                "ARK"
#define ARK_MISSION_CONFIG_FILE        missionConfigFile >> ARK_BASE_CONFIG
#define ARK_CONFIG_FILE                configFile >> ARK_BASE_CONFIG
#define ARK_SCRIPTS_CONFIG_FILE        configFile >> ARK_BASE_CONFIG >> "Scripts"

#define CONFIG_TYPE_BOOL                0
#define CONFIG_TYPE_NUMBER              1
#define CONFIG_TYPE_TEXT                2
#define CONFIG_TYPE_ARRAY               3

#define IF_IS_SERVER                    if !isServer exitWith {}

#define DEBUG  if (ark_scripts_debugEnabled) then

#define ARK_SCRIPTS_DEBUG_FORMAT        "%1         [%2]    ARKScript                        %3" // %1: time, %2: debug level,%3 formatted message
#define ARK_SCRIPTS_DEBUG_HINT_FORMAT   "ARKScript\n%1\n%2\n%3" // %1: time, %2: debug level,%3 formatted message
#define DEBUG_INFO                      "INFO"
#define DEBUG_WARN                      "WARN"
#define DEBUG_ERROR                     "ERROR"

#define SCRIPT_DEFAULT_SENTRY_STANCE        "MIDDLE"
#define SCRIPT_DEFAULT_SENTRY_SKILL         0.2
#define SCRIPT_DEFAULT_SENTRY_MODE          "YELLOW"
#define SCRIPT_DEFAULT_SENTRY_BEHAVIOUR     "AWARE"
#define SCRIPT_DEFAULT_SENTRY_DISABLED      ["COVER"]
#define SCRIPT_DEFAULT_ENABLE_NIGHTVISION   true

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

// Creates private declarations for arguments.
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
#define PUSH(ARRAY,VAL) (ARRAY) pushBack (VAL)

// Adds all values from one array to another.
// Example:
//      GIVEN:
//          _numbers = [5, 9, 6];
//          _otherNumbers = [1, 3, 8];
//      WHEN:
//          PUSH_ALL(_numbers, _otherNumbers);
//      THEN:
//          _numbers == [5, 9, 6, 1, 3, 8];
#define PUSH_ALL(TO,FROM) { PUSH(TO,_x); } foreach (FROM)

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
#define FILTER_PUSH_ALL(TO,FROM,COND) { if (call COND) then { PUSH(TO,_x); }; } foreach (FROM)

// Selects a random value from an array.
// Example:
//      GIVEN:
//          _behaviours = ['AWARE', 'SAFE'];
//      WHEN:
//          _random = SELECT_RAND(_behaviours);
//      THEN:
//          _random == 'AWARE' or _random == 'AWARE'
#define SELECT_RAND(ARRAY) (ARRAY) select (floor (random (count (ARRAY))))

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

// Adds weapon to unit if it doesn't have one already.
#define TRY_ADD_WEAPON(UNIT,WEAPON) if (!((UNIT) hasWeapon (WEAPON))) then {(UNIT) addWeapon (WEAPON);};

// Creates a private declaration for a variable and enables instant assigment.
// Example:
//      GIVEN:
//      WHEN:
//          DECLARE(_group) = _x;
//      THEN:
//          private "_group"; _group = _x;
#define DECLARE(VAR) private #VAR; VAR

// Generates an array of integers between the given interval. Left and right inclusive.
// Example:
//      GIVEN:
//      WHEN:
//          _numbers = RANGE(0,4);
//          _empty = RANGE(2,0);
//      THEN:
//          _numbers == [0, 1, 2, 3, 4];
//          _empty == [];
#define RANGE(FROM,TO) \
    call { \
        DECLARE(_range) = []; \
        for "_i" from FROM to TO do { \
            PUSH(_range,_i); \
        }; \
        _range; \
    }

#endif //ARK_MACROS_H