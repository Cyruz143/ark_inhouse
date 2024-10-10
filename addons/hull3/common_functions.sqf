#include "script_component.hpp"
#include "\userconfig\hull3\log\common.h"

hull3_common_fnc_logOnServer = {
    params ["_message"];

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
