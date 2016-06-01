#include "ark_macros.h"

// ark_preinit
// Contains functions which must be run before initialisation

ark_scripts_isInitialized = false;
ark_scripts_debugEnabled = !isMultiplayer;
ark_scripts_logToServer = true;

// precompile required files
[] call compile preprocessFileLineNumbers ADDON_PATH(ark_debug.sqf);
[] call compile preprocessFileLineNumbers ADDON_PATH(ark_config.sqf);
[] call compile preprocessFileLineNumbers ADDON_PATH(ark_deploy.sqf);
[] call compile preprocessFileLineNumbers ADDON_PATH(ark_main.sqf);
[] call compile preprocessFileLineNumbers ADDON_PATH(ark_scripts_api.sqf);

// init required variables and assign EHs
[] call ark_fnc_initVariables;

ark_scripts_isInitialized = true;

[["ARK Scripts version %1 have successfully been compiled", ARK_SCRIPTS_VERSION], DEBUG_INFO] call ark_debug_fnc_rptlog;
