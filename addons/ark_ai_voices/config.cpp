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
        requiredAddons[] = {
            "ark_main",
            "CUP_Creatures_People_LoadOrder"
        };
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = "call compileScript ['x\ark\addons\ark_ai_voices\global_preinit.sqf'];";
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = "call compileScript ['x\ark\addons\ark_ai_voices\client_postinit.sqf'];";
        serverInit = "call compileScript ['x\ark\addons\ark_ai_voices\server_postinit.sqf'];";
    };
};

#include "CfgVoice.hpp"