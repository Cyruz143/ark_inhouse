#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objDestroyCache
 */

ts_spawn_var_bombTimer = 30;
ts_spawn_var_bombFreq = 0.5;

[{
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
