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
            "ark_admin_tools",
            "ace_common",
            "ace_medical_engine",
            "ace_medical_damage",
            "ace_medical_treatment",
            "ace_medical_gui"
        };
        VERSION_CONFIG;
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = "call compileScript ['x\ark\addons\ark_ace_medical\client_postinit.sqf'];";
        serverInit = "call compileScript ['x\ark\addons\ark_ace_medical\server_postinit.sqf'];";
    };
};

#include "ACE_Medical_Treatment.hpp"
#include "CfgVehicles.hpp"