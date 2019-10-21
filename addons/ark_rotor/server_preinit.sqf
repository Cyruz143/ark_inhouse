if (isNil "adm_isInitialized" && { !(adm_isInitialized) }) exitWith {};

call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\functions\module_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\functions\common_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\functions\paradrop_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\functions\insert_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\functions\barrelbomb_functions.sqf';