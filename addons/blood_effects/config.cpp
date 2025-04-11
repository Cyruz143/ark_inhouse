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
        requiredAddons[] = {"ark_main", "ace_medical_blood"};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgCloudlets.hpp"
#include "ImpactEffectsBlood.hpp"
