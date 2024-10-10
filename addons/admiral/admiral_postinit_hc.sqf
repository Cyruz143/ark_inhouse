#include "script_component.hpp"
#include "\userconfig\admiral\log\postinit.h"


[] call adm_fnc_compile;

[] call adm_settings_fnc_init;
DEBUG("admiral.settings: Init function 'adm_settings_fnc_init' called.");
[] call adm_cqc_fnc_init;
DEBUG("admiral.cqc: Init function 'adm_cqc_fnc_init' called.");
[] call adm_cqc_fnc_globalForceFire;


if (adm_isBehaviorEnabled) then {
    INFO("admiral.behavior: Admiral Behavior system is enabled.");
    [] call adm_behavior_fnc_init;
    DEBUG("admiral.behavior: Init function 'adm_behavior_fnc_init' called.");
};

INFO_1("admiral: Admiral version %1 has been successfully initialized on HC.",STR_ADMIRAL_VERSION);
