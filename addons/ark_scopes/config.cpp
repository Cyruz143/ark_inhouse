#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "ARK";
        authors[] = {"ARK"};
        url = "http://www.ark-group.org";
        units[] = {};
        weapons[] = {
            "ARK_m145",
            "ARK_c79_2d",
            "ARK_anpvs4",
            "ARK_optic_ACOG",
            "ARK_optic_RCO",
            "ARK_optic_SUSAT",
            "ARK_optic_ELCAN_SpecterDR",
            "ARK_optic_ElcanM145"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main", "RH_acc", "CUP_Weapons_West_Attachments", "CUP_Weapons_East_Attachments"};
        VERSION_CONFIG;
    };
};

#include "CBA_JR.hpp"
#include "CfgWeapons.hpp"