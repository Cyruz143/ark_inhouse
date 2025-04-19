#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
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

params ["_obj","_size"];

private _pos = getPosATL _obj;
private _mkr = createMarkerLocal [(str _obj), _pos];
_mkr setMarkerShapeLocal "ELLIPSE";
_mkr setMarkerSizeLocal [35, 35];
_mkr setMarkerAlphaLocal 0;

[{(allPlayers inAreaArray _this #0) isNotEqualTo []}, {
    params ["", "_pos", "_size"];
    [_pos, _size] call EFUNC(admin_tools,chaseAI);
    [_pos, _size] call FUNC(chaseAI);
}, [_mkr,_pos,_size]] call CBA_fnc_waitUntilAndExecute;
