{
    if ((toLower briefingName) find _x isNotEqualTo -1) exitWith {
        ["ace_medical_playerDamageThreshold", 1, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_fatalDamageSource", 2, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_statemachine_cardiacArrestTime", 60, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_deathChance", 1, true, "server"] call CBA_settings_fnc_set;
    };
} forEach ["ark_tvt","ark_gtvt","ark_cotvt","ark44_tvt","ark44_gtvt","ark44_cotvt"];

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

addMissionEventHandler ["EntityKilled",{call ark_ace_medical_fnc_vehKilled}];

// Thanks to @diwako for letting us use this
["ace_medical_woundReceived", {
    params ["_unit"];
    if (isPlayer _unit) exitWith {};
    [{
        params ["_unit", "", "", "_typeOfDamage"];
        if ((_typeOfDamage isEqualTo "") || {isNil {ace_medical_damage_allDamageTypesData getVariable _typeOfDamage}}) then {
            _typeOfDamage = "unknown";
        };
        private _bodyPartDamage = _unit getVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0]];
        _bodyPartDamage params ["", "", "_leftArmDamage", "_rightArmDamage", "_leftLegDamage", "_rightLegDamage"];

        private _damageThreshold = (_unit getVariable ["ace_medical_damageThreshold", ace_medical_AIDamageThreshold]) * 12;

        if ((_leftArmDamage + _rightArmDamage + _leftLegDamage + _rightLegDamage) > _damageThreshold) then {
            ["ace_medical_FatalInjury", _unit] call CBA_fnc_localEvent;
        };
    }, _this] call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;