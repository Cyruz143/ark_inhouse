#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Server (called from objectiveDestroyVehicle)
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_vehicleDestroyed
 */

params ["_vehicle"];

if (_vehicle isEqualTo ts_objVeh && { !(_vehicle getVariable ["ark_ts_vehDestroyed", false]) }) then {
    _vehicle setVariable ["ark_ts_vehDestroyed", true, false];
    ["task1"] call FUNC(completeTask);
    [getPosATL _vehicle,[GVAR(positionSize),GVAR(positionSize)]] call EFUNC(admin_tools,chaseAI);
};
