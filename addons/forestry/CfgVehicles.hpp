class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARK_Menu {
                displayName = "ARK";
                condition = "true";
                statement = "";
                icon = "\x\ark\addons\ark_main\resources\ark_star.paa";
                exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                class Chop_Tree {
                    displayName = "Chop down tree";
                    icon = "\x\ark\addons\ark_forestry\resources\tree.paa";
                    condition = "call ark_forestry_fnc_canChop";
                    statement = "call ark_forestry_fnc_doChop";
                    exceptions[] = {};
                };

                class Flatten_Grass  {
                    displayName = "Flatten Grass";
                    icon = "\x\ark\addons\ark_forestry\resources\grass.paa";
                    condition = "insideBuilding player != 1";
                    statement = "call ark_forestry_fnc_doFlatten";
                    exceptions[] = {};
                };
            };
        };
    };
};