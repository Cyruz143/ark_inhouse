#include "ark_macros.h"

// ark_scripts_api
// Contains the functions which will never have a name change.

ark_api_make_sentry = {
    //FUN_ARGS_5(_unit,_combatMode,_behaviour,_skill,_disabledFunctions);
    
    _this call ark_fnc_make_sentry;
};