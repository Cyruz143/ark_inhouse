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
                    icon = "\x\ark\addons\ark_lumber_jack\resources\tree.paa";
                    condition = "call ark_lumber_jack_fnc_canChop";
                    statement = "call ark_lumber_jack_fnc_doChop";
                };
            };
        };
    };
};
