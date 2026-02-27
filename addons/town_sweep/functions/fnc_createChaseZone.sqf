#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Locality: Server (called from all objectives)
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Size <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_createChaseZone
 */

params ["_object", "_size"];

private _position = getPosATL _object;
private _marker = createMarkerLocal [(str _object), _position];
_marker setMarkerShapeLocal "ELLIPSE";
_marker setMarkerSizeLocal [35, 35];
_marker setMarkerAlphaLocal 0;

[{(allPlayers inAreaArray _this #0) isNotEqualTo []}, {
    params ["", "_position", "_size"];
    [_position, _size] call EFUNC(admin_tools,chaseAI);
    [_position, _size] call FUNC(chaseAI);
}, [_marker, _position, _size]] call CBA_fnc_waitUntilAndExecute;
