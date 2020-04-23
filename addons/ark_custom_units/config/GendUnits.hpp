class CfgVehicles {
    // Custom Gend SWAT units
    class B_Soldier_F;
    class B_GEN_SWAT_base_F: B_Soldier_F {
        author = "ARK";
        priority = 3;
        side = 1;
        faction = "BLU_GEN_F";
        genericNames = "TanoanMen";
        identityTypes[] = {"LanguageENGFRE_F", "Head_Tanoan", "NoGlasses"};
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel_SWAT";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
    };

    class B_GEN_SWAT_LAT_F: B_GEN_SWAT_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "SWAT Rifleman (AT)";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
        uniformClass = "U_B_GEN_Soldier_F";
        icon = "iconManAT";
        role = "MissileSpecialist";
        weapons[] = {"arifle_SPAR_01_blk_F", "CUP_launch_M136", "Throw", "Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_F", "CUP_launch_M136", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellBlue", "HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellBlue", "HandGrenade"};
        linkedItems[] = {"G_Balaclava_blk", "CUP_V_PMC_CIRAS_Black_TL", "H_PASGT_basic_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"G_Balaclava_blk", "CUP_V_PMC_CIRAS_Black_TL", "H_PASGT_basic_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_GEN_SWAT_TL_F: B_GEN_SWAT_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "SWAT Team Leader";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
        uniformClass = "U_B_GEN_Commander_F";
        icon = "iconManLeader";
        role = "Grenadier";
        weapons[] = {"arifle_SPAR_01_GL_blk_ERCO_Pointer_F", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"arifle_SPAR_01_GL_blk_ERCO_Pointer_F", "Throw", "Put", "Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "SmokeShellBlue", "HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "SmokeShellBlue", "HandGrenade"};
        linkedItems[] = {"H_Beret_gen_F", "CUP_V_PMC_CIRAS_Black_Grenadier", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_Beret_gen_F", "CUP_V_PMC_CIRAS_Black_Grenadier", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_GEN_SWAT_AR_F: B_GEN_SWAT_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "SWAT Autorifleman";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
        uniformClass = "U_B_GEN_Soldier_F";
        icon = "iconManMG";
        role = "MachineGunner";
        weapons[] = {"arifle_SPAR_02_blk_ERCO_Pointer_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_SPAR_02_blk_ERCO_Pointer_F", "Throw", "Put"};
        magazines[] = {"150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "SmokeShellBlue", "HandGrenade"};
        respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "SmokeShellBlue", "HandGrenade"};
        linkedItems[] = {"G_Balaclava_blk", "H_PASGT_basic_black_F", "CUP_V_PMC_CIRAS_Black_TL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"G_Balaclava_blk", "H_PASGT_basic_black_F", "CUP_V_PMC_CIRAS_Black_TL", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_GEN_SWAT_MG_F: B_GEN_SWAT_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "SWAT Machinegunner";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
        uniformClass = "U_B_GEN_Soldier_F";
        icon = "iconManMG";
        role = "MachineGunner";
        backpack = "B_Kitbag_rgr";
        weapons[] = {"CUP_lmg_Pecheneg", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_Pecheneg", "Throw", "Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "SmokeShellBlue", "SmokeShellBlue"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "SmokeShellBlue", "SmokeShellBlue"};
        linkedItems[] = {"G_Balaclava_blk", "H_PASGT_basic_black_F", "CUP_V_PMC_CIRAS_Black_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"G_Balaclava_blk", "H_PASGT_basic_black_F", "CUP_V_PMC_CIRAS_Black_Patrol", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_GEN_SWAT_F: B_GEN_SWAT_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "SWAT Rifleman";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
        uniformClass = "U_B_GEN_Soldier_F";
        role = "Rifleman";
        weapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_ACO_Pointer_F", "Throw", "Put"};
        magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellBlue", "HandGrenade"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "SmokeShellBlue", "HandGrenade"};
        linkedItems[] = {"G_Balaclava_blk", "CUP_V_PMC_CIRAS_Black_Patrol", "H_PASGT_basic_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"G_Balaclava_blk", "CUP_V_PMC_CIRAS_Black_Patrol", "H_PASGT_basic_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_GEN_SWAT_Shield_F: B_GEN_SWAT_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "SWAT Shield Man";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
        uniformClass = "U_B_GEN_Soldier_F";
        role = "Rifleman";
        weapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_BallisticShield_Armed", "Throw", "Put"};
        magazines[] = {"CUP_15Rnd_9x19_M9", "CUP_15Rnd_9x19_M9", "SmokeShellBlue", "HandGrenade"};
        respawnMagazines[] = {"CUP_15Rnd_9x19_M9", "CUP_15Rnd_9x19_M9", "SmokeShellBlue", "HandGrenade"};
        linkedItems[] = {"G_Balaclava_blk", "H_PASGT_basic_black_F", "CUP_V_PMC_CIRAS_Black_Empty", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"G_Balaclava_blk", "H_PASGT_basic_black_F", "CUP_V_PMC_CIRAS_Black_Empty", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_GEN_SWAT_Crew_F: B_GEN_SWAT_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "SWAT Crewman";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
        uniformClass = "U_B_GEN_Soldier_F";
        role = "Crewman";
        weapons[] = {"SMG_05_F", "Throw", "Put"};
        respawnWeapons[] = {"SMG_05_F", "Throw", "Put"};
        magazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "SmokeShellBlue", "SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "SmokeShellBlue", "SmokeShellBlue"};
        linkedItems[] = {"G_Balaclava_blk", "H_PASGT_basic_black_F", "CUP_V_PMC_CIRAS_Black_Empty", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"G_Balaclava_blk", "H_PASGT_basic_black_F", "CUP_V_PMC_CIRAS_Black_Empty", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_GEN_SWAT_Pilot_F: B_GEN_SWAT_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "SWAT Pilot";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_GEN_Soldier_F.jpg";
        uniformClass = "U_B_GEN_Commander_F";
        role = "Crewman";
        weapons[] = {"SMG_05_F", "Throw", "Put"};
        respawnWeapons[] = {"SMG_05_F", "Throw", "Put"};
        magazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "SmokeShellBlue", "SmokeShellBlue"};
        respawnMagazines[] = {"30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02", "SmokeShellBlue", "SmokeShellBlue"};
        linkedItems[] = {"H_PilotHelmetHeli_B", "CUP_V_PMC_CIRAS_Black_Empty", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_PilotHelmetHeli_B", "CUP_V_PMC_CIRAS_Black_Empty", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
};