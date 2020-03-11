if ((briefingName find "ark_race") != -1) then {
    diag_log "[ARK] (RACE) - INFO - Race mission detected";
    call compile preProcessFileLineNumbers 'x\ark\addons\ark_race\functions\client_functions.sqf';
};