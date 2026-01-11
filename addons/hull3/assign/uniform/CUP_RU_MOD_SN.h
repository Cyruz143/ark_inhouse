class CUP_RU_MOD_SN {
    class Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_Winter";
        goggles = "CUP_G_RUS_Balaclava_Ratnik_winter";
        uniform = "CUP_U_O_RUS_Ratnik_Winter";
        vest = "CUP_Vest_RUS_6B45_Sh117_Green";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        vest = "CUP_Vest_RUS_6B45_Sh117_VOG_Green";
    };

    class Officer : Leader {
        headGear = "CUP_H_RUS_Beret_VDV";
        goggles = "";
    };

    class Crew : Rifleman {
        headGear = "H_Tank_eaf_F";
        goggles = "";
        backpack = "ark_backpack_small";
    };

    class CO : Officer {
    };

    class XO : CO {
        backpack = "ark_backpack_large";
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesClosed_Winter";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesUp_Winter";
        goggles = "CUP_G_RUS_Balaclava_Ratnik_winter_v2";
        vest = "CUP_Vest_RUS_6B45_Sh117_PKP_Green";
    };

    class AAR : Rifleman {
        goggles = "CUP_G_RUS_Balaclava_Ratnik_winter_v2";
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesDown_Winter";
        goggles = "CUP_G_RUS_Balaclava_Ratnik_winter_v2";
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
        headGear = "CUP_H_RUS_6B47_v2_GogglesUp_Winter";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
        headGear = "CUP_H_RUS_6B47_v2_GogglesDown_Winter";
        goggles = "CUP_G_RUS_Balaclava_Ratnik_winter_v2";
    };

    class SN : Rifleman {
        headGear = "CUP_H_RUS_6B47_v2_GogglesClosed_Winter";
        goggles = "CUP_G_RUS_Balaclava_Ratnik_winter_v2";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
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
