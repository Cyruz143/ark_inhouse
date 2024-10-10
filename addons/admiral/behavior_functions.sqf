#include "script_component.hpp"
#include "\userconfig\admiral\log\behavior.h"

adm_behavior_fnc_changeAllGroupState = {
    [
        {
            {
                LOG_2("admiral.behavior: Group %1 is in %2 state.",_x,STATE_TEXT_ARRAY select (_x getVariable AS_ARRAY_2("adm_behavior_state",STATE_INIT)));
                [_x] call (adm_behavior_states select (_x getVariable ["adm_behavior_state", STATE_INIT]));
            } forEach ([] call adm_behavior_fnc_getAllGroups);
        },
        1
    ] call CBA_fnc_addPerFrameHandler;
};

adm_behavior_fnc_stateInit = {
    params ["_group"];

    _group setVariable ["adm_behavior_state", STATE_MOVING, false];
    ["behavior.state.change", [_group, STATE_MOVING]] call adm_event_fnc_emitEvent;
};

adm_behavior_fnc_stateMoving = {
    params ["_group"];

    private ["_nextState", "_enemy"];
    _nextState = STATE_MOVING;
    _enemy = (leader _group) findNearestEnemy (leader _group);
    if (!isNull _enemy && {!((vehicle _enemy) isKindOf "Air")}) then {
        _nextState = STATE_ENEMYFOUND;
        _group setVariable ["adm_behavior_enemyPos", getPosATL _enemy, false];
        LOG_2("admiral.behavior: Group %1 found enemy %2!",_group,_enemy);
        ["behavior.state.change", [_group, _nextState, _enemy]] call adm_event_fnc_emitEvent;
    };
    _group setVariable ["adm_behavior_state", _nextState, false];
};

adm_behavior_fnc_stateEnemyFound = {
    params ["_group"];

    private _enemyPos = _group getVariable "adm_behavior_enemyPos";
    private _reinforcementGroups = [];
    if ([_enemyPos, side _group] call adm_behavior_fnc_canCallReinforcement) then {
        _reinforcementGroups = [_group, _enemyPos, [side _group, _enemyPos] call adm_behavior_fnc_getEnemyNumbers] call adm_behavior_fnc_callReinforcement;
        [_enemyPos, side _group] call adm_behavior_fnc_addToFoundEnemyArray;
    };
    _group setVariable ["adm_behavior_state", STATE_SADENEMY, false];
    ["behavior.state.change", [_group, STATE_SADENEMY, _reinforcementGroups]] call adm_event_fnc_emitEvent;
};

adm_behavior_fnc_stateSeekAndDestroyEnemy = {
    params ["_group"];

    private _sadWp = [_group, [_group getVariable "adm_behavior_enemyPos", 0], 'SAD', 'AWARE', 'RED'] call adm_common_fnc_createWaypoint;
    _sadWp setWaypointStatements ["true", "[group this] call adm_behavior_fnc_continueMoving;"];
    _group setVariable ["adm_behavior_lastWp", currentWaypoint _group, false];
    _group setVariable ["adm_behavior_state", STATE_COMBAT, false];
    ["behavior.state.change", [_group, STATE_COMBAT]] call adm_event_fnc_emitEvent;
    _group setCurrentWaypoint _sadWp;
    private _enemyPos = _group getVariable "adm_behavior_enemyPos";
    {
        _x setDestination [_enemyPos, "LEADER PLANNED", true];
        _x doMove _enemyPos;
    } forEach units _group;
    LOG_1("admiral.behavior: SAD waypoint was assigned to group %1.",_group);
};

adm_behavior_fnc_stateCombat = {
    params ["_group"];

    private _reinfGroup = _group getVariable "adm_behavior_reinfGroup";
    if (!isNil {_reinfGroup}) then {
        private _enemyPos = _group getVariable "adm_behavior_enemyPos";
        if (!IS_GROUP_ALIVE(_reinfGroup)) then {
            LOG_2("admiral.behavior: Group %1 tries to call additinal reinforcement, becasue reinforced group %2 died.",_group,_reinfGroup);
            private _enemyNumbers = [side _group, _enemyPos] call adm_behavior_fnc_getEnemyNumbers;
            _group setVariable ["adm_behavior_reinfGroup", nil];
            [_group, _enemyPos, [ceil random (_enemyNumbers select 0), floor random (_enemyNumbers select 1), floor random (_enemyNumbers select 2)]] call adm_behavior_fnc_callReinforcement;
        } else {
            if (_reinfGroup getVariable "adm_behavior_state" == STATE_MOVING && {leader _group distance _enemyPos > BEHAVIOR_REINF_TURNAROUND_DIST}) then {
                [_group] call adm_behavior_fnc_continueMoving;
                LOG_2("admiral.behavior: Group %1 returns patrolling, becasue reinforced group %2 is not in combat.",_group,_reinfGroup);
            };
        };
    };
};

