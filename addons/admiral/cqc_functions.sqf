#include "script_component.hpp"

adm_cqc_fnc_placeMan = {
    params ["_position","_group","_unitTemplate","_zoneTemplate","_unitType"];

    private _unit = [
        [0,0,0],
        _group,
        [_unitTemplate, _unitType] call adm_common_fnc_getUnitTemplateArray,
        [_zoneTemplate] call adm_common_fnc_getZoneTemplateSkillValues,
        "CAN_COLLIDE"
    ] call adm_common_fnc_placeMan;
    _unit setPosASL (AGLToASL _position);
    [_unit, _group] call adm_cqc_fnc_initMan;
    LOG_4("admiral.cqc.create: Created unit %1 at position %2, in group %3 with classname %4.",_unit,_position,_group,typeOf _unit);

    _unit;
};

adm_cqc_fnc_initMan = {
    params ["_unit","_group"];

    _group enableAttack false;
    private _wp = [_group, [getPosATL _unit, 0], 'GUARD', 'AWARE', 'RED'] call adm_common_fnc_createWaypoint;
    _group setCurrentWaypoint _wp;
    _unit setDir (random 360);
    _unit disableAI "PATH";
};

adm_cqc_fnc_getBuildingPositions = {
    params ["_building"];

    private _buildingPositions = [];
    if (!((typeOf _building) in adm_cqc_buildingBlacklist)) then {
        private _i = 0;
        while {_building buildingPos _i isNotEqualTo [0,0,0]} do {
            if([_building buildingPos _i] call adm_cqc_fnc_isPositionInBuilding) then {
                _buildingPositions pushBack _i;
            };
            INC(_i);
        };
    };

    _buildingPositions;
};

adm_cqc_fnc_isPositionInBuilding = {
    params ["_pos"];

    private _posAbove = [_pos select 0, _pos select 1, (_pos select 2) + 30];
    private _hasRoof = lineIntersects [ATLToASL _pos, ATLToASL _posAbove];
    private _isValidPos = !(lineIntersects [ATLToASL _pos, ATLToASL _pos]);

    _isValidPos && {adm_canSpawnOnRoof || _hasRoof};
};

adm_cqc_fnc_getMinHeightBuildingPositions = {
    params ["_building","_positions","_minHeight"];

    private _buildingHeight = (getPosASL _building) select 2;

    _positions select {((ATLToASL (_building buildingPos _x)) select 2) - _buildingHeight >= _minHeight};
};

adm_cqc_fnc_getBuildingCapacityPositions = {
    params ["_building","_buildingPositions"];

    private _found = false;
    private _capacity = [_building] call adm_cqc_fnc_getBuildingCapacity;
    if (_capacity == -1 ) then {
        _capacity = ceil (count _buildingPositions) / 2;
    };
    if (_capacity > count _buildingPositions) then {
        _capacity = count _buildingPositions;
    };
    private _newPositions = [];
    for "_i" from 1 to _capacity do {
        private _randomPos = selectRandom _buildingPositions;
        PUSH(_newPositions,_randomPos);
        _buildingPositions = _buildingPositions - [_randomPos];
    };

    _newPositions;
};

adm_cqc_fnc_getBuildingCapacity = {
    params ["_building"];

    private _capacity = -1;
    {
        if (typeOf _building == _x select 0) exitWith { _capacity = _x select 1; };
    } forEach adm_cqc_buildingCapacity;

    _capacity;
};

adm_cqc_fnc_getPossiblePositions = {
    params ["_building","_minHeight"];

    private _buildingPositions = if (isNil "_minHeight") then {
        [_building] call adm_cqc_fnc_getBuildingPositions
    } else {
        [_building, [_building] call adm_cqc_fnc_getBuildingPositions, _minHeight] call adm_cqc_fnc_getMinHeightBuildingPositions
    };

    [_building, _buildingPositions] call adm_cqc_fnc_getBuildingCapacityPositions;
};

adm_cqc_fnc_spawnGarrisonGroupUnits = {
    params ["_group","_numOfUnits","_unitTemplate","_zoneTemplate","_possiblePositions","_building","_zone"];

    for "_i" from 1 to _numOfUnits do {
        private _position = selectRandom _possiblePositions;
        _possiblePositions = _possiblePositions - [_position];
        private _unit = [_building buildingPos _position, _group, _unitTemplate, _zoneTemplate, UNIT_TYPE_ARRAY select UNIT_TYPE_INF] call adm_cqc_fnc_placeMan;
        ["cqc.spawned.unit", [_unit, _building, _position, UNIT_TYPE_ARRAY select UNIT_TYPE_INF, _zone]] call adm_event_fnc_emitEvent;
        ["zone.spawned.unit", [_unit, UNIT_TYPE_ARRAY select UNIT_TYPE_INF, _zone]] call adm_event_fnc_emitEvent;
    };
    LOG_3("admiral.cqc.create: Created %1 CQC unit(s) for group %2 in building %3.",_numOfUnits,_group,_building);
};

