#include "script_component.hpp"

plank_fort_fnc_getDirectionOrDefault = {
    params ["_fortIndex","_dataIndex"];

    (FORTS_DATA) select _fortIndex select (IDX)
};
