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

    class skn_b_nbc_LAT;
    class skn_b_nbc_AT4: skn_b_nbc_LAT {
        displayName = "Rifleman (AT-4)";
        weapons[] = {"arifle_SPAR_01_blk_F","CUP_launch_M136","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_F","CUP_launch_M136","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","Chemlight_green","Chemlight_green"};
    };

    class B_GEN_Soldier_F;
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

    class skn_i_nbc_LAT;
    class skn_i_nbc_AT4: skn_i_nbc_LAT {
        displayName = "Rifleman (AT-4)";
        weapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_M136","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_M136","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","Chemlight_green","Chemlight_green"};
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

    class MNP_FIN_Soldier_O;
    class MNP_FIN_Soldier_AT: MNP_FIN_Soldier_O {
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        weapons[] = {"launch_MRAWS_green_rail_F","hlc_rifle_RK62","Throw","put"};
        respawnweapons[] = {"launch_MRAWS_green_rail_F","hlc_rifle_RK62","Throw","put"};
        magazines[] = {"HandGrenade","HandGrenade","MRAWS_HEAT_F","MRAWS_HEAT_F","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnmagazines[] = {"HandGrenade","HandGrenade","MRAWS_HEAT_F","MRAWS_HEAT_F","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };

    class MNP_FIN_Soldier_MAT: MNP_FIN_Soldier_AT {
        displayName = "AT Specialist (NLAW)";
        weapons[] = {"CUP_launch_NLAW","hlc_rifle_RK62","Throw","put"};
        respawnweapons[] = {"CUP_launch_NLAW","hlc_rifle_RK62","Throw","put"};
        magazines[] = {"CUP_NLAW_M","HandGrenade","HandGrenade","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnmagazines[] = {"CUP_NLAW_M","HandGrenade","HandGrenade","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };

    class MNP_AFIN_Soldier_F;
    class MNP_AFIN_Soldier_AT: MNP_AFIN_Soldier_F {
        displayName = "Rifleman (AT)";
        backpack = "B_Kitbag_rgr";
        weapons[] = {"launch_MRAWS_green_rail_F","hlc_rifle_RK62","Throw","put"};
        respawnweapons[] = {"launch_MRAWS_green_rail_F","hlc_rifle_RK62","Throw","put"};
        magazines[] = {"HandGrenade","HandGrenade","MRAWS_HEAT_F","MRAWS_HEAT_F","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnmagazines[] = {"HandGrenade","HandGrenade","MRAWS_HEAT_F","MRAWS_HEAT_F","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
    };

    class MNP_AFIN_Soldier_MAT: MNP_AFIN_Soldier_AT {
        displayName = "AT Specialist (NLAW)";
        weapons[] = {"CUP_launch_NLAW","hlc_rifle_RK62","Throw","put"};
        respawnweapons[] = {"CUP_launch_NLAW","hlc_rifle_RK62","Throw","put"};
        magazines[] = {"CUP_NLAW_M","HandGrenade","HandGrenade","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
        respawnmagazines[] = {"CUP_NLAW_M","HandGrenade","HandGrenade","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M","CUP_30Rnd_762x39_AK47_M"};
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

    class skn_o_nbc_lat;
    class skn_o_nbc_RPG18: skn_o_nbc_lat {
        displayName = "Rifleman (RPG-18)";
        weapons[] = {"arifle_Katiba_ACO_pointer_F","CUP_launch_RPG18","Throw","Put"};
        respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","CUP_launch_RPG18","Throw","Put"};
        magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","SmokeShell","SmokeShell"};
        respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","SmokeShell","SmokeShell"};
    };

    // Russian CBRN custom units
    class O_Soldier_base_F;
    class ARK_RU_CBRN_Soldier_base_F: O_Soldier_base_F {
        author = "ARK";
        priority = 3;
        side = 0;
        faction = "ARK_RU_CBRN";
        genericNames = "RussianMen";
        identityTypes[] = {"CUP_D_Language_RU", "Head_Euro", "NoGlasses"};
        vehicleClass = "Men";
        editorSubcategory = "EdSubcat_Personnel";
        scope = 1;
        scopeArsenal = 0;
        scopeCurator = 0;
    };

    class ARK_RU_CBRN_Soldier_LAT_F: ARK_RU_CBRN_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        editorPreview = "";
        uniformClass = "skn_u_nbc_opf_blue";
        icon = "iconManAT";
        role = "MissileSpecialist";
        backpack = "B_Kitbag_rgr_RPG7";
        weapons[] = {"CUP_arifle_AK74M_railed", "CUP_launch_RPG7V", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed", "CUP_launch_RPG7V", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_PG7V_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_PG7V_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_RU_CBRN_Soldier_TL_F: ARK_RU_CBRN_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        editorPreview = "";
        uniformClass = "skn_u_nbc_opf_blue";
        icon = "iconManLeader";
        role = "Grenadier";
        weapons[] = {"CUP_arifle_AK74M_GL_railed", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"CUP_arifle_AK74M_GL_railed", "Throw", "Put", "Binocular"};
        magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_RU_CBRN_Soldier_AR_F: ARK_RU_CBRN_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        editorPreview = "";
        uniformClass = "skn_u_nbc_opf_blue";
        icon = "iconManMG";
        role = "MachineGunner";
        backpack = "B_Kitbag_rgr_RPK74"; 
        weapons[] = {"CUP_arifle_RPK74M_railed", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_RPK74M_railed", "Throw", "Put"};
        magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_RU_CBRN_Soldier_MG_F: ARK_RU_CBRN_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Machinegunner";
        editorPreview = "";
        uniformClass = "skn_u_nbc_opf_blue";
        icon = "iconManMG";
        role = "MachineGunner";
        backpack = "B_Kitbag_rgr_PKM";
        weapons[] = {"CUP_lmg_Pecheneg", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_Pecheneg", "Throw", "Put"};
        magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_RU_CBRN_Soldier_F: ARK_RU_CBRN_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        editorPreview = "";
        uniformClass = "skn_u_nbc_opf_blue";
        role = "Rifleman";
        weapons[] = {"CUP_arifle_AK74M_railed", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M_railed", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_RU_CBRN_Crew_F: ARK_RU_CBRN_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        editorPreview = "";
        uniformClass = "skn_u_nbc_opf_blue";
        role = "Crewman";
        weapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_SLA_TankerHelmet", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_SLA_TankerHelmet", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

    class ARK_RU_CBRN_Pilot_F: ARK_RU_CBRN_Soldier_base_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Pilot";
        editorPreview = "";
        uniformClass = "skn_u_nbc_opf_blue";
        role = "Crewman";
        weapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "Put"};
        magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
        linkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
        respawnLinkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up", "skn_o_elbv_worn_no_bp_ARM", "skn_s10_balaclava_blue_dry", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    };

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
        backpack = "B_Kitbag_rgr_RPK47";
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
        backpack = "B_Kitbag_rgr_PKM";
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
        backpack = "B_Kitbag_rgr_PKM";
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