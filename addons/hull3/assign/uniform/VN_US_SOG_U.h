class VN_US_SOG_U {
    class Rifleman {
        headGear = "vn_b_helmet_m1_10_01";
        goggles = "";
        uniform = "vn_b_uniform_macv_05_02";
        vest = "vn_b_vest_sog_04_ARM";
        backpack = "vn_b_pack_trp_02";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "vn_b_boonie_02_02";
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_sog_02_02";
        vest = "vn_b_vest_sog_01_ARM";
    };

    class Officer : Leader {
        headGear = "vn_b_beret_01_01";
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_macv_04_02";
        vest = "vn_b_vest_usarmy_09_ARM";
    };

    class Crew : Rifleman {
        headGear = "vn_b_helmet_t56_01_01";
        goggles = "vn_b_acc_goggles_01";
        uniform = "vn_b_uniform_macv_06_02";
        vest = "vn_b_vest_usarmy_14_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        vest = "vn_b_vest_sog_06_ARM";
        backpack = "vn_b_pack_prc77_01";
    };

    class SL : Officer {
        backpack = "vn_b_pack_trp_04";
    };

    class Medic : Rifleman {
        headGear = "vn_b_bandana_05";
        goggles = "vn_g_spectacles_02";
        uniform = "vn_b_uniform_macv_05_02";
        vest = "vn_b_vest_sog_02_ARM";
        backpack = "vn_b_pack_lw_07";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "vn_b_helmet_m1_11_01";
    };

    class AR : Rifleman {
        goggles = "vn_b_acc_towel_02";
        uniform = "vn_b_uniform_macv_06_02";
        vest = "vn_b_vest_sog_05_ARM";
        backpack = "vn_b_pack_trp_01";
    };

    class AAR : Rifleman {
        backpack = "vn_b_pack_trp_01";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        headGear = "vn_b_boonie_01_02";
        goggles = "vn_b_acc_towel_01";
        uniform = "vn_b_uniform_sog_02_02";
        vest = "vn_b_vest_sog_03_ARM";
        backpack = "vn_b_pack_trp_03";
    };

    class ENGA : ENG {
        headGear = "vn_b_boonie_03_02";
        uniform = "vn_b_uniform_macv_05_02";
    };

    class SN : Rifleman {
        headGear = "vn_b_headband_02";
        goggles = "vn_b_acc_towel_01";
        uniform = "vn_b_uniform_sog_02_02";
        vest = "vn_b_vest_sog_04_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "vn_b_helmet_t56_02_01";
        goggles = "";
        vest = "vn_b_vest_usarmy_13_ARM";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "vn_b_helmet_svh4_01_04";
        goggles = "";
        uniform = "vn_b_uniform_sog_01_02";
        vest = "vn_b_vest_aircrew_03_ARM";
        backpack = "ark_backpack_small";
    };

    class PCM : P {
        headGear = "vn_b_helmet_svh4_02_04";
    };

};
