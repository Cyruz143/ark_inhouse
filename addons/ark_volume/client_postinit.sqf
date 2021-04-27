player addEventHandler ["GetInMan", {call ark_volume_fnc_setVolume}];
player addEventHandler ["GetOutMan", {call ark_volume_fnc_restoreVolume}];

ark_volume_fnc_setVolume = {
    params ["_unit", "", "_vehicle"];

    if (isNull _vehicle) exitWith {};

    if (_vehicle isKindOf "Car" || { _vehicle isKindOf "Truck" } || { _vehicle isKindOf "Tank" }) then {
        1 fadeSound ark_volume_groundVolume;
    };

    if (_vehicle isKindOf "Ship") then {
        1 fadeSound ark_volume_waterVolume;
    };

    if (_vehicle isKindOf "Air") then {
        1 fadeSound ark_volume_airVolume;
    };
};

ark_volume_fnc_restoreVolume = {
    1 fadeSound 1;
};

["CBA_SettingChanged", {
    params ["_setting"];

    if (_setting isEqualTo "ark_volume_ground" || { _setting isEqualTo "ark_volume_water" } || { _setting isEqualTo "ark_volume_air" }) then {
        [player,nil,objectParent player] call ark_volume_fnc_setVolume;
    };
}] call CBA_fnc_addEventHandler;