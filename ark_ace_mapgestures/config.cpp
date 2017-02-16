class CfgPatches {
    class ark_ace_mapgestures {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.66;
        requiredAddons[] = {"ace_gestures","CBA_MAIN"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class Extended_PostInit_EventHandlers {
    class ark_ace_mapgestures {
        clientInit = "[] call compile preProcessFileLineNumbers 'x\ark\addons\ark_ace_mapgestures\mapgestures_postinit.sqf';";
    };
};