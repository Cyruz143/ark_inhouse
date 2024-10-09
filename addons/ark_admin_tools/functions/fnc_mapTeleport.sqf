ark_admin_tools_fnc_enableMapTeleport = {
    params ["_unit"];

    [["\x\ark\addons\ark_main\resources\click_enable.paa", 2.0], ["Click on map to teleport"]] call CBA_fnc_notify;
    openMap [true, true];
    _unit onMapSingleClick {
        [_this, _pos] call ark_admin_tools_fnc_teleportUnit;
    };
};

ark_admin_tools_fnc_teleportUnit = {
    params ["_unit", "_pos"];

    [
        {
            if (surfaceIsWater (_this #1)) then {
                (_this #0) setPosASL [(_this #1) #0, (_this #1) #1, 0];
            } else {
                (_this #0) setPosATL [(_this #1) #0, (_this #1) #1, 0];
            };
            openMap [false, false];
            onMapSingleClick "";
        },
        [_unit, _pos]
    ] call CBA_fnc_execNextFrame;
};
