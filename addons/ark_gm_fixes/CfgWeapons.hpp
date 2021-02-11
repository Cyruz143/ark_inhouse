// Replaces the CUP M2 + DSHKM sounds with the GM ones
class CfgWeapons {
    class HMG_M2;
    class MGun;
    class CUP_Vhmg_M2_veh: HMG_M2 {
        class manual: MGun {
            class StandardSound {
                soundsetshot[] = {"gm_m2_shot","gm_m2_tail"};
            };
        };
    };

    class CUP_Vhmg_DSHKM_veh: MGun {
        class manual: MGun {
            sound[] = {};
            class StandardSound {
                soundsetshot[] = {"gm_127mm_dshkm_shot","gm_127mm_dshkm_tail"};
            };
        };
    };
};


