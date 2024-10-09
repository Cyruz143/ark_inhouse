class CUP_RU_MOD_WD {
    class Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_Summer";
        goggles = "";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads";
        vest = "CUP_Vest_RUS_6B45_Sh117_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads";
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_ARM";
    };

    class Officer : Leader {
        headGear = "CUP_H_RUS_Beret_VDV";
    };

    class Crew : Rifleman {
        headGear = "H_Tank_eaf_F";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_Del_Nut_ARM";
    };

    class XO : CO {
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_Del_ARM";
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesClosed_Summer";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_Full_ARM";
    };

    class AR : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesUp_Summer";
        goggles = "CUP_G_RUS_Balaclava_Ratnik";
        vest = "CUP_Vest_RUS_6B45_Sh117_PKP_Del_ARM";
    };

    class AAR : Rifleman {
        goggles = "CUP_G_RUS_Balaclava_Ratnik_v2";
        vest = "CUP_Vest_RUS_6B45_Sh117_Del_Nut_ARM";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesDown_Summer";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads";
        vest = "CUP_Vest_RUS_6B45_Sh117_Del_Nut_ARM";
    };

    class MMGG : AR {
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesUp_Summer";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_EMR_rolled_up_gloves_pads";
        vest = "CUP_Vest_RUS_6B45_Sh117_Full_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_RUS_6B47_v2_GogglesDown_Summer";
        goggles = "CUP_G_RUS_Balaclava_Ratnik_v2";
        uniform = "CUP_U_O_RUS_Soldier_VKPO_VDV_EMR_gloves_pads";
    };

    class SN : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesClosed_Summer";
        goggles = "CUP_G_RUS_Balaclava_Ratnik_v2";
        vest = "CUP_Vest_RUS_6B45_Sh117_Full_ARM";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        goggles = "CUP_G_RUS_Balaclava_Ratnik";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
