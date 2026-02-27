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

private _helo = [GVAR(selectedPosition)] call FUNC(createHeliWreck);
private _box = [_helo, "Box_NATO_Equip_F"] call FUNC(createObjectiveObject);

_box allowDamage false;
_box call EFUNC(clear_cargo,doClearVehicle);
_box addItemCargoGlobal ["ACE_Banana", 1];

["task3", "Recover Intel", "Locate and secure the intel from the crash site", "intel"] call FUNC(createTask);

[_helo, GVAR(positionSize)] call FUNC(createChaseZone);

[{itemCargo _this isEqualTo []}, {
    ["task3"] call FUNC(completeTask);
}, _box] call CBA_fnc_waitUntilAndExecute;
