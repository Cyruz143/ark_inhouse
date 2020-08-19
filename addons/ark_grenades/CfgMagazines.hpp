class CfgMagazines {
    class CA_Magazine;
    class SatchelCharge_Remote_Mag_Throwable: CA_Magazine {
        author = "ARK";
        scope = 1;
        picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
        model = "\A3\Weapons_F\Explosives\satchel_i";
        descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Things that need to die";
        class Library {
            libTextDesc = "An explosive satchel that is throwable. 7 second fixed fuse";
        };
        descriptionUse = "";
        type = "2*      256";
        allowedSlots[] = {901};
        value = 5;
        ammo = "SatchelCharge_Remote_Ammo_Thrown";
        mass = 80;
        count = 1;
        initSpeed = 10;
        maxLeadSpeed = 0;
        nameSoundWeapon = "satchelcharge";
        nameSound = "satchelcharge";
        weaponPoolAvailable = 0;
        useActionTitle = "";
        sound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 10};
        displayName = "Explosive Satchel (Throwable)";
        displayNameShort = "Satchel Charge";
        ace_explosives_Placeable = 0;
        useAction = 0;
        class ACE_Triggers {
            SupportedTriggers[] = {};
        };
    };
    class DemoCharge_Remote_Mag_Throwable: SatchelCharge_Remote_Mag_Throwable {
        picture = "\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
        model = "\A3\Weapons_F\explosives\c4_charge_small_d";
        descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Things that need to die";
        class Library {
            libTextDesc = "An explosive charge that is throwable. 7 second fixed fuse";
        };
        allowedSlots[] = {901, 701};
        ammo = "DemoCharge_Remote_Ammo_Thrown";
        mass = 20;
        initSpeed = 15;
        displayName = "Explosive Charge (Throwable)";
        displayNameShort = "Explosive Charge";
    };
};