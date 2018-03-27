class CfgWeapons {
    class ItemCore;
    class ToolKit: ItemCore {
        author = "Bohemia Interactive";
        _generalMacro = "ToolKit";
        scope = 2;
        displayName = "Toolkit";
        descriptionShort = "Enables repair of vehicles - Engineer<br/>Enables deactivating explosives - Demo expert";
        picture = "\A3\Weapons_F\Items\data\UI\gear_Toolkit_CA.paa";
        model = "\A3\Weapons_F\Items\Toolkit";
        class ItemInfo: ToolKitItem {
            mass = 1;
            uniformModel = "\A3\Weapons_F\Items\Toolkit";
            allowedslots[] = {701,801,901};
        };
    };
};