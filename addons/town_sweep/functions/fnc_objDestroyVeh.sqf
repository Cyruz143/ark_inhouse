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
 * [] call ark_town_sweep_fnc_objDestroyVeh
 */

ts_spawn_selectedLocation params ["_position","_size"];

private _grp = createGroup ts_enemy_side;
_grp deleteGroupWhenEmpty true;
_grp enableDynamicSimulation true;
private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
private _crewmanClassnames = [adm_camp_defaultUnitTemplate, "crewmen"] call adm_common_fnc_getUnitTemplateArray;
private _armourArray = [adm_camp_defaultUnitTemplate, "armour"] call adm_common_fnc_getUnitTemplateArray;

private _nearRoad = selectRandom (_position nearRoads 100);

if (isNil "_nearRoad") then {
    private _pos = [_position, 0, 100, 5, 0, 20, 0] call BIS_fnc_findSafePos;
    // BIS_fnc_findSafePos returns X and Y with success and  X Y Z on failure... fucking BI
    if (count _pos isEqualTo 3) exitWith {};
    ts_objVeh = createVehicle [(selectRandom _armourArray), _pos, [], 0, "NONE"];
    ts_objVeh setDir (random 360);
    ts_objVeh setVectorUp surfaceNormal position ts_objVeh;
} else {
    ts_objVeh = createVehicle [(selectRandom _armourArray), (getPos _nearRoad), [], 0, "NONE"];
    private _dir = random 360;
    private _roadConnectedTo = roadsConnectedTo _nearRoad;
    if (_roadConnectedTo isNotEqualTo []) then {
        _dir = _nearRoad getDir _roadConnectedTo #0;
    };
    ts_objVeh setDir _dir;
    ts_objVeh setVectorUp surfaceNormal position ts_objVeh;
};

if (!(ts_objVeh inArea ts_spawn_selectedLocationMarkerName)) exitWith {
    deleteVehicle ts_objVeh;
    ERROR_MSG("fnc_objDestroyVeh, Cannot find position for armour in selected town");
};

{
    if (ts_objVeh lockedTurret _x) exitWith {
        INFO_1("fnc_objDestroyVeh, Locked turret in vehicle (%1), skipping crewman spawn.",typeOf ts_objVeh);
    };

    private _unit = [[0,0,0], _grp, _crewmanClassnames, _skillArray] call adm_common_fnc_placeMan;
    _unit assignAsTurret [ts_objVeh, _x];
    _unit moveInTurret [ts_objVeh, _x];
} forEach allTurrets ts_objVeh;

ts_objVeh allowCrewInImmobile true;
ts_objVeh setUnloadInCombat [false, false];
ts_objVeh setFuel 0;
ts_objVeh call EFUNC(clear_cargo,doClearVehicle);

[true, ["task1"], ["Locate and destroy the static armour in town", "Destroy Armour"], _position, "ASSIGNED", -1, true, "target"] call BIS_fnc_taskCreate;
[ts_objVeh,_size] call FUNC(createChaseZone);
ts_objVeh addEventHandler ["Killed", {call FUNC(vehicleDestroyed)}];

["ace_cookoff_cookoff", {
    params ["_vehicle"];
    _vehicle call FUNC(vehicleDestroyed);
}] call CBA_fnc_addEventHandler;
