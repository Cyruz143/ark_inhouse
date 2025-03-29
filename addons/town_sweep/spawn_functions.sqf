#include "script_component.hpp"

ts_spawn_location_sizeChange = 100;

ts_spawn_fnc_preinit = {
    ts_spawn_selectedLocationMarkerName = "ts_spawn_selectedLocation";
    ts_spawn_selectedLocation = [];
    ts_spawn_placedFortifications = [];
    ts_spawn_ai_multiplier = 2;
    ts_spawn_cqc_percent = 0.4;
    ts_spawn_playerCount = 0;
    ts_spawn_aiCount = 0;
    ts_spawn_cqcCount = 0;
    ts_spawn_patrolInfGroupCount = 0;
    ts_spawn_patrolTechGroupCount = 0;
    ts_spawn_patrolArmourGroupCount = 0;
    ts_spawn_unitTemplate = "Base";
    ts_spawn_availableMissions = [1,2,3];

    call ts_spawn_fnc_createLocationMarker;
};

ts_spawn_fnc_onAdmiralInit = {
    private _templateConfigs = "ts_camouflage in getArray (_x >> 'camouflage') && {configName _x isNotEqualTo 'Base'} && {getText (_x >> 'side') isNotEqualTo ts_player_factionRawSide}" configClasses (configFile >> "Admiral" >> "UnitTemplates");
    private _templateConfig = selectRandom _templateConfigs;
    ts_spawn_unitTemplate = configName _templateConfig;
    adm_camp_defaultUnitTemplate = ts_spawn_unitTemplate;
    adm_patrol_defaultUnitTemplate = ts_spawn_unitTemplate;
    adm_cqc_defaultUnitTemplate = ts_spawn_unitTemplate;
    adm_common_fnc_getUnitTemplateSide = { ts_enemy_side };
};

