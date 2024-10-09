class VN_US_LRRP_U {
    class Rifleman {
        headGear = "vn_b_helmet_m1_05_01";
        goggles = "";
        uniform = "vn_b_uniform_macv_01_01";
        vest = "vn_b_vest_usarmy_02_ARM";
        backpack = "vn_b_pack_lw_01";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "vn_b_helmet_m1_03_01";
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_macv_04_01";
        vest = "vn_b_vest_usarmy_05_ARM";
    };

    class Officer : Leader {
        headGear = "vn_b_helmet_m1_02_01";
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_macv_05_01";
        vest = "vn_b_vest_usarmy_09_ARM";
    };

    class Crew : Rifleman {
        headGear = "vn_b_helmet_t56_01_01";
        goggles = "vn_b_acc_goggles_01";
        uniform = "vn_b_uniform_macv_06_01";
        vest = "vn_b_vest_usarmy_14_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "vn_b_pack_prc77_01";
    };

    class SL : Officer {
        backpack = "vn_b_pack_lw_06";
    };

    class Medic : Rifleman {
        headGear = "vn_b_helmet_m1_07_01";
        goggles = "vn_g_spectacles_02";
        uniform = "vn_b_uniform_macv_01_01";
        vest = "vn_b_vest_usarmy_07_ARM";
        backpack = "vn_b_pack_lw_07";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "vn_i_helmet_m1_03_01";
    };

    class AR : Rifleman {
        headGear = "vn_b_helmet_m1_08_01";
        goggles = "vn_b_acc_towel_02";
        uniform = "vn_b_uniform_macv_06_01";
        backpack = "vn_b_pack_lw_02";
    };

    class AAR : Rifleman {
        headGear = "vn_b_helmet_m1_06_01";
        vest = "vn_b_vest_usarmy_03_ARM";
        backpack = "vn_b_pack_lw_05";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "vn_b_vest_usarmy_06_ARM";
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        headGear = "vn_b_helmet_m1_09_01";
        goggles = "vn_b_acc_towel_01";
        uniform = "vn_b_uniform_macv_03_01";
        backpack = "vn_b_pack_lw_04";
    };

    class ENGA : ENG {
        uniform = "vn_b_uniform_macv_02_01";
    };

    class SN : Rifleman {
        headGear = "vn_b_bandana_01";
        goggles = "vn_b_acc_towel_01";
        uniform = "vn_b_uniform_macv_01_01";
        vest = "vn_b_vest_usarmy_08_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        vest = "vn_b_vest_usarmy_04_ARM";
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
        uniform = "vn_b_uniform_k2b_02_01";
        vest = "vn_b_vest_aircrew_03_ARM";
        backpack = "ark_backpack_small";
    };

    class PCM : P {
        headGear = "vn_b_helmet_svh4_02_04";
        uniform = "vn_b_uniform_heli_01_01";
    };

};
