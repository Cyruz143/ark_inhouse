if (isNil "adm_isInitialized" && { !(adm_isInitialized) }) exitWith {};

call compile preProcessFileLineNumbers 'x\ark\addons\ark_navy\module_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_navy\common_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_navy\paradrop_functions.sqf';