adm_cqc_fnc_spawnGarrisonGroup = {
    params ["_zone","_numOfUnits","_possiblePositions","_building"];

    private _unitTemplate = GET_ZONE_UNIT_TEMPLATE(_zone);
    private _group = createGroup [([_unitTemplate] call adm_common_fnc_getUnitTemplateSide), true];
    [_group, _numOfUnits, _unitTemplate, GET_ZONE_TEMPLATE(_zone), _possiblePositions, _building, _zone] call adm_cqc_fnc_spawnGarrisonGroupUnits;
    _group setVariable ["adm_zone_parent", _zone];
    _group enableDynamicSimulation adm_cqc_dynamicSimEnabled;

    _group;
};

adm_cqc_fnc_getZoneBuildings = {
    params ["_zone"];

    private _zoneRadius = (GET_ZONE_AREA(_zone) select 0) max (GET_ZONE_AREA(_zone) select 1);
    private _buildings = GET_ZONE_POSITION(_zone) nearObjects ["Building", _zoneRadius] select {[getPosATL _x, GET_ZONE_AREA(_zone), GET_ZONE_POSITION(_zone)] call adm_common_fnc_isPositionInArea};
    [_buildings] call adm_common_fnc_shuffle;
};

adm_cqc_fnc_getGarrisonGroupSize = {
    params ["_buildingCapacity","_posCount","_zone"];

    private _fireTeamSize = ["ZoneTemplates", GET_ZONE_TEMPLATE(_zone), "infFireteamSize"] call adm_config_fnc_getNumber;
    call {
        if (_buildingCapacity != -1 && {_buildingCapacity <= _posCount})    exitWith {_buildingCapacity};
        if (_buildingCapacity != -1 && {_buildingCapacity > _posCount})     exitWith {_posCount};
        if (_posCount >= _fireTeamSize)                                     exitWith {_fireTeamSize};
        if (_posCount < _fireTeamSize && {_posCount >= 2})                  exitWith {2};
        if (_posCount == 1)                                                 exitWith {1};
                                                                            0;
    };
};

adm_cqc_fnc_spawnGarrison = {
    params ["_zone"];

    private _buildings = [_zone] call adm_cqc_fnc_getZoneBuildings;
    LOG_2("admiral.cqc: CQC Zone %1 found %2 suitable building(s).",GET_ZONE_ID(_zone),count _buildings);
    private _maxAmount = GET_ZONE_POOL(_zone);
    private _currentAmount = 0;
    private _spawnedGroups = [];
    {
        if (_currentAmount >= _maxAmount) exitWith {};
        private ["_building", "_possiblePositions"];
        _building = _x;
        _possiblePositions = [_building, GET_CQC_MIN_HEIGHT(_zone)] call adm_cqc_fnc_getPossiblePositions;
        if (_possiblePositions isNotEqualTo []) then {
            private ["_numOfUnits", "_group"];
            _numOfUnits = [[_building] call adm_cqc_fnc_getBuildingCapacity, count _possiblePositions, _zone] call adm_cqc_fnc_getGarrisonGroupSize;
            _currentAmount = _currentAmount + _numOfUnits;
            _group = [[_zone, _numOfUnits, _possiblePositions, _building], adm_cqc_fnc_spawnGarrisonGroup] call adm_common_fnc_delayGroupSpawn;
            ["cqc.spawned.group", [_group, _building, _zone]] call adm_event_fnc_emitEvent;
            ["zone.spawned.group", [_group, "cqc", _zone]] call adm_event_fnc_emitEvent;
            _spawnedGroups pushBack _group;
            adm_cqc_groups pushBack _group;
        };
    } forEach _buildings;
    ["cqc.spawned.groups", [_spawnedGroups, _zone]] call adm_event_fnc_emitEvent;
    INFO_3("Admiral CQC: CQC Zone %1 spawned %2 unit(s) in %3 group(s).",GET_ZONE_ID(_zone),_currentAmount,count _spawnedGroups);

    _spawnedGroups;
};

adm_cqc_fnc_canForceFire = {
    params ["_ai","_unit"];

    alive _unit && {simulationEnabled _unit} && {!([side _ai, side _unit] call adm_common_fnc_isFriendlySide)} && {!terrainIntersect [eyePos _ai, eyePos _unit]} && {!lineIntersects [eyePos _ai, eyePos _unit]};
};

