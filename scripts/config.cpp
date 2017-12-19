#include "script_component.hpp"
#include "ark_macros.h"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ark_main", "Hull3"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class ARK {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_scripts\ark_preinit.sqf';";
    };
};

#include "ark_inhouse.h"

