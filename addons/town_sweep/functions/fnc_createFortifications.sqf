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
 * [] call ark_town_sweep_fnc_createFortifications
 */

ts_spawn_selectedLocation params ["_position"];

private _fortificationArr = [MACRO_OTHER_FORTIFICATIONS];

if (ts_camouflage isEqualTo "woodland") then {
    _fortificationArr = [MACRO_WDL_FORTIFICATIONS];
};

private _fortificationPosArr = [];
for "_i" from 1 to 20 do {
    private _selectedPos = [_position, 250, 400, 10, 0, 0.2] call BIS_fnc_findSafePos;
    if (count _selectedPos isEqualTo 2 && { !(isOnRoad _selectedPos) }) then {
        _fortificationPosArr pushBackUnique _selectedPos;
    };
};

private _totalPosAmount = count _fortificationPosArr;
private _fortificationAmount = 5;
if (_totalPosAmount < 5) then {
    _fortificationAmount = _totalPosAmount;
};

for "_i" from 1 to _fortificationAmount do {
    private _selectedFortification = selectRandom _fortificationArr;
    private _selectedLocation = selectRandom _fortificationPosArr;
    _fortificationPosArr deleteAt (_fortificationPosArr find _selectedLocation);

    private _fortification = createVehicle [_selectedFortification, _selectedLocation, [], 0, "NONE"];
    _fortification setVectorDir (getPos _fortification vectorFromTo _position);
    _fortification setVectorUp surfaceNormal position _fortification;
    _fortification call FUNC(fillFortifications);
    ts_spawn_placedFortifications pushBack _fortification;
};
