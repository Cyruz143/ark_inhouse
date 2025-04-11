#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Ejects unit, waits until supplied height and creates a chute and moves the unit in.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_player_paradrop_fnc_playerJumpEH
 */

private _unit = call CBA_fnc_currentUnit;
private _jumpHeight = missionNamespace getVariable [QGVAR(jumpHeight), 200];
_unit allowDamage false;
moveOut _unit;

[{(getPosATL (_this #0) #2) < (_this #1)}, {
    private _chute = createVehicle ["Steerable_Parachute_F", [0,0,0], [], 0, "NONE"];
    _chute allowDamage false;
    _chute setPos (getPosATL (_this #0));
    (_this #0) assignAsDriver _chute;
    (_this #0) moveInDriver _chute;
}, [_unit,_jumpHeight]] call CBA_fnc_waitUntilAndExecute;

[{isTouchingGround _this}, {
        [{(_this #0) allowDamage true}, [_this], 5] call CBA_fnc_waitAndExecute;
    }, _unit, 120, {_this allowDamage true}
] call CBA_fnc_waitUntilAndExecute;
