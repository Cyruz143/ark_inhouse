#include "hull3_macros.h"

enableTargetDebug = 1;

class Hull3 {
    isEnabled = 1;

    #include "mission_params.h"

    #include "factions.h"

    class Uniform {
        #include "assign\uniform\Default.h"
        #include "assign\uniform\AAF_WD.h"
        #include "assign\uniform\AUS_AMCU.h"
        #include "assign\uniform\AUS_WD.h"
        #include "assign\uniform\CAN_DE.h"
        #include "assign\uniform\CAN_WD.h"
        #include "assign\uniform\CHKDZ.h"
        #include "assign\uniform\CN_DE.h"
        #include "assign\uniform\CN_MAR.h"
        #include "assign\uniform\CN_WD.h"
        #include "assign\uniform\CN_WD2.h"
        #include "assign\uniform\CUP_BAF_WD.h"
        #include "assign\uniform\CUP_BAF_DE.h"
        #include "assign\uniform\CUP_BAF_MTP.h"
        #include "assign\uniform\BAF_CBRN.h"
        #include "assign\uniform\CUP_CDF_DES.h"
        #include "assign\uniform\CUP_CDF_FOR.h"
        #include "assign\uniform\CUP_CDF_MOU.h"
        #include "assign\uniform\CUP_CDF_DES_UN.h"
        #include "assign\uniform\CUP_CDF_FOR_UN.h"
        #include "assign\uniform\CUP_CDF_MOU_UN.h"
        #include "assign\uniform\CUP_CDF_SN.h"
        #include "assign\uniform\CUP_CDF_SN_UN.h"
        #include "assign\uniform\CUP_KSK_DE.h"
        #include "assign\uniform\CUP_KSK_WD.h"
        #include "assign\uniform\CUP_NAPA_WD.h"
        #include "assign\uniform\CUP_RACS_DE.h"
        #include "assign\uniform\CUP_RACS_URB.h"
        #include "assign\uniform\CUP_RACS_MECH.h"
        #include "assign\uniform\CUP_RU_WD.h"
        #include "assign\uniform\CUP_RU_DE.h"
        #include "assign\uniform\CUP_RU_90_WD.h"
        #include "assign\uniform\CUP_RU_90_DE.h"
        #include "assign\uniform\CUP_SLA_DE.h"
        #include "assign\uniform\CUP_SLA_WD.h"
        #include "assign\uniform\CUP_SLA_URB.h"
        #include "assign\uniform\CUP_SLA_MIL.h"
        #include "assign\uniform\CUP_SLA_PAR.h"
        #include "assign\uniform\CUP_TK_INS.h"
        #include "assign\uniform\CUP_TK_LOC.h"
        #include "assign\uniform\CUP_TKA_MIX.h"
        #include "assign\uniform\CUP_TKA_OD.h"
        #include "assign\uniform\CUP_USMC_WD.h"
        #include "assign\uniform\CUP_USMC_DE.h"
        #include "assign\uniform\CSAT_SN.h"
        #include "assign\uniform\DPR_SUM.h"
        #include "assign\uniform\DPR_AUT.h"
        #include "assign\uniform\FIA.h"
        #include "assign\uniform\FIN_SN.h"
        #include "assign\uniform\FIN_WD.h"
        #include "assign\uniform\CUP_GER_DE.h"
        #include "assign\uniform\CUP_GER_WD.h"
        #include "assign\uniform\GEND_COP.h"
        #include "assign\uniform\GEND_SWAT.h"
        #include "assign\uniform\IRE_DE.h"
        #include "assign\uniform\IRE_WD.h"
        #include "assign\uniform\IRN_ARMY.h"
        #include "assign\uniform\IRN_RG.h"
        #include "assign\uniform\LVM_DE.h"
        #include "assign\uniform\LVM_WD.h"
        #include "assign\uniform\NK_CON.h"
        #include "assign\uniform\NK_REG.h"
        #include "assign\uniform\NOR_DE.h"
        #include "assign\uniform\NOR_WD.h"
        #include "assign\uniform\NZ.h"
        #include "assign\uniform\ROK_WD.h"
        #include "assign\uniform\RU_AB.h"
        #include "assign\uniform\SYND_BANDIT.h"
        #include "assign\uniform\RU_CBRN.h"
        #include "assign\uniform\SYND_REBEL.h"
        #include "assign\uniform\UKR_TTSKO.h"
        #include "assign\uniform\CUP_USA_UCP.h"
        #include "assign\uniform\CUP_USA_OCP.h"
        #include "assign\uniform\CUP_USA_RAN.h"
        #include "assign\uniform\CUP_USA_RAN_UCP.h"
        #include "assign\uniform\USMC_SN.h"
        #include "assign\uniform\CUP_USMC_MTV_WD.h"
        #include "assign\uniform\CUP_USMC_MTV_DE.h"
        #include "assign\uniform\CUP_ION_PMC_SN.h"
        #include "assign\uniform\CUP_ION_PMC.h"
        #include "assign\uniform\PMC_CBRN.h"
        #include "assign\uniform\FOW_USMC_U.h"
        #include "assign\uniform\FOW_USA_U.h"
        #include "assign\uniform\FOW_USA_PAC_U.h"
        #include "assign\uniform\FOW_USA_PARA_U.h"
        #include "assign\uniform\FOW_BAF_U.h"
        #include "assign\uniform\FOW_BAF_PARA_U.h"
        #include "assign\uniform\FOW_BAF_PAC_U.h"
        #include "assign\uniform\FOW_AUS_U.h"
        #include "assign\uniform\FOW_CAN_U.h"
        #include "assign\uniform\FOW_BAF_ESX_U.h"
        #include "assign\uniform\FOW_BAF_COM_U.h"
        #include "assign\uniform\IF44_POL_U.h"
        #include "assign\uniform\IF44_GER_SN_U.h"
        #include "assign\uniform\FOW_GER_U.h"
        #include "assign\uniform\FOW_GER_PARA_U.h"
        #include "assign\uniform\FOW_GER_SS_U.h"
        #include "assign\uniform\FOW_IJA_U.h"
        #include "assign\uniform\FOW_IJA_SNLF_U.h"
        #include "assign\uniform\IF44_USSR_U.h"
        #include "assign\uniform\IF44_USSR_SN_U.h"
        #include "assign\uniform\IF44_USSR_NKVD_U.h"
        #include "assign\uniform\IF44_BAF_PARA_U.h"
        #include "assign\uniform\IF44_BAF_PARA_SN_U.h"
        #include "assign\uniform\IF44_BAF_NA_U.h"
        #include "assign\uniform\IF44_BAF_U.h"
        #include "assign\uniform\IF44_BAF_SN_U.h"
        #include "assign\uniform\IF44_GER_PARA_U.h"
        #include "assign\uniform\IF44_GER_NA_U.h"
        #include "assign\uniform\IF44_GER_U.h"
        #include "assign\uniform\IF44_USA_PARA_U.h"
        #include "assign\uniform\IF44_USA_PARA_SN_U.h"
        #include "assign\uniform\IF44_USA_NA_U.h"
        #include "assign\uniform\IF44_USA_U.h"
        #include "assign\uniform\IF44_USA_SN_U.h"
        #include "assign\uniform\USM_USA_80_WD.h"
        #include "assign\uniform\USM_USMC_80_WD.h"
        #include "assign\uniform\USM_USA_80_CC_DE.h"
        #include "assign\uniform\USM_USMC_80_CC_DE.h"
        #include "assign\uniform\USM_USA_90_WD.h"
        #include "assign\uniform\USM_USMC_90_WD.h"
        #include "assign\uniform\USM_RAN_90_WD.h"
        #include "assign\uniform\USM_USA_90_DE.h"
        #include "assign\uniform\USM_USMC_90_DE.h"
        #include "assign\uniform\USM_USA_70_OD.h"
        #include "assign\uniform\CUP_CZ_DE.h"
        #include "assign\uniform\CUP_CZ_WD.h"
        #include "assign\uniform\IDF_90.h"
        #include "assign\uniform\IDF_10.h"
        #include "assign\uniform\ROK_SEAL.h"
        #include "assign\uniform\LDF.h"
        #include "assign\uniform\CUP_RU_MOD_WD.h"
        #include "assign\uniform\CUP_RU_MOD_DE.h"
        #include "assign\uniform\CUP_RU_MOD_PK.h"
        #include "assign\uniform\CUP_RU_MOD_SN.h"
        #include "assign\uniform\LDF_90_WD.h"
        #include "assign\uniform\LDF_90_SN.h"
        #include "assign\uniform\CUP_HIL_CCE.h"
        #include "assign\uniform\CUP_HIL_TTS.h"
        #include "assign\uniform\CUP_HIL_RES.h"
        #include "assign\uniform\GM_GDR_BG.h"
        #include "assign\uniform\GM_GDR_80_WD.h"
        #include "assign\uniform\GM_GDR_80_SN.h"
        #include "assign\uniform\GM_GDR_80_AIR.h"
        #include "assign\uniform\GM_PRL_80_WD.h"
        #include "assign\uniform\GM_PRL_80_SN.h"
        #include "assign\uniform\GM_PRL_80_AIR.h"
        #include "assign\uniform\GM_FRG_80_WD.h"
        #include "assign\uniform\GM_FRG_90_WD.h"
        #include "assign\uniform\GM_FRG_90_DE.h"
        #include "assign\uniform\GM_FRG_80_SN.h"
        #include "assign\uniform\GM_FRG_90_SN.h"
        #include "assign\uniform\GM_FRG_80_AIR.h"
        #include "assign\uniform\GM_FRG_BG.h"
        #include "assign\uniform\GM_DNK_80_WD.h"
        #include "assign\uniform\GM_DNK_80_SN.h"
        #include "assign\uniform\GM_DNK_90_WD.h"
        #include "assign\uniform\GM_DNK_90_SN.h"
        #include "assign\uniform\GMX_TKA_OD.h"
        #include "assign\uniform\GMX_CDF_TTSKO.h"
        #include "assign\uniform\GMX_CDF_DIGITAL.h"
        #include "assign\uniform\GMX_CDF_OREL.h"
        #include "assign\uniform\GMX_CDF_NG.h"
        #include "assign\uniform\GMX_CDF_MC.h"
        #include "assign\uniform\GMX_CHDKZ.h"
        #include "assign\uniform\VN_AUS_U.h"
        #include "assign\uniform\VN_SAS_U.h"
        #include "assign\uniform\VN_US_SEAL_U.h"
        #include "assign\uniform\VN_US_CIDG_U.h"
        #include "assign\uniform\VN_US_LRRP_U.h"
        #include "assign\uniform\VN_US_SOG_U.h"
        #include "assign\uniform\VN_US_U.h"
        #include "assign\uniform\VN_NZ_U.h"
        #include "assign\uniform\VN_ROK_U.h"
        #include "assign\uniform\VN_RLA_U.h"
        #include "assign\uniform\VN_SV_ARVN_U.h"
        #include "assign\uniform\VN_SV_RANGER_U.h"
        #include "assign\uniform\VN_SV_TQLC_U.h"
        #include "assign\uniform\VN_PLA_U.h"
        #include "assign\uniform\VN_NV_NVA_E_U.h"
        #include "assign\uniform\VN_NV_NVA_L_U.h"
        #include "assign\uniform\VN_NV_VPNM_U.h"
        #include "assign\uniform\VN_NV_VC_U.h"