adm_behavior_fnc_continueMoving = {
    params ["_group"];

    LOG_2("admiral.behavior: Group %1 is in %2 state.",_group,STATE_TEXT_ARRAY select (_group getVariable "adm_behavior_state"));
    _group setVariable ["adm_behavior_state", STATE_CONTINUEMOVING, false];
    ["behavior.state.change", [_group, STATE_CONTINUEMOVING]] call adm_event_fnc_emitEvent;
};

adm_behavior_fnc_updateWaypointsAndMoving = {
    params ["_group"];

    if (_group getVariable "adm_behavior_state" == STATE_CONTINUEMOVING) then {
        _group setCurrentWaypoint [_group, _group getVariable "adm_behavior_lastWp"];
        _group setVariable ["adm_behavior_state", STATE_MOVING, false];
        ["behavior.state.change", [_group, STATE_MOVING]] call adm_event_fnc_emitEvent;
        _group setVariable ["adm_behavior_enemyPos", nil, false];
        _group setVariable ["adm_behavior_reinfGroup", nil, false];
        deleteWaypoint [_group, (count waypoints _group) - 1];
        LOG_1("admiral.behavior: Group %1 returns patrolling.",_group);
    };
};

adm_behavior_fnc_getEnemyNumbers = {
    params ["_side","_enemyPos"];

    private ["_enemyNumbers", "_enemyUnits"];
    _enemyNumbers = [1, 0, 0];
    _enemyUnits = [_side] call adm_behavior_getEnemyUnits;
    {
        if (_x distance _enemyPos <= BEHAVIOR_ENEMY_CHECK_RADIUS && {alive _x}) then {
            _enemyNumbers set [0, (_enemyNumbers select 0) + 1];
            if (vehicle _x != _x) then {
                call {
                    if ((vehicle _x) isKindOf "Car") exitWith {_enemyNumbers set [1, (_enemyNumbers select 1) + 1];};
                    if ((vehicle _x) isKindOf "Air") exitWith {_enemyNumbers set [2, (_enemyNumbers select 2) + 1];};
                };
            };
        };
    } forEach _enemyUnits;

    _enemyNumbers;
};

adm_behavior_fnc_canCallReinforcement = {
    params ["_enemyPos","_side"];

    private _canCall = true;
    {
        if ((_x select 0) + BEHAVIOR_REINF_COOLDOWN > time || {(_x select 1) distance _enemyPos < BEHAVIOR_ENEMY_CHECK_RADIUS}) exitWith {
            _canCall = false;
        };
    } forEach ([_side] call adm_behavior_fnc_getFoundEnemyArray);

    _canCall || {floor random 100 < BEHAVIOR_CANCALL_PERCENT_CHANCE};
};

adm_behavior_fnc_callReinforcement = {
    params ["_group","_enemyPos","_enemyNumbers"];

    private _callNumbers = [BEHAVIOR_REINF_NUM(_enemyNumbers,1,1,1) + 1, BEHAVIOR_REINF_NUM(_enemyNumbers,3,1,1), BEHAVIOR_REINF_NUM(_enemyNumbers,4,2,1)];
    LOG_4("admiral.behavior: Group %1 found %2 number of enemies and tries to call %3 number of reinforcements at position %4.",_group,_enemyNumbers,_callNumbers,_enemyPos);
    private _infantryGroups = [_group, _enemyPos, _callNumbers select 0, adm_behavior_fnc_getAvailableInfGroups] call adm_behavior_fnc_callReinforcementGroups;
    private _technicalGroups = [_group, _enemyPos, _callNumbers select 1, adm_behavior_fnc_getAvailableTechGroups] call adm_behavior_fnc_callReinforcementGroups;
    private _armourGroups = [_group, _enemyPos, _callNumbers select 2, adm_behavior_fnc_getAvailableArmourGroups] call adm_behavior_fnc_callReinforcementGroups;

    [_infantryGroups, _technicalGroups, _armourGroups];
};

adm_behavior_fnc_callReinforcementGroups = {
    params ["_group","_enemyPos","_count","_groupFunc"];

    private _reinforcementGroups = [];
    if (_count > 0) then {
        private _groups = [_enemyPos, _count, [side _group, _enemyPos] call _groupFunc] call adm_behavior_fnc_getReinforcementGroups;
        {
            if ([_x] call adm_behavior_fnc_canReinforce) then {
                _x setVariable ["adm_behavior_enemyPos", _enemyPos, false];
                _x setVariable ["adm_behavior_reinfGroup", _group, false];
                _x setVariable ["adm_behavior_state", STATE_SADENEMY, false];
                PUSH(_reinforcementGroups,_x);
            };
        } forEach _groups;
    };

    _reinforcementGroups;
};

