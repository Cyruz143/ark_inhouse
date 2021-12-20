ark_mapTeleportEnabled = false;

ark_admin_tools_fnc_assignMapTeleport = {
    params ["_teleportEnabled"];

    ark_mapTeleportEnabled = _teleportEnabled;
    publicVariable "ark_mapTeleportEnabled";
};

ark_admin_tools_fnc_enableMapTeleport = {
    params ["_unit"];

    [["\x\ark\addons\ark_main\resources\click_enable.paa", 2.0], ["Map Click Teleport has been enabled"]] call CBA_fnc_notify;
    openMap [true, true];
    _unit onMapSingleClick {
        [_this, _pos] call ark_admin_tools_fnc_teleportUnit
    };
};

ark_admin_tools_fnc_teleportUnit = {
    params ["_unit","_pos"];

    _unit setPosWorld (_unit modelToWorldWorld [0,0,0]);
    [
        {
            (_this #0) setposATL [(_this #1),(_this #2),0];
            openMap [false, false];
            call ark_admin_tools_fnc_disableMapTeleport;
        },
        [_unit, _pos #0, _pos #1]
    ] call CBA_fnc_execNextFrame;
};

ark_admin_tools_fnc_disableMapTeleport = {
    [["\x\ark\addons\ark_main\resources\click_disable.paa", 2.0], ["Map Click Teleport has been disabled"]] call CBA_fnc_notify;
    onMapSingleClick "";
};

ark_admin_tools_eh_mapClickTeleport = {
    "ark_mapTeleportEnabled" addPublicVariableEventHandler {
        if (_this #1) then {
            player call ark_admin_tools_fnc_enableMapTeleport;
        } else {
            call ark_admin_tools_fnc_disableMapTeleport;
        };
    };
};

call ark_admin_tools_eh_mapClickTeleport;