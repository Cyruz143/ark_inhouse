if (!hasInterface || !(ark_acre_gestures_enabled)) exitWith {};

ark_acre_gestures_var_blackListAnims = ["amovppnemstpsraswrfldnon","aadjppnemstpsraswrfldleft","aadjppnemstpsraswrfldright"];

ark_acre_gestures_fnc_stopGesture = {
    params ["_unit"];

    if (local _unit && { _unit getVariable ["ark_acre_gestures_var_onRadio", false] }) then {
        _unit playActionNow "GestureNod";
        _unit setVariable ["ark_acre_gestures_var_onRadio", false];
    };
};

["acre_startedSpeaking", {
    params ["_unit", "_onRadio", "_radio"];

    if (!_onRadio || { !isNull objectParent _unit } || { cameraView isEqualTo "GUNNER" } || { ace_common_isReloading } || { isWeaponDeployed _unit } || { animationState _unit in ark_acre_gestures_var_blackListAnims } ) exitWith {};
    _unit setVariable ["ark_acre_gestures_var_onRadio", true];

    private _hasVest = vest _unit != "";
    private _hasHeadgear = headgear _unit != "";
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
}] call CBA_fnc_addEventHandler;

["acre_stoppedSpeaking", {
    params ["_unit", "_onRadio"];

    if (!_onRadio || { !isNull objectParent _unit } || { cameraView isEqualTo "GUNNER" } || { ace_common_isReloading } || { isWeaponDeployed _unit } || { animationState _unit in ark_acre_gestures_var_blackListAnims } ) exitWith {};
    _unit call ark_acre_gestures_fnc_stopGesture;
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