        unitBaseClass = "Rifleman";
    };

    class Gear {
        #include "assign\gear\Default.h"
        #include "assign\gear\AK74MZ_RU.h"
        #include "assign\gear\AK47_NK.h"
        #include "assign\gear\AK74_NK.h"
        #include "assign\gear\AK74_RU.h"
        #include "assign\gear\AK74M_RU.h"
        #include "assign\gear\AK74_SLA.h"
        #include "assign\gear\AK74_TKA.h"
        #include "assign\gear\AK74_DPR.h"
        #include "assign\gear\AK74_UKR.h"
        #include "assign\gear\AKM_NAPA.h"
        #include "assign\gear\AKM_CHKDZ.h"
        #include "assign\gear\AKM_IRN.h"
        #include "assign\gear\AKM_SLA.h"
        #include "assign\gear\AKM_SYND.h"
        #include "assign\gear\AKM_TKI.h"
        #include "assign\gear\AKM_TKL.h"
        #include "assign\gear\AKS74_CDF.h"
        #include "assign\gear\AKS74_RU.h"
        #include "assign\gear\AUGA3_AUS.h"
        #include "assign\gear\AUGA3_IRE.h"
        #include "assign\gear\AUGA3_NZ.h"
        #include "assign\gear\FAMAS_GEND.h"
        #include "assign\gear\CAR95_CN.h"
        #include "assign\gear\FAL_TKA.h"
        #include "assign\gear\G3A3_IRN.h"
        #include "assign\gear\HK416_NOR.h"
        #include "assign\gear\G36_GER.h"
        #include "assign\gear\G36A_GER.h"
        #include "assign\gear\HK416_KSK.h"
        #include "assign\gear\L85_BAF.h"
        #include "assign\gear\L85_BAF_RIS.h"
        #include "assign\gear\MP5_GEND.h"
        #include "assign\gear\M16A2_US.h"
        #include "assign\gear\C7_CAN.h"
        #include "assign\gear\M16A4_USMC.h"
        #include "assign\gear\M4A1_US.h"
        #include "assign\gear\M4A1_USMC.h"
        #include "assign\gear\M4_US.h"
        #include "assign\gear\AKMS_LVM.h"
        #include "assign\gear\Mk20_AAF_WD.h"
        #include "assign\gear\SCAR_L_US.h"
        #include "assign\gear\SCAR_H_US.h"
        #include "assign\gear\TRG_FIA.h"
        #include "assign\gear\RK62_FIN.h"
        #include "assign\gear\BREN807_PMC.h"
        #include "assign\gear\FOW_USA_G.h"
        #include "assign\gear\FOW_USMC_G.h"
        #include "assign\gear\FOW_BAF_42_G.h"
        #include "assign\gear\FOW_BAF_44_G.h"
        #include "assign\gear\FOW_BAF_PAC_G.h"
        #include "assign\gear\FOW_GER_G.h"
        #include "assign\gear\FOW_GER_PARA_G.h"
        #include "assign\gear\FOW_IJA_G.h"
        #include "assign\gear\IF44_USSR_G.h"
        #include "assign\gear\IF44_BAF_42_G.h"
        #include "assign\gear\IF44_BAF_44_G.h"
        #include "assign\gear\IF44_GER_PARA_G.h"
        #include "assign\gear\IF44_GER_42_G.h"
        #include "assign\gear\IF44_GER_43_G.h"
        #include "assign\gear\IF44_USA_PARA_G.h"
        #include "assign\gear\IF44_USA_G.h"
        #include "assign\gear\M14_US.h"
        #include "assign\gear\DSA58_CDF.h"
        #include "assign\gear\BREN2_RACS.h"
        #include "assign\gear\M16A1_US.h"
        #include "assign\gear\VZ58_CZ.h"
        #include "assign\gear\BREN805_CZ.h"
        #include "assign\gear\M16A2_IDF.h"
        #include "assign\gear\TAVOR_IDF.h"
        #include "assign\gear\HK416_ROK.h"
        #include "assign\gear\PROMET_LDF.h"
        #include "assign\gear\AK12_RU.h"
        #include "assign\gear\FAL_LDF.h"
        #include "assign\gear\FAMAS_HIL.h"
        #include "assign\gear\SCAR_L_HIL.h"
        #include "assign\gear\FAMAS_HIL_RES.h"
        #include "assign\gear\MPIKM_GDR.h"
        #include "assign\gear\MPIAK74_GDR.h"
        #include "assign\gear\MPIAK74_GDR_AIR.h"
        #include "assign\gear\AKM_PRL.h"
        #include "assign\gear\AKM_PRL_AIR.h"
        #include "assign\gear\G3A3_FRG.h"
        #include "assign\gear\G3A4_FRG.h"
        #include "assign\gear\G1_FRG.h"
        #include "assign\gear\M75_DNK.h"
        #include "assign\gear\C7_DNK.h"
        #include "assign\gear\Katiba_CSAT.h"
        #include "assign\gear\G3A3_TKA.h"
        #include "assign\gear\AK74_CDF.h"
        #include "assign\gear\AK105_CDF.h"
        #include "assign\gear\AKM_CDF.h"
        #include "assign\gear\AK74_CDF_NG.h"
        #include "assign\gear\BREN807_CDF.h"
        #include "assign\gear\VN_AUS_G.h"
        #include "assign\gear\VN_SAS_G.h"
        #include "assign\gear\VN_US_SEAL_G.h"
        #include "assign\gear\VN_US_CIDG_G.h"
        #include "assign\gear\VN_US_LRRP_G.h"
        #include "assign\gear\VN_US_SOG_G.h"
        #include "assign\gear\VN_US_M14_G.h"
        #include "assign\gear\VN_US_M16_G.h"
        #include "assign\gear\VN_NZ_G.h"
        #include "assign\gear\VN_ROK_G.h"
        #include "assign\gear\VN_RLA_G.h"
        #include "assign\gear\VN_SV_ARVN_G.h"
        #include "assign\gear\VN_SV_RANGER_G.h"
        #include "assign\gear\VN_SV_TQLC_G.h"
        #include "assign\gear\VN_PLA_G.h"
        #include "assign\gear\VN_NV_NVA_E_G.h"
        #include "assign\gear\VN_NV_NVA_L_G.h"
        #include "assign\gear\VN_NV_VC_G.h"

