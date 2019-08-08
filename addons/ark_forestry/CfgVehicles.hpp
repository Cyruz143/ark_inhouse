class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARK_Interaction {
                displayName = "ARK";
                runOnHover = 0;
                hotkey = "";
                exceptions[] = {"isNotInside"};
                condition = "true";
                statement = "";
                icon = "\x\ark\addons\ark_main\resources\ark_star.paa";

                class ARK_Category {
                    displayName = "ARK Client Action";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotInside"};
                    condition = "true";
                    statement = "";
                };

                class ARK_Action {
                    displayName = "ARK Client Action";
                    icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                    exceptions[] = {"isNotInside"};
                    condition = "true";
                    statement = "";
                };

                class Chop_Tree : ARK_Action {
                    displayName = "Chop down tree";
                    exceptions[] = {};
                    icon = "\x\ark\addons\ark_forestry\resources\tree.paa";
                    condition = "call ark_forestry_fnc_canChop";
                    statement = "call ark_forestry_fnc_doChop";
                };

                class Flatten_Grass : ARK_Action {
                    displayName = "Flatten Grass";
                    exceptions[] = {};
                    icon = "\x\ark\addons\ark_forestry\resources\grass.paa";
                    condition = "call ark_forestry_fnc_canFlatten";
                    statement = "call ark_forestry_fnc_doFlatten";
                };
            };
        };
    };
};
