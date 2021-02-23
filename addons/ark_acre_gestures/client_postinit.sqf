if (is3DEN || {!hasInterface || {!(ark_acre_gestures_enabled)}}) exitWith {};

ark_acre_gestures_blackListAnims = ["amovppnemstpsraswrfldnon","aadjppnemstpsraswrfldleft","aadjppnemstpsraswrfldright"];
ark_acre_gestures_binoClasses = "getText (_x >> 'simulation') isEqualTo 'Binocular'" configClasses (configFile >> "CfgWeapons") apply {configName _x};

ark_acre_gestures_fnc_stopGesture = {
    params ["_unit"];

    if (_unit getVariable ["ark_acre_gestures_var_onRadio", false]) then {
        _unit playActionNow "acre_radio_stop";
        _unit setVariable ["ark_acre_gestures_var_onRadio", false];
    };
};

["acre_startedSpeaking", {
    params ["_unit", "_onRadio", "_radio"];

    if (!_onRadio ||
        { !isNull objectParent _unit } ||
        { !(cameraView in ["INTERNAL","EXTERNAL"]) } ||
        { ace_common_isReloading } ||
        { isWeaponDeployed _unit } ||
        { animationState _unit in ark_acre_gestures_blackListAnims } ||
        { currentWeapon _unit in ark_acre_gestures_binoClasses } ) exitWith {};

    private _hasVest = vest _unit isNotEqualTo "";
    private _hasHeadgear = headgear _unit isNotEqualTo "";
    if (!_hasVest && !_hasHeadgear) exitWith {};

    private _shortRange = "343" in _radio;

    // 343 is vest mounted
    if (_hasVest && _shortRange) then {
        _unit playActionNow "acre_radio_vest";
    };

    // 148/152 is ear piece
    if (_hasHeadgear && !_shortRange) then {
        _unit playActionNow "acre_radio_helmet";
    };

    _unit setVariable ["ark_acre_gestures_var_onRadio", true];
}] call CBA_fnc_addEventHandler;

["acre_stoppedSpeaking", {
    params ["_unit", "_onRadio"];

    if (!_onRadio) exitWith {};

    // If the unit started a reload while already talking, need to wait to finish to not delete a magazine
    [
        {!ace_common_isReloading},
        {
            // Wait 1 frame as mag doesn't report as loaded til events completed
            [ark_acre_gestures_fnc_stopGesture, _this] call CBA_fnc_execNextFrame;
        },
        _unit
    ] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;

player addEventHandler ["GetInMan", {
    params ["_unit"];

    _unit call ark_acre_gestures_fnc_stopGesture;
}];

player addEventHandler ["WeaponDeployed", {
    params ["_unit", "_isDeployed"];

    if (_isDeployed) then {
        _unit call ark_acre_gestures_fnc_stopGesture;
    };
}];