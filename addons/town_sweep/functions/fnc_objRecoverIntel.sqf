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
 * [] call ark_town_sweep_fnc_objRecoverIntel
 */

ts_spawn_selectedLocation params ["_position","_size"];

private _nearRoad = selectRandom (_position nearRoads 100);

private ["_helo"];
if (isNil "_nearRoad") then {
    private _heloPos = [_position, 0, 100, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    _helo = createVehicle ["cup_mh47e_wreck2", _heloPos, [], 0, "NONE"];
    _helo setDir (random 360);
} else {
    _helo = createVehicle ["cup_mh47e_wreck2", (getPos _nearRoad), [], 0, "NONE"];
    private _dir = random 360;
    private _roadConnectedTo = roadsConnectedTo _nearRoad;
    if (_roadConnectedTo isNotEqualTo []) then {
        _dir = _nearRoad getDir _roadConnectedTo #0;
    };
    _helo setDir _dir;
    _helo setVectorUp surfaceNormal position _helo;
};

if (!(_helo inArea ts_spawn_selectedLocationMarkerName)) exitWith {
    deleteVehicle _helo;
    ERROR_MSG("ts_spawn_fnc_objRecoverIntel, Cannot find position for helicopter in the selected area");
};

private _smoke = createVehicle ["test_EmptyObjectForSmoke", [0,0,0], [], 0, "CAN_COLLIDE"];
_smoke attachTo [_helo, [0, 3.5, 0.5]];

[{
    params ["_smoke"];
    detach _smoke;
    deleteVehicle _smoke;
}, _smoke, 600] call CBA_fnc_waitAndExecute;

private _boxPos = _helo getPos [10 + (random 5), random 360];
private _box = createVehicle ["Box_NATO_Equip_F", _boxPos, [], 0, "NONE"];
_box allowDamage false;
_box call EFUNC(clear_cargo,doClearVehicle);
_box setVectorUp surfaceNormal position _box;
_box addItemCargoGlobal ["ACE_Banana", 1];

[true, ["task3"], ["Locate and secure the intel from the crash site", "Recover Intel"], _position, "ASSIGNED", -1, true, "intel"] call BIS_fnc_taskCreate;
[_helo,_size] call FUNC(createChaseZone);

[{itemCargo _this isEqualTo []}, {
        ["task3","SUCCEEDED"] call BIS_fnc_taskSetState;
    },
    _box
] call CBA_fnc_waitUntilAndExecute;
