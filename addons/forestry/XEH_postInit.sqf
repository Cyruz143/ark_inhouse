#include "script_component.hpp"

if (hasInterface) then {
    [["ARK", "Forestry"],
        "ark_forestry_id_1",
        ["Cut Down Tree", "Commit nature abuse"],
        "",
        {call FUNC(doChop)}
    ] call CBA_fnc_addKeybind;

    [["ARK", "Forestry"],
        "ark_forestry_id_2",
        ["Flatten Grass", "Commit nature abuse"],
        "",
        {call FUNC(doFlatten)}
    ] call CBA_fnc_addKeybind;
};

// Server Event
[QGVAR(simulationEvent), {
    params ["_object"];

    hideObjectGlobal _object;
    _object enableSimulationGlobal false;

}] call CBA_fnc_addEventHandler;
