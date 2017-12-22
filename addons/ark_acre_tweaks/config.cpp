#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main", "acre_main"};
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ark_acre_tweaks {
        init = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_acre_tweaks\acre_postInit.sqf';";
    };
};