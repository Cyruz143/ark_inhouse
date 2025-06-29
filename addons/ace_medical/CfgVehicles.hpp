class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Medical {
                class ACE_Torso {
                    delete TriageCard;
                };
            };
        };
        class ACE_Actions {
            class ACE_MainActions {
                class ACE_Medical_Radial {
                    class ACE_Torso {
                        delete TriageCard;
                    };
                };
            };
        };
    };

    class ACE_medicalSupplyCrate;
    class ARK_medicalSupplyCrate: ACE_medicalSupplyCrate {
        displayName = "ARK Medical Supply Crate";
        author = "ARK";
        class TransportItems {
            MACRO_ADDITEM(ACE_fieldDressing,200);
            MACRO_ADDITEM(ACE_morphine,30);
            MACRO_ADDITEM(ACE_epinephrine,30);
            MACRO_ADDITEM(ACE_bloodIV_500,24);
            MACRO_ADDITEM(ACE_tourniquet,10);
            MACRO_ADDITEM(ACE_splint,12);
        };
        class TransportMagazines {};
    };
};
