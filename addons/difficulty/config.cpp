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
        requiredAddons[] = {"ark_main"};
        VERSION_CONFIG;
    };
};

#include "CfgAILevelPresets.hpp"
#include "CfgAISkills.hpp"
#include "CfgDifficultyPresets.hpp"
#include "CfgSurfaces.hpp"
