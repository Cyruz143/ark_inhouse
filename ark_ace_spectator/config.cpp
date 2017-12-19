#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ark_main", "ace_spectator", "Hull3"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class ark_ace_spectator {
        clientInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_spectator\client_preinit.sqf';";
    };
};

class Extended_PostInit_EventHandlers {
    class ark_ace_spectator {
        serverInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_spectator\server_postinit.sqf';";
    };
};