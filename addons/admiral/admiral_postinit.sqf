#include "script_component.hpp"
#include "\userconfig\admiral\log\postinit.h"

if (adm_isEnabled) then {
    [] spawn adm_hc_fnc_init;
};
