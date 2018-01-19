class CfgWeapons {
    class CUP_launch_RPG18;
    class ARK_launch_RPG22: CUP_launch_RPG18 {
        author = "ARK";
        displayName = "RPG22";
        magazines[] = {"ACE_PreloadedMissileDummy_RPG22_ARK"};
        ace_overpressure_angle = 40;
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.5;
        ACE_UsedTube = "ACE_launch_RPG22_Used_ARK";
        class Library {
            libTextDesc = "The Soviet RPG-22 Netto is a one-shot disposable anti-tank rocket launcher first deployed in 1985, based on the RPG-18 rocket launcher, but firing a larger 72.5 mm fin stabilised projectile.";
        };
    };

    class ACE_launch_RPG22_Used_ARK: ARK_launch_RPG22 {
        scope = 1;
        ACE_isUsedLauncher = 1;
        author = "ARK";
        displayName = "RPG22 (Used)";
        descriptionShort = "Used RPG22 Tube";
        magazines[] = {"ACE_FiredMissileDummy_RPG22_ARK"};
        weaponPoolAvailable = 0;
    };

    class hlc_smg_MP5N;
    class ARK_smg_MP5N: hlc_smg_MP5N {
        author = "ARK";
        displayName = "HK MP5/10"; //Change
        descriptionShort = "SMG<br/>Caliber: 10mm AUTO"; //Change

        class Single: Single {
            class StandardSound: StandardSound {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
            };
        };

        class Burst: Burst {
            class StandardSound: StandardSound {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
            };
        };

        class FullAuto: FullAuto {
            class StandardSound: StandardSound {
                soundSetShot[] = { "9mmar_Shot_SoundSet", "9mmar_tail_SoundSet" };
            };
        };
    };
};