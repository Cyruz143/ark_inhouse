class CfgVehicles {
    class B_AssaultPack_rgr;
    class B_Kitbag_rgr;
    class B_Carryall_oli;
    class B_Bergen_mcamo_F;
    class B_FieldPack_oli;

    class ark_backpack_small: B_AssaultPack_rgr {
        author = "ARK";
        displayName = "ARK: Bag of holding (small)";
        model = "\A3\Weapons_F\empty.p3d";
    };

    class ark_backpack_med: B_Kitbag_rgr {
        author = "ARK";
        displayName = "ARK: Bag of holding (medium)";
        model = "\A3\Weapons_F\empty.p3d";
    };

    class ark_backpack_large: B_Carryall_oli {
        author = "ARK";
        displayName = "ARK: Bag of holding (large)";
        model = "\A3\Weapons_F\empty.p3d";
    };

    class ark_backpack_huge: B_Bergen_mcamo_F {
        author = "ARK";
        displayName = "ARK: Bag of holding (huge)";
        model = "\A3\Weapons_F\empty.p3d";
    };

    class B_Kitbag_rgr_ARK: B_Kitbag_rgr {
        author = "ARK";
        displayName = "ARK: Kitbag Test Bag";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {"Camo"};
        maximumLoad = 320;
    };

    class B_FieldPack_oli_ARK: B_FieldPack_oli {
        author = "ARK";
        displayName = "ARK: Fieldpack Test Bag";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {"Camo"};
        maximumLoad = 320;
    }

    class B_Kitbag_rgr_RPG7: B_Kitbag_rgr_ARK {
        scope = 2;
        displayName = "ARK: RPG-7 Kitbag";
        class TransportMagazines {
            class _xx_CUP_PG7VL_M {
                magazine = "CUP_PG7V_M";
                count = 2;
            };
        };
        class TransportItems{};
    };

    class B_Kitbag_rgr_MRAWS: B_Kitbag_rgr_ARK {
        scope = 2;
        displayName = "ARK: MRAWS Kitbag";
        class TransportMagazines {
            class _xx_MRAWS_HEAT_F {
                magazine = "MRAWS_HEAT_F";
                count = 2;
            };
        };
        class TransportItems{};
    };

    class B_FieldPack_oli_RPG7: B_FieldPack_oli_ARK {
        scope = 2;
        displayName = "ARK: RPG-7 Fieldpack";
        class TransportMagazines {
            class _xx_CUP_PG7VL_M_2 {
                magazine = "CUP_PG7V_M";
                count = 2;
            };
        };
        class TransportItems{};
    };
};
