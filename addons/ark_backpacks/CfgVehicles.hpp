class CfgVehicles {
    class Bag_Base;
    class usm_pack_m5_medic: Bag_Base {
        MAXLOAD320
    };
    class usm_pack_762x51_bandoliers: Bag_Base {
        MAXLOAD320
    };
    class usm_pack_200rnd_556_bandoliers: Bag_Base {
        MAXLOAD320
    };
    class usm_pack_alice: Bag_Base {
        MAXLOAD320
    };
    class usm_pack_alice_prc119: Bag_Base {
        MAXLOAD320
    };
    class usm_pack_762x51_ammobelts: Bag_Base {
        MAXLOAD320
    };
    class usm_pack_st138_prc77: Bag_Base {
        MAXLOAD320
    };

    class B_Kitbag_rgr;
    class B_Kitbag_rgr_ARK: B_Kitbag_rgr {
        displayName = "ARK Test Bag";
        scope = 2;
        scopeArsenal = 0;
        scopeCurator = 0;
        hiddenSelections[] = {"Camo"};
        MAXLOAD320
    };

    class B_Kitbag_rgr_RPG7: B_Kitbag_rgr_ARK {
        displayName = "ARK: RPG-7 Kitbag";
        class TransportMagazines {
            class _xx_CUP_PG7VL_M {
                magazine = "CUP_PG7V_M";
                count = 2;
            };
        };
        class TransportItems{};
    };

    class B_Kitbag_rgr_M240: B_Kitbag_rgr_ARK {
        displayName = "ARK: M240 Kitbag";
        class TransportMagazines {
            class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M {
                magazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
                count = 3;
            };
        };
        class TransportItems{};
    };

    class B_Kitbag_rgr_M60: B_Kitbag_rgr_ARK {
        displayName = "ARK: M60 Kitbag";
        class TransportMagazines {
            class _xx_hlc_100Rnd_762x51_B_M60E4 {
                magazine = "hlc_100Rnd_762x51_B_M60E4";
                count = 3;
            };
        };
        class TransportItems{};
    };

    class B_Kitbag_rgr_PKM: B_Kitbag_rgr_ARK {
        displayName = "ARK: PKM Kitbag";
        class TransportMagazines {
            class _xx_CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M {
                magazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M";
                count = 3;
            };
        };
        class TransportItems{};
    };

    class B_Kitbag_rgr_M249: B_Kitbag_rgr_ARK {
        displayName = "ARK: M249 Kitbag";
        class TransportMagazines {
            class _xx_CUP_200Rnd_TE1_Red_Tracer_556x45_M249 {
                magazine = "CUP_200Rnd_TE1_Red_Tracer_556x45_M249";
                count = 3;
            };
        };
        class TransportItems{};
    };

    class B_Kitbag_rgr_RPK47: B_Kitbag_rgr_ARK {
        displayName = "ARK: RPK47 Kitbag";
        class TransportMagazines {
            class _xx_hlc_75Rnd_762x39_m_rpk {
                magazine = "hlc_75Rnd_762x39_m_rpk";
                count = 3;
            };
        };
        class TransportItems{};
    };

    class B_Kitbag_rgr_RPK74: B_Kitbag_rgr_ARK {
        displayName = "ARK: RPK74 Kitbag";
        class TransportMagazines {
            class _xx_hlc_45Rnd_545x39_t_rpk {
                magazine = "hlc_45Rnd_545x39_t_rpk";
                count = 3;
            };
        };
        class TransportItems{};
    };
};