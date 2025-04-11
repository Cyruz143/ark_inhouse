#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Bool
 *
 * Example:
 * [] call ark_town_sweep_fnc_canLocationBeActivated
 */

count ts_spawn_selectedLocation > 0 && {!(ts_spawn_selectedLocation #2)}
