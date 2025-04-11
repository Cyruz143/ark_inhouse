 class CfgWeapons {
    class UniformItem;
    class U_C_CBRN_Suit_01_Blue_F;

    class U_C_CBRN_Suit_01_Yellow_F: U_C_CBRN_Suit_01_Blue_F {
        author = "ARK";
        displayName = "CBRN Suit (Yellow)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\CBRN_Suit_02_CO.paa)};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "C_CBRN_Man_Oversuit_01_Yellow_F";
            containerClass = "Supply30";
            mass = 45;
        };
    };

    class U_C_CBRN_Suit_01_Black_F: U_C_CBRN_Suit_01_Blue_F {
        author = "ARK";
        displayName = "CBRN Suit (Black)";
        hiddenSelectionsTextures[] = {QPATHTOF(data\CBRN_Suit_03_CO.paa)};
        class ItemInfo: UniformItem {
            uniformModel = "-";
            uniformClass = "C_CBRN_Man_Oversuit_01_Black_F";
            containerClass = "Supply30";
            mass = 45;
        };
    };
};
