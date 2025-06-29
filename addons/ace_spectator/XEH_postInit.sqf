#include "script_component.hpp"

if (hasInterface) then {
    ["ace_killed", {
        call FUNC(initSpec);
    }] call CBA_fnc_addEventHandler;
};
