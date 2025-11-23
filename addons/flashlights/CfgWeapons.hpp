class CfgWeapons {
    class ItemCore;
    class InventoryFlashLightItem_Base_F;

    class acc_flashlight: ItemCore {
        class ItemInfo: InventoryFlashLightItem_Base_F {
            class FlashLight {
                MACRO_FLASHLIGHT_UPGRADE;
            };
        };
    };

    #include "CfgWeapons_WS.hpp"
    #include "CfgWeapons_CUP.hpp"

};
