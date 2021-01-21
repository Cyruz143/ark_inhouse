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

                class Ammo_Crate : ARK_Interaction {
                    displayName = "Deploy Ammo Crate";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa";
                    condition = "call ark_main_fnc_isTownSweep && {player isEqualTo leader group player}";
                    statement = "call ts_spawn_fnc_ammoCrate";
                    exceptions[] = {"isNotInside"};
                };

                class Medical_Crate : ARK_Interaction {
                    displayName = "Deploy Medical Crate";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\heal_ca.paa";
                    condition = "call ark_main_fnc_isTownSweep && {player getUnitTrait 'Medic'}";
                    statement = "call ts_spawn_fnc_medicalCrate";
                    exceptions[] = {"isNotInside"};
                };
            };
        };
    };
};
