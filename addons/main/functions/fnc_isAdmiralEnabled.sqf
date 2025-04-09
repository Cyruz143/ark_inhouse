#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Checks if admiral is enabled
 *
 * Arguments:
 * None
 *
 * Return Value:
 * 0: Is admiral enabled <BOOL>
 *
 * Example:
 * [] call ark_main_fnc_isAdmiralEnabled
 */

getNumber (missionConfigFile >> "Admiral" >> "isEnabled") isEqualTo 1
