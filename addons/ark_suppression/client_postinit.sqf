if (!hasInterface || !(ark_suppression_enabled)) exitWith {};

ark_suppression_namespace = call CBA_fnc_createNamespace;
ark_suppression_amount = 0;
player addEventHandler ["Suppressed", {call ark_suppression_fnc_shotNear}];

ark_suppression_fnc_shotNear = {
    params ["_unit", "_distance", "", "", "", "_ammoClassName"];

    private _caliber = ark_suppression_namespace getVariable _ammoClassName;

    if (isNil "_caliber") then {
        _caliber = getNumber (configFile >> "CfgAmmo" >> _ammoClassName >> "caliber");
        ark_suppression_namespace setVariable [_ammoClassName, _caliber];
    };

    if (_caliber isEqualTo "") exitWith {};

    private _suppressed = (_caliber / _distance) max 2;
    ark_suppression_amount = ark_suppression_amount + _suppressMod

};