class CfgWeapons {
    class ItemCore;
    class ToolKitItem;
    class ToolKit: ItemCore {
        class ItemInfo: ToolKitItem {
            mass = 1;
            allowedslots[] = {701,801,901};
        };
    };
    
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ACE_wirecutter: ACE_ItemCore {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};