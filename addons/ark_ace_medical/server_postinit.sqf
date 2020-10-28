{
    if ((toLower briefingName) find _x != -1) exitWith {
        ["ace_medical_playerDamageThreshold", 1, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_statemachine_cardiacArrestTime", 60, true, "server"] call CBA_settings_fnc_set;
    };
} forEach ["ark_tvt","ark_gtvt","ark_cotvt","ark44_tvt","ark44_gtvt","ark44_cotvt"];

ark_ace_medical_fnc_vehKilled = {
    params ["_veh"];

    if (isNull _veh || { !(_veh isKindOf "LandVehicle") } ) exitWith {};

    private _crew = crew _veh;
    if (_crew isEqualTo []) exitWith {};

    if ((_crew select {isPlayer _x}) isEqualTo []) then {
        {_x setDamage 1} forEach _crew;
        diag_log format ["[ARK] (ACE Medical) - Killed AI %1 inside a dead vehicle: %2",_crew,_veh];
    } else {
        {_x setPos (_veh getPos [5 + (random 2), random 360])} forEach _crew;
        diag_log format ["[ARK] (ACE Medical) - Ejected players %1 from a dead vehicle: %2",_crew,_veh];
    };
};

addMissionEventHandler ["EntityKilled",{call ark_ace_medical_fnc_vehKilled}];