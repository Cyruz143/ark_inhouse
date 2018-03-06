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
        backpack = "B_Kitbag_rgr_RPG7_RAT";
    };

    class skn_b_nbc_LAT;
    class skn_b_nbc_AT4: skn_b_nbc_LAT {
        displayName = "Rifleman (AT-4)";
        weapons[] = {"arifle_SPAR_01_blk_F","CUP_launch_M136","Throw","Put"};
        respawnWeapons[] = {"arifle_SPAR_01_blk_F","CUP_launch_M136","Throw","Put"};
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","Chemlight_green","Chemlight_green"};
        respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","Chemlight_green","Chemlight_green"};
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
        weapons[] = {"hlc_rifle_ak47","CUP_launch_RPG7V","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_ak47","CUP_launch_RPG7V","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_PG7V_M"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","CUP_PG7V_M"};
    };

    class I_C_Soldier_Para_2_F;
    class I_C_Soldier_Para_2_F_ARK: I_C_Soldier_Para_2_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Team Leader (GP-25)";
        weapons[] = {"hlc_rifle_akmgl","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_akmgl","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_VOG25_AK","hlc_VOG25_AK"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_VOG25_AK","hlc_VOG25_AK"};
    };

    class I_C_Soldier_Para_4_F;
    class I_C_Soldier_Para_4_F_ARK: I_C_Soldier_Para_4_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman (RPK-47)";
        weapons[] = {"hlc_rifle_rpk_75rnd","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_rpk_75rnd","Throw","Put"};
        magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","HandGrenade","HandGrenade"};
    };

    class I_C_Soldier_Para_6_F;
    class I_C_Soldier_Para_6_F_ARK: I_C_Soldier_Para_6_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Soldier (AK-47)";
        weapons[] = {"hlc_rifle_ak47","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade"};
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
        weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
        magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
        respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
    };

    class I_C_Soldier_Bandit_2_F;
    class I_C_Soldier_Bandit_2_F_ARK: I_C_Soldier_Bandit_2_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Soldier (RPG-18)";
        weapons[] = {"hlc_rifle_ak47","CUP_launch_RPG18","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_ak47","CUP_launch_RPG18","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak"};
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
        weapons[] = {"hlc_rifle_ak47","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade"};
    };

    class I_C_Soldier_Bandit_5_F;
    class I_C_Soldier_Bandit_5_F_ARK: I_C_Soldier_Bandit_5_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Soldier (AK-47)";
        weapons[] = {"hlc_rifle_ak47","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_ak47","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","HandGrenade","HandGrenade"};
    };

    class I_C_Soldier_Bandit_6_F;
    class I_C_Soldier_Bandit_6_F_ARK: I_C_Soldier_Bandit_6_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Team Leader (GP-25)";
        weapons[] = {"hlc_rifle_akmgl","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_akmgl","Throw","Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_VOG25_AK","hlc_VOG25_AK"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_b_ak","hlc_VOG25_AK","hlc_VOG25_AK"};
    };

    class I_C_Soldier_Bandit_7_F;
    class I_C_Soldier_Bandit_7_F_ARK: I_C_Soldier_Bandit_7_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Automatic Rifleman (RPK-47)";
        weapons[] = {"hlc_rifle_rpk_75rnd","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_rpk_75rnd","Throw","Put"};
        magazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","HandGrenade","HandGrenade"};
        respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","HandGrenade","HandGrenade"};
    };

    class I_C_Pilot_F;
    class I_C_Pilot_F_ARK: I_C_Pilot_F {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "Pilot (AKSU)";
        weapons[] = {"hlc_rifle_aks74u","Throw","Put"};
        respawnWeapons[] = {"hlc_rifle_aks74u","Throw","Put"};
        magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
        respawnMagazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_B_AK"};
    };

    //OPFOR
    class O_Soldier_LAT_F;
    class O_Soldier_RPG18_F: O_Soldier_LAT_F {
        displayName = "AT Rifleman (RPG-18)";
        weapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_RPG18","Throw","Put"};
        respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","CUP_launch_RPG18","Throw","Put"};
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

    // NVA Custom units
    class O_Soldier_base_F;
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
        weapons[] = {"hlc_rifle_akm", "CUP_launch_RPG7V", "Throw", "Put"};
        respawnWeapons[] = {"hlc_rifle_akm", "CUP_launch_RPG7V", "Throw", "Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "CUP_PG7V_M", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "CUP_PG7V_M", "SmokeShell", "SmokeShellGreen"};
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
        weapons[] = {"hlc_rifle_akmgl", "Throw", "Put", "Binocular"};
        respawnWeapons[] = {"hlc_rifle_akmgl", "Throw", "Put", "Binocular"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_VOG25_AK", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_VOG25_AK", "SmokeShell", "SmokeShellGreen"};
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
        weapons[] = {"hlc_rifle_rpk_75rnd", "Throw", "Put"};
        respawnWeapons[] = {"hlc_rifle_rpk_75rnd", "Throw", "Put"};
        magazines[] = {"hlc_75Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"hlc_75Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "hlc_75Rnd_762x39_m_rpk", "SmokeShell", "SmokeShellGreen"};
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
        weapons[] = {"hlc_rifle_akm", "Throw", "Put"};
        respawnWeapons[] = {"hlc_rifle_akm", "Throw", "Put"};
        magazines[] = {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "SmokeShell", "SmokeShellGreen"};
        respawnMagazines[] = {"hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_762x39_b_ak", "SmokeShell", "SmokeShellGreen"};
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
};