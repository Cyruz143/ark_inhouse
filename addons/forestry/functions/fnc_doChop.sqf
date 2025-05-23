#include "..\script_component.hpp"
/*
 * Author: Cyruz, Commy2, Drofseh
 * Chops the shrubbery.
 *
 * Arguments:
 * 0: Volume <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_forestry_fnc_doChop
 */

private _playerPos = AGLToASL positionCameraToWorld [0, 0, 0];
private _endPos = AGLToASL positionCameraToWorld [0, 0, 5];
private _intersection = (lineIntersectsSurfaces [_playerPos, _endPos, cameraOn, objNull, true, 1, "VIEW"]) #0;

if (isNil "_intersection") exitWith {
    [[QPATHTOF(resources\tree.paa), 2.0], ["Nothing to cut down"]] call CBA_fnc_notify
};

private _intersectObj = _intersection #2;
private _parentObject = _intersection #3;

if (_intersectObj isEqualTo objNull && {_parentObject isEqualTo objNull}) exitWith {
    [[QPATHTOF(resources\tree.paa), 2.0], ["Nothing to cut down"]] call CBA_fnc_notify
};

private _obj = (nearestTerrainObjects [_intersectObj, ["TREE", "SMALL TREE", "BUSH"], 0, false, true]) #0;
playSound3D [QPATHTOF(resources\chop.ogg), objNull, false, getPosASL player, 5, 1, 75];

[5,
    _obj,
    {
        params ["_obj"];
        _obj setDamage [1, true, player];

        [{
            params ["_object"];
            [QGVAR(simulationEvent), _object] call CBA_fnc_serverEvent;
        }, _obj, 5] call CBA_fnc_waitAndExecute;
    },
    {[[QPATHTOF(resources\tree.paa), 2.0], ["Aborted nature abuse"]] call CBA_fnc_notify},
    "Attacking nature"
] call ace_common_fnc_progressBar;
