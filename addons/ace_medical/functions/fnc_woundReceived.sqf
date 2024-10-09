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