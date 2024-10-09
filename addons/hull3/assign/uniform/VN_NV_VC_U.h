class VN_NV_VC_U {
    class Rifleman {
        headGear = "vn_o_helmet_vc_01";
        goggles = "vn_b_scarf_01_03";
        uniform = "vn_o_uniform_vc_01_01";
        vest = "vn_o_vest_vc_02_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "vn_o_helmet_vc_02";
        goggles = "vn_o_scarf_01_04";
        uniform = "vn_o_uniform_vc_mf_01_07";
        vest = "vn_o_vest_vc_05_ARM";
        backpack = "ark_backpack_med";
    };

    class Officer : Leader {
        headGear = "vn_o_cap_02";
        uniform = "vn_o_uniform_vc_mf_02_07";
        vest = "vn_o_vest_vc_05_ARM";
    };

    class Crew : Rifleman {
        headGear = "vn_o_helmet_tsh3_02";
        goggles = "vn_o_acc_goggles_01";
        uniform = "vn_o_uniform_vc_02_01";
        vest = "vn_o_vest_05_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "vn_o_pack_t884_01";
    };

    class SL : Officer {
        backpack = "ark_backpack_med";
    };

    class Medic : Rifleman {
        headGear = "vn_o_helmet_vc_04";
        goggles = "vn_g_spectacles_01";
        uniform = "vn_o_uniform_vc_reg_12_08";
        vest = "vn_o_vest_vc_04_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        goggles = "vn_o_scarf_01_03";
        uniform = "vn_o_uniform_vc_01_04";
    };

    class AR : Rifleman {
        headGear = "vn_o_helmet_vc_05";
        goggles = "vn_o_scarf_01_01";
        uniform = "vn_o_uniform_vc_01_07";
        vest = "vn_o_vest_vc_03_ARM";
    };

    class AAR : Rifleman {
        goggles = "vn_o_scarf_01_02";
        uniform = "vn_o_uniform_vc_01_03";
        vest = "vn_o_vest_vc_01_ARM";
    };

    class RAT : Rifleman {
        uniform = "vn_o_uniform_vc_01_05";
        backpack = "ark_backpack_med";
    };

    class MMGG : AR {
        uniform = "vn_o_uniform_vc_02_07";
    };

    class MMGAG : AAR {
        uniform = "vn_o_uniform_vc_02_06";
    };

    class ENG : Rifleman {
        headGear = "vn_o_boonie_vc_02_02";
        uniform = "vn_o_uniform_vc_04_01";
        vest = "vn_o_vest_08_ARM";
        backpack = "ark_backpack_med";
    };

    class ENGA : ENG {
        uniform = "vn_o_uniform_vc_03_01";
    };

    class SN : Rifleman {
        headGear = "vn_o_boonie_vc_02_02";
        goggles = "vn_o_poncho_01_01";
        uniform = "vn_o_uniform_vc_mf_12_07";
        vest = "vn_o_vest_vc_02_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
    };

    class VC : Crew {
        headGear = "vn_o_helmet_tsh3_01";
        goggles = "";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "vn_o_helmet_zsh3_01";
        goggles = "";
        uniform = "vn_o_uniform_nva_air_01";
        backpack = "ark_backpack_small";
    };

    class PCM : P {
        headGear = "vn_o_helmet_zsh3_02";
    };

};
