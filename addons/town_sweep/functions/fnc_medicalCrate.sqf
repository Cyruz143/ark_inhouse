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
 * [] call ark_town_sweep_fnc_medicalCrate
 */

player call ace_common_fnc_goKneeling;

[5, [], {
        private _pos = ASLToATL (player modelToWorldVisualWorld [0,1,0]);
        private _box = createVehicle ["ARK_medicalSupplyCrate", _pos, [], 0, "CAN_COLLIDE"];
        _box allowDamage false;

        if (insideBuilding player != 1) then {
            createSimpleObject ["Land_ClutterCutter_medium_F", _pos, false];
        };
    },
    {hint "Aborted!"},
    "Deploying medical box",
    {alive player}
] call ace_common_fnc_progressBar;
