#include "script_component.hpp"
#include "admiral_macros.h"

adm_settings_fnc_initSideRelations = {
    adm_sideRelations = [];
    {
        adm_sideRelations set [_forEachIndex, []];
    } forEach SIDE_ARRAY;
    LOG("admiral.settings.siderelation: Initialized side relations.");
};

adm_settings_fnc_setSideRelations = {
    private _sideRelations = ["sideRelations"] call adm_config_fnc_getArray;
    {
        private _oneSide = [call compile (_x select 0)] call adm_common_fnc_getAdmiralSide;
        private _otherSide = [call compile (_x select 1)] call adm_common_fnc_getAdmiralSide;
        if (_x select 2 == "enemy") then {
            [_oneSide, _otherSide] call adm_settings_fnc_setEnemy;
        } else {
            [_oneSide, _otherSide] call adm_settings_fnc_setFriend;
        };
    } forEach _sideRelations;
    LOG("admiral.settings.siderelation: Set side relations.");
};

adm_settings_fnc_setEnemy = {
    params ["_side","_enemySide"];

    private _sideEnemies = adm_sideRelations select _side;
    if (!(_enemySide in _sideEnemies)) then {
        PUSH(_sideEnemies,_enemySide);
        (SIDE_ARRAY select _side) setFriend [(SIDE_ARRAY select _enemySide), 0];
        LOG_2("admiral.settings.siderelation: Side %1 is hostile towards side %2.",SIDE_TEXT_ARRAY select _side,SIDE_TEXT_ARRAY select _enemySide);
    };
};

adm_settings_fnc_setFriend = {
    params ["_side","_friendlySide"];

    private ["_sideEnemies", "_enemySideIndex"];
    _sideEnemies = adm_sideRelations select _side;
    _enemySideIndex = _sideEnemies find _friendlySide;
    if (_enemySideIndex >= 0) then {
        adm_sideRelations set [_side, _sideEnemies - [_friendlySide]];
    };
    (SIDE_ARRAY select _side) setFriend [(SIDE_ARRAY select _friendlySide), 1];
    LOG_2("admiral.settings.siderelation: Side %1 is friendly towards side %2.",SIDE_TEXT_ARRAY select _side,SIDE_TEXT_ARRAY select _friendlySide);
};

adm_settings_fnc_init = {
    adm_isDebuggingEnabled = ["isDebuggingEnabled"] call adm_config_fnc_getBool;
    adm_areNVGsEnabled = ["areNVGsEnabled"] call adm_config_fnc_getBool;
    adm_isBehaviorEnabled = ["isBehaviorEnabled"] call adm_config_fnc_getBool;
    adm_canSpawnOnRoof = ["canSpawnOnRoof"] call adm_config_fnc_getBool;
    adm_allowCrewInImmobile = ["allowCrewInImmobile"] call adm_config_fnc_getBool;
    adm_cargoUnloadInCombat = ["cargoUnloadInCombat"] call adm_config_fnc_getBool;
    adm_removeHandguns = ["removeHandguns"] call adm_config_fnc_getBool;
    adm_useTracers = ["useTracers"] call adm_config_fnc_getBool;
    adm_groupSpawnDelay = ["groupSpawnDelay"] call adm_config_fnc_getNumber;
    adm_lastGroupSpawnTime = 0;

    adm_camp_defaultUnitTemplate = ["Camp", "defaultUnitTemplate"] call adm_config_fnc_getText;
    adm_camp_defaultZoneTemplate = ["Camp", "defaultZoneTemplate"] call adm_config_fnc_getText;

    adm_patrol_defaultUnitTemplate = ["Patrol", "defaultUnitTemplate"] call adm_config_fnc_getText;
    adm_patrol_defaultZoneTemplate = ["Patrol", "defaultZoneTemplate"] call adm_config_fnc_getText;

    adm_cqc_defaultUnitTemplate = ["Cqc", "defaultUnitTemplate"] call adm_config_fnc_getText;
    adm_cqc_defaultZoneTemplate = ["Cqc", "defaultZoneTemplate"] call adm_config_fnc_getText;
    adm_cqc_forceFireEnabled = ["Cqc", "forceFireEnabled"] call adm_config_fnc_getBool;
    adm_cqc_forceFireDelay = ["Cqc", "forceFireDelay"] call adm_config_fnc_getNumber;
    adm_cqc_dynamicSimEnabled = ["Cqc", "dynamicSimEnabled"] call adm_config_fnc_getBool;
    adm_cqc_buildingBlacklist = ["Cqc", "buildingBlacklist"] call adm_config_fnc_getArray;
    adm_cqc_buildingCapacity = ["Cqc", "buildingCapacity"] call adm_config_fnc_getArray;

    [] call adm_settings_fnc_initSideRelations;
    [] call adm_settings_fnc_setSideRelations;
};
