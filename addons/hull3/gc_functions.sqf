#include "script_component.hpp"
#include "\userconfig\hull3\log\gc.h"

hull3_gc_fnc_preInit = {
    hull3_gc_isEnabled = ["GarbageCollector", "isEnabled"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveCorpses = ["GarbageCollector", "canRemoveCorpses"] call hull3_config_fnc_getBool;
    hull3_gc_canRemoveWrecks = ["GarbageCollector", "canRemoveWrecks"] call hull3_config_fnc_getBool;

    hull3_gc_panicCps = ["GarbageCollector", "panicCps"] call hull3_config_fnc_getNumber;

    hull3_gc_corpseLimit = ["GarbageCollector", "corpseLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_panicCorpseLimit = ["GarbageCollector", "panicCorpseLimit"] call hull3_config_fnc_getNumber;

    hull3_gc_wreckLimit = ["GarbageCollector", "wreckLimit"] call hull3_config_fnc_getNumber;
    hull3_gc_panicWreckLimit = ["GarbageCollector", "panicWreckLimit"] call hull3_config_fnc_getNumber;

    hull3_gc_checkDelay = ["GarbageCollector", "checkDelay"] call hull3_config_fnc_getNumber;

    hull3_gc_currentCorpseLimit = hull3_gc_corpseLimit;
    hull3_gc_currentWreckLimit = hull3_gc_wreckLimit;
};

hull3_gc_fnc_start = {
    [
        {
            {
                _x setVariable ["hull3_gc_doNotRemove", true, false];
            } forEach playableUnits;
            {
                _x setVariable ["hull3_gc_doNotRemove", true, false];
            } forEach allDead;
            hull3_gc_canRemoveCorpses = true;
            hull3_gc_canRemoveWrecks = true;
            hull3_gc_isEnabled = true;
            hull3_gc_deadUnits = [];
            hull3_gc_deadVehicles = [];
            hull3_gc_eh_sortDead = addMissionEventHandler ["EntityKilled",{call hull3_gc_fnc_sortDead}];
            call hull3_gc_fnc_monitor;
        },
        [],
        5
    ] call CBA_fnc_waitAndExecute;
};

hull3_gc_fnc_stop = {
    removeMissionEventHandler ["EntityKilled", hull3_gc_eh_sortDead];
    hull3_gc_canRemoveCorpses = false;
    hull3_gc_canRemoveWrecks = false;
    hull3_gc_isEnabled = false;
    hull3_gc_deadUnits = nil;
    hull3_gc_deadVehicles = nil;
};

hull3_gc_fnc_monitor = {
    [
        {
            params ["", "_id"];
            if !(hull3_gc_isEnabled) exitWith {_id call CBA_fnc_removePerFrameHandler};
            call hull3_gc_fnc_adjustConfig;
            call hull3_gc_fnc_monitorDead;
        },
        hull3_gc_checkDelay
    ] call CBA_fnc_addPerFrameHandler;
};

hull3_gc_fnc_adjustConfig = {
    if !(missionNamespace getVariable ["ark_asm_enabled", false]) exitWith {};
    private _currentCps = [] call ark_asm_fnc_getCurrentCps;
    if (_currentCps <= hull3_gc_panicCps) then {
        hull3_gc_currentCorpseLimit = hull3_gc_panicCorpseLimit;
        hull3_gc_currentWreckLimit = hull3_gc_panicWreckLimit;
    } else {
        hull3_gc_currentCorpseLimit = hull3_gc_corpseLimit;
        hull3_gc_currentWreckLimit = hull3_gc_wreckLimit;
    };
};

hull3_gc_fnc_sortDead = {
    params ["_killed"];

    if (isNull _killed) exitWith {};
    if (!(_killed isKindOf "CAManBase")
        && { !(_killed isKindOf "Car") }
        && { !(_killed isKindOf "Tank") }
        && { !(_killed isKindOf "Air") }
        && { !(_killed isKindOf "Ship") }) exitWith {};

    if (isPlayer _killed || { _killed getVariable ["hull3_gc_doNotRemove", false] } ) exitWith {};

    if (_killed isKindOf "CAManBase") then {
         hull3_gc_deadUnits pushBack _killed;

        // Handles killed AI with dynmaicSim in a frozen standing animation post death
        if !(simulationEnabled _killed) then {
            _killed enableSimulationGlobal true;
        };
    } else {
        hull3_gc_deadVehicles pushBack _killed;
    };
};

hull3_gc_fnc_monitorDead = {
    if (hull3_gc_canRemoveCorpses) then {
        LOG("hull3.gc: Starting next corpse GC check.");
        private _removedCount = 0;
        private _deadAmount = count hull3_gc_deadUnits;
        private _limitReached = _deadAmount > hull3_gc_currentCorpseLimit;
        if (_limitReached) then {
            LOG_2("hull3.gc: Limit %1 of %2 reached, removing corpses.",_deadAmount,hull3_gc_currentCorpseLimit);
            for "_i" from 0 to (_deadAmount - hull3_gc_currentCorpseLimit) do {
                (hull3_gc_deadUnits deleteAt 0) call hull3_gc_fnc_cleanDead;
                _removedCount = _removedCount + 1;
            };
        };
        LOG_1("hull3.gc: Removed %1 units.",_removedCount);
    };

    if (hull3_gc_canRemoveWrecks) then {
        LOG("hull3.gc: Starting next wreck GC check.");
        private _removedCount = 0;
        private _wreckAmount = count hull3_gc_deadVehicles;
        private _limitReached = _wreckAmount > hull3_gc_currentWreckLimit;
        if (_limitReached) then {
            LOG_2("hull3.gc: Limit %1 of %2 reached, removing wrecks.",_wreckAmount,hull3_gc_currentWreckLimit);
            for "_i" from 0 to (_wreckAmount - hull3_gc_currentWreckLimit) do {
                (hull3_gc_deadVehicles deleteAt 0) call hull3_gc_fnc_cleanDead;
                _removedCount = _removedCount + 1;
            };
        };
        LOG_1("hull3.gc: Removed %1 wrecks.",_removedCount);
    };

    // Engine should take care of this but it can't hurt to manually run every loop to do extra clean up
    {
        if (units _x isEqualTo []) then {
            if (local _x) then {
                deleteGroup _x;
            } else {
                _x remoteExec ["deleteGroup", groupOwner _x];
            };
        };
    } forEach allGroups;
};

hull3_gc_fnc_cleanDead = {
    params ["_obj"];

    if (_obj isKindOf "CAManBase") then {
        if (isNull objectParent _obj) then {
            deleteVehicle _obj;
        } else {
            objectParent _obj deleteVehicleCrew _obj;
        };
    } else {
        deleteVehicle _obj;
    };
};
