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
        requiredAddons[] = {
            "ark_main",
            "ace_medical_status"
        };
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientinit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_medical_fixes\client_postinit.sqf';";
    };
};