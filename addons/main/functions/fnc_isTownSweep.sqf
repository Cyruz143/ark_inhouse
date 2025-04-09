#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if mission is a town sweep.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * 0: Is town sweep <BOOL>
 *
 * Example:
 * [] call ark_main_fnc_isAdmiralEnabled
 */

getNumber(missionConfigFile >> 'TownSweep' >> 'isEnabled') isEqualTo 1
