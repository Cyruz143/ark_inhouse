#include "ark_macros.h"

// ark_main
// Functions will be placed within this file.

ark_fnc_initVariables = {
    // deploy
    [] call ark_deploy_initVariables;
};

ark_fnc_isHost = {
    private _adminWhiteList = ["76561197969272205", "76561198001868030", "76561197980517821", "76561197972043388"];
    !isMultiplayer || {serverCommandAvailable "#logout"} || (getplayerUID player) in _adminWhiteList;
};

// Ammo drop
ark_fnc_ammoDrop = {
    FUN_ARGS_1(_player);
    _player setVariable ["ark_ts_paradropInProgress", true, true];
    private _hull3Faction = _player getVariable "hull3_faction";
    private _dropHeight = 150;
    [[_player, _hull3Faction, _dropHeight], {
        params ["_player", "_hull3Faction", "_dropHeight"];

        private _position = getPosATL _player;
        _position set [2, _dropHeight];

        private _parachute = createVehicle ["B_Parachute_02_F", _position, [], 0, "FLY"];

        private _ammoBox = createVehicle ["B_CargoNet_01_ammo_F", position _parachute, [], 0, "NONE"];
        _ammoBox allowDamage false;
        [_ammoBox, ["faction", _hull3Faction], ["gear", "Truck"]] call hull3_unit_fnc_init;
        _ammoBox attachTo [_parachute, [0, 0, -1.3]];

        private _smoke = createVehicle ["SmokeShellOrange", position _parachute, [], 0, "NONE"];
        _smoke attachTo [_parachute, [0, 0, 0]];

        waitUntil { getPosATL _ammoBox select 2 < 1 || isNull _parachute };
        detach _ammoBox;
        _player setVariable ["ark_ts_paradropInProgress", false, true];
    }] remoteExec ["bis_fnc_spawn", 2];
};