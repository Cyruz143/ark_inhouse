#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Kami";
        authors[] = {"ARK"};
        url = "https://github.com/kami-";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main"};
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class Plank {
        init = "[] call compile preprocessFileLineNumbers 'x\ark\addons\plank\plank_preinit.sqf';";
    };
};

class Extended_PostInit_EventHandlers {
    class Plank {
        init = "[] call compile preprocessFileLineNumbers 'x\ark\addons\plank\plank_postinit.sqf';";
    };
};

#include "plank.h"