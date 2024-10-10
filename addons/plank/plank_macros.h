#ifndef PLANK_MACROS_H
#define PLANK_MACROS_H

#define PLANK_VERSION                           2.0.0
#define STR_PLANK_VERSION                       "2.0.0"

#define CONCAT_ADDON_PATH(FILE)                 x\ark\addons\plank\FILE
#define ADDON_PATH(FILE)                        #CONCAT_ADDON_PATH(FILE)

#define PLANK_BASE_CONFIG                       "Plank"
#define PLANK_MISSION_CONFIG_FILE               missionConfigFile >> PLANK_BASE_CONFIG
#define PLANK_CONFIG_FILE                       configFile >> PLANK_BASE_CONFIG

#define FORTS_DATA                              plank_deploy_fortData
#define GET_FORT_DATA(FORTIDX,IDX)              (FORTS_DATA) select (FORTIDX) select (IDX)
#define GET_FORT_DISPLAY_NAME(IDX)              (GET_FORT_DATA(IDX,0))
#define GET_FORT_CLASS_NAME(IDX)                (GET_FORT_DATA(IDX,1))
#define GET_FORT_DISTANCE(IDX)                  (GET_FORT_DATA(IDX,2))
#define GET_FORT_DIRECTION(IDX)                 (GET_FORT_DATA(IDX,3))
#define GET_FORT_DIRECTION_RANGE(IDX)           (GET_FORT_DATA(IDX,4))
#define GET_FORT_CODE(IDX)                      (GET_FORT_DATA(IDX,5))

#define STATE_PLACEMENT_INIT                    0
#define STATE_PLACEMENT_IN_PROGRESS             1
#define STATE_PLACEMENT_DONE                    2
#define STATE_PLACEMENT_CANCELLED               3

#define STR_HEIGHT_MODES                        ["Snap to Terrain", "Relative to Player"]
#define COLOR_HEIGHT_MODES                      [[0, 1, 0, 1], [1, 0, 0, 1]]
#define RELATIVE_TO_TERRAIN                     0
#define RELATIVE_TO_UNIT                        1

#define STR_LOCK_MODES                          ["Lock", "Unlock"]
#define COLOR_LOCK_MODES                        [[0, 1, 0, 1], [1, 0, 0, 1]]
#define LOCK_MODE_UNLOCKED                      0
#define LOCK_MODE_LOCKED                        1

#define DEFAULT_FORT_INDEX                      0
#define MIN_HEIGHT                              -10
#define MAX_HEIGHT                              10
#define DEFAULT_HEIGHT                          0
#define MIN_HORIZONTAL_OFFSET                   -10
#define MAX_HORIZONTAL_OFFSET                   10
#define DEFAULT_HORIZONTAL_OFFSET               0
#define MAX_DISTANCE_ADD                        20
#define DEFAULT_DISTANCE                        0
#define DIRECTION_RANGE                         40
#define DEFAULT_DIRECTION                       0
#define MIN_PITCH                               -120
#define MAX_PITCH                               120
#define DEFAULT_PITCH                           0
#define MIN_BANK                                -180
#define MAX_BANK                                360
#define DEFAULT_BANK                            0


#define SETTINGS_DIALOG_IDD                             143701

