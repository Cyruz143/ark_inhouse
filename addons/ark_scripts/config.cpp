#include "script_component.hpp"
#include "ark_macros.h"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main", "Hull3"};
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class ARK {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_scripts\ark_preinit.sqf';";
    };
};

#include "ark_inhouse.h"

