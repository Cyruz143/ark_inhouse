#include "script_component.hpp"
#include "\userconfig\plank\log\fort.h"


plank_fort_fnc_getDirectionOrDefault = {
    params ["_fortIndex","_dataIndex"];

    (FORTS_DATA) select _fortIndex select (IDX)
};
