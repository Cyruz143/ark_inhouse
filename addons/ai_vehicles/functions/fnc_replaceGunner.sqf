#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Switches driver to gunner position if gunner has died.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_ai_vehicles_fnc_replaceGunner
 */

params ["_vehicle"];

private _driver = driver _vehicle;
_vehicle setVariable ["ark_ai_vehicles_gunner_dead", true];
_vehicle forceSpeed 0;

[{speed (_this #0) isEqualTo 0},
    {
        moveOut (_this #1);
        unassignVehicle (_this #1);
    },
    [_vehicle,_driver],
    4,
    {
        moveOut (_this #1);
        unassignVehicle (_this #1);
    }
] call CBA_fnc_waitUntilAndExecute;

[{
    params ["_vehicle", "_driver"];
    if (alive _vehicle && {alive _driver} && { lifeState _driver != "INCAPACITATED" } && {isNull objectParent _driver}) then {
        [_vehicle, _driver] call FUNC(moveInGunner);
    };
}, [_vehicle,_driver], 8] call CBA_fnc_waitAndExecute;
