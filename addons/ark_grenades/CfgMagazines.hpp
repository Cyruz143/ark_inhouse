class CfgMagazines {
    class CA_Magazine;
    class SatchelCharge_Remote_Mag_Throwable: CA_Magazine {
        author = "ARK";
        ammo = "SatchelCharge_Remote_Ammo_Thrown";
        scope = 1;
        picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
        model = "\A3\Weapons_F\Explosives\satchel_i";
        displayName = "Explosive Satchel (Throwable)";
        displayNameShort = "Satchel Charge";
        descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Things that need to die";
        class Library {
            libTextDesc = "An explosive satchel that is throwable. 7 second fixed fuse";
        };
        type = "2*      256";
        allowedSlots[] = {901};
        value = 5;
        mass = 80;
        count = 1;
        initSpeed = 7.5;
        maxLeadSpeed = 0;
        nameSound = "satchelcharge";
        nameSoundWeapon = "satchelcharge";
        sound[] = {"A3\sounds_f\dummysound", 0.000316228, 1, 10};
        useAction = 0;
    };
    class DemoCharge_Remote_Mag_Throwable: SatchelCharge_Remote_Mag_Throwable {
        ammo = "DemoCharge_Remote_Ammo_Thrown";
        picture = "\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
        model = "\A3\Weapons_F\explosives\c4_charge_small_d";
        displayName = "Explosive Charge (Throwable)";
        displayNameShort = "Explosive Charge";
        descriptionShort = "Type: Charge<br />Rounds: 1<br />Used on: Things that need to die";
        class Library {
            libTextDesc = "An explosive charge that is throwable. 7 second fixed fuse";
        };
        allowedSlots[] = {901, 701};
        mass = 20;
        initSpeed = 12.5;
    };
};