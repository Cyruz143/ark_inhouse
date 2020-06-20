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
            "ace_medical_damage",
            "ace_medical_treatment"
        };
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        serverInit = "call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_medical\server_postinit.sqf';";
    };
};

#include "ACE_Medical_Treatment_Actions.hpp"