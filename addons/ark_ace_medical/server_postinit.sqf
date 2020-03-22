private _missionName = toLower briefingName;

if ((_missionName find "ark_tvt") != -1 || { (_missionName find "ark_gtvt") != -1 } || { (_missionName find "ark_cotvt") != -1 } ) exitWith {
    ["ace_medical_playerDamageThreshold", 1, true, "server"] call CBA_settings_fnc_set;
};