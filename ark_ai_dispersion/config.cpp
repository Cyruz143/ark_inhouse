#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ark_main"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class Default;
    class Launcher;

    class GrenadeLauncher: Default {
        aiDispersionCoefX = 15;
        aiDispersionCoefY = 16;
    };

    class Launcher_Base_F: Launcher {
        aiDispersionCoefX = 15;
        aiDispersionCoefY = 16;
    };
};