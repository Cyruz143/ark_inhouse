/*
// Heavily inspired by BtG module from https://github.com/ArmaForces/Mods
// Love to @veteran29 and ArmaForces peeps
*/

ark_jip_disconnectedPlayers = createHashMap;

addMissionEventHandler ["PlayerConnected", {
    params ["", "_uid", "_name", "_jip"];

    if (!_jip) exitWith {};

    private _data = ark_jip_disconnectedPlayers get _uid;
    if (isNil "_data") exitWith {};

    [_data, _name, _uid] call ark_jip_fnc_handleConnect;
}];

addMissionEventHandler ["HandleDisconnect", {
    params ["_unit", "", "_uid", "_name"];

    if (!alive _unit) exitWith {};
    [_unit, _uid, _name] call ark_jip_fnc_handleDisconnect;

    // Pass AI unit back to server
    true
}];

ark_jip_fnc_handleDisconnect = {
    params ["_unit", "_uid", "_name"];

    _unit disableAI "all";
    _unit setCaptive true;
    _unit allowDamage false;

    ark_jip_disconnectedPlayers set [_uid, _unit];

    ["JIP", "INFO","fnc_handleDisconnect","Player disconnected from alive unit", [_name, _unit]] call ark_admin_tools_fnc_log;
};

ark_jip_fnc_handleConnect = {
    params ["_unit", "_name", "_uid"];

    _unit allowDamage true;
    _unit setCaptive false;
    _unit enableAI "all";

    // Clean up connected data to avoid issues
    ark_jip_disconnectedPlayers deleteAt _uid;
    ["JIP", "INFO","fnc_handleConnect","Player successfully reconnected to existing unit", [_name, _unit]] call ark_admin_tools_fnc_log;
};