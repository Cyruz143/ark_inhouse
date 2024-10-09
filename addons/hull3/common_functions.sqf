#include "hull3_macros.h"

#include "\userconfig\hull3\log\common.h"
#include "logbook.h"


hull3_common_fnc_logOnServer = {
    FUN_ARGS_1(_message);

    if (isDedicated) then {
        [0, {diag_log _this}, _message] call CBA_globalExecute;
    };
    if (isServer) then {
        diag_log _message;
    };
};

hull3_common_fnc_isHeadlessClient = {
    !isServer && !hasInterface;
};