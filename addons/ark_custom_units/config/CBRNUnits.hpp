class O_Soldier_base_F;
class C_CBRN_Man_Oversuit_01_Blue_F;

// Russian CBRN Units
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
    uniformClass = "U_C_CBRN_Suit_01_Blue_F";
    icon = "iconManAT";
    role = "MissileSpecialist";
    backpack = "B_Kitbag_rgr_RPG7";
    weapons[] = {"CUP_arifle_AK74M_railed", "CUP_launch_RPG7V", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK74M_railed", "CUP_launch_RPG7V", "Throw", "Put"};
    magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_PG7V_M", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_PG7V_M", "SmokeShell", "SmokeShellGreen"};
    linkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class ARK_RU_CBRN_Soldier_TL_F: ARK_RU_CBRN_Soldier_base_F {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "Team Leader";
    editorPreview = "";
    uniformClass = "U_C_CBRN_Suit_01_Blue_F";
    icon = "iconManLeader";
    role = "Grenadier";
    weapons[] = {"CUP_arifle_AK74M_GL_railed", "Throw", "Put", "Binocular"};
    respawnWeapons[] = {"CUP_arifle_AK74M_GL_railed", "Throw", "Put", "Binocular"};
    magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_1Rnd_HE_GP25_M", "SmokeShell", "SmokeShellGreen"};
    linkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_light_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_light_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class ARK_RU_CBRN_Soldier_AR_F: ARK_RU_CBRN_Soldier_base_F {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "Autorifleman";
    editorPreview = "";
    uniformClass = "U_C_CBRN_Suit_01_Blue_F";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "B_Kitbag_rgr";
    weapons[] = {"CUP_arifle_RPK74M_railed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_RPK74M_railed", "Throw", "Put"};
    magazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M", "SmokeShell", "SmokeShellGreen"};
    linkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class ARK_RU_CBRN_Soldier_MG_F: ARK_RU_CBRN_Soldier_base_F {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "Machinegunner";
    editorPreview = "";
    uniformClass = "U_C_CBRN_Suit_01_Blue_F";
    icon = "iconManMG";
    role = "MachineGunner";
    backpack = "B_Kitbag_rgr";
    weapons[] = {"CUP_lmg_Pecheneg", "Throw", "Put"};
    respawnWeapons[] = {"CUP_lmg_Pecheneg", "Throw", "Put"};
    magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "SmokeShell", "SmokeShellGreen"};
    linkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class ARK_RU_CBRN_Soldier_F: ARK_RU_CBRN_Soldier_base_F {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "Rifleman";
    editorPreview = "";
    uniformClass = "U_C_CBRN_Suit_01_Blue_F";
    role = "Rifleman";
    weapons[] = {"CUP_arifle_AK74M_railed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AK74M_railed", "Throw", "Put"};
    magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
    linkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"H_PASGT_basic_blue_F", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class ARK_RU_CBRN_Crew_F: ARK_RU_CBRN_Soldier_base_F {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "Crewman";
    editorPreview = "";
    uniformClass = "U_C_CBRN_Suit_01_Blue_F";
    role = "Crewman";
    weapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "Put"};
    magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
    linkedItems[] = {"CUP_H_SLA_TankerHelmet", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"CUP_H_SLA_TankerHelmet", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

class ARK_RU_CBRN_Pilot_F: ARK_RU_CBRN_Soldier_base_F {
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;
    displayName = "Pilot";
    editorPreview = "";
    uniformClass = "U_C_CBRN_Suit_01_Blue_F";
    role = "Crewman";
    weapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "Put"};
    respawnWeapons[] = {"CUP_arifle_AKS74U_railed", "Throw", "Put"};
    magazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "CUP_30Rnd_545x39_AK74M_M", "SmokeShell", "SmokeShellGreen"};
    linkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
    respawnLinkedItems[] = {"CUP_H_RUS_ZSH_Shield_Up", "V_CarrierRigKBT_01_EAF_F", "G_AirPurifyingRespirator_02_black_F", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

// Vanilla CBRN retextures
class C_CBRN_Man_Oversuit_01_Yellow_F: C_CBRN_Man_Oversuit_01_Blue_F {
    uniformClass = "U_C_CBRN_Suit_01_Yellow_F";
    hiddenSelectionsTextures[] = {"\x\ark\addons\ark_custom_units\data\CBRN_Suit_02_CO.paa"}; //"\a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_CO.paa"
};

class C_CBRN_Man_Oversuit_01_Red_F: C_CBRN_Man_Oversuit_01_Blue_F {
    uniformClass = "U_C_CBRN_Suit_01_Red_F";
    hiddenSelectionsTextures[] = {"\x\ark\addons\ark_custom_units\data\CBRN_Suit_03_CO.paa"}; //"\a3\Characters_F_Enoch\Uniforms\Data\CBRN_Suit_01_CO.paa"
};