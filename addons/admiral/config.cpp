#include "admiral_macros.h"

class CfgPatches {
    class Admiral {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"CBA_MAIN", "A3_Characters_F_Common", "A3_Characters_F"};
        author = "Kami";
        authorUrl = "https://github.com/kami-";
    };
};

class Extended_PreInit_EventHandlers {
    class Admiral {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\admiral\admiral_preinit.sqf';";
    };
};

class Extended_PostInit_EventHandlers {
    class Admiral {
        init = "[] call compile preProcessFileLineNumbers 'x\ark\addons\admiral\admiral_postinit.sqf';";
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
	    icon = "x\ark\addons\ark_inhouse\resources\ark_star.paa";
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