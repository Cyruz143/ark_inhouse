#include "ark_macros.h"

ark_config_fnc_getNumber = {
    FUN_ARGS_2(_class,_field);
    
    getNumber ARK_SCRIPTS_CONFIG_FILE >> _class >> _field;
};

ark_config_fnc_getBool = {
    FUN_ARGS_2(_class,_field);
    
    DECLARE(_bool) = getNumber ARK_SCRIPTS_CONFIG_FILE >> _class >> _field;
    if _bool == 1 then {
        _bool = true;
    } else {
        _bool = false;
    };
    _bool;
};

ark_config_fnc_getArray = {
    FUN_ARGS_2(_class,_field);
    
    getArray ARK_SCRIPTS_CONFIG_FILE >> _class >> _field;
};

ark_config_fnc_getText = {
    FUN_ARGS_2(_class,_field);
    
    getText ARK_SCRIPTS_CONFIG_FILE >> _class >> _field;
};