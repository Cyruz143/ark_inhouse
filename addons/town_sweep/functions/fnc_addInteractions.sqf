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
 * [] call ark_town_sweep_fnc_addInteractions
 */

private _condition = { call EFUNC(main,isHost) && {[_player, _target, []] call ace_common_fnc_canInteractWith} };
private _action = [
    "Town Sweep",
    "Town Sweep",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\attack_ca.paa",
    {},
    _condition
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

private _actions = [
    ["Select Location", "\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa", { call FUNC(selectLocation) }],
    ["Activate Zone", QPATHTOEF(main,resources\ai_enable.paa), { [0, { [] call FUNC(activateLocation) }, []] call CBA_fnc_globalExecute; }],
    ["Enable Group Deploy", QPATHTOEF(main,resources\click_enable.paa), { [0, { [] call FUNC(enableGroupDeploy) }, []] call CBA_fnc_globalExecute; }]
];

{
    _action = [
        _x select 0,
        _x select 0,
        _x select 1,
        _x select 2,
        _condition
        ] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions", "Town Sweep"], _action] call ace_interact_menu_fnc_addActionToObject;
} forEach _actions;

_action = [
    "Difficulty",
    "Difficulty",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\use_ca.paa",
    {},
    _condition
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Town Sweep"], _action] call ace_interact_menu_fnc_addActionToObject;

private _difficulties = [
    ["Easy", 2],
    ["Normal", 3],
    ["Hard", 4]
];

{
    _action = [
        _x select 0,
        format ["%1 (%2x)", _x select 0, _x select 1],
        "",
        {
            [0, { ts_spawn_ai_multiplier = _this select 0 }, [_this select 2 select 0]] call CBA_fnc_globalExecute;
        },
        _condition,
        {},
        [_x select 1]
    ] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions", "Town Sweep", "Difficulty"], _action] call ace_interact_menu_fnc_addActionToObject;
} forEach _difficulties;

_action = [
    "Town Size",
    "Town Size",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\search_ca.paa",
    {},
    _condition
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "Town Sweep"], _action] call ace_interact_menu_fnc_addActionToObject;

private _sizes = [
    ["Increase", ts_spawn_location_sizeChange],
    ["Increase", ts_spawn_location_sizeChange / 2],
    ["Decrease", -ts_spawn_location_sizeChange],
    ["Decrease", -ts_spawn_location_sizeChange / 2]
];

{
    _action = [
        _x select 0,
        format ["%1 (%2m)", _x select 0, _x select 1],
        "",
        { [0, { call FUNC(changeLocationSize); }, [_this select 2 select 0]] call CBA_fnc_globalExecute; },
        _condition,
        {},
        [_x select 1]
    ] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions", "Town Sweep", "Town Size"], _action] call ace_interact_menu_fnc_addActionToObject;
} forEach _sizes;
