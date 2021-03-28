class CfgPatches {
    class random_engagements {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {"CBA_MAIN", "Hull3"};
        author = "ARK";
        authorUrl = "https://github.com/Cyruz143/ark_inhouse";
    };
};

class Extended_PreInit_EventHandlers {
    class ARK_Inhouse_Random_Engagements {
        init = "call compileScript ['x\ark\addons\random_engagements\re_preinit.sqf'];";
    };
};
