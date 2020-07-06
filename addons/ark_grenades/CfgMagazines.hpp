class CfgMagazines {
    class SatchelCharge_Remote_Mag;
    class SatchelCharge_Remote_Mag_Throwable: SatchelCharge_Remote_Mag {
        author = "ARK";
        scope = 1;
        class Library {
            libTextDesc = "An explosive satchel that is throwable. 7 second fixed fuse";
        };
        descriptionUse = "";
        initSpeed = 15;
        maxLeadSpeed = 7;
        weaponPoolAvailable = 0;
        useActionTitle = "";
        displayName = "Explosive Satchel (Throwable)";
        ace_explosives_Placeable = 0;
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {};
        };
    };
};