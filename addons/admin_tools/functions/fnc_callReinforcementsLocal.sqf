#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Local call from action, done this way because I couldn't figure out how to use server event in config actions.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 0: Type <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_unit, "ah"] call ark_admin_tools_fnc_callReinforcementsLocal
 */

params ["_unit", "_type"];

[QGVAR(callReinforcementsEvent), [_unit, _type]] call CBA_fnc_serverEvent;
