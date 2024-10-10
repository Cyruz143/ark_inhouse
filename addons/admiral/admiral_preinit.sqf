#include "script_component.hpp"
#include "\userconfig\admiral\log\preinit.h"


adm_isInitialized = false;

[] call compile preprocessFileLineNumbers ADDON_PATH(config_functions.sqf);
DEBUG("admiral.compile: Compiled 'config_functions.sqf'.");
adm_isEnabled = ["isEnabled"] call adm_config_fnc_getBool;

if (adm_isEnabled) then {
    [] call compile preprocessFileLineNumbers ADDON_PATH(event_functions.sqf);
    DEBUG("admiral.compile: Compiled 'event_functions.sqf'.");
    [] call compile preprocessFileLineNumbers ADDON_PATH(id_functions.sqf);
    DEBUG("admiral.compile: Compiled 'id_functions.sqf'.");
    [] call compile preprocessFileLineNumbers ADDON_PATH(zone_functions.sqf);
    DEBUG("admiral.compile: Compiled 'zone_functions.sqf'.");
    [] call compile preprocessFileLineNumbers ADDON_PATH(api_functions.sqf);
    DEBUG("admiral.compile: Compiled 'api_functions.sqf'.");

    [] call adm_event_fnc_init;
    DEBUG("admiral.event","Init function 'adm_event_fnc_init' called.");
    [] call adm_id_fnc_init;
    DEBUG("admiral.id","Init function 'adm_id_fnc_init' called.");
    [] call adm_zone_fnc_init;
    DEBUG("admiral.zone","Init function 'adm_zone_fnc_init' called.");

    adm_fnc_compile = {
        [] call compile preprocessFileLineNumbers ADDON_PATH(settings_functions.sqf);
        DEBUG("admiral.compile: Compiled 'settings_functions.sqf'.");
        [] call compile preprocessFileLineNumbers ADDON_PATH(common_functions.sqf);
        DEBUG("admiral.compile: Compiled 'common_functions.sqf'.");
        [] call compile preprocessFileLineNumbers ADDON_PATH(debug_functions.sqf);
        DEBUG("admiral.compile: Compiled 'debug_functions.sqf'.");
        [] call compile preprocessFileLineNumbers ADDON_PATH(cqc_functions.sqf);
        DEBUG("admiral.compile: Compiled 'cqc_functions.sqf'.");
        [] call compile preprocessFileLineNumbers ADDON_PATH(camp_functions.sqf);
        DEBUG("admiral.compile: Compiled 'camp_functions.sqf'.");
        [] call compile preprocessFileLineNumbers ADDON_PATH(patrol_functions.sqf);
        DEBUG("admiral.compile: Compiled 'patrol_functions.sqf'.");
        [] call compile preprocessFileLineNumbers ADDON_PATH(behavior_functions.sqf);
        DEBUG("admiral.compile: Compiled 'behavior_functions.sqf'.");
    };

    [] call compile preprocessFileLineNumbers ADDON_PATH(hc_functions.sqf);
    DEBUG("admiral.compile: Compiled 'hc_functions.sqf'.");
} else {
    INFO_1("Admiral: Admiral version %1 was disabled.",STR_ADMIRAL_VERSION);
};
