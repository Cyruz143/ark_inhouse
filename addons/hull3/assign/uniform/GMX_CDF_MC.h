class GMX_CDF_MC {
    class Rifleman {
        headGear = "acp_Multicam_H_HelmetHBK_F_Multicam";
        goggles = "";
        uniform = "gmx_cdf2022_army_uniform_soldier_mcam";
        vest = "gmx_cdf2022_army_vest_armor_90_rifleman_digittsko_ARM";
        backpack = "ark_backpack_med";
        insignia = "";
    };

    class Leader : Rifleman {
        uniform = "gmx_cdf2022_army_uniform_soldier_rolled_mcam";
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class Officer : Leader {
        headGear = "acp_Multicam_H_MilCap_Multicam";
    };

    class Crew : Rifleman {
        headGear = "H_Tank_eaf_F";
        uniform = "gmx_cdf2022_army_uniform_soldier_rolled_mcam";
        vest = "gmx_cdf2022_army_vest_armor_90_crew_digittsko_ARM";
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
        vest = "gmx_cdf2022_army_vest_armor_90_medic_digittsko_ARM";
        backpack = "ark_backpack_large";
        insignia = "";
    };

    class FTL : Leader {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
    };

    class AR : Rifleman {
        vest = "gmx_cdf2022_army_vest_armor_90_machinegunner_digittsko_ARM";
    };

    class AAR : Rifleman {
        backpack = "ark_backpack_large";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "gmx_cdf2022_army_vest_armor_90_machinegunner_digittsko_ARM";
        backpack = "ark_backpack_large";
    };

    class MMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        backpack = "ark_backpack_large";
    };

    class MATAG : AAR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        backpack = "ark_backpack_large";
    };

    class HATAG : AAR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class HATAC : HATAG {
    };

    class DHATG : AR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
    };

    class DHATAG : AAR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
    };

    class SAMAG : AAR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
    };

    class GMGAG : AAR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
    };

    class MTRAG : AAR {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        vest = "gmx_cdf2022_army_vest_armor_90_leader_digittsko_ARM";
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        headGear = "acp_Multicam_H_HelmetHBK_headset_F_Multicam";
        vest = "gmx_cdf2022_army_vest_armor_90_demolition_digittsko_ARM";
        backpack = "ark_backpack_large";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "acp_Multicam_H_Booniehat_Multicam_hs";
        backpack = "ark_backpack_small";
    };

    class SP : SN {
        headGear = "acp_Multicam_H_Booniehat_Multicam";
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "gm_gc_headgear_zsh3_wht";
        vest = "gm_ge_army_vest_pilot_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
