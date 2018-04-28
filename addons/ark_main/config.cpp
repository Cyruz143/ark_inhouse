#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Loadorder",
            "A3_Data_F_Curator_Loadorder",
            "A3_Data_F_Kart_Loadorder",
            "A3_Data_F_Bootcamp_Loadorder",
            "A3_Data_F_Heli_Loadorder",
            "A3_Data_F_Mark_Loadorder",
            "A3_Data_F_Exp_A_Loadorder",
            "A3_Data_F_Exp_B_Loadorder",
            "A3_Data_F_Exp_Loadorder",
            "A3_Data_F_Jets_Loadorder",
            "A3_Data_F_Argo_Loadorder",
            "A3_Data_F_Patrol_Loadorder",
            "A3_Data_F_Orange_Loadorder",
            "A3_Data_F_Tank_Loadorder",

            // CBA
            "cba_ui",
            "cba_xeh",
            "cba_jr"
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