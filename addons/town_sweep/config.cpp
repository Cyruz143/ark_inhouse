class CfgPatches {
    class town_sweep {
        units[] = {};
        weapons[] = {};
        requiredVersion = 2.00;
        requiredAddons[] = {
            "ark_main",
            "ark_admin_tools"
            "Hull3",
            "Admiral",
            "ark_rotor"
        };
        author = "ARK";
        authorUrl = "https://github.com/Cyruz143/ark_inhouse";
    };
};

class Extended_PreInit_EventHandlers {
    class ARK_Inhouse_Town_Sweep {
        init = "call compileScript ['x\ark\addons\town_sweep\ts_preinit.sqf'];";
    };
};

#include "CfgVehicles.hpp"