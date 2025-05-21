#include "script_component.hpp"

// Useful events
[QGVAR(say3D), {
    params ["_origin", "_sound"];
    _origin say3D _sound;
}] call CBA_fnc_addEventHandler;
