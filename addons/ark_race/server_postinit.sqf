if ((briefingName find "ark_race") isNotEqualTo -1) then {
    diag_log "[ARK] (RACE) - INFO - Race mission detected";
    call compile preProcessFileLineNumbers 'x\ark\addons\ark_race\functions\server_functions.sqf';
};