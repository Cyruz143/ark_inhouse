ark_admin_tools_fnc_initVariables = {
    ark_aiDebugEnabled = false;
    ark_mapTeleportEnabled = false;
    call ark_admin_tools_eh_mapClickTeleport;
};

ark_admin_tools_fnc_isHost = {
    private _adminWhiteList = ["76561197969272205", "76561198001868030", "76561197980517821", "76561197972043388"];
    !isMultiplayer || {serverCommandAvailable "#logout"} || (getplayerUID player) in _adminWhiteList;
};

ark_admin_tools_fnc_isAdmiralEnabled = {
    getNumber (missionConfigFile >> "Admiral" >> "isEnabled") == 1;
};

ark_admin_tools_fnc_isTownSweep = {
    getNumber(missionConfigFile >> 'TownSweep' >> 'isEnabled') == 1
};

ark_admin_tools_fnc_assignMapTeleport = {
    params ["_teleportEnabled"];

    ark_mapTeleportEnabled = _teleportEnabled;
    publicVariable "ark_mapTeleportEnabled";
};

ark_admin_tools_fnc_enableMapTeleport = {
    params ["_player"];

    hintSilent "Map Click Teleport has been enabled.";
    openMap [true, true];

    if (isWeaponDeployed _player || { isWeaponRested _player} ) then {
        _player setPos (_player modelToWorld [0,0,0]);
    };

    _player onMapSingleClick {
        _this setposATL _pos;
        call ark_admin_tools_fnc_disableMapTeleport;
        openMap [false, false];
    };
};

ark_admin_tools_fnc_disableMapTeleport = {
    hintSilent "Map Click Teleport has been disabled";
    onMapSingleClick {};
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

call ark_admin_tools_fnc_initVariables;
