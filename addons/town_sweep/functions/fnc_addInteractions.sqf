#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: All players (called from postInit)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_addInteractions
 */

// Only the core action requires a condition as they are all child actions. Perf saving on interact menu being open.
private _coreCondition = { call EFUNC(main,isHost) && {[_player, _target, []] call ace_common_fnc_canInteractWith} };

private _townSweepCoreAction = [
    "Town Sweep",
    "Town Sweep",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\attack_ca.paa",
    {},
    _coreCondition
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _townSweepCoreAction] call ace_interact_menu_fnc_addActionToObject;

private _selectLocationAction = [
    "Select Location",
    "Select Location",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa",
    {[] call FUNC(selectLocation)},
    {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Town Sweep"], _selectLocationAction] call ace_interact_menu_fnc_addActionToObject;

private _activateZoneAction = [
    "Activate Zone",
    "Activate Zone",
    QPATHTOEF(main,resources\ai_enable.paa),
    {[QGVAR(activateLocationEvent)] call CBA_fnc_serverEvent}, // Former global execute
    {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Town Sweep"], _activateZoneAction] call ace_interact_menu_fnc_addActionToObject;

private _enableGroupDeployAction = [
    "Enable Group Deploy",
    "Enable Group Deploy",
    QPATHTOEF(main,resources\click_enable.paa),
    {[QGVAR(enableGroupDeployEvent)] call CBA_fnc_serverEvent}, // Former global execute
    {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Town Sweep"], _enableGroupDeployAction] call ace_interact_menu_fnc_addActionToObject;

// Town Sizes
private _townSizeAction = [
    "Town Size",
    "Town Size",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\search_ca.paa",
    {},
    {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Town Sweep"], _townSizeAction] call ace_interact_menu_fnc_addActionToObject;

private _townSizeIncreaseLarge = [
    "IncreaseLarge",
    "Increase (100m)",
    "",
    {[100] call FUNC(changeLocationSize)},
    {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Town Sweep", "Town Size"], _townSizeIncreaseLarge] call ace_interact_menu_fnc_addActionToObject;

private _townSizeIncreaseSmall = [
    "IncreaseSmall",
    "Increase (50m)",
    "",
    {[50] call FUNC(changeLocationSize)},
    {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Town Sweep", "Town Size"], _townSizeIncreaseSmall] call ace_interact_menu_fnc_addActionToObject;

private _townSizeDecreaseLarge = [
    "DecreaseLarge",
    "Decrease (100m)",
    "",
    {[-100] call FUNC(changeLocationSize)},
    {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Town Sweep", "Town Size"], _townSizeDecreaseLarge] call ace_interact_menu_fnc_addActionToObject;

private _townSizeDecreaseSmall = [
    "DecreaseSmall",
    "Decrease (50m)",
    "",
    {[-50] call FUNC(changeLocationSize)},
    {true}
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "Town Sweep", "Town Size"], _townSizeDecreaseSmall] call ace_interact_menu_fnc_addActionToObject;