ts_spawn_fnc_selectLocation = {
    [["\x\ark\addons\ark_main\resources\click.paa", 2.0], ["Click on map to select attack location"]] call CBA_fnc_notify;
    ["ts_mapClick", "onMapSingleClick", {
        [0, { call ts_spawn_fnc_moveLocationMarker; ts_spawn_selectedLocation set [0, (_this #0)]; ts_spawn_selectedLocation set [1, (_this #1)]; ts_spawn_selectedLocation set [2, (_this #2)]; ts_spawn_playerCount = count (playableUnits select { isPlayer _x });}, [_pos, 1000, false]] call CBA_fnc_globalExecute;
        ["ts_mapClick", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
    }] call BIS_fnc_addStackedEventHandler;
};

ts_spawn_fnc_canLocationBeActivated = {
    count ts_spawn_selectedLocation > 0 && {!(ts_spawn_selectedLocation #2)}
};

ts_spawn_fnc_changeLocationSize = {
    params ["_sizeChange"];

    if !(call ts_spawn_fnc_canLocationBeActivated) exitWith {};
    private _size = (ts_spawn_selectedLocation #1) + _sizeChange;
    ts_spawn_selectedLocation set [1, _size];
    ts_spawn_selectedLocationMarkerName setMarkerSize [_size, _size];
};

ts_spawn_fnc_activateLocation = {
    if !(call ts_spawn_fnc_canLocationBeActivated) exitWith {};
    call ts_spawn_fnc_activateLocationMarker;
    // Minimum 60 AI as this doesn't scale well at low numbers
    ts_spawn_aiCount = (ceil (ts_spawn_playerCount * ts_spawn_ai_multiplier)) max 60;
    ts_spawn_cqcCount = ceil (ts_spawn_aiCount * ts_spawn_cqc_percent);
    private _fireTeamSize = ["ZoneTemplates", adm_patrol_defaultZoneTemplate, "infFireteamSize"] call adm_config_fnc_getNumber;
    private _patrolAiCount = ceil (ts_spawn_aiCount * (1 - ts_spawn_cqc_percent));
    ts_spawn_patrolInfGroupCount = ceil (_patrolAiCount / _fireTeamSize);
    ts_spawn_patrolTechGroupCount = 2 + (floor (ts_spawn_playerCount / 10));
    ts_spawn_patrolArmourGroupCount = 1 + (floor (ts_spawn_playerCount / 25));
    call ts_spawn_fnc_createLocationZones;
    ts_spawn_selectedLocation set [2, true];
    call ts_spawn_fnc_createFortifications;

    // Remove the picked mission so subsequent choices will be different
    private _selectedMission = selectRandom ts_spawn_availableMissions;
    switch (_selectedMission) do {
        case 1: { call ts_spawn_fnc_objDestroyVeh };
        case 2: { call ts_spawn_fnc_objRecoverIntel };
        default { call ts_spawn_fnc_objDestroyAmmo };
    };
    ts_spawn_availableMissions deleteAt (ts_spawn_availableMissions find _selectedMission);

    [
        {(allPlayers inAreaArray ts_spawn_selectedLocationMarkerName) isNotEqualTo []},
        {
            [{(selectRandom ["paradrop","insert"]) call ts_spawn_fnc_enableRotor}, [], 240] call CBA_fnc_waitAndExecute;
        }
    ] call CBA_fnc_waitUntilAndExecute;
};

ts_spawn_fnc_createLocationMarker = {
    private _marker = createMarker [ts_spawn_selectedLocationMarkerName, [0, 0, 0]];
    _marker setMarkerSizeLocal [1, 1];
    _marker setMarkerAlphaLocal 0.5;
    _marker setMarkerShapeLocal "ELLIPSE";
    _marker setMarkerBrushLocal "Solid";
    _marker setMarkerColor "ColorRed";
};

ts_spawn_fnc_moveLocationMarker = {
    params ["_position", "_size"];
    ts_spawn_selectedLocationMarkerName setMarkerPosLocal _position;
    ts_spawn_selectedLocationMarkerName setMarkerSizeLocal [_size, _size];
    ts_spawn_selectedLocationMarkerName setMarkerAlphaLocal 0.5;
    ts_spawn_selectedLocationMarkerName setMarkerBrushLocal "Solid";
    ts_spawn_selectedLocationMarkerName setMarkerColor "ColorRed";
};

ts_spawn_fnc_activateLocationMarker = {
    ts_spawn_selectedLocationMarkerName setMarkerAlphaLocal 0.4;
    ts_spawn_selectedLocationMarkerName setMarkerBrushLocal "Solid";
    ts_spawn_selectedLocationMarkerName setMarkerColor "ColorRed";
};

ts_spawn_fnc_createLocationZones = {
    ts_spawn_selectedLocation params ["_position", "_size", "_active"];

    [ ["type", "cqc"]
    , ["position", _position]
    , ["area", [_size, _size, 0, false]]
    , ["pool", ts_spawn_cqcCount]
    , ["unitTemplate", adm_cqc_defaultUnitTemplate]
    , ["zoneTemplate", adm_cqc_defaultZoneTemplate]
    , ["enabled", _active]
    ] call adm_api_fnc_initZone;

    [ ["type", "patrol"]
    , ["position", _position]
    , ["area", [_size, _size, 0, false]]
    , ["pool", [ts_spawn_patrolInfGroupCount, ts_spawn_patrolTechGroupCount, ts_spawn_patrolArmourGroupCount]]
    , ["unitTemplate", adm_patrol_defaultUnitTemplate]
    , ["zoneTemplate", adm_patrol_defaultZoneTemplate]
    , ["enabled", _active]
    ] call adm_api_fnc_initZone;
};

ts_spawn_fnc_enableRotor = {
    params ["_insertType"];
    ts_spawn_selectedLocation params ["_position"];

    private _lzPos = [_position, 0, 150, 10, 0, 0.2] call BIS_fnc_findSafePos;
    // BIS_fnc_findSafePos returns X and Y with success and  X Y Z on failure... fucking BI
    if (count _selectedPos isEqualTo 3) exitWith {};

    private _spawnPos = _position getPos [3000, random 360];
    private _spawnZone = createTrigger ["EmptyDetector", _spawnPos, false];
    private _grp = createGroup civilian;
    _grp deleteGroupWhenEmpty true;
    private _jeff = _grp createUnit ["C_Jeff_VR", _spawnPos, [], 0, "NONE"];
    _grp addWaypoint [_lzPos, 0, 1];
    _grp addWaypoint [[worldSize, worldSize, 0], 100, 2];

    private "_module";
    if (_insertType isEqualTo "paradrop") then {
        _module = "ARK_Rotor_Paradrop" createVehicleLocal _spawnPos;
        _module setVariable ["Routine_Function", "ark_rotor_fnc_paradrop"];
    } else {
        _module = "ARK_Rotor_Insert" createVehicleLocal _spawnPos;
        _module setVariable ["Routine_Function", "ark_rotor_fnc_insert"];
        _module setVariable ["Fly_Height", 75];
    };

    _module setVariable ["Crew_Percentage", 100];
    _spawnZone synchronizeObjectsAdd [_module,_jeff];
};

ts_spawn_fnc_enableChaseAI = {
    params ["_pos","_size"];

    if (isNil "ts_trg_chaseAI") then {
        ts_trg_chaseAI = createTrigger ["EmptyDetector", _pos, false];
        ts_trg_chaseAI setTriggerArea [_size, _size, 0, false];
        ts_trg_chaseAI setTriggerActivation ["ANYPLAYER", "PRESENT", false];

        private _module = "ark_chase_ai_module" createVehicleLocal [0,0,0];
        _module setVariable ["Max_Distance", 350];
        _module setVariable ["Min_Distance", 250];
        _module setVariable ["Spawn_Time", 3];
        _module setVariable ["Allow_BuildingSearch", true];

        ts_trg_chaseAI synchronizeObjectsAdd [_module];

        [{[false] call ark_chase_ai_fnc_enableSpawning}, [], 300] call CBA_fnc_waitAndExecute;
    } else {
        ts_trg_chaseAI setPosASL _pos;
        ark_chase_ai_var_maxAIUnits = ark_chase_ai_var_maxAIUnits + 10;
        [true] call ark_chase_ai_fnc_enableSpawning;
        [{[false] call ark_chase_ai_fnc_enableSpawning}, [], 300] call CBA_fnc_waitAndExecute;
    };
};

ts_spawn_fnc_createChaseZone = {
    params ["_obj","_size"];

    private _pos = getPosATL _obj;
    private _mkr = createMarkerLocal [(str _obj), _pos];
    _mkr setMarkerShapeLocal "ELLIPSE";
    _mkr setMarkerSizeLocal [35, 35];
    _mkr setMarkerAlphaLocal 0;

    [{(allPlayers inAreaArray _this #0) isNotEqualTo []}, {
        [_this #1,_this #2] call ark_admin_tools_fnc_chaseAI;
        [_this #1, _this #2] call ts_spawn_fnc_enableChaseAI;
    }, [_mkr,_pos,_size]] call CBA_fnc_waitUntilAndExecute;
};

ts_spawn_fnc_createFortifications = {
    ts_spawn_selectedLocation params ["_position"];

    private "_fortificationArr";
    if (ts_camouflage isEqualTo "woodland") then {
        _fortificationArr = [
            "Land_BagBunker_01_small_green_F",
            "Land_Misc_deerstand",
            "cwa_Fortress1",
            "cwa_Fortress2",
            "Land_Bunker_01_small_F",
            "Land_PillboxBunker_01_hex_F",
            "Land_BagBunker_01_large_green_F",
            "Land_GuardTower_01_F",
            "Land_Bunker_02_double_F",
            "Land_Cargo_HQ_V1_F",
            "Land_Cargo_Patrol_V1_F"
        ];
    } else {
        _fortificationArr = [
            "Land_BagBunker_Small_F",
            "Land_Misc_deerstand",
            "Fortress1",
            "Fortress2",
            "Land_PillboxBunker_01_hex_F",
            "Land_BagBunker_Large_F",
            "Land_GuardTower_01_F",
            "Land_Cargo_HQ_V3_F",
            "Land_Cargo_Patrol_V3_F",
            "WarfareBDepot"
        ];
    };

    private _fortificationPosArr = [];
    for "_i" from 1 to 20 do {
        private _selectedPos = [_position, 250, 400, 10, 0, 0.2] call BIS_fnc_findSafePos;
        if (count _selectedPos isEqualTo 2 && { !(isOnRoad _selectedPos) }) then {
            _fortificationPosArr pushBackUnique _selectedPos;
        };
    };

    private _totalPosAmount = count _fortificationPosArr;
    private _fortificationAmount = 5;
    if (_totalPosAmount < 5) then {
        _fortificationAmount = _totalPosAmount;
    };

    for "_i" from 1 to _fortificationAmount do {
        private _selectedFortification = selectRandom _fortificationArr;
        private _selectedLocation = selectRandom _fortificationPosArr;
        _fortificationPosArr deleteAt (_fortificationPosArr find _selectedLocation);

        private _fortification = createVehicle [_selectedFortification, _selectedLocation, [], 0, "NONE"];
        _fortification setVectorDir (getPos _fortification vectorFromTo _position);
        _fortification setVectorUp surfaceNormal position _fortification;
        _fortification call ts_spawn_fnc_fillFortifications;
        ts_spawn_placedFortifications pushBack _fortification;
    };
};

ts_spawn_fnc_fillFortifications = {
    params ["_building"];

    private _buildingPositions = _building buildingPos -1;
    private _scaledBuildingPositions = [];

    if (count _buildingPositions < 6) then {
        _scaledBuildingPositions = _buildingPositions;
    } else {
        for "_i" from 0 to (count _buildingPositions) step 2 do {
            _scaledBuildingPositions pushBack (_buildingPositions select _i);
        };
    };

    private _grp = createGroup ts_enemy_side;
    _grp deleteGroupWhenEmpty true;
    _grp enableDynamicSimulation true;
    private _skillArray = ["Cqc"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _infantryClassnames = [adm_camp_defaultUnitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;

    {
        private _unit = [_x, _grp, _infantryClassnames, _skillArray] call adm_common_fnc_placeMan;
        [_unit, true] call ark_ai_sentry_fnc_make_sentry;
        _unit setUnitPos "UP";
    } forEach _scaledBuildingPositions;
};

ts_spawn_fnc_objDestroyVeh = {
    ts_spawn_selectedLocation params ["_position","_size"];

    private _grp = createGroup ts_enemy_side;
    _grp deleteGroupWhenEmpty true;
    _grp enableDynamicSimulation true;
    private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _crewmanClassnames = [adm_camp_defaultUnitTemplate, "crewmen"] call adm_common_fnc_getUnitTemplateArray;
    private _armourArray = [adm_camp_defaultUnitTemplate, "armour"] call adm_common_fnc_getUnitTemplateArray;

    private _nearRoad = selectRandom (_position nearRoads 100);

    if (isNil "_nearRoad") then {
        private _pos = [_position, 0, 100, 5, 0, 20, 0] call BIS_fnc_findSafePos;
        // BIS_fnc_findSafePos returns X and Y with success and  X Y Z on failure... fucking BI
        if (count _pos isEqualTo 3) exitWith {};
        ts_objVeh = createVehicle [(selectRandom _armourArray), _pos, [], 0, "NONE"];
        ts_objVeh setDir (random 360);
        ts_objVeh setVectorUp surfaceNormal position ts_objVeh;
    } else {
        ts_objVeh = createVehicle [(selectRandom _armourArray), (getPos _nearRoad), [], 0, "NONE"];
        private _dir = random 360;
        private _roadConnectedTo = roadsConnectedTo _nearRoad;
        if (_roadConnectedTo isNotEqualTo []) then {
            _dir = _nearRoad getDir _roadConnectedTo #0;
        };
        ts_objVeh setDir _dir;
        ts_objVeh setVectorUp surfaceNormal position ts_objVeh;
    };

    if (!(ts_objVeh inArea ts_spawn_selectedLocationMarkerName)) exitWith {
        deleteVehicle ts_objVeh;
        ERROR_MSG("fnc_objDestroyVeh, Cannot find position for armour in selected town");
    };

    {
        if (ts_objVeh lockedTurret _x) exitWith {
            INFO_1("fnc_objDestroyVeh, Locked turret in vehicle (%1), skipping crewman spawn.",typeOf ts_objVeh);
        };

        private _unit = [[0,0,0], _grp, _crewmanClassnames, _skillArray] call adm_common_fnc_placeMan;
        _unit assignAsTurret [ts_objVeh, _x];
        _unit moveInTurret [ts_objVeh, _x];
    } forEach allTurrets ts_objVeh;

    ts_objVeh allowCrewInImmobile true;
    ts_objVeh setUnloadInCombat [false, false];
    ts_objVeh setFuel 0;
    ts_objVeh call ark_clear_cargo_fnc_doClearVehicle;

    [true, ["task1"], ["Locate and destroy the static armour in town", "Destroy Armour"], _position, "ASSIGNED", -1, true, "target"] call BIS_fnc_taskCreate;
    [ts_objVeh,_size] call ts_spawn_fnc_createChaseZone;
    ts_objVeh addEventHandler ["Killed", {call ts_spawn_fnc_vehicleDestroyed}];

    ["ace_cookoff_cookoff", {
        params ["_vehicle"];
            _vehicle call ts_spawn_fnc_vehicleDestroyed;
    }] call CBA_fnc_addEventHandler;
};

ts_spawn_fnc_vehicleDestroyed = {
    params ["_vehicle"];

    if (_vehicle isEqualTo ts_objVeh && {!_vehicle getVariable ["ark_ts_vehDestroyed", false]}) then {
        _vehicle setVariable ["ark_ts_vehDestroyed", true, false];
        ["task1", "SUCCEEDED"] call BIS_fnc_taskSetState;
        [getPosATL _vehicle,ts_spawn_selectedLocation #1] call ark_admin_tools_fnc_chaseAI;
    };
};

ts_spawn_fnc_objDestroyAmmo = {
    ts_spawn_selectedLocation params ["_position", "_size"];

    private _buildingArr = nearestObjects [_position, ["House"], (_size / 2), true] select {count (_x buildingPos -1) > 1};
    // Stop objective spawning in random bunkers etc
    _buildingArr = _buildingArr - ts_spawn_placedFortifications;

    ts_spawn_var_ammoCrate = createVehicle ["CUP_BOX_GER_Wps_F", [0,0,0], [], 0, "CAN_COLLIDE"];
    ts_spawn_var_ammoCrate call ark_clear_cargo_fnc_doClearVehicle;
    // Add the ACE action on the clients once it's created
    remoteExec ["ts_spawn_fnc_objDestroyAction", -2];

    if (_buildingArr isEqualTo []) then {
        ts_spawn_var_ammoCrate setPos _position;
    } else {
        private _building = selectRandom _buildingArr;
        private _buildingPos = selectRandom (_building buildingPos -1);
        ts_spawn_var_ammoCrate setPos _buildingPos;
    };

    [true, ["task2"], ["Locate and destroy the ammo cache hidden in town", "Destroy Cache"], _position, "ASSIGNED", -1, true, "destroy"] call BIS_fnc_taskCreate;
    [ts_spawn_var_ammoCrate,_size] call ts_spawn_fnc_createChaseZone;

    [{
        params ["", "_id"];

        if !(ts_spawn_var_ammoCrate getVariable ["ark_ts_canDestroy", true]) exitWith {_id call CBA_fnc_removePerFrameHandler};
        playSound3D ["a3\sounds_f\sfx\beep_target.wss", ts_spawn_var_ammoCrate, true, (getPosASL ts_spawn_var_ammoCrate), 2, 1, 150];
    }, 1] call CBA_fnc_addPerFrameHandler;

    ts_spawn_var_ammoCrate addEventHandler ["Deleted", {["task2","SUCCEEDED"] call BIS_fnc_taskSetState}];
};

ts_spawn_fnc_objDestroyAction = {
    private _action = [
        "destroyCache",
        "Destroy Cache",
        "\a3\ui_f\data\igui\cfg\simpletasks\types\danger_ca.paa",
        {
            player playActionNow "PutDown";
            [
                5,
                _target,
                {
                    params ["_target"];
                    _target setVariable ["ark_ts_canDestroy", false, true];
                    remoteExec ["ts_spawn_fnc_objDestroyCache", 2];
                    [["\A3\ui_f\data\map\mapcontrol\taskIconDone_ca.paa", 2.0], ["Charges set for 30 seconds!"]] call CBA_fnc_notify;
                },
                {
                    [["\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa", 2.0], ["Destruction aborted!"]] call CBA_fnc_notify;
                },
                "Placing charges..."
            ] call ace_common_fnc_progressBar;
        },
        {_target getVariable ["ark_ts_canDestroy", true]}
    ] call ace_interact_menu_fnc_createAction;

    ["CUP_BOX_GER_Wps_F", 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;
};

ts_spawn_fnc_objDestroyCache = {
    ts_spawn_var_bombTimer = 30;
    ts_spawn_var_bombFreq = 0.5;

    private _pfh = [{
        params ["", "_id"];

        playSound3D ["a3\sounds_f\air\Heli_Light_01\warning.wss", ts_spawn_var_ammoCrate, true, (getPosASL ts_spawn_var_ammoCrate), 2.5, ts_spawn_var_bombFreq, 200];
        ts_spawn_var_bombTimer = ts_spawn_var_bombTimer - 1;
        ts_spawn_var_bombFreq = ts_spawn_var_bombFreq + 0.025;

        if (ts_spawn_var_bombTimer isEqualTo 0) exitWith {
            _id call CBA_fnc_removePerFrameHandler;
            "Bo_GBU12_LGB" createVehicle (getPosATL ts_spawn_var_ammoCrate);
            ts_spawn_var_bombTimer = nil;
            ts_spawn_var_bombFreq = nil;
            deleteVehicle ts_spawn_var_ammoCrate;
        };
    }, 1] call CBA_fnc_addPerFrameHandler;
};

ts_spawn_fnc_objRecoverIntel = {
    ts_spawn_selectedLocation params ["_position","_size"];

    private _nearRoad = selectRandom (_position nearRoads 100);

    private ["_helo"];
    if (isNil "_nearRoad") then {
        private _heloPos = [_position, 0, 100, 3, 0, 20, 0] call BIS_fnc_findSafePos;
        _helo = createVehicle ["cup_mh47e_wreck2", _heloPos, [], 0, "NONE"];
        _helo setDir (random 360);
    } else {
        _helo = createVehicle ["cup_mh47e_wreck2", (getPos _nearRoad), [], 0, "NONE"];
        private _dir = random 360;
        private _roadConnectedTo = roadsConnectedTo _nearRoad;
        if (_roadConnectedTo isNotEqualTo []) then {
            _dir = _nearRoad getDir _roadConnectedTo #0;
        };
        _helo setDir _dir;
        _helo setVectorUp surfaceNormal position _helo;
    };

    if (!(_helo inArea ts_spawn_selectedLocationMarkerName)) exitWith {
        deleteVehicle _helo;
        ERROR_MSG("ts_spawn_fnc_objRecoverIntel, Cannot find position for helicopter in the selected area");
    };

    private _smoke = createVehicle ["test_EmptyObjectForSmoke", [0,0,0], [], 0, "CAN_COLLIDE"];
    _smoke attachTo [_helo, [0, 3.5, 0.5]];

    [{
        detach _this;
        deleteVehicle _this;
    }, _smoke, 600] call CBA_fnc_waitAndExecute;

    private _boxPos = _helo getPos [10 + (random 5), random 360];
    private _box = createVehicle ["Box_NATO_Equip_F", _boxPos, [], 0, "NONE"];
    _box allowDamage false;
    _box call ark_clear_cargo_fnc_doClearVehicle;
    _box setVectorUp surfaceNormal position _box;
    _box addItemCargoGlobal ["ACE_Banana", 1];

    [true, ["task3"], ["Locate and secure the intel from the crash site", "Recover Intel"], _position, "ASSIGNED", -1, true, "intel"] call BIS_fnc_taskCreate;
    [_helo,_size] call ts_spawn_fnc_createChaseZone;

    [
        {itemCargo _this isEqualTo []},
        {
            ["task3","SUCCEEDED"] call BIS_fnc_taskSetState;
        },
        _box
    ] call CBA_fnc_waitUntilAndExecute;
};

ts_spawn_fnc_ammoCrate = {

    if (player inArea "ts_spawn_selectedLocation") exitWith {
            [["\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa", 2.0], ["You can only resupply outside of the active AO"]] call CBA_fnc_notify;
    };

    player call ace_common_fnc_goKneeling;

    [
        5,
        [],
        {
            private _pos = ASLToATL (player modelToWorldVisualWorld [0,1,0]);
            private _box = createVehicle ["gm_AmmoBox_wood_03_empty", _pos, [], 0, "CAN_COLLIDE"];
            _box allowDamage false;
            [_box, ["faction", player getVariable "hull3_faction"], ["gear", "Truck"]] call hull3_unit_fnc_init;

            if (insideBuilding player != 1) then {
                createSimpleObject ["Land_ClutterCutter_medium_F", _pos, false];
            };
        },
        {hint "Aborted!"},
        "Deploying ammo box",
        {alive player}
    ] call ace_common_fnc_progressBar;
};

ts_spawn_fnc_medicalCrate = {
    player call ace_common_fnc_goKneeling;

    [
        5,
        [],
        {
            private _pos = ASLToATL (player modelToWorldVisualWorld [0,1,0]);
            private _box = createVehicle ["ARK_medicalSupplyCrate", _pos, [], 0, "CAN_COLLIDE"];
            _box allowDamage false;

            if (insideBuilding player != 1) then {
                createSimpleObject ["Land_ClutterCutter_medium_F", _pos, false];
            };
        },
        {hint "Aborted!"},
        "Deploying medical box",
        {alive player}
    ] call ace_common_fnc_progressBar;
};
