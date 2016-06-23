#include "ark_macros.h"

// ark_main
// Functions will be placed within this file.

ark_fnc_initVariables = {
    // deploy
    [] call ark_deploy_initVariables;
    // others
    ark_mapTeleportEnabled = false;
    ark_aiDebugEnabled = false;
    [] call ark_eh_mapClickTeleport;
};

ark_fnc_isHost = {
    DECLARE(_return) = if (serverCommandAvailable "#logout") then {
        true;
    } else {
        false;
    };
    _return;
};

ark_fnc_isAdmiralEnabled = {
    getNumber (missionConfigFile >> "Admiral" >> "isEnabled") == 1;
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
    PVT_6(_stance,_combatMode,_behaviour,_skill,_disabledFunctions,_enableNightvision);
    
    _stance = SCRIPT_DEFAULT_SENTRY_STANCE;
    _combatMode = SCRIPT_DEFAULT_SENTRY_MODE;
    _behaviour = SCRIPT_DEFAULT_SENTRY_BEHAVIOUR;
    _skill = SCRIPT_DEFAULT_SENTRY_SKILL;
    _disabledFunctions = SCRIPT_DEFAULT_SENTRY_DISABLED;
    _enableNightvision = SCRIPT_DEFAULT_ENABLE_NIGHTVISION;

    if (count _this > 1) then {_stance = _this select 1;};
    if (count _this > 2) then {_combatMode = _this select 2;};
    if (count _this > 3) then {_behaviour = _this select 3;};
    if (count _this > 4) then {_skill = _this select 4;};
    if (count _this > 5) then {_disabledFunctions = _this select 5;};
    if (count _this > 6) then {_enableNightvision = _this select 6;};

    (group _unit) enableAttack false;
    DECLARE(_guardWaypoint) = (group _unit) addWaypoint [(getposATL _unit), 0];
    _guardWaypoint setWaypointType "GUARD";
    _guardWaypoint setWaypointCombatMode _combatMode;
    _guardWaypoint setWaypointBehaviour _behaviour;
    (group _unit) setCurrentWaypoint _guardWaypoint;
    _unit allowFleeing 0;
    _unit setUnitPos _stance;
    _unit setCombatMode _combatMode;
    _unit setBehaviour _behaviour;
    _unit setSkill _skill;
    if (count _disabledFunctions > 0) then {
        {
            _unit disableAI _x;
        } forEach _disabledFunctions;
    };  
    _unit unlinkItem hmd _unit;
    if (_enableNightvision) then {
        _unit linkItem "NVGoggles_AI";
    };
    doStop _unit;
    DEBUG {
        [["Unit: %1 successfully made a sentry. Stance:  %2 Combat Mode: %3 Behaviour: %4 Skill: %5 Disabled functionality: %6 Enabled Nightvision: %7", _unit, _stance, _combatMode, _behaviour, _skill, _disabledFunctions, _enableNightvision], DEBUG_INFO] call ark_debug_fnc_logToServer;
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
    DECLARE(_stance) = _logic getVariable "Stance";
    DECLARE(_combatMode) = _logic getVariable "Combat_Mode";
    DECLARE(_behaviour) = _logic getVariable "Behaviour";
    DECLARE(_skill) = _logic getVariable "Skill";
    DECLARE(_disabledFunctions) = _logic getVariable "Disabled_Functionality";
    DECLARE(_enableNightvision) = _logic getVariable "Enable_Nightvision";
    _disabledFunctions = call compile _disabledFunctions; // change from string to array
    {
        if (alive _x) then {
            _x allowFleeing 0;
            _x setUnitPos _stance;
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
                [["Unit: %1 successfully made a sentry. Stance:  %2 Combat Mode: %3 Behaviour: %4 Skill: %5 Disabled functionality: %6 Enabled Nightvision: %7", _x, _stance, _combatMode, _behaviour, _skill, _disabledFunctions, _enableNightvision], DEBUG_INFO] call ark_debug_fnc_logToServer;
            };
        };
    } forEach _units;
};

// Map Click Teleport

ark_fnc_assignMapTeleport = {
    FUN_ARGS_1(_enable);
    
    if (_enable) then {
        ark_mapTeleportEnabled = true;
    } else {
        ark_mapTeleportEnabled = false;
    };
    publicVariable "ark_mapTeleportEnabled";
};

