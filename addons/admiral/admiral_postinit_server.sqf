#include "script_component.hpp"
#include "\userconfig\admiral\log\postinit.h"

[] call adm_fnc_compile;

[] call adm_settings_fnc_init;
DEBUG("admiral.settings: Init function 'adm_settings_fnc_init' called.");
[] call adm_cqc_fnc_init;
DEBUG("admiral.cqc: Init function 'adm_cqc_fnc_init' called.");
[] call adm_camp_fnc_init;
DEBUG("admiral.camp: Init function 'adm_camp_fnc_init' called.");
[] call adm_patrol_fnc_init;
DEBUG("admiral.patrol: Init function 'adm_patrol_fnc_init' called.");

if (adm_isBehaviorEnabled) then {
    INFO("admiral.behavior: Admiral Behavior system is enabled.");
    [] call adm_behavior_fnc_init;
    DEBUG("admiral.behavior: Init function 'adm_behavior_fnc_init' called.");
};

// Makes no sense to run it on dedicated or without an interface
if (isDedicated || {!hasInterface}) then {
    adm_isDebuggingEnabled = false;
};
if (adm_isDebuggingEnabled) then {
    [] call adm_debug_fnc_init;
    DEBUG("admiral.debug: Init function 'adm_debug_fnc_init' called.");
};

adm_isInitialized = true;
["admiral.initialized", []] call adm_event_fnc_emitEvent;
INFO_1("admiral: Admiral version %1 has been successfully initialized.",STR_ADMIRAL_VERSION);
