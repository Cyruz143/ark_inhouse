#include "script_component.hpp"

class CfgPatches {
    class Admiral {
        name = COMPONENT_NAME;
        author = "Kami";
        authors[] = {"ARK"};
        url = "https://github.com/kami-";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main"};
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class Admiral {
        init = "[] call compile preprocessFileLineNumbers 'x\ark\addons\admiral\admiral_preinit.sqf';";
    };
};

class Extended_PostInit_EventHandlers {
    class Admiral {
        init = "[] call compile preprocessFileLineNumbers 'x\ark\addons\admiral\admiral_postinit.sqf';";
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class Admiral : NO_CATEGORY {
        displayName = "Admiral";
    };
    class Admiral_Camps {
        displayName = "Admiral Camp Bases";
        author = "Admiral";
        icon = QPATHTOF(main,resources\ark_star.paa);
        priority = 1;
        side = 3;
    };
};

class CfgVehicleClasses {
    class Admiral_Camps {
        displayName = "Camp Bases";
    };
};

class CfgVehicles {
    #include "admiral_modules.h"

    class C_Soldier_VR_F;
    class C_Bob_VR : C_Soldier_VR_F {
        author = "Admiral";
        displayName = "Camp Path Base";
        faction = "Admiral";
        side = 3;
        vehicleClass = "Admiral_Camps";
    };
};

#include "admiral.h"