adm_cqc_fnc_getForceFireEnemy = {
    params ["_ai"];

    private _enemies = [];
    if (!isNull _ai) then {
        _enemies = [getPosATL _ai nearEntities  ["Man", CQC_MAX_ENGAGE_DIST], {[_ai, _x] call adm_cqc_fnc_canForceFire}] call adm_common_fnc_filterFirst;
    };

    _enemies;
};

adm_cqc_fnc_forceFire = {
    params ["_zone"];

    if (call adm_hc_fnc_isHcPresent) exitWith {
        LOG_1("admiral.cqc.forcefire: Headless Client detected. ForceFire has been disabled for CQC Zone %1.",GET_ZONE_ID(_zone));
    };

    SET_CQC_FORCE_FIRE_RUNNING(_zone,true);

    [
        {
            params ["_args", "_id"];
            _args params ["_zone"];

            private _aliveGroupLeft = false;
            {
                private _group = _x;
                {
                    private _unit = _x;
                    if (alive _unit) then {
                        private _enemy = [_unit] call adm_cqc_fnc_getForceFireEnemy;
                        if (count _enemy > 0) then {
                            _enemy = _enemy select 0;
                            _unit lookAt _enemy;
                            _unit doFire _enemy;
                            LOG_4("admiral.cqc.forcefire: CQC unit %1 in group %2, in CQC Zone %3 has found an enemy %4 and is being forced to fire at it.",_unit,_group,GET_ZONE_ID(_zone),_enemy);
                        };
                        _aliveGroupLeft = true;
                    };
                } forEach (units _group);
            } forEach (GET_ZONE_SPAWNED_GROUPS(_zone));

            if (!IS_CQC_FORCE_FIRE_ENABLED(_zone) || { !_aliveGroupLeft } ) exitWith {
                SET_CQC_FORCE_FIRE_RUNNING(_zone,false);
                LOG_1("admiral.cqc.forcefire: ForceFire has been disabled for CQC Zone %1.",GET_ZONE_ID(_zone));
                _id call CBA_fnc_removePerFrameHandler;
            };
        },
        adm_cqc_forceFireDelay,
        [_zone]
    ] call CBA_fnc_addPerFrameHandler;
};

adm_cqc_fnc_globalForceFire = {
    LOG("admiral.cqc.forcefire: Starting global force fire loop.");

    [
        {
            {
                private _group = _x;
                if (!isNull _group) then {
                    {
                        private _unit = _x;
                        if (alive _unit) then {
                            private _enemy = [_unit] call adm_cqc_fnc_getForceFireEnemy;
                            if (count _enemy > 0) then {
                                _enemy = _enemy select 0;
                                _unit lookAt _enemy;
                                _unit doFire _enemy;
                                LOG_3("admiral.cqc.forcefire: CQC unit %1 in group %2 has found an enemy %3 and is being forced to fire at it.",_unit,_group,_enemy);
                            };
                        };
                    } forEach units _group;
                };
            } forEach adm_cqc_groups;
        },
        adm_cqc_forceFireDelay
    ] call CBA_fnc_addPerFrameHandler;
};

adm_cqc_fnc_disableForceFire = {
    params ["_zone"];

    SET_CQC_FORCE_FIRE_ENABLED(_zone,false);
};

adm_cqc_fnc_enableForceFire = {
    params ["_zone"];

    if (!IS_CQC_FORCE_FIRE_RUNNING(_zone)) then {
        SET_CQC_FORCE_FIRE_ENABLED(_zone,true);
        [_zone] call adm_cqc_fnc_forceFire;
    };
};

adm_cqc_fnc_initZone = {
    params ["_zone"];

    adm_cqc_zones pushBack _zone;
    SET_CQC_FORCE_FIRE_ENABLED(_zone,adm_cqc_forceFireEnabled);
    SET_CQC_FORCE_FIRE_RUNNING(_zone,false);
    private _spawnedGroups = [_zone] call adm_cqc_fnc_spawnGarrison;
    SET_ZONE_SPAWNED_GROUPS(_zone,_spawnedGroups);
    [_zone] call adm_cqc_fnc_forceFire;
    INFO_1("Admiral CQC: CQC Zone %1 has been succesfully initialized.",GET_ZONE_ID(_zone));
};

adm_cqc_fnc_getAliveGroups = {
    [[adm_cqc_groups]] call adm_common_fnc_getAliveGroups;
};

adm_cqc_fnc_getAliveUnits = {
   [[adm_cqc_groups]] call adm_common_fnc_getAliveUnits;
};

adm_cqc_fnc_init = {
    adm_cqc_zones = [];
    adm_cqc_groups = [];
};
