#include "..\script_component.hpp"
/*
 * Author: Mike
 * Handles noises while unconscious.
 *
 * Called locally per player via target event.
 *
 * Arguments
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_player_screams_unconsciousFX
*/

[{
    params ["_args", "_handle"];
    _args params [["_firstIteration", true]];

    // If woken up or died end PFH.
    if !(ace_player getVariable ["ACE_isUnconscious", false]) exitWith {
        _handle call CBA_fnc_removePerFrameHandler;
    };

    // Don't want the groaning to happen instantly.
    if (_firstIteration) exitWith {
        _args set [0, false];
    };

    // requires a heart rate above CPR/Cardiac Arrest
    private _heartRate = ace_player getVariable ["ace_medical_heartRate", 80];
    if (_heartRate > 40) then {
        private _moan = selectRandom [MACRO_UNCONSCIOUS_NOISES];
        [QEGVAR(common,say3D), [ace_player, _moan]] call CBA_fnc_globalEvent;
    };
}, 30] call CBA_fnc_addPerFrameHandler;
