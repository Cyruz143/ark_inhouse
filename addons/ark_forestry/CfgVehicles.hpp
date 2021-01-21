class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARK_Interaction;
            class ARK_Menu {
                displayName = "ARK";
                condition = "true";
                statement = "";
                icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                class Chop_Tree : ARK_Interaction {
                    displayName = "Chop down tree";
                    exceptions[] = {};
                    icon = "\x\ark\addons\ark_forestry\resources\tree.paa";
                    condition = "call ark_forestry_fnc_canChop";
                    statement = "call ark_forestry_fnc_doChop";
                };

                class Flatten_Grass : ARK_Interaction {
                    displayName = "Flatten Grass";
                    exceptions[] = {};
                    icon = "\x\ark\addons\ark_forestry\resources\grass.paa";
                    statement = "call ark_forestry_fnc_doFlatten";
                };
            };
        };
    };
};