if (!ark_ai_voices_enabled) exitWith {};

ark_ai_voices_namespace = createHashMap;
ark_ai_voices_deathSounds = [
    "x\ark_sfx\addons\ark_sfx_death\data\death_1.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_2.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_3.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_4.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_5.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_6.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_7.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_8.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_9.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_10.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_11.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_12.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_13.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_14.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_15.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_16.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_17.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_18.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_19.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_20.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_21.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_22.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_23.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_24.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_25.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_26.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_27.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_28.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_29.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_30.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_31.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_32.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_33.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_34.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_35.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_36.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_37.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_38.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_39.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_40.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_41.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_42.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_43.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_44.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_45.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_46.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_47.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_48.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_49.wav",
    "x\ark_sfx\addons\ark_sfx_death\data\death_50.wav"
];

call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_firing.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_killed.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_reloading.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_eh_suppressed.sqf"];
call compileScript ["x\ark\addons\ark_ai_voices\functions\fnc_selectSound.sqf"];

["CAManBase", "FiredMan", {call ark_ai_voices_fnc_eh_firing}] call CBA_fnc_addClassEventHandler;
["CAManBase", "Killed", {call ark_ai_voices_fnc_eh_killed}] call CBA_fnc_addClassEventHandler;
["CAManBase", "GestureChanged", {call ark_ai_voices_fnc_eh_reloading}] call CBA_fnc_addClassEventHandler;
["CAManBase", "Suppressed", {call ark_ai_voices_fnc_eh_suppressed}] call CBA_fnc_addClassEventHandler;