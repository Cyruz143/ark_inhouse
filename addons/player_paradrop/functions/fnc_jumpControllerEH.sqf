#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Jump controller eventhandler code
 *
 * Arguments:
 * 0: Vehicle <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_player_paradrop_fnc_jumpControllerEH
 */

params ["_vehicle"];

private _jumpHeight = missionNamespace getVariable [QGVAR(jumpHeight), 200];
private _jumpGap = missionNamespace getVariable [QGVAR(jumpGap), 1];
private _fullPlayerCrew = [];

{
    if (isPlayer (_x #0)) then {_fullPlayerCrew pushBack (_x #0)};
} forEach fullCrew [_vehicle, "cargo", false];

[{
    params ["_args", "_id"];
    _args params ["_jumpHeight", "_vehicle", "_fullPlayerCrew"];

    if (count _fullPlayerCrew isEqualTo 0 || !(_vehicle getVariable [QGVAR(jumpInProgress), false])) exitWith {
        _vehicle setVariable [QGVAR(jumpInProgress), nil, true];
        _fullPlayerCrew = nil;
        _id call CBA_fnc_removePerFrameHandler;
    };

    [QGVAR(playerJumpEvent), [], (_fullPlayerCrew #0)] call CBA_fnc_targetEvent;
    _fullPlayerCrew deleteAt 0;
}, _jumpGap, [_jumpHeight, _vehicle, _fullPlayerCrew]] call CBA_fnc_addPerFrameHandler;
