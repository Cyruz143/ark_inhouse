if ((briefingName find "ark_race") isNotEqualTo -1) then {
    diag_log "[ARK] (RACE) - INFO - Race mission detected";
    call compileScript ["x\ark\addons\ark_race\functions\client_functions.sqf"];
};