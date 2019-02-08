if (isNil "adm_isInitialized" && { !(adm_isInitialized) }) exitWith {};

call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\module_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\common_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\paradrop_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\insert_functions.sqf';
call compile preProcessFileLineNumbers 'x\ark\addons\ark_rotor\barrelbomb_functions.sqf';