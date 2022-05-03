player addEventHandler ["GetInMan", {call ark_volume_fnc_setVolume}];
player addEventHandler ["GetOutMan", {call ark_volume_fnc_restoreVolume}];

ark_volume_fnc_setVolume = {
    params ["_unit", "", "_vehicle"];

    if (isNull _vehicle) exitWith {};

    if (_vehicle isKindOf "Car" || { _vehicle isKindOf "Truck" } || { _vehicle isKindOf "Tank" }) then {
        1 fadeSound ark_volume_ground;
        ark_volume_ground call ark_volume_fnc_notify;
    };

    if (_vehicle isKindOf "Ship") then {
        1 fadeSound ark_volume_water;
        ark_volume_water call ark_volume_fnc_notify;
    };

    if (_vehicle isKindOf "Air") then {
        1 fadeSound ark_volume_air;
        ark_volume_air call ark_volume_fnc_notify;
    };
};

ark_volume_fnc_restoreVolume = {
    1 fadeSound 1;
    1 call ark_volume_fnc_notify;
};

ark_volume_fnc_notify = {
    params ["_vol"];

    if (ark_volume_notification) then {
        private _str = format ["Volume set to %1%2", (_vol * 100),"%"];
        [["\a3\ui_f\data\igui\cfg\simpletasks\types\listen_ca.paa", 2.0], [_str], true] call CBA_fnc_notify;
    };
};

["CBA_SettingChanged", {
    params ["_setting"];

    if (_setting isEqualTo "ark_volume_ground" || { _setting isEqualTo "ark_volume_water" } || { _setting isEqualTo "ark_volume_air" }) then {
        [player,nil,objectParent player] call ark_volume_fnc_setVolume;
    };
}] call CBA_fnc_addEventHandler;