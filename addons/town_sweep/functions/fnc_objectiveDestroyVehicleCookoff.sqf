#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Server (called from objectiveDestroyVehicle)
 *
 * Arguments:
 * 0: Vehicle <OBJECT> (Cook-off vehicle from event)
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objectiveDestroyVehicleCookoff
 */

params ["_vehicle"];

if (_vehicle != GVAR(objectiveVehicle)) exitWith {};

if !(GVAR(objectiveVehicle) getVariable [QGVAR(vehicleDestroyed), false]) then {
    GVAR(objectiveVehicle) setVariable [QGVAR(vehicleDestroyed), true, false];

    ["task1"] call FUNC(completeTask);

    [getPosATL GVAR(objectiveVehicle), GVAR(positionSize)] call EFUNC(admin_tools,chaseAI);
};
