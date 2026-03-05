#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Server (called from createFortifications)
 *
 * Arguments:
 * 0: Building <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_fillFortifications
 */

params ["_building"];

private _buildingPositions = _building buildingPos -1;
private _scaledBuildingPositions = [];

if (count _buildingPositions < 6) then {
    _scaledBuildingPositions = _buildingPositions;
} else {
    for "_i" from 0 to (count _buildingPositions) step 2 do {
        _scaledBuildingPositions pushBack (_buildingPositions select _i);
    };
};

private _group = createGroup [ts_enemy_side, true];
_group enableDynamicSimulation true;

private _skillArray = ["Cqc"] call adm_common_fnc_getZoneTemplateSkillValues;
private _infantryClassnames = [adm_camp_defaultUnitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;

{
    [{
        private _unit = [_this, _group, _infantryClassnames, _skillArray] call adm_common_fnc_placeMan;
        [_unit, true] call EFUNC(ai_sentry,make_sentry);
        _unit setUnitPos "UP";
    }, _x, _forEachIndex * 1] call CBA_fnc_waitAndExecute;
} forEach _scaledBuildingPositions;
