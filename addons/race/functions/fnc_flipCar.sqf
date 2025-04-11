#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Flips car in race missions.
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_race_fnc_flipCar
 */

params ["_vehicle"];

private _carPos = (getPosATL _vehicle);
private _emptyPos = _carPos findEmptyPosition [0, 20, (typeOf _vehicle)];

if (isNil "_emptyPos" || { _emptyPos isEqualTo [] }) then {
    _vehicle setVectorUp surfaceNormal _carPos;
    _vehicle setPosATL _carPos;
} else {
    _vehicle setVectorUp surfaceNormal _emptyPos;
    _vehicle setPosATL _emptyPos;
};
