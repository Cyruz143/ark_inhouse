#include "ark_macros.h"

class CfgPatches {
    class ark_scripts {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"CBA_MAIN", "Hull3"};
        author = "ARK";
        authorUrl = "https://github.com/Cyruz143/ark_scripts";
    };
};

class Extended_PreInit_EventHandlers {
    class ARK {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_scripts\ark_preinit.sqf';";
    };
};

#include "ark_inhouse.h"