#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Creates an objective object at position
 *
 * Arguments:
 * 0: Helicopter Wreck <OBJECT>
 * 1: Classname of Object <CLASSNAME>
 *
 * Return Value:
 * Object Created <OBJECT>
 *
 * Example:
 * [] call ark_town_sweep_fnc_createObjectiveObject
 */

params ["_helo", "_classname"];

private _objectPos = _helo getPos [10 + (random 5), random 360];
private _object = createVehicle [_classname, _objectPos, [], 0, "NONE"];
_object setVectorUp surfaceNormal position _object;

_object
