#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {"ARK_Flag"};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Tank_Loadorder",
            "cba_main"
        };
        VERSION_CONFIG;
    };
    class ark_scripts {
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
    };
    class ark_replacer_a3: ark_scripts {};
    class ark_replacer_backpacks: ark_scripts {};
    class ark_replacer_containers: ark_scripts {};
    class ark_replacer_vests: ark_scripts {};
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "ARK.hpp"