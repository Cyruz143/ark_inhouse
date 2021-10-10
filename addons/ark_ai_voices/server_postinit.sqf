if (!ark_ai_voices_enabled) exitWith {};

ark_ai_voices_namespace = call CBA_fnc_createNamespace;
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_debug.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_selectSound.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_firing.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_suppressed.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_reloading.sqf"];

["CAManBase", "FiredMan", {call ark_ai_voices_fnc_firing}] call CBA_fnc_addClassEventHandler;
["CAManBase", "Suppressed", {call ark_ai_voices_fnc_suppressed}] call CBA_fnc_addClassEventHandler;
["CAManBase", "GestureChanged", {call ark_ai_voices_fnc_reloading}] call CBA_fnc_addClassEventHandler;