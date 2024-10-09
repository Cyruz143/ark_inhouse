#include "admiral_macros.h"

#include "\userconfig\admiral\log\id.h"
#include "logbook.h"


adm_id_fnc_init = {
    adm_id_current = 0;
};

adm_id_fnc_nextId = {
    adm_id_current = adm_id_current + 1;

    adm_id_current;
};