ark_fnc_enableMapTeleport = {
    FUN_ARGS_1(_player);
    
    hintSilent "Map Click Teleport has been enabled.";
    _player onMapSingleClick {
        _this setposATL _pos;
        [] call ark_fnc_disableMapTeleport;
        openMap false;  // close the player's map
    };
};

ark_fnc_disableMapTeleport = {
    hintSilent "Map Click Teleport has been disabled";
    onMapSingleClick {};
};

ark_eh_mapClickTeleport = {
    "ark_mapTeleportEnabled" addPublicVariableEventHandler {
        if (_this select 1) then {
            [player] call ark_fnc_enableMapTeleport;
        } else {
            [] call ark_fnc_disableMapTeleport;
        };
    };
};

// AI Debug

ark_fnc_createLocalMarker = {
    FUN_ARGS_6(_name,_shape,_type,_colour,_text,_size);

    DECLARE(_marker) = createMarkerLocal [_name, [0, 0, 0]];
    _marker setMarkerShapeLocal _shape;
    _marker setMarkerTypeLocal _type;
    _marker setMarkerColorLocal _colour;
    _marker setMarkerTextLocal _text;
    _marker setMarkerSize _size;

    _marker;
};

ark_fnc_returnSideColour = {
    FUN_ARGS_1(_side);

    if (_side == WEST) exitWith {"ColorBlue";};
    if (_side == EAST) exitWith {"ColorRed";};
    if (_side == RESISTANCE) exitWith {"ColorGreen";};
    if (_side == CIVILIAN) exitWith {"ColorPink";};
};

ark_fnc_createUnitLocalMarker = {
    FUN_ARGS_1(_unit);

    DECLARE(_colour) = [side _unit] call ark_fnc_returnSideColour;
    DECLARE(_marker) = [
        name _unit,
        "ICON",
        AI_DEBUG_MARKER_TYPE,
        _colour,
        "",
        AI_DEBUG_MARKER_SIZE
    ] call ark_fnc_createLocalMarker;

    if (isPlayer _unit) then {
        _marker setMarkerTextLocal (name _unit);
    };
    _unit setVariable ["ark_aidebug_marker", (name _unit)];
};

ark_fnc_initAiDebug = {
    {
        [_x] call ark_fnc_createUnitLocalMarker;
    } forEach allUnits;
    sleep 2;
    [] call ark_fnc_startAiDebugLoop;
};

ark_fnc_startAiDebugLoop = {
    waitUntil {
        sleep AI_DEBUG_UPDATE_DELAY;
        [] call ark_fnc_updateAiDebug;
        !ark_aiDebugEnabled;
    };
    [] call ark_fnc_stopAiDebug;
};

ark_fnc_updateAiDebug = {
    PVT_1(_markerName);
    {
        _markerName = _x getVariable ["ark_aidebug_marker", nil];
        if (isNil "_markerName") then {
            [_x] call ark_fnc_createUnitLocalMarker;
        } else {
            [_x, _markerName] call ark_fnc_updateLocalMarker;
        };
    } forEach allUnits;
    {
        _markerName = _x getVariable "ark_aidebug_marker";
        if !(isNil "_markerName") then {
            deleteMarkerLocal _markerName;
        };
    } forEach allDead;
};

ark_fnc_updateLocalMarker = {
    FUN_ARGS_2(_unit,_markerName);

    _markerName setMarkerPosLocal (getPosATL _unit);
    _markerName setMarkerDirLocal (getDir _unit);
};

ark_fnc_stopAiDebug = {
    PVT_1(_markerName);
    DECLARE(_allUnitsAndDead) = allUnits;
    _allUnitsAndDead append allDead;
    {
        _markerName = _x getVariable "ark_aidebug_marker";
        if !(isNil "_markerName") then {
            deleteMarkerLocal _markerName;
            _x setVariable ["ark_aidebug_marker", nil];
        };
    } forEach _allUnitsAndDead;
};

ark_fnc_enableAiDebug = {
    ark_aiDebugEnabled = true;
    [] spawn ark_fnc_initAiDebug;
};

ark_fnc_disableAiDebug = {
    ark_aiDebugEnabled = false;
};