class VN_US_SEAL_U {
    class Rifleman {
        headGear = "vn_b_boonie_01_06";
        goggles = "";
        uniform = "vn_b_uniform_seal_01_06";
        vest = "vn_b_vest_seal_04_ARM";
        backpack = "vn_b_pack_trp_02";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "vn_b_boonie_01_01";
        goggles = "vn_b_scarf_01_03";
        uniform = "vn_b_uniform_seal_01_07";
        vest = "vn_b_vest_seal_07_ARM";
    };

    class Officer : Leader {
        headGear = "vn_b_boonie_03_01";
        goggles = "vn_b_scarf_01_01";
        uniform = "vn_b_uniform_seal_02_01";
        vest = "vn_b_vest_seal_02_ARM";
    };

    class Crew : Rifleman {
        headGear = "vn_b_helmet_t56_01_01";
        goggles = "vn_b_acc_goggles_01";
        uniform = "vn_b_uniform_macv_04_07";
        vest = "vn_b_vest_usarmy_14_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "vn_b_pack_trp_04";
    };

    class SL : Officer {
        backpack = "vn_b_pack_trp_04";
    };

    class Medic : Rifleman {
        headGear = "vn_b_boonie_02_06";
        goggles = "vn_g_spectacles_02";
        uniform = "vn_b_uniform_seal_02_06";
        vest = "vn_b_vest_seal_06_ARM";
        backpack = "vn_b_pack_lw_07";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "vn_b_headband_01";
        uniform = "vn_b_uniform_seal_02_01";
        vest = "vn_b_vest_seal_03_ARM";
        backpack = "vn_b_pack_trp_01";
    };

    class AAR : Rifleman {
        headGear = "vn_b_boonie_05_06";
        uniform = "vn_b_uniform_seal_02_06";
        backpack = "vn_b_pack_trp_01";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        headGear = "vn_b_bandana_01";
        uniform = "vn_b_uniform_seal_02_01";
        backpack = "vn_b_pack_trp_03";
    };

    class ENGA : ENG {
        headGear = "vn_b_bandana_06";
        uniform = "vn_b_uniform_seal_02_06";
    };

    class SN : Rifleman {
        headGear = "vn_b_headband_02";
        uniform = "vn_b_uniform_seal_02_02";
        vest = "vn_b_vest_seal_05_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "vn_b_helmet_t56_02_01";
        goggles = "";
        uniform = "vn_b_uniform_aus_01_01";
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
