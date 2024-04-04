ark_ace_medical_fnc_vehKilled = {
    params ["_veh"];

    if (isNull _veh || { !(_veh isKindOf "LandVehicle") } ) exitWith {};

    private _crew = crew _veh;
    if (_crew isEqualTo []) exitWith {};

    if ((_crew select {isPlayer _x}) isEqualTo []) then {
        {["ace_fire_burn", [_x, (3 + random 1)]] call CBA_fnc_globalEvent} forEach _crew;
        ["ACE Medical","INFO","fnc_vehKilled"," AI in dead vehicle burning",_crew, _veh] call ark_admin_tools_fnc_log;
    } else {
        {[_x] call ace_common_fnc_unloadPerson} forEach _crew;
        ["ACE Medical","INFO","fnc_vehKilled"," Ejected players from dead vehicle",_crew, _veh] call ark_admin_tools_fnc_log;
    };
};

//addMissionEventHandler ["EntityKilled",{call ark_ace_medical_fnc_vehKilled}];