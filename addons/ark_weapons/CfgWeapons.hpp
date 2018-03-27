class Mode_SemiAuto;
class Mode_FullAuto;

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

    class CUP_launch_M72A6;
    class ARK_launch_M72A7: CUP_launch_M72A6 {
        author = "ARK";
        displayName = "M72A7";
        magazines[] = {"ACE_PreloadedMissileDummy_M72A7_ARK"};
        ace_overpressure_angle = 40;
        ace_overpressure_range = 15;
        ace_overpressure_damage = 0.5;
        ACE_UsedTube = "ACE_launch_M72A7_Used_ARK";
        class Library {
            libTextDesc = "The M72 LAW is a portable one-shot 66-mm unguided anti-tank weapon.";
        };
    };

    class ACE_launch_M72A7_Used_ARK: ARK_launch_M72A7 {
        scope = 1;
        ACE_isUsedLauncher = 1;
        author = "ARK";
        displayName = "M72A7 (Used)";
        descriptionShort = "Used M72A7 Tube";
        magazines[] = {"ACE_FiredMissileDummy_M72A7_ARK"};
        weaponPoolAvailable = 0;
    };

    class arifle_SPAR_01_base_F;
    class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F {
        displayName = $STR_ARK_arifle_SPAR_01_blk;
    };
    class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F {
        displayName = $STR_ARK_arifle_SPAR_01_khk;
    };
    class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F {
        displayName = $STR_ARK_arifle_SPAR_01_snd;
    };
    class arifle_SPAR_01_GL_base_F;
    class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F {
        displayName = $STR_ARK_arifle_SPAR_01_GL_blk;
    };
    class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F {
        displayName = $STR_ARK_arifle_SPAR_01_GL_khk;
    };
    class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F {
        displayName = $STR_ARK_arifle_SPAR_01_GL_snd;
    };
    class arifle_SPAR_02_base_F;
    class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F {
        displayName = $STR_ARK_arifle_SPAR_02_blk;
    };
    class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F {
        displayName = $STR_ARK_arifle_SPAR_02_khk;
    };
    class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F {
        displayName = $STR_ARK_arifle_SPAR_02_snd;
    };
    class arifle_SPAR_03_base_F;
    class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F {
        displayName = $STR_ARK_arifle_SPAR_03_blk;
    };
    class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F {
        displayName = $STR_ARK_arifle_SPAR_03_khk;
    };
    class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F {
        displayName = $STR_ARK_arifle_SPAR_03_snd;
    };
};