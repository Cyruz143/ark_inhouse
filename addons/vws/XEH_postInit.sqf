#include "script_component.hpp"

if (!hasInterface) exitWith {};

player addEventHandler ["GetInMan", {
    _this call FUNC(addBetty);
}];

player addEventHandler ["GetOutMan", {
    [GVAR(bitchingBetty)] call CBA_fnc_removePerFrameHandler;
}];

player addEventHandler ["Killed", {
    [GVAR(bitchingBetty)] call CBA_fnc_removePerFrameHandler;
}];

["ark_vws_playSound", {
    params ["_snd"];

    if (player getVariable [QGVAR(soundPlaying), false]) exitWith {};

    player setVariable [QGVAR(soundPlaying), true];
    playSound _snd;

    [{player setVariable [QGVAR(soundPlaying), false]}, [], 4] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;
