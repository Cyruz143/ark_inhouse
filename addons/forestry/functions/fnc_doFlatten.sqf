#include "..\script_component.hpp"
/*
 * Author: Cyruz, Commy2, Drofseh
 * Flattens the grass
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_forestry_fnc_doFlatten
 */

playSound3D [QPATHTOF(resources\flatten.ogg), objNull, false, getPosASL player, 5, 1, 25];
player call ace_common_fnc_goKneeling;

[5,
    [],
    {createSimpleObject ["Land_ClutterCutter_medium_F", (player modelToWorldVisualWorld [0,2.5,0]), false]},
    {[[QPATHTOF(resources\grass.paa), 2.0], ["Aborted grass flattening"]] call CBA_fnc_notify},
    "Flattening Grass"
] call ace_common_fnc_progressBar;
