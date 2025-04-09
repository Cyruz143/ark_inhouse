#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

["player.initialized", {
    ["ace_killed", {
        call FUNC(initSpec);
    }] call CBA_fnc_addEventHandler;

    [] call FUNC(getInitialPlayableUnitsFromServer);
}] call hull3_event_fnc_addEventHandler;

ADDON = true;