#define SETTINGS_BACKGROUND_IDC                         143800
#define SETTINGS_EXPORT_BACKGROUND_IDC                  143805
#define SETTINGS_EXPORT_BUTTON_IDC                      143806
#define SETTINGS_FORT_COMBO_IDC                         143811
#define SETTINGS_CONFIRM_BUTTON_IDC                     143812
#define SETTINGS_CANCEL_BUTTON_IDC                      143813
#define SETTINGS_LOCK_MODE_BUTTON_IDC                   143814
#define SETTINGS_PICKUP_BUTTON_IDC                      143815
#define SETTINGS_HEIGHT_TITLE_IDC                       143830
#define SETTINGS_HEIGHT_SHORTCUT_PICTURE_IDC            143831
#define SETTINGS_HEIGHT_SLIDER_IDC                      143835
#define SETTINGS_HEIGHT_RESET_BUTTON_IDC                143836
#define SETTINGS_HEIGHT_VALUE_IDC                       143837
#define SETTINGS_VERTICAL_MODE_CHECKBOX_IDC             143838
#define SETTINGS_HORIZONTAL_OFFSET_TITLE_IDC            143840
#define SETTINGS_HORIZONTAL_OFFSET_SHORTCUT_PICTURE_IDC 143841
#define SETTINGS_HORIZONTAL_OFFSET_SLIDER_IDC           143845
#define SETTINGS_HORIZONTAL_OFFSET_RESET_BUTTON_IDC     143846
#define SETTINGS_HORIZONTAL_OFFSET_VALUE_IDC            143847
#define SETTINGS_DISTANCE_TITLE_IDC                     143850
#define SETTINGS_DISTANCE_SHORTCUT_PICTURE_IDC          143851
#define SETTINGS_DISTANCE_SLIDER_IDC                    143855
#define SETTINGS_DISTANCE_RESET_BUTTON_IDC              143856
#define SETTINGS_DISTANCE_VALUE_IDC                     143857
#define SETTINGS_DIRECTION_TITLE_IDC                    143860
#define SETTINGS_DIRECTION_SHORTCUT_TEXT_IDC            143861
#define SETTINGS_DIRECTION_SHORTCUT_PICTURE_IDC         143862
#define SETTINGS_DIRECTION_SLIDER_IDC                   143865
#define SETTINGS_DIRECTION_RESET_BUTTON_IDC             143866
#define SETTINGS_DIRECTION_VALUE_IDC                    143867
#define SETTINGS_PITCH_TITLE_IDC                        143870
#define SETTINGS_PITCH_SHORTCUT_TEXT_IDC                143871
#define SETTINGS_PITCH_SHORTCUT_PICTURE_IDC             143872
#define SETTINGS_PITCH_SLIDER_IDC                       143875
#define SETTINGS_PITCH_RESET_BUTTON_IDC                 143876
#define SETTINGS_PITCH_VALUE_IDC                        143877
#define SETTINGS_BANK_TITLE_IDC                         143880
#define SETTINGS_BANK_SHORTCUT_TEXT_IDC                 143881
#define SETTINGS_BANK_SHORTCUT_PICTURE_IDC              143882
#define SETTINGS_BANK_SLIDER_IDC                        143885
#define SETTINGS_BANK_RESET_BUTTON_IDC                  143886
#define SETTINGS_BANK_VALUE_IDC                         143887

#define FORT_LIST_ROW_INDEX                             0
#define FORT_CONFIRM_LOCK_ROW_INDEX                     1
#define HEIGHT_ROW_INDEX                                2
#define HORIZONTAL_OFFSET_ROW_INDEX                     3
#define DISTANCE_ROW_INDEX                              4
#define PITCH_ROW_INDEX                                 5
#define BANK_ROW_INDEX                                  6
#define DIRECTION_ROW_INDEX                             7

#define FORT_COMBO_NONE_NAME                            "None"

#define PLANK_HEIGHT_SENSITIVITY        15
#define PLANK_HORIZONTAL_SENSITIVITY    25
#define PLANK_PITCH_SENSITIVITY         8
#define PLANK_BANK_SENSITIVITY          8

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
#define SELECT_10(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9,VAR10) SELECT_9(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9); VAR10 = (ARRAY) select 9
#define SELECT_11(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9,VAR10,VAR11) SELECT_10(ARRAY,VAR1,VAR2,VAR3,VAR4,VAR5,VAR6,VAR7,VAR8,VAR9,VAR10); VAR11 = (ARRAY) select 10

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

#endif //PLANK_MACROS_H