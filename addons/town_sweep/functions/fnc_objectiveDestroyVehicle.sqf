#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Server (called from selectObjective)
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objectiveDestroyVehicle
 */

private _group = createGroup [ts_enemy_side, true];
_group enableDynamicSimulation true;
private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
private _crewmanClassnames = [adm_camp_defaultUnitTemplate, "crewmen"] call adm_common_fnc_getUnitTemplateArray;
private _armourArray = [adm_camp_defaultUnitTemplate, "armour"] call adm_common_fnc_getUnitTemplateArray;

private _nearRoad = selectRandom (GVAR(selectedPosition) nearRoads 100);

if (isNil "_nearRoad") then {
    private _pos = [GVAR(selectedPosition), 0, 100, 5, 0, 20, 0] call BIS_fnc_findSafePos;
    // BIS_fnc_findSafePos returns X and Y with success and  X Y Z on failure... fucking BI
    if (count _pos isEqualTo 3) exitWith {};
    GVAR(objectiveVehicle) = createVehicle [(selectRandom _armourArray), _pos, [], 0, "NONE"];
    GVAR(objectiveVehicle) setDir (random 360);
    GVAR(objectiveVehicle) setVectorUp surfaceNormal position GVAR(objectiveVehicle);
} else {
    GVAR(objectiveVehicle) = createVehicle [(selectRandom _armourArray), (getPos _nearRoad), [], 0, "NONE"];
    private _dir = random 360;
    private _roadConnectedTo = roadsConnectedTo _nearRoad;
    if (_roadConnectedTo isNotEqualTo []) then {
        _dir = _nearRoad getDir _roadConnectedTo #0;
    };
    GVAR(objectiveVehicle) setDir _dir;
    GVAR(objectiveVehicle) setVectorUp surfaceNormal position GVAR(objectiveVehicle);
};

if (!(GVAR(objectiveVehicle) inArea QGVAR(selectedLocationMarker))) exitWith {
    deleteVehicle GVAR(objectiveVehicle);
    ERROR_MSG("fnc_objDestroyVeh, Cannot find position for armour in selected town");
};

{
    if (GVAR(objectiveVehicle) lockedTurret _x) exitWith {
        INFO_1("fnc_objDestroyVeh, Locked turret in vehicle (%1), skipping crewman spawn.",typeOf GVAR(objectiveVehicle));
    };

    private _unit = [[0,0,0], _group, _crewmanClassnames, _skillArray] call adm_common_fnc_placeMan;
    _unit assignAsTurret [GVAR(objectiveVehicle), _x];
    _unit moveInTurret [GVAR(objectiveVehicle), _x];
} forEach allTurrets GVAR(objectiveVehicle);

GVAR(objectiveVehicle) allowCrewInImmobile true;
GVAR(objectiveVehicle) setUnloadInCombat [false, false];
GVAR(objectiveVehicle) setFuel 0;
GVAR(objectiveVehicle) call EFUNC(clear_cargo,doClearVehicle);

[GVAR(objectiveVehicle), GVAR(positionSize)] call FUNC(createChaseZone);
GVAR(objectiveVehicle) addEventHandler ["Killed", {call FUNC(objectiveDestroyVehicleCookoff)}];

["task1", "Destroy Armour", "Locate and destroy the static armour in town", "target"] call FUNC(createTask);

["ace_cookoff_cookoff", {
    params ["_vehicle"];
    _vehicle call FUNC(objectiveDestroyVehicleCookoff);
}] call CBA_fnc_addEventHandler;
