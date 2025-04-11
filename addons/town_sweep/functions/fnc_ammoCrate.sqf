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
 * [] call ark_town_sweep_fnc_ammoCrate
 */

if (player inArea "ts_spawn_selectedLocation") exitWith {
        [["\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa", 2.0], ["You can only resupply outside of the active AO"]] call CBA_fnc_notify;
};

player call ace_common_fnc_goKneeling;

[5, [], {
        private _pos = ASLToATL (player modelToWorldVisualWorld [0,1,0]);
        private _box = createVehicle ["gm_AmmoBox_wood_03_empty", _pos, [], 0, "CAN_COLLIDE"];
        _box allowDamage false;
        [_box, ["faction", player getVariable "hull3_faction"], ["gear", "Truck"]] call hull3_unit_fnc_init;

        if (insideBuilding player != 1) then {
            createSimpleObject ["Land_ClutterCutter_medium_F", _pos, false];
        };
    },
    {hint "Aborted!"},
    "Deploying ammo box",
    {alive player}
] call ace_common_fnc_progressBar;
