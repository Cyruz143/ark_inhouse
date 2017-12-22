#include "ark_macros.h"

// ark_debug
// Contains debug functions

ark_debug_fnc_logToServer = {
    FUN_ARGS_2(_message,_level);
    
    IF_IS_SERVER;
    if (!ark_scripts_debugEnabled || !ark_scripts_logToServer) exitWith {};
    [_message, _level] call ark_debug_fnc_rptlog;
};

ark_debug_fnc_log = {
    FUN_ARGS_2(_message,_level);

    hint format [ARK_SCRIPTS_DEBUG_HINT_FORMAT, time, _level, format _message];
    diag_log format [ARK_SCRIPTS_DEBUG_FORMAT, time, _level, format _message];
};

ark_debug_fnc_rptlog = {
    FUN_ARGS_2(_message,_level);

    diag_log format [ARK_SCRIPTS_DEBUG_FORMAT, time, _level, format _message];
};