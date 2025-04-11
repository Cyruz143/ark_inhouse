#include "script_component.hpp"

if (isServer) then {
    [QGVAR(jumpControllerEvent), {
        params ["_vehicle"];
        _vehicle call FUNC(jumpControllerEH);
    }] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
    [QGVAR(playerJumpEvent), {
        call FUNC(playerJumpEH);
    }] call CBA_fnc_addEventHandler;

    if (missionNamespace getVariable [QGVAR(enabled), false]) then {
        call FUNC(addBriefing);
    };
};
