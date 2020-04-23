class CfgVehicles {
    //BLUFOR
    class B_soldier_LAT_F;
    class B_soldier_AT4_F: B_soldier_LAT_F {
        displayName = "AT Rifleman (AT-4)";
        weapons[] = {"arifle_MXC_F","CUP_launch_M136","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_MXC_F","CUP_launch_M136","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellBlue","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellBlue","Chemlight_green","Chemlight_green"};
    };

    class B_T_Soldier_AT_F;
    class B_T_Soldier_AT4_F: B_T_Soldier_AT_F {
        displayName = "AT Rifleman (AT-4)";
        weapons[] = {"arifle_MXC_khk_Holo_Pointer_F","CUP_launch_M136","hgun_P07_khk_F","Throw","Put"};
        respawnWeapons[] = {"arifle_MXC_khk_Holo_Pointer_F","CUP_launch_M136","hgun_P07_khk_F","Throw","Put"};
        magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
    };

    class B_CTRG_Soldier_LAT_tna_F;
    class B_CTRG_Soldier_AT4_tna_F: B_CTRG_Soldier_LAT_tna_F {
        displayName = "Scout (AT-4)";
        weapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","CUP_launch_M136","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_ERCO_Pointer_F","CUP_launch_M136","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
        magazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
    };

    class B_G_Soldier_LAT_F;
    class B_G_Soldier_RPG7_F: B_G_Soldier_LAT_F {
        displayName = "AT Rifleman (RPG-7)";
        weapons[] = {"arifle_TRG20_F","CUP_launch_RPG7V","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_TRG20_F","CUP_launch_RPG7V","hgun_ACPC2_F","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        backpack = "B_Kitbag_rgr_RPG7";
    };

    class B_GEN_Soldier_F;
    class B_GEN_Soldier_1_F: B_GEN_Soldier_F {
        displayName = "Gendarmerie Rifleman";
        weapons[] = {"CUP_Famas_F1","Throw","Put"};
        respawnWeapons[] = {"CUP_Famas_F1","Throw","Put"};
        magazines[] = {"CUP_25Rnd_556x45_Famas","CUP_25Rnd_556x45_Famas","CUP_25Rnd_556x45_Famas_Tracer_Red","SmokeShellBlue","HandGrenade"};
        respawnMagazines[] = {"CUP_25Rnd_556x45_Famas","CUP_25Rnd_556x45_Famas","CUP_25Rnd_556x45_Famas_Tracer_Red","SmokeShellBlue","HandGrenade"};
    };

    class B_GEN_Soldier_AR_F: B_GEN_Soldier_F {
        displayName = "Gendarmerie Automatic Rifleman";
        weapons[] = {"LMG_03_F","Throw","Put"};
        respawnWeapons[] = {"LMG_03_F","Throw","Put"};
        magazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","SmokeShellBlue","HandGrenade"};
        respawnMagazines[] = {"200Rnd_556x45_Box_Tracer_Red_F","200Rnd_556x45_Box_Tracer_Red_F","SmokeShellBlue","HandGrenade"};
    };

    class B_GEN_Soldier_SG_F: B_GEN_Soldier_F {
        displayName = "Gendarmerie Breacher";
        weapons[] = {"CUP_sgun_M1014","Throw","Put"};
        respawnWeapons[] = {"CUP_sgun_M1014","Throw","Put"};
        magazines[] = {"CUP_8Rnd_B_Beneli_74Pellets","CUP_8Rnd_B_Beneli_74Pellets","CUP_8Rnd_B_Beneli_74Pellets","SmokeShellBlue","HandGrenade"};
        respawnMagazines[] = {"CUP_8Rnd_B_Beneli_74Pellets","CUP_8Rnd_B_Beneli_74Pellets","CUP_8Rnd_B_Beneli_74Pellets","SmokeShellBlue","HandGrenade"};
    };

    class B_GEN_Soldier_SMG_F: B_GEN_Soldier_F {
        displayName = "Gendarmerie SMG";
        weapons[] = {"CUP_smg_bizon","Throw","Put"};
        respawnWeapons[] = {"CUP_smg_bizon","Throw","Put"};
        magazines[] = {"CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","SmokeShellBlue","HandGrenade"};
        respawnMagazines[] = {"CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","CUP_64Rnd_9x19_Bizon_M","SmokeShellBlue","HandGrenade"};
    };

    class B_GEN_Soldier_Pistol_F: B_GEN_Soldier_F {
        displayName = "Gendarmerie Pistoleer";
        weapons[] = {"CUP_hgun_Glock17","Throw","Put"};
        respawnWeapons[] = {"CUP_hgun_Glock17","Throw","Put"};
        magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShellBlue","HandGrenade"};
        respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShellBlue","HandGrenade"};
    };

    class B_GEN_Soldier_Crew_F: B_GEN_Soldier_F {
        displayName = "Gendarmerie Crewman";
        linkedItems[] = {"H_MilCap_blue", "V_TacVest_gen_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_MilCap_blue", "V_TacVest_gen_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class B_GEN_Soldier_Pilot_F: B_GEN_Soldier_F {
        displayName = "Gendarmerie Pilot";
        weapons[] = {"CUP_hgun_Glock17","Throw","Put"};
        respawnWeapons[] = {"CUP_hgun_Glock17","Throw","Put"};
        magazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShellBlue","HandGrenade"};
        respawnMagazines[] = {"CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","CUP_17Rnd_9x19_glock17","SmokeShellBlue","HandGrenade"};
        linkedItems[] = {"H_PilotHelmetHeli_B", "V_TacVest_gen_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_PilotHelmetHeli_B", "V_TacVest_gen_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    //INDFOR
    class I_Soldier_LAT_F;
    class I_Soldier_AT4_F: I_Soldier_LAT_F {
        displayName = "AT Rifleman (AT-4)";
        weapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_M136","hgun_ACPC2_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_M136","hgun_ACPC2_F","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
    };

    class I_E_Soldier_LAT_F;
    class I_E_Soldier_AT4_F: I_E_Soldier_LAT_F {
        displayName = "Rifleman (AT)";
        weapons[] = {"arifle_MSBS65_ico_pointer_f", "CUP_launch_M136", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_MSBS65_ico_pointer_f", "CUP_launch_M136", "hgun_Pistol_heavy_01_green_F", "Throw", "Put"};
        magazines[] = {"30Rnd_65x39_caseless_msbs_mag", "30Rnd_65x39_caseless_msbs_mag", "30Rnd_65x39_caseless_msbs_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "SmokeShell", "SmokeShellBlue", "Chemlight_Blue", "Chemlight_Blue"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag", "30Rnd_65x39_caseless_msbs_mag", "30Rnd_65x39_caseless_msbs_mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "SmokeShell", "SmokeShellBlue", "Chemlight_Blue", "Chemlight_Blue"};
    };

    class I_C_Soldier_Para_1_F;
    class I_C_Soldier_Para_1_F_ARK: I_C_Soldier_Para_1_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Soldier (RPG-7)";
        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_PG7V_M"};
    };

    class I_C_Soldier_Para_2_F;
    class I_C_Soldier_Para_2_F_ARK: I_C_Soldier_Para_2_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Team Leader (GP-25)";
        weapons[] = {"CUP_arifle_AK47_GL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_GL","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
    };

    class I_C_Soldier_Para_4_F;
    class I_C_Soldier_Para_4_F_ARK: I_C_Soldier_Para_4_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman (RPK-47)";
        weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","HandGrenade","HandGrenade"};
    };

    class I_C_Soldier_Para_6_F;
    class I_C_Soldier_Para_6_F_ARK: I_C_Soldier_Para_6_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Soldier (AK-47)";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade"};
    };

    class I_C_Soldier_Para_7_F;
    class I_C_Soldier_Para_7_F_ARK: I_C_Soldier_Para_7_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Machinegunner (PKM)";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
    };

    class I_C_Helipilot_F;
    class I_C_Helipilot_F_ARK: I_C_Helipilot_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Helicopter Pilot (AKSU)";
        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKS","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };

    class I_C_Soldier_Bandit_2_F;
    class I_C_Soldier_Bandit_2_F_ARK: I_C_Soldier_Bandit_2_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Soldier (RPG-18)";
        weapons[] = {"CUP_arifle_AK47","CUP_launch_RPG18","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","CUP_launch_RPG18","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };

    class I_C_Soldier_Bandit_3_F;
    class I_C_Soldier_Bandit_3_F_ARK: I_C_Soldier_Bandit_3_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Machinegunner (PKM)";
        weapons[] = {"CUP_lmg_PKM","Throw","Put"};
        respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"};
    };

    class I_C_Soldier_Bandit_4_F;
    class I_C_Soldier_Bandit_4_F_ARK: I_C_Soldier_Bandit_4_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Soldier (AK-47)";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade"};
    };

    class I_C_Soldier_Bandit_5_F;
    class I_C_Soldier_Bandit_5_F_ARK: I_C_Soldier_Bandit_5_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Soldier (AK-47)";
        weapons[] = {"CUP_arifle_AK47","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","HandGrenade","HandGrenade"};
    };

    class I_C_Soldier_Bandit_6_F;
    class I_C_Soldier_Bandit_6_F_ARK: I_C_Soldier_Bandit_6_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Team Leader (GP-25)";
        weapons[] = {"CUP_arifle_AK47_GL","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AK47_GL","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"};
    };

    class I_C_Soldier_Bandit_7_F;
    class I_C_Soldier_Bandit_7_F_ARK: I_C_Soldier_Bandit_7_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman (RPK-47)";
        weapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74","Throw","Put"};
        magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_762x39_RPK_M","HandGrenade","HandGrenade"};
    };

    class I_C_Pilot_F;
    class I_C_Pilot_F_ARK: I_C_Pilot_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Pilot (AKSU)";
        weapons[] = {"CUP_arifle_AKS","Throw","Put"};
        respawnWeapons[] = {"CUP_arifle_AKS","Throw","Put"};
        magazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnMagazines[] = {"CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };

    //OPFOR
    class O_Soldier_LAT_F;
    class O_Soldier_RPG18_F: O_Soldier_LAT_F {
        displayName = "AT Rifleman (RPG-18)";
        weapons[] = {"arifle_Katiba_ACO_pointer_F","CUP_launch_RPG18","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","CUP_launch_RPG18","Throw","Put"};
        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
    };

    class O_soldierU_LAT_F;
    class O_soldierU_RPG18_F: O_soldierU_LAT_F {
        displayName = "Rifleman (RPG-18)";
        weapons[] = {"arifle_Katiba_ACO_pointer_F","CUP_launch_RPG18","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","CUP_launch_RPG18","hgun_Rook40_F","Throw","Put"};
        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
    };

    class O_T_Soldier_LAT_F;
    class O_T_Soldier_RPG18_F: O_T_Soldier_LAT_F  {
        displayName = "Rifleman (RPG-18)";
        weapons[] = {"arifle_CTAR_blk_ACO_F","CUP_launch_RPG18","hgun_Rook40_F","Throw","Put"};
        respawnWeapons[] = {"arifle_CTAR_blk_ACO_F","CUP_launch_RPG18","hgun_Rook40_F","Throw","Put"};
        magazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        respawnMagazines[] = {"30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","30Rnd_580x42_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
    };

    class O_R_Soldier_LAT_F ;
    class O_R_Soldier_RPG7_F: O_R_Soldier_LAT_F  {
        displayName = "Rifleman (RPG-7)";
        weapons[] = {"arifle_AK12U_lush_holo_pointer_F", "CUP_launch_RPG7V", "hgun_Rook40_F", "Throw", "Put"};
        respawnWeapons[] = {"arifle_AK12U_lush_holo_pointer_F", "CUP_launch_RPG7V", "hgun_Rook40_F", "Throw", "Put"};
        magazines[] = {"30rnd_762x39_AK12_Lush_Mag_F", "30rnd_762x39_AK12_Lush_Mag_F", "30rnd_762x39_AK12_Lush_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
        respawnMagazines[] = {"30rnd_762x39_AK12_Lush_Mag_F", "30rnd_762x39_AK12_Lush_Mag_F", "30rnd_762x39_AK12_Lush_Mag_F", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "SmokeShell", "SmokeShellRed", "Chemlight_red", "Chemlight_red"};
        backpack = "B_Kitbag_rgr_RPG7";
    };
};