#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {
            "NVGoggles_AI"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main"};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
