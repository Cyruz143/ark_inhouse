#include "ark_macros.h"

// ark_scripts_api
// Contains the functions which will never have a name change.

ark_api_clear_vehicle = {
    //FUN_ARGS_1(_vehicle);
    
    _this call ark_fnc_clear_vehicle;
};

ark_api_make_sentry = {
    //FUN_ARGS_6(_unit,_stance,_combatMode,_behaviour,_skill,_disabledFunctions);
    
    _this call ark_fnc_make_sentry;
};