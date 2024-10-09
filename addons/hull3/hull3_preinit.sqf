#include "hull3_macros.h"

#include "\userconfig\hull3\log\preinit.h"
#include "logbook.h"


hull3_isInitialized = false;

[] call compileScript [ADDON_PATH(config_functions.sqf)];
hull3_isEnabled = ["isEnabled"] call hull3_config_fnc_getBool;
hull3_isEnabled = hull3_isEnabled && {!isClass (missionConfigFile >> "Hull_Script_Version")};

if (hull3_isEnabled) then {
    [] call compileScript [ADDON_PATH(event_functions.sqf)];
    [] call hull3_event_fnc_init;
    [] call compileScript [ADDON_PATH(settings_functions.sqf)];
    [] call compileScript [ADDON_PATH(common_functions.sqf)];
    [] call compileScript [ADDON_PATH(unit_functions.sqf)];
    [] call compileScript [ADDON_PATH(acre_functions.sqf)];
    [] call compileScript [ADDON_PATH(gear_functions.sqf)];
    [] call compileScript [ADDON_PATH(uniform_functions.sqf)];
    [] call compileScript [ADDON_PATH(marker_functions.sqf)];
    [] call compileScript [ADDON_PATH(briefing_functions.sqf)];
    [] call compileScript [ADDON_PATH(mission_functions.sqf)];
    [] call compileScript [ADDON_PATH(gc_functions.sqf)];

    hull3_isInitialized = true;
    ["hull3.initialized", []] call hull3_event_fnc_emitEvent;
    INFO("hull3",FMT_1("Hull version '%1' has been successfully initialized.",HULL3_VERSION));

    [] call hull3_mission_fnc_preInit;
    [] call hull3_marker_fnc_preInit;
    [] call hull3_gear_fnc_preInit;
    [] call hull3_uniform_fnc_preInit;
    [] call hull3_briefing_fnc_preInit;
    [] call hull3_acre_fnc_preInit;
    [] call hull3_gc_fnc_preInit;
} else {
    if (isClass (missionConfigFile >> "Hull_Script_Version")) then {
        //INFO("hull3",FMT_1("Older script version of Hull was detected. Addonized Hull version '%1' was disabled.",HULL3_VERSION));
    } else {
        //INFO("hull3",FMT_1("Hull version '%1' was disabled.",HULL3_VERSION));
    };
};