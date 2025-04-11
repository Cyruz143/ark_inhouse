class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ARK_Menu {
                displayName = "ARK";
                condition = "true";
                statement = "";
                icon = QPATHTOEF(main,resources\ark_star.paa);
                exceptions[] = {"isNotSwimming", "isNotInside", "isNotSitting", "isNotOnLadder", "isNotRefueling"};

                class Ammo_Crate {
                    displayName = "Deploy Ammo Crate";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa";
                    condition = QUOTE((call EFUNC(main,isTownSweep)) && {player isEqualTo leader group player});
                    statement = QUOTE(call FUNC(ammoCrate));
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotRefueling"};
                };

                class Medical_Crate {
                    displayName = "Deploy Medical Crate";
                    icon = "\a3\ui_f\data\igui\cfg\simpletasks\types\heal_ca.paa";
                    condition = QUOTE((call EFUNC(main,isTownSweep)) && {player getUnitTrait 'Medic'});
                    statement = QUOTE(call FUNC(medicalCrate));
                    exceptions[] = {"isNotInside", "isNotSitting", "isNotRefueling"};
                };
            };
        };
    };
};
