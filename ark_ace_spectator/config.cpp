class CfgPatches {
    class ark_ace_spectator {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.60;
        requiredAddons[] = {"ace_spectator", "Hull3", "CBA_MAIN"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class Extended_PreInit_EventHandlers {
    class ark_ace_spectator {
        clientInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_spectator\client_spec_preinit.sqf';";
        serverInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_spectator\server_spec_preinit.sqf';";
    };
};