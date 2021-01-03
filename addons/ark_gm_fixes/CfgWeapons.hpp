// Replaces the CUP M2 sounds with the GM ones
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
};