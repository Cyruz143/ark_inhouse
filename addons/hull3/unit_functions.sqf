#include "script_component.hpp"
#include "\userconfig\hull3\log\unit.h"

hull3_unit_fnc_init = {
    params ["_unit"];

    private ["_initEntries", "_markerEntry"];
    _initEntries = [_this] call hull3_config_fnc_getInitEntries;
    if (local _unit) then {
        private ["_factionEntry", "_gearEntry", "_uniformEntry"];
        _unit setVariable ["hull3_init_entries", _initEntries, true];
        _factionEntry = [_initEntries, "faction"] call hull3_config_fnc_getEntry;
        _gearEntry = [_initEntries, "gear"] call hull3_config_fnc_getEntry;
        _uniformEntry = [_initEntries, "uniform"] call hull3_config_fnc_getEntry;
        [_unit, _factionEntry, _gearEntry, _uniformEntry] call hull3_gear_fnc_assign;
        [_unit] call hull3_unit_fnc_addEHs;
    };
    _markerEntry = [_initEntries, "marker"] call hull3_config_fnc_getEntry;
    if (count _markerEntry > 0) then {
        [_unit, _markerEntry select 0, _markerEntry select 1] call hull3_marker_fnc_initMarker;
    };
};

hull3_unit_fnc_onPlayerRespawn = {
    LOG_1("hull3.player.respawned: Player has respawned with %1",_this);
    ["player.respawned", _this] call hull3_event_fnc_emitEvent;
};

hull3_unit_fnc_playerInit = {
    [
        {getClientStateNumber >= 9 || { (call bis_fnc_getNetMode) isEqualTo "SinglePlayer" }},
        {
            ["player.initialized", [player]] call hull3_event_fnc_emitEvent;
            LOG("hull3.unit.player: Player is initialized.");

            call hull3_marker_fnc_addMarkers;
            call hull3_marker_fnc_updateAllMarkers;
            call hull3_marker_fnc_updateCustomMarkers;
            call hull3_unit_fnc_setFireTeamColors;
            call hull3_mission_fnc_addPlayerEHs;
            call hull3_mission_fnc_clientSafetyTimerLoop;
        }
    ] call CBA_fnc_waitUntilAndExecute;
};

hull3_unit_fnc_forEachNonPlayerUnits = {
    {
        if (!isPlayer _x) then {
            doStop _x;
        };
    } forEach (playableUnits + switchableUnits);
};

hull3_unit_fnc_addEHs = {
    params ["_unit"];

    if (_unit isKindOf "CAManBase") then {
        private "_ehId";
        _ehId = _unit addEventHandler ["HandleDamage", {_this call hull3_unit_fnc_friendlyFireEH;}];
        _unit setVariable ["hull3_eh_friendlyFire", _ehId];
        _ehId = _unit addEventHandler ["Killed", {_this call hull3_unit_fnc_killedEH;}];
        _unit setVariable ["hull3_eh_killed", _ehId];
    };
};

hull3_unit_fnc_addFiredEHs = {
    params ["_unit"];

    private _ehId = ["ace_firedPlayer", {
        private _obj = param [6, objNull];
        if (!isNil "ace_frag_fnc_addBlackList") then {
            [_obj] call ace_frag_fnc_addBlackList;
        };
        deleteVehicle _obj;
    }] call CBA_fnc_addEventHandler;

    _unit setVariable ["hull3_eh_fired", _ehId];
};

hull3_unit_fnc_friendlyFireEH = {
    params ["_unit","_selectionName","_damage","_source","_projectile"];

    if (_selectionName == "" && {_unit != _source} && {side _unit == side _source}) then {
        //DECLARE(_message) = LOGGING_FORMAT("hull.unit.friendlyFire","WARN",FMT_4("%1 dealt %2 damage with %3 to %4!",_source,_damage,_projectile,_unit));
        [_message] call hull3_common_fnc_logOnServer;
    };

    _damage;
};

hull3_unit_fnc_killedEH = {
    params ["_unit","_killer"];

    if (_unit != _killer && {side _unit == side _killer}) then {
        //DECLARE(_message) = LOGGING_FORMAT("hull.unit.friendlyFire","WARN",FMT_2("%1 killed %2!",_killer,_unit));
        [_message] call hull3_common_fnc_logOnServer;
    };

    _unit removeEventHandler ["HandleDamage", _unit getVariable "hull3_eh_friendlyFire"];
    _unit removeEventHandler ["Killed", _unit getVariable "hull3_eh_killed"];
    _unit setVariable ["hull3_eh_friendlyFire", nil];
    _unit setVariable ["hull3_eh_killed", nil];
};

hull3_unit_fnc_getAssignedTeam = {
    params ["_gearClass"];

    private _team = "";
    {
        if (_gearClass == _x select 0) exitWith {_team = _x select 1};
    } forEach (["Group", "assignedTeams"] call hull3_config_fnc_getArray);

    _team;
};

hull3_unit_fnc_setFireTeamColors = {
    {
        private _assignedTeam = [_x getVariable ["hull3_gear_class", ""]] call hull3_unit_fnc_getAssignedTeam;
        if (_assignedTeam != "") then {
            _x assignTeam _assignedTeam;
        };
    } forEach units group player;
};
