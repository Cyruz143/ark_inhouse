class CfgPatches {
    class ark_ai_fsm {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.66;
        requiredAddons[] = {"A3_Characters_F","CBA_MAIN"};
        author = "ARK";
        authorUrl = "http://www.ark-group.org";
    };
};

class CfgVehicles {
    class CAManBase;
    class SoldierWB : CAManBase {
        fsmDanger = "x\ark\addons\ark_ai_fsm\ark_danger.fsm";
    };
    class SoldierEB : CAManBase {
        fsmDanger = "x\ark\addons\ark_ai_fsm\ark_danger.fsm";
    };
    class SoldierGB : CAManBase {
        fsmDanger = "x\ark\addons\ark_ai_fsm\ark_danger.fsm";
    };
};