        unitBaseClass = "Rifleman";
        vehicleBaseClass = "Vehicle";
    };

    class Briefing {
        blufor = ADDON_PATH(briefing\blufor.sqf);
        opfor = ADDON_PATH(briefing\opfor.sqf);
        indfor = ADDON_PATH(briefing\indfor.sqf);
        civilian = ADDON_PATH(briefing\civilian.sqf);
    };

    class Group {
        assignedTeams[] = {
            {"FTL", "RED"},
            {"AR", "BLUE"},
            {"AAR", "BLUE"},
            {"RAT", "RED"}
        };
    };

    class Marker {
        isGroupEnabled = 1;
        isFireTeamEnabled = 1;
        defaultDelay = 3;

        class MedicMarker {
            size[] = {0.5, 0.5};
        };

        class FireTeamMemberMarker {
            alpha = 0.5;
            color = "ColorYellow";
            size[] = {0.5, 0.5};
        };

        class DefaultCustomMarker {
            shape = "ICON";
            type = "Dot";
            color = "ColorPink";
            size[] = {1, 1};
            text = "";
        };
    };

    class ACRE {
        class Babel {
            languages[] = {
                {"west", "west"},
                {"east", "east"},
                {"resistance", "resistance"},
                {"civ", "CIV"}
            };
        };

