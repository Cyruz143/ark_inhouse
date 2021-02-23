{
    if ((toLower briefingName) find _x isNotEqualTo -1) exitWith {
        ["ace_medical_playerDamageThreshold", 1, true, "server"] call CBA_settings_fnc_set;
        ["ace_medical_fatalDamageSource", 2, true, "server"] call CBA_settings_fnc_set;
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

// Thanks to @diwako for letting us use this
["ace_medical_woundReceived", {
    params ["_unit", "_bodyPart", "_damage", "", "_typeOfDamage"];
    if (isPlayer _unit || {ace_medical_fatalDamageSource isEqualTo 0}) exitWith {};
    [{
        params ["_unit", "_bodyPart", "_damage", "_typeOfDamage"];
        private _bodyPartN = ["head", "body", "leftarm", "rightarm", "leftleg", "rightleg"] find toLower _bodyPart;
        if (_bodyPartN < 2) exitWith {};

        if ((_typeOfDamage isEqualTo "") || {isNil {ace_medical_damage_allDamageTypesData getVariable _typeOfDamage}}) then {
            _typeOfDamage = "unknown";
        };
        private _damageTypeInfo = [ace_medical_damage_allDamageTypesData getVariable _typeOfDamage] param [0, [[], false, []]];
        _damageTypeInfo params ["_thresholds"];

        (_unit getVariable ["ace_medical_bodyPartDamage", [0,0,0,0,0,0]]) params ["", "", "_leftarmDamage", "_rightarmDamage", "_leftlegDamage", "_rightlegDamage"];
        {
            _x params ["_thresholdMinDam", "_thresholdWoundCount"];
            if (_damage > _thresholdMinDam) exitWith {
                private _woundDamage = _damage / (_thresholdWoundCount max 1);
                private _limbThreshhold = 12 * ace_medical_AIDamageThreshold;
                private _vitalDamage = ((_leftarmDamage + _rightarmDamage + _leftlegDamage + _rightlegDamage) - _limbThreshhold) max 0;
                private _chanceFatal = 1 - exp -((_vitalDamage/ace_medical_const_fatalSumDamageWeibull_L)^ace_medical_const_fatalSumDamageWeibull_K);

                if (_chanceFatal > random 1) then {
                    ["ace_medical_FatalInjury", _unit] call CBA_fnc_localEvent;
                };
            };
        } forEach _thresholds;
    }, [_unit, _bodyPart, _damage, _typeOfDamage]] call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;