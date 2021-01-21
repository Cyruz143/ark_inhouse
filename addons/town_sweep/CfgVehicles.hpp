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

                class Ammo_Crate : ARK_Action {
                    displayName = "Deploy Ammo Crate";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa";
                    condition = "call ark_admin_tools_fnc_isTownSweep && {player isEqualTo leader group player}";
                    statement = "call ts_spawn_fnc_ammoCrate";
                };

                class Medical_Crate : ARK_Action {
                    displayName = "Deploy Medical Crate";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\heal_ca.paa";
                    condition = "call ark_admin_tools_fnc_isTownSweep && {player getUnitTrait 'Medic'}";
                    statement = "call ts_spawn_fnc_medicalCrate";
                };
            };
        };
    };
};