adm_behavior_fnc_getReinforcementGroups = {
    params ["_enemyPos","_numberOfGroups","_groups"];

    private _reinforcementGroups = [];
    if (_numberOfGroups > 0) then {
        private _closestGroups = [_groups, {leader _x distance _enemyPos > leader _y distance _enemyPos}] call adm_common_fnc_insertionSort;
        for "_i" from 0 to (_numberOfGroups min (count _closestGroups)) - 1 do {
            PUSH(_reinforcementGroups,_closestGroups select _i);
        };
    };

    _reinforcementGroups;
};

adm_behavior_fnc_canReinforce = {
    params ["_group"];

    _group getVariable ["adm_behavior_state", STATE_INIT] == STATE_MOVING
        && {!(_x getVariable AS_ARRAY_2("adm_patrol_hasTarget",false))};
};

adm_behavior_fnc_getAllGroups = {
    private _patrolGroups = [];
    FILTER_PUSH_ALL(_patrolGroups,adm_patrol_infGroups,{!(_x getVariable AS_ARRAY_2("adm_patrol_hasTarget",false))});
    FILTER_PUSH_ALL(_patrolGroups,adm_patrol_techGroups,{!(_x getVariable AS_ARRAY_2("adm_patrol_hasTarget",false))});
    FILTER_PUSH_ALL(_patrolGroups,adm_patrol_armourGroups,{!(_x getVariable AS_ARRAY_2("adm_patrol_hasTarget",false))});
    [[_patrolGroups,adm_camp_infGroups,adm_camp_techGroups,adm_camp_armourGroups]] call adm_common_fnc_getAliveGroups;
};

adm_behavior_fnc_getAvailableInfGroups = {
    params ["_side","_enemyPos"];

    private _groups = [];
    FILTER_PUSH_ALL(_groups,adm_patrol_infGroups,adm_behavior_fnc_isAvailableGroup);
    FILTER_PUSH_ALL(_groups,adm_camp_infGroups,adm_behavior_fnc_isAvailableGroup);
    _groups;
};

adm_behavior_fnc_getAvailableTechGroups = {
    params ["_side","_enemyPos"];

    private _groups = [];
    FILTER_PUSH_ALL(_groups,adm_patrol_techGroups,adm_behavior_fnc_isAvailableGroup);
    FILTER_PUSH_ALL(_groups,adm_camp_techGroups,adm_behavior_fnc_isAvailableGroup);
    _groups;
};

adm_behavior_fnc_getAvailableArmourGroups = {
    params ["_side","_enemyPos"];

    private _groups = [];
    FILTER_PUSH_ALL(_groups,adm_patrol_armourGroups,adm_behavior_fnc_isAvailableGroup);
    FILTER_PUSH_ALL(_groups,adm_camp_armourGroups,adm_behavior_fnc_isAvailableGroup);
    _groups;
};

adm_behavior_fnc_isAvailableGroup = {
    [side _x, _side] call adm_common_fnc_isFriendlySide
        && {IS_GROUP_ALIVE(_x)}
        && {leader _x distance _enemyPos <= BEHAVIOR_MAX_REINFORCEMENT_DIST}
        && {[_x] call adm_behavior_fnc_canReinforce};
};

adm_behavior_getEnemyUnits = {
    params ["_side"];

    private _units = [];
    FILTER_PUSH_ALL(_units,ALL_UNITS,{!(AS_ARRAY_2(side _x,_side) call adm_common_fnc_isFriendlySide)});
    _units;
};

adm_behavior_fnc_addToFoundEnemyArray = {
    params ["_enemyPos","_side"];

    private _sideIndex = SIDE_ARRAY find _side;
    if (_sideIndex >= 0) then {
        PUSH((adm_behavior_foundEnemies select _sideIndex),AS_ARRAY_2(time,_enemyPos));
    };
};

adm_behavior_fnc_getFoundEnemyArray = {
    params ["_side"];

    private _result = [];
    private _sideIndex = SIDE_ARRAY find _side;
    if (_sideIndex >= 0) then {
        _result = adm_behavior_foundEnemies select _sideIndex;
    };

    _result;
};

adm_behavior_fnc_initFoundEnemies = {
    adm_behavior_foundEnemies = [];
    {
        PUSH(adm_behavior_foundEnemies,[]);
    } forEach SIDE_ARRAY;
};

adm_behavior_fnc_init = {
    adm_behavior_states = [adm_behavior_fnc_stateInit, adm_behavior_fnc_stateMoving, adm_behavior_fnc_stateEnemyFound, adm_behavior_fnc_stateSeekAndDestroyEnemy, adm_behavior_fnc_stateCombat, adm_behavior_fnc_updateWaypointsAndMoving, {}];
    [] call adm_behavior_fnc_initFoundEnemies;
    [] call adm_behavior_fnc_changeAllGroupState;
};
