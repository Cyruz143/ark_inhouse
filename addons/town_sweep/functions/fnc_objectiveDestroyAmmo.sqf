#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Server (called from selectObjective)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objDestroyAmmo
 */

private _buildingArr = nearestObjects [GVAR(selectedPosition), ["House"], 400, true] select {count (_x buildingPos -1) > 1};
// Stop objective spawning in random bunkers etc
_buildingArr = _buildingArr - ts_spawn_placedFortifications;

ts_spawn_var_ammoCrate = createVehicle ["CUP_BOX_GER_Wps_F", [0,0,0], [], 0, "CAN_COLLIDE"];
ts_spawn_var_ammoCrate call EFUNC(clear_cargo,doClearVehicle);

// Add the ACE action on the clients once it's created
[QGVAR(objDestroyActionEvent), []] call CBA_fnc_globalEvent;

if (_buildingArr isEqualTo []) then {
    ts_spawn_var_ammoCrate setPos GVAR(selectedPosition);
} else {
    private _building = selectRandom _buildingArr;
    private _buildingPos = selectRandom (_building buildingPos -1);
    ts_spawn_var_ammoCrate setPos _buildingPos;
};

[ts_spawn_var_ammoCrate, GVAR(positionSize)] call FUNC(createChaseZone);

["task2", "Destroy Cache", "Locate and destroy the ammo cache hidden in town", "destroy"] call FUNC(createTask);

[{
    params ["", "_id"];

    if !(ts_spawn_var_ammoCrate getVariable ["ark_ts_canDestroy", true]) exitWith {
        _id call CBA_fnc_removePerFrameHandler;
    };

    playSound3D ["a3\sounds_f\sfx\beep_target.wss", ts_spawn_var_ammoCrate, true, (getPosASL ts_spawn_var_ammoCrate), 2, 1, 150];
}, 1] call CBA_fnc_addPerFrameHandler;

ts_spawn_var_ammoCrate addEventHandler ["Deleted", {
    ["task2"] call FUNC(completeTask);
}];
