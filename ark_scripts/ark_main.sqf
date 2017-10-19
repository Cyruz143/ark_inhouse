#include "ark_macros.h"

// ark_main
// Functions will be placed within this file.

ark_fnc_initVariables = {
    // deploy
    [] call ark_deploy_initVariables;
    // others
    ark_aiDebugEnabled = false;
    ark_mapTeleportEnabled = false;
    [] call ark_eh_mapClickTeleport;
};

ark_fnc_isHost = {
    private _adminWhiteList = ["76561197969272205", "76561198001868030", "76561197980517821", "76561197972043388"];
    !isMultiplayer || {serverCommandAvailable "#logout"} || (getplayerUID player) in _adminWhiteList;
};

ark_fnc_isAdmiralEnabled = {
    getNumber (missionConfigFile >> "Admiral" >> "isEnabled") == 1;
};

ark_fnc_isTownSweep = {
    getNumber(missionConfigFile >> 'TownSweep' >> 'isEnabled') == 1
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
    _unit disableAI "PATH";
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

ark_fnc_AiDebug = {
    private ["_deleteMarkers"];
    _deleteMarkers = if (count _this > 0) then {_this select 0} else {false};

    call {
        if (!_deleteMarkers && {isNil {ark_admin_canUpdateMarkers} || {!ark_admin_canUpdateMarkers}}) then {
            ark_admin_canUpdateMarkers = true;
            ark_admin_sideCountMarkers = [];
            private ["_sides", "_sideColors"];
            _sides = [EAST, WEST, RESISTANCE, CIVILIAN];
            _sideColors = ["ColorRed", "ColorBlue", "ColorGreen", "ColorPink"];
            for "_i" from 0 to (count _sides) - 1 do {
                private ["_markerName", "_side"];
                _side = _sides select _i;
                _markerName = format ["ark_admin_sideCountMarker_%1", _side];
                createMarkerLocal [_markerName, [-500, 1500 + _i * 200]];
                _markerName setMarkerShapeLocal "ICON";
                _markerName setMarkerTypeLocal "mil_dot";
                _markerName setMarkerColorLocal (_sideColors select _i);
                _markerName setMarkerTextLocal format ["%1: %2", _side, {side _x == _side} count allUnits];
                _markerName setMarkerSizeLocal [1,1];
                ark_admin_sideCountMarkers set [count ark_admin_sideCountMarkers, _side];
            };
            [] spawn {
                while {ark_admin_canUpdateMarkers} do {
                    {
                        private "_marker";
                        _marker = _x getVariable "ark_admin_unitMarker";
                        if (!isNil {_marker}) then {
                            deleteMarkerLocal _marker;
                        }
                    } foreach allDead;
                    sleep 30;
                };
            };
            while {ark_admin_canUpdateMarkers} do {
                {
                    private ["_unit", "_marker"];
                    _unit = _x;
                    _marker = _unit getVariable "ark_admin_unitMarker";
                    if (!isNil {_marker}) then {
                        _marker setMarkerPosLocal getPosATL _unit;
                        _marker setMarkerDirLocal getDir _unit;
                    } else {
                        private ["_markerName", "_sideIndex", "_sideColor"];
                        _markerName = format ["ark_admin_unitMarker_%1", _unit];
                        _unit setVariable ["ark_admin_unitMarker", _markerName, false];
                        _sideIndex = _sides find side _unit;
                        if (_sideIndex >= 0) then {
                            _sideColor = ["ColorRed", "ColorBlue", "ColorGreen", "ColorPink"] select _sideIndex;
                        } else {
                            _sideColor = "ColorWhite";
                        };
                        createMarkerLocal [_markerName, getPosATL _unit];
                        _markerName setMarkerShapeLocal "ICON";
                        _markerName setMarkerTypeLocal "mil_triangle";
                        _markerName setMarkerColorLocal _sideColor;
                        _markerName setMarkerTextLocal "";
                        _markerName setMarkerSizeLocal [0.5,0.75];
                        _markerName setMarkerDirLocal getDir _unit;
                        if (!isNil {(group _unit) getVariable "ark_adm_spawnedBy"}) then {
                            _markerName setMarkerTextLocal "*";
                        };
                    };
                } foreach allUnits;
                {
                    private "_markerName";
                    _side = _x;
                    (format ["ark_admin_sideCountMarker_%1", _side]) setMarkerTextLocal format ["%1: %2", _side, {side _x == _side} count allUnits];
                } foreach ark_admin_sideCountMarkers;
                sleep 4;
            };
        };
        if (_deleteMarkers && {!isNil {ark_admin_canUpdateMarkers}} && {ark_admin_canUpdateMarkers}) then {
            ark_admin_canUpdateMarkers = false;
            {
                private "_marker";
                _marker = _x getVariable "ark_admin_unitMarker";
                if (!isNil {_marker}) then {
                    _x setVariable ["ark_admin_unitMarker", nil, false];
                    deleteMarkerLocal _marker;
                }
            } foreach allUnits;
            {
                private "_marker";
                _marker = _x getVariable "ark_admin_unitMarker";
                if (!isNil {_marker}) then {
                    _x setVariable ["ark_admin_unitMarker", nil, false];
                    deleteMarkerLocal _marker;
                }
            } foreach allDead;
            {
                deleteMarkerLocal (format ["ark_admin_sideCountMarker_%1", _x]);
            } foreach ark_admin_sideCountMarkers;
            ark_admin_sideCountMarkers = nil;
        };
    };
};

ark_fnc_enableAiDebug = {
    ark_aiDebugEnabled = true;
    [] spawn ark_fnc_AiDebug;
};

ark_fnc_disableAiDebug = {
    ark_aiDebugEnabled = false;
    [true] spawn ark_fnc_AiDebug;
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

// Only call below from server, clients will fail
ark_fnc_callAttackHelo = {
    private _player = _this select 0;
    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pilotArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "pilots");
    private _heloArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "ah");
    if (isNil "_heloArray" || { count _heloArray == 0 }) exitWith {};
    private _unit = selectRandom _pilotArray;
    private _helo = selectRandom _heloArray;

    private _vehicle = createVehicle [_helo, position _player, [], 2000, "FLY"]; 
    private _grp = createGroup _side; 
    private _driver = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"]; 
    private _gunner = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"]; 

    _driver moveInDriver _vehicle; 
    _gunner moveInGunner _vehicle; 

    private _waypoint = _grp addWaypoint [position _player, 0, 1]; 
    _waypoint setWaypointType "SAD"; 
    _waypoint setWaypointBehaviour "COMBAT"; 
    _waypoint setWaypointCombatMode "RED"; 
    _waypoint setWaypointSpeed "FULL";
    [_grp, 2] waypointAttachVehicle _player;
};

ark_fnc_callArmour = {
    private _player = _this select 0;
    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pos = [_player, 1000, 1100, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _crewmanArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "crewmen");
    private _armourArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "armour");
    private _unit = selectRandom _crewmanArray;
    private _vic = selectRandom _armourArray;

    private _vehicle = createVehicle [_vic, _pos, [], 0, "NONE"]; 
    private _grp = createGroup _side; 
    private _driver = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"]; 
    private _gunner = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"]; 
    private _commander = _grp createUnit [_unit, [0,0,0], [], 0, "NONE"]; 

    _driver moveInDriver _vehicle; 
    _gunner moveInGunner _vehicle; 
    _commander moveInCommander _vehicle; 

    private _waypoint = _grp addWaypoint [position _player, 0, 1]; 
    _waypoint setWaypointType "SAD"; 
    _waypoint setWaypointBehaviour "COMBAT"; 
    _waypoint setWaypointCombatMode "RED"; 
    _waypoint setWaypointSpeed "FULL";
    [_grp, 2] waypointAttachVehicle _player;
};