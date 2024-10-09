#include "admiral_macros.h"

#include "\userconfig\admiral\log\postinit.h"
#include "logbook.h"


if (adm_isEnabled) then {
    [] spawn adm_hc_fnc_init;
};