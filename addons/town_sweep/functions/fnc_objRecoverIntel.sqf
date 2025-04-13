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
 * [] call ark_town_sweep_fnc_objRecoverIntel
 */

ts_spawn_selectedLocation params ["_position","_size"];

private _helo = [_position] call FUNC(createHeliWreck);
private _box = [_helo, "Box_NATO_Equip_F"] call FUNC(createObjectiveObject);

_box allowDamage false;
_box call EFUNC(clear_cargo,doClearVehicle);
_box addItemCargoGlobal ["ACE_Banana", 1];

[
    true,
    ["task3"],
    ["Locate and secure the intel from the crash site", "Recover Intel"],
    _position,
    "ASSIGNED",
    -1,
    true,
    "intel"
] call BIS_fnc_taskCreate;

[_helo, _size] call FUNC(createChaseZone);

[{itemCargo _this isEqualTo []}, {
        ["task3","SUCCEEDED"] call BIS_fnc_taskSetState;
    },
    _box
] call CBA_fnc_waitUntilAndExecute;
