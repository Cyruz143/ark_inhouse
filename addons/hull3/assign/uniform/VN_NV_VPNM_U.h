class VN_NV_VPNM_U {
    class Rifleman {
        headGear = "vn_o_helmet_nva_09";
        goggles = "";
        uniform = "vn_o_uniform_nva_navy_02";
        vest = "vn_o_vest_02_ARM";
        backpack = "vn_o_pack_01";
        insignia = "";
    };

    class Leader : Rifleman {
        headGear = "vn_o_cap_navy_01";
        uniform = "vn_o_uniform_nva_navy_01";
        vest = "vn_o_vest_01_ARM";
        backpack = "vn_o_pack_02";
    };

    class Officer : Leader {
        uniform = "vn_o_uniform_nva_navy_03";
        vest = "vn_o_vest_07_ARM";
    };

    class Crew : Rifleman {
        headGear = "vn_o_helmet_tsh3_02";
        goggles = "vn_o_acc_goggles_01";
        uniform = "vn_o_uniform_nva_navy_04";
        vest = "vn_o_vest_05_ARM";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "vn_o_pack_t884_01";
    };

    class SL : Officer {
        backpack = "vn_o_pack_04";
    };

    class Medic : Rifleman {
        headGear = "vn_o_helmet_nva_09";
        goggles = "vn_g_spectacles_01";
        vest = "vn_o_vest_06_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        vest = "vn_o_vest_03_ARM";
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
        backpack = "vn_o_pack_03";
    };

    class MMGG : AR {
    };

    class MMGAG : AAR {
    };

    class ENG : Rifleman {
        vest = "vn_o_vest_08_ARM";
        backpack = "vn_o_pack_05";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        goggles = "vn_o_poncho_01_01";
        vest = "vn_o_vest_01_ARM";
        backpack = "vn_o_pack_06";
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
