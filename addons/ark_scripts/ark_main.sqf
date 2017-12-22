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

// Clear Vehicle

ark_fnc_clear_vehicle = {
    IF_IS_SERVER;
    FUN_ARGS_1(_vehicle);

    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal _vehicle;
    clearItemCargoGlobal _vehicle;
    clearBackpackCargoGlobal _vehicle;
    DEBUG {
        [["Vehicle: %1 had its cargo cleared.", _vehicle], DEBUG_INFO] call ark_debug_fnc_logToServer;
    };
};

ark_module_clear_vehicle = {
    FUN_ARGS_3(_logic,_units,_activated);
    
    if !(_activated) exitWith {
        DEBUG {
            [["Logic: %1 was not activated!", _logic], DEBUG_ERROR] call ark_debug_fnc_logToServer;
        };
    };
    
    if (count _units == 0) exitWith {
        DEBUG {
            [["Logic: %1 had no synced units!", _logic], DEBUG_ERROR] call ark_debug_fnc_logToServer;
        };
    };
    {
        [_x] call ark_fnc_clear_vehicle;
    } forEach _units;
};

// Make Sentry

ark_fnc_make_sentry = {
    IF_IS_SERVER;
    FUN_ARGS_1(_unit);
    
    if (isNil "_unit") exitWith {
        DEBUG {
            [["You attempted to make a unit a sentry but you didn't specify a unit!"], DEBUG_ERROR] call ark_debug_fnc_logToServer;
        };
    };
    PVT_5(_combatMode,_behaviour,_skill,_disabledFunctions,_enableNightvision);
    
    _combatMode = SCRIPT_DEFAULT_SENTRY_MODE;
    _behaviour = SCRIPT_DEFAULT_SENTRY_BEHAVIOUR;
    _skill = SCRIPT_DEFAULT_SENTRY_SKILL;
    _disabledFunctions = SCRIPT_DEFAULT_SENTRY_DISABLED;
    _enableNightvision = SCRIPT_DEFAULT_ENABLE_NIGHTVISION;

    if (count _this > 1) then {_combatMode = _this select 1;};
    if (count _this > 2) then {_behaviour = _this select 2;};
    if (count _this > 3) then {_skill = _this select 3;};
    if (count _this > 4) then {_disabledFunctions = _this select 4;};
    if (count _this > 5) then {_enableNightvision = _this select 5;};

    (group _unit) enableAttack false;
    DECLARE(_guardWaypoint) = (group _unit) addWaypoint [(getposATL _unit), 0];
    _guardWaypoint setWaypointType "GUARD";
    _guardWaypoint setWaypointCombatMode _combatMode;
    _guardWaypoint setWaypointBehaviour _behaviour;
    (group _unit) setCurrentWaypoint _guardWaypoint;
    _unit allowFleeing 0;
    _unit setCombatMode _combatMode;
    _unit setBehaviour _behaviour;
    _unit setSkill _skill;
    _unit disableAI "FSM";
    doStop _unit;
    if (count _disabledFunctions > 0) then {
        {
            _unit disableAI _x;
        } forEach _disabledFunctions;
    };  
    _unit unlinkItem hmd _unit;
    if (_enableNightvision) then {
        _unit linkItem "NVGoggles_AI";
    };
    DEBUG {
        [["Unit: %1 successfully made a sentry. Combat Mode: %2 Behaviour: %3 Skill: %4 Disabled functionality: %5 Enabled Nightvision: %6", _unit, _combatMode, _behaviour, _skill, _disabledFunctions, _enableNightvision], DEBUG_INFO] call ark_debug_fnc_logToServer;
    };
};

ark_module_make_sentry = {
    FUN_ARGS_3(_logic,_units,_activated);
    
    if !(_activated) exitWith {
        DEBUG {
            [["Logic: %1 was not activated!", _logic], DEBUG_ERROR] call ark_debug_fnc_logToServer;
        };
    };
    
    if (count _units == 0) exitWith {
        DEBUG {
            [["Logic: %1 had no synced units!", _logic], DEBUG_ERROR] call ark_debug_fnc_logToServer;
        };
    };
    DECLARE(_combatMode) = _logic getVariable "Combat_Mode";
    DECLARE(_behaviour) = _logic getVariable "Behaviour";
    DECLARE(_skill) = _logic getVariable "Skill";
    DECLARE(_disabledFunctions) = _logic getVariable ["Disabled_Functionality", SCRIPT_DEFAULT_SENTRY_DISABLED];
    DECLARE(_enableNightvision) = _logic getVariable ["Enable_Nightvision", SCRIPT_DEFAULT_ENABLE_NIGHTVISION];
    _disabledFunctions = call compile _disabledFunctions; // change from string to array
    {
        if (alive _x) then {
            _x allowFleeing 0;
            _x setCombatMode _combatMode;
            _x setBehaviour _behaviour;
            _x setSkill _skill;
            _x unlinkItem hmd _x;
            if (_enableNightvision) then {
                _x linkItem "NVGoggles_AI";
            };
            if (count _disabledFunctions > 0) then {
                DECLARE(_unit) = _x;
                {
                    _unit disableAI _x;
                } forEach _disabledFunctions;
            };
            DEBUG {
                [["Unit: %1 successfully made a sentry. Combat Mode: %2 Behaviour: %3 Skill: %4 Disabled functionality: %5 Enabled Nightvision: %6", _x, _combatMode, _behaviour, _skill, _disabledFunctions, _enableNightvision], DEBUG_INFO] call ark_debug_fnc_logToServer;
            };
        };
    } forEach _units;
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