        class ShortRange {
            baseFrequency = 2400;
            radios[] = {"ACRE_PRC343"};
            defaultChannel = 5;
            channels[] = {
                {"A", 1},
                {"B", 2},
                {"C", 3},
                {"D", 4}
            };
        };

        class LongRange {
            baseFrequency = 32;
            channelNames[] = {"Command", "Air"};
            radios[] = {"ACRE_PRC148", "ACRE_PRC152", "ACRE_PRC117F"};
            defaultChannel = 1;
            channels[] = {
                {"TH", 2},
                {"AH", 2},
                {"CAS", 2}
            };
        };

        class Radio {
            class ACRE_PRC343 {
                channelCount = 256;
            };

            class ACRE_PRC148 {
                channelCount = 32;
                channelNameField = "label";
                power = 5000;
            };

            class ACRE_PRC152 {
                channelCount = 99;
                channelNameField = "description";
                power = 5000;
            };

            class ACRE_PRC117F {
                channelCount = 100;
                channelNameField = "name";
                power = 2000;
            };
        };

        class Steps {
            channel = 1;
            west = 0.2;
            east = 0.4;
            resistance = 0.6;
            default = 0.8;
        };
    };

    class General {
        enableRadio = 0;                                // Enables AI radio callouts being seen
        enableSaving = 0;                               // Enables game saving
        enableSentences = 0;                            // Enables AI radio callouts being heard
        disableRemoteSensors = 1;                       // Disables RemoteSensors
        enableEnvironment = 1;                          // Enables ambient animals but keeps sounds
        fadeEnvironment = 1;                            // Reduce sound of environmental sounds (rain/thunder/insects)
        nightLightLevel = 300;                          // getLighting value must be below this to be considered dark and keep night gear
        AIThinkOnlyLocal = 1;                           // Stops clients getting remote updates for AI units
    };

    class Logistics {
        enableMedicalCrates = 1;
    };

    class GarbageCollector {
        isEnabled = 1;
        canRemoveCorpses = 1;
        canRemoveWrecks = 1;

        panicCps = 20;

        corpseLimit = 40;
        panicCorpseLimit = 10;

        wreckLimit = 10;
        panicWreckLimit = 3;

        checkDelay = 30;
    };
};
