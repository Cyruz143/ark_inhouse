class CfgVehicles {
    // NVA Custom units
    class ARK_NVA_Soldier_base_F: O_Soldier_base_F {
        author = "ARK";
        priority = 3;
        side = 0;
        faction = "ARK_NVA";
        genericNames = "ChineseMen";
        identityTypes[] = {"LanguageCHI_F", "Head_Asian", "NoGlasses"};
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel_Camo_Jungle";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
    };

    class ARK_NVA_Soldier_LAT_F: ARK_NVA_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_LAT_F.jpg";
        uniformClass = "MNP_CombatUniform_NKR_Sh";
        icon = "iconManAT";
        role = "MissileSpecialist";
        backpack = "B_Kitbag_rgr_RPG7";
        weapons[] = {"CUP_arifle_AKM_Early", "CUP_launch_RPG7V", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early", "CUP_launch_RPG7V", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_PG7V_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_PG7V_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_NVA_Soldier_TL_F: ARK_NVA_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_TL_F.jpg";
        uniformClass = "MNP_CombatUniform_NKR_Rg";
        icon = "iconManLeader";
        role = "Grenadier";
        weapons[] = {"CUP_arifle_AKM_GL_Early", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"CUP_arifle_AKM_GL_Early", "Throw", "Put", "Binocular"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_ChDKZ_Beret", "CUP_V_RUS_Smersh_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_ChDKZ_Beret", "CUP_V_RUS_Smersh_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_NVA_Soldier_AR_F: ARK_NVA_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_AR_F.jpg";
        uniformClass = "MNP_CombatUniform_NKR_Sh";
        icon = "iconManMG";
        role = "MachineGunner";
        backpack = "B_Kitbag_rgr";
        weapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74", "Throw", "Put"};
        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"H_HeadBandage_bloody_F", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_HeadBandage_bloody_F", "CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_NVA_Soldier_MG_F: ARK_NVA_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Support_MG_F.jpg";
        uniformClass = "MNP_CombatUniform_NKR_Sh";
        icon = "iconManMG";
        role = "MachineGunner";
        backpack = "B_Kitbag_rgr";
        weapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_PKM", "Throw", "Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_FR_BandanaGreen", "CUP_V_O_Ins_Carrier_Rig_MG", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_FR_BandanaGreen", "CUP_V_O_Ins_Carrier_Rig_MG", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_NVA_Soldier_F: ARK_NVA_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Soldier_A_F.jpg";
        uniformClass = "MNP_CombatUniform_NKR_Sh";
        role = "Rifleman";
        weapons[] = {"CUP_arifle_AKM_Early", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKM_Early", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "CUP_30Rnd_762x39_AK47_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_V_O_Ins_Carrier_Rig_Light", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_NVA_Soldier_F_SKS: ARK_NVA_Soldier_F {
        displayName = "Rifleman (SKS)";
        role = "Rifleman";
        weapons[] = {"CUP_SKS", "Throw", "Put"};
        respawnWeapons[] = {"CUP_SKS", "Throw", "Put"};
        magazines[] = {"CUP_10Rnd_762x39_SKS_M", "CUP_10Rnd_762x39_SKS_M", "CUP_10Rnd_762x39_SKS_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_10Rnd_762x39_SKS_M", "CUP_10Rnd_762x39_SKS_M", "CUP_10Rnd_762x39_SKS_M", "SmokeShell", "SmokeShellGreen"};
    };

    class ARK_NVA_Crew_F: ARK_NVA_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Crew_F.jpg";
        uniformClass = "MNP_CombatUniform_NKR_Rg";
        role = "Crewman";
        weapons[] = {"CUP_hgun_SA61", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_SA61", "Throw", "Put"};
        magazines[] = {"CUP_10Rnd_B_765x17_Ball_M", "CUP_10Rnd_B_765x17_Ball_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_10Rnd_B_765x17_Ball_M", "CUP_10Rnd_B_765x17_Ball_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_RUS_TSH_4_Brown", "CUP_V_O_TK_CrewBelt", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_RUS_TSH_4_Brown", "CUP_V_O_TK_CrewBelt", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_NVA_Pilot_F: ARK_NVA_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Helipilot_F.jpg";
        uniformClass = "MNP_CombatUniform_NKR_Rg";
        role = "Crewman";
        weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        magazines[] = {"CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_8Rnd_9x18_Makarov_M", "CUP_8Rnd_9x18_Makarov_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up", "CUP_V_O_TK_CrewBelt", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up", "CUP_V_O_TK_CrewBelt", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };
};