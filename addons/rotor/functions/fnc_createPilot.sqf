#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Creates pilot and disables skills that would make them deviate from the supplied course.
 *
 * Arguments:
 * 0: Classnames <ARRAY>
 * 1: Side <SIDE>
 * 2: Vehicle <OBJECT>
 *
 * Return Value:
 * Pilot
 *
 * Example:
 * [] call ark_rotor_fnc_createPilot
 */

params ["_pilotClassnames", "_side", "_vehicle"];

private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
private _grp = createGroup [_side, true];
private _pilot = [[0,0,0], _grp, _pilotClassnames, _skillArray] call adm_common_fnc_placeMan;
_pilot assignAsDriver _vehicle;
_pilot moveInDriver _vehicle;
_pilot setBehaviour "CARELESS";
_pilot allowFleeing 0;
{_pilot disableAI _x} forEach ["AUTOTARGET", "AIMINGERROR", "SUPPRESSION"];

_pilot
