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
 * [] call ark_town_sweep_fnc_objectiveDestroyCache
 */

private _buildings = nearestObjects [GVAR(selectedPosition), ["House"], 400, true] select {count (_x buildingPos -1) > 1};
// Stop objective spawning in random bunkers etc
_buildings = _buildings - GVAR(placedFortifications);

GVAR(destroyCacheObject) = createVehicle ["CUP_BOX_GER_Wps_F", [0,0,0], [], 0, "CAN_COLLIDE"];
GVAR(destroyCacheObject) call EFUNC(clear_cargo,doClearVehicle);

// Add the ACE action on the clients once it's created
[QGVAR(objectiveDestroyCacheActionsEvent)] call CBA_fnc_globalEvent;

if (_buildings isEqualTo []) then {
    GVAR(destroyCacheObject) setPos GVAR(selectedPosition);
} else {
    private _building = selectRandom _buildings;
    private _buildingPos = selectRandom (_building buildingPos -1);
    GVAR(destroyCacheObject) setPos _buildingPos;
};

[GVAR(destroyCacheObject), GVAR(positionSize)] call FUNC(createChaseZone);

["task2", "Destroy Cache", "Locate and destroy the ammo cache hidden in town", "destroy"] call FUNC(createTask);

[{
    params ["", "_id"];

    if !(GVAR(destroyCacheObject) getVariable ["ark_ts_canDestroy", true]) exitWith {
        _id call CBA_fnc_removePerFrameHandler;
    };

    playSound3D ["a3\sounds_f\sfx\beep_target.wss", GVAR(destroyCacheObject), true, (getPosASL GVAR(destroyCacheObject)), 2, 1, 150];
}, 1] call CBA_fnc_addPerFrameHandler;

GVAR(destroyCacheObject) addEventHandler ["Deleted", {
    ["task2"] call FUNC(completeTask);
}];
