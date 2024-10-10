#include "script_component.hpp"

adm_hc_fnc_executeIfHc = {
    params ["_arguments","_code"];

    if ([] call adm_hc_fnc_isHc) then {
        _arguments call _code;
    };
};

adm_hc_fnc_isHcPresent = {
    !isNil {adm_hc_unit} && {!isNull adm_hc_unit} && {isPlayer adm_hc_unit};
};

adm_hc_fnc_getHcUnit = {
    if (isNil {adm_hc_unit}) then { objNull } else { adm_hc_unit };
};

adm_hc_fnc_isHc = {
    [] call adm_hc_fnc_isHcPresent && {player == [] call adm_hc_fnc_getHcUnit};
};

adm_hc_transferNonPlayableGroupToHc = {
    params ["_group"];

    private _owner = owner (call adm_hc_fnc_getHcUnit);
    if (_owner == 0) exitWith {};
    private _isPlayable = count (units _group select { _x in playableUnits }) > 0;
    if (!_isPlayable && {local _group}) then {
        _group setGroupOwner _owner;
    };
};

adm_hc_transferNonPlayableGroupsToHc = {
    {
        [_x] call adm_hc_transferNonPlayableGroupToHc;
    } forEach allGroups;
};

adm_hc_initAdmiralGroupTransfer = {
    ["cqc.spawned.groups", {
        params ["_spawnedGroups"];

        { [_x] call adm_hc_transferNonPlayableGroupToHc } forEach _spawnedGroups;
        [_spawnedGroups, {
            adm_cqc_groups append _this;
        }] remoteExec ["bis_fnc_call", owner (call adm_hc_fnc_getHcUnit)];
    }] call adm_event_fnc_addEventHandler;

    ["patrol.spawned.groups", {
        params ["_zoneInfGroups", "_zoneTechGroups", "_zoneArmourGroups"];

        { [_x] call adm_hc_transferNonPlayableGroupToHc } forEach _zoneInfGroups;
        { [_x] call adm_hc_transferNonPlayableGroupToHc } forEach _zoneTechGroups;
        { [_x] call adm_hc_transferNonPlayableGroupToHc } forEach _zoneArmourGroups;
    }] call adm_event_fnc_addEventHandler;

    ["camp.spawned.groups", {
        params ["_zoneInfGroups", "_zoneTechGroups", "_zoneArmourGroups"];

        { [_x] call adm_hc_transferNonPlayableGroupToHc } forEach _zoneInfGroups;
        { [_x] call adm_hc_transferNonPlayableGroupToHc } forEach _zoneTechGroups;
        { [_x] call adm_hc_transferNonPlayableGroupToHc } forEach _zoneArmourGroups;
    }] call adm_event_fnc_addEventHandler;
};

adm_hc_fnc_init = {
    if (isServer) then {
        if (call adm_hc_fnc_isHcPresent) then {
            [] call adm_hc_transferNonPlayableGroupsToHc;
            [] call adm_hc_initAdmiralGroupTransfer;
        };
        [] call compile preprocessFileLineNumbers ADDON_PATH(admiral_postinit_server.sqf);
        INFO_1("Admiral HC: Admiral version %1 started successfully on server!",STR_ADMIRAL_VERSION);
    };
    if ([] call adm_hc_fnc_isHc) then {
        [] call compile preprocessFileLineNumbers ADDON_PATH(admiral_postinit_hc.sqf);
        INFO_2("Admiral HC: Admiral version %1 started successfully on player %2 as Headless Client!",STR_ADMIRAL_VERSION,adm_hc_unit);
    };
};
