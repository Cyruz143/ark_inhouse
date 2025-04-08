class Mode_FullAuto;
class gm_FullAuto;
class FullAuto;

class CfgWeapons {
    class SMG_03_TR_BASE;
    class SMG_03_TR_black: SMG_03_TR_BASE {
        displayName = "$STR_ARK_PS90_TR_Black_Name";
    };
    class SMG_03_TR_khaki: SMG_03_TR_black {
        displayName = "$STR_ARK_PS90_TR_Khaki_Name";
    };
    class SMG_03_TR_camo: SMG_03_TR_black {
        displayName = "$STR_ARK_PS90_TR_Camo_Name";
    };
    class SMG_03_TR_hex: SMG_03_TR_BASE {
        displayName = "$STR_ARK_PS90_TR_Hex_Name";
    };
    class SMG_03_black: SMG_03_TR_BASE {
        displayName = "$STR_ARK_PS90_Black_Name";
    };
    class SMG_03_khaki: SMG_03_black {
        displayName = "$STR_ARK_PS90_Khaki_Name";
    };
    class SMG_03_camo: SMG_03_black {
        displayName = "$STR_ARK_PS90_Camo_Name";
    };
    class SMG_03_hex: SMG_03_black {
        displayName = "$STR_ARK_PS90_Hex_Name";
    };

    class SMG_03C_Base: SMG_03_TR_BASE {};
    class SMG_03C_TR_black: SMG_03C_Base {
        displayName = "$STR_ARK_P90_TR_Black_Name";
    };
    class SMG_03C_TR_khaki: SMG_03C_TR_black {
        displayName = "$STR_ARK_P90_TR_Khaki_Name";
    };
    class SMG_03C_TR_camo: SMG_03C_TR_black {
        displayName = "$STR_ARK_P90_TR_Camo_Name";
    };
    class SMG_03C_TR_hex: SMG_03C_TR_black {
        displayName = "$STR_ARK_P90_TR_Hex_Name";
    };
    class SMG_03C_black: SMG_03C_Base {
        displayName = "$STR_ARK_P90_Black_Name";
    };
    class SMG_03C_khaki: SMG_03C_black {
        displayName = "$STR_ARK_P90_Khaki_Name";
    };
    class SMG_03C_camo: SMG_03C_black {
        displayName = "$STR_ARK_P90_Camo_Name";
    };
    class SMG_03C_hex: SMG_03C_black {
        displayName = "$STR_ARK_P90_Hex_Name";
    };

    // Less recoil for MMGS + better when prone + tighten MOA
    class Rifle_Long_Base_F;
    class CUP_lmg_MG3: Rifle_Long_Base_F {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
        class manual: Mode_FullAuto {
            MMG_DISPERSION_TIGHT;
        };
    };

    class CUP_lmg_M240: Rifle_Long_Base_F {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
        class manual: Mode_FullAuto {
            MMG_DISPERSION;
        };
    };

    class CUP_M60E4_base: Rifle_Long_Base_F {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
    };

    class CUP_lmg_M60: CUP_M60E4_base {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
    };

    class CUP_lmg_UK59: Rifle_Long_Base_F {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
        class manual: Mode_FullAuto {
            MMG_DISPERSION;
        };
    };

    class CUP_lmg_Mk48_Base: Rifle_Long_Base_F {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
        class manual: Mode_FullAuto {
            MMG_DISPERSION;
        };
    };

    class CUP_lmg_PKM: Rifle_Long_Base_F {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
        class manual: Mode_FullAuto {
            MMG_DISPERSION;
        };
    };

    class gm_machineGun_base;
    class gm_mg3_base: gm_machineGun_base {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
        class FullAuto: gm_FullAuto {
            MMG_DISPERSION_TIGHT;
        };
    };

    class gm_pk_base: gm_machineGun_base {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
        class FullAuto: gm_FullAuto {
            MMG_DISPERSION;
        };
    };

    class gm_g3_base;
    class gm_g8_base: gm_g3_base {
        MMG_RECOIL;
        MMG_RECOIL_PRONE;
        class FullAuto: FullAuto {
            MMG_DISPERSION;
        };
    };
};
