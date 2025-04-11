#include "script_component.hpp"

if !(call EFUNC(main,isTownSweep)) exitWith {};

[QGVAR(objDestroyActionEvent), {
    if (!hasInterface) exitWith {};
    call FUNC(objDestroyAction);
}] call CBA_fnc_addEventHandler;

[QGVAR(objDestroyCacheEvent), {
    if (isServer) then {
        call FUNC(objDestroyCache);
    };
}] call CBA_fnc_addEventHandler;

if (hasInterface) then {
    call FUNC(addInteractions);
};
