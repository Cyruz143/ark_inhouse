#ifndef HULL3_MACROS_H
#define HULL3_MACROS_H

#include "\userconfig\hull3\log\global.h"

#define HULL3_VERSION                    "0.4.0"

#define CONCAT_ADDON_PATH(FILE)         x\ark\addons\hull3\FILE
#define ADDON_PATH(FILE)                #CONCAT_ADDON_PATH(FILE)

#define HULL3_BASE_CONFIG                "Hull3"
#define HULL3_MISSION_CONFIG_FILE        missionConfigFile >> HULL3_BASE_CONFIG
#define HULL3_CONFIG_FILE                configFile >> HULL3_BASE_CONFIG

#define CONFIG_TYPE_BOOL                0
#define CONFIG_TYPE_NUMBER              1
#define CONFIG_TYPE_TEXT                2
#define CONFIG_TYPE_ARRAY               3
#define CONFIG_TYPE_FUNCTIONS           [hull3_config_fnc_getBool, hull3_config_fnc_getNumber, hull3_config_fnc_getText, hull3_config_fnc_getArray]

#define DEFAULT_FACTION_NAME            "Default"
#define DEFAULT_TEMPLATE_NAME           "Default"

#define FACTION_CONFIG                  "Faction"
#define TYPE_CLASS_GEAR                 "Gear"
#define TYPE_FIELD_GEAR                 "gear"
#define TYPE_CLASS_UNIFORM              "Uniform"
#define TYPE_FIELD_UNIFORM              "uniform"

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

// Selects a random value from an array.
// Example:
//      GIVEN:
//          _behaviours = ['AWARE', 'SAFE'];
//      WHEN:
//          _random = SELECT_RAND(_behaviours);
//      THEN:
//          _random == 'AWARE' or _random == 'AWARE'
#define SELECT_RAND(ARRAY) (ARRAY) select (floor (random (count (ARRAY))))

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

#endif //HULL3_MACROS_H
