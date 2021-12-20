if (!ark_ai_voices_enabled) exitWith {};

ark_ai_voices_namespace = call CBA_fnc_createNamespace;
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_firing.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_reloading.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_suppressed.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_selectSound.sqf"];

["CAManBase", "FiredMan", {call ark_ai_voices_fnc_eh_firing}] call CBA_fnc_addClassEventHandler;
["CAManBase", "GestureChanged", {call ark_ai_voices_fnc_eh_reloading}] call CBA_fnc_addClassEventHandler;
["CAManBase", "Suppressed", {call ark_ai_voices_fnc_eh_suppressed}] call CBA_fnc_addClassEventHandler;