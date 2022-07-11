class Mode_SemiAuto;
class Mode_FullAuto;

class CfgWeapons {
    class SMG_03_TR_BASE;
    class SMG_03_TR_black: SMG_03_TR_BASE {
        displayName = $STR_ARK_PS90_TR_Black_Name;
    };
    class SMG_03_TR_khaki: SMG_03_TR_black {
        displayName = $STR_ARK_PS90_TR_Khaki_Name;
    };
    class SMG_03_TR_camo: SMG_03_TR_black {
        displayName = $STR_ARK_PS90_TR_Camo_Name;
    };
    class SMG_03_TR_hex: SMG_03_TR_BASE {
        displayName = $STR_ARK_PS90_TR_Hex_Name;
    };
    class SMG_03_black: SMG_03_TR_BASE {
        displayName = $STR_ARK_PS90_Black_Name;
    };
    class SMG_03_khaki: SMG_03_black {
        displayName = $STR_ARK_PS90_Khaki_Name;
    };
    class SMG_03_camo: SMG_03_black {
        displayName = $STR_ARK_PS90_Camo_Name;
    };
    class SMG_03_hex: SMG_03_black {
        displayName = $STR_ARK_PS90_Hex_Name;
    };

    class SMG_03C_BASE: SMG_03_TR_BASE {};
    class SMG_03C_TR_black: SMG_03C_BASE {
        displayName = $STR_ARK_P90_TR_Black_Name;
    };
    class SMG_03C_TR_khaki: SMG_03C_TR_black {
        displayName = $STR_ARK_P90_TR_Khaki_Name;
    };
    class SMG_03C_TR_camo: SMG_03C_TR_black {
        displayName = $STR_ARK_P90_TR_Camo_Name;
    };
    class SMG_03C_TR_hex: SMG_03C_TR_black {
        displayName = $STR_ARK_P90_TR_Hex_Name;
    };
    class SMG_03C_black: SMG_03C_Base {
        displayName = $STR_ARK_P90_Black_Name;
    };
    class SMG_03C_khaki: SMG_03C_black {
        displayName = $STR_ARK_P90_Khaki_Name;
    };
    class SMG_03C_camo: SMG_03C_black {
        displayName = $STR_ARK_P90_Camo_Name;
    };
    class SMG_03C_hex: SMG_03C_black {
        displayName = $STR_ARK_P90_Hex_Name;
    };

    // Tone down recoil on MMGs
    class Rifle_Long_Base_F;
    class CUP_lmg_MG3: Rifle_Long_Base_F {
        dispersion = 0.0004;
        recoil = "CUP_Mk48_recoil";
        class manual: Mode_FullAuto {
            dispersion = 0.0004;
        };
    };

    class CUP_lmg_M240: Rifle_Long_Base_F {
        dispersion = 0.0005;
        recoil = "CUP_Mk48_recoil";
        class manual: Mode_FullAuto {
            dispersion = 0.0005;
        };
    };
};