// Set TvT medical settings
{
    if ((toLowerANSI briefingName) find _x isNotEqualTo -1) exitWith {
        ["ace_medical_playerDamageThreshold", 1, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_fatalDamageSource", 2, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_statemachine_cardiacArrestTime", 60, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_deathChance", 1, true, "server"] call CBA_settings_fnc_set;
    };
} forEach ["ark_tvt","ark_gtvt","ark_cotvt","ark44_tvt","ark44_gtvt","ark44_cotvt"];