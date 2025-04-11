#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Arguments:
 * 0: Pos <POSITION>
 * 1: Size <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_chaseAI
 */

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

    [{
        [false] call EFUNC(chase_ai,enableSpawning);
    }, [], 300] call CBA_fnc_waitAndExecute;
} else {
    ts_trg_chaseAI setPosASL _pos;
    ark_chase_ai_var_maxAIUnits = ark_chase_ai_var_maxAIUnits + 10;
    [true] call EFUNC(chase_ai,enableSpawning);
    [{
        [false] call EFUNC(chase_ai,enableSpawning);
    }, [], 300] call CBA_fnc_waitAndExecute;
};
