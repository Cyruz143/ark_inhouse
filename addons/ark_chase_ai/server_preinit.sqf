if (isNil "adm_isInitialized" && { !(adm_isInitialized) }) exitWith {};

call compileScript ["x\ark\addons\ark_chase_ai\functions\fnc_module.sqf"];
call compileScript ["x\ark\addons\ark_chase_ai\functions\fnc_init.sqf"];
call compileScript ["x\ark\addons\ark_chase_ai\functions\fnc_enableSpawning.sqf"];
call compileScript ["x\ark\addons\ark_chase_ai\functions\fnc_unitSpawner.sqf"];
call compileScript ["x\ark\addons\ark_chase_ai\functions\fnc_createUnit.sqf"];
call compileScript ["x\ark\addons\ark_chase_ai\functions\fnc_findSpawnPos.sqf"];
call compileScript ["x\ark\addons\ark_chase_ai\functions\fnc_nearEnemies.sqf"];
call compileScript ["x\ark\addons\ark_chase_ai\functions\fnc_doMove.sqf"];