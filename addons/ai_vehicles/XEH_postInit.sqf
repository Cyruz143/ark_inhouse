#include "script_component.hpp"

if (hasInterface) then {
    ["Car", "init", {
        call FUNC(turnOffEngine);
    }] call CBA_fnc_addClassEventHandler;
};

if (isServer) then {
    GVAR(wheelArray) = ["hitlfwheel", "hitlbwheel", "hitlmwheel", "hitlf2wheel", "hitrfwheel", "hitrbwheel", "hitrmwheel", "hitrf2wheel"];

    ["Car", "Dammaged", {
        call FUNC(vehicleDamaged);
    }] call CBA_fnc_addClassEventHandler;
    ["CAManBase", "Killed", {
        call FUNC(isGunnerDead);
    }] call CBA_fnc_addClassEventHandler;
};
