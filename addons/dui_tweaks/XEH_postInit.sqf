#include "script_component.hpp"

if (hasInterface) then {
    {
        diwako_dui_radar_oddDirectionCompasses setVariable [_x, nil];
    } forEach ["gm_ge_army_conat2","gm_gc_compass_f73","lib_ger_itemcompass"];
};
