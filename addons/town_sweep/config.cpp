class CfgPatches {
    class town_sweep {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.90;
        requiredAddons[] = {
            "ark_main",
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
        init = "call compile preProcessFileLineNumbers 'x\ark\addons\town_sweep\ts_preinit.sqf';";
    };
};
