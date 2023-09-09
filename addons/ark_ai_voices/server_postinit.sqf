if (!ark_ai_voices_enabled) exitWith {};

ark_ai_voices_namespace = createHashMap;
ark_ai_voices_deathSounds = [
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_01.wss",
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_02.wss",
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_03.wss",
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_04.wss",
    "a3\sounds_f_orange\missionsfx\pastambiences\idaphospitaltent\orange_idaphospitaltent_pain_06.wss"
];

call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_firing.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_killed.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_reloading.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_suppressed.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_selectSound.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_selectDeathSound.sqf"];

["CAManBase", "FiredMan", {call ark_ai_voices_fnc_eh_firing}] call CBA_fnc_addClassEventHandler;
["CAManBase", "Killed", {call ark_ai_voices_fnc_eh_killed}] call CBA_fnc_addClassEventHandler;
["CAManBase", "GestureChanged", {call ark_ai_voices_fnc_eh_reloading}] call CBA_fnc_addClassEventHandler;
["CAManBase", "Suppressed", {call ark_ai_voices_fnc_eh_suppressed}] call CBA_fnc_addClassEventHandler;