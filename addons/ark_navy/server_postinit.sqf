[
    {(!isNil "adm_isInitialized") && adm_isInitialized},
    {
        call compile preProcessFileLineNumbers 'x\ark\addons\ark_navy\common_functions.sqf';
        call compile preProcessFileLineNumbers 'x\ark\addons\ark_navy\paradrop_functions.sqf';
        ark_navy_isInitialised = true;
    },
    [],
    30,
    {diag_log "[ARK] (Navy) - Admiral not loaded - Disabling";}
] call CBA_fnc_waitUntilAndExecute;