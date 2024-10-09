#include "admiral_macros.h"

class Admiral {
    isEnabled = 0;
    isDebuggingEnabled = 1; // Always disabled on dedicated server
    areNVGsEnabled = 1;
    isBehaviorEnabled = 1;
    canSpawnOnRoof = 1;
    allowCrewInImmobile = 1;
    cargoUnloadInCombat = 0;
    removeHandguns = 1;
    useTracers = 0;
    transferNonPlayableGroupsToHc = 1; // Non-playable groups are that do not have playable units in them
    groupSpawnDelay = 2; // Delay in seconds between spawning groups

    sideRelations[] = {
        {"west", "east", "enemy"},
        {"west", "resistance", "friend"},
        {"east", "west", "enemy"},
        {"east", "resistance", "enemy"},
        {"resistance", "west", "friend"},
        {"resistance", "east", "enemy"}
    };

    class Camp {
        defaultUnitTemplate = "Base";
        defaultZoneTemplate = "Camp";
    };

    class Patrol {
        defaultUnitTemplate = "Base";
        defaultZoneTemplate = "Patrol";
    };

    class Cqc {
        defaultUnitTemplate = "Base";
        defaultZoneTemplate = "Cqc";
        forceFireEnabled = 1;
        forceFireDelay = 5;
        dynamicSimEnabled = 1;
        buildingBlacklist[] = {"Land_dum_mesto2l", "Land_dum_mesto3", "dum_mesto3","CUP_A1_dum_mesto_in","CUP_A1_Dum_m2","CUP_A1_Dum_mesto2L","CUP_A1_Dum_mesto3","CUP_A1_stanice","CUP_A2_dum_m2","CUP_A2_dum_mesto2l","CUP_A2_dum_mesto3","CUP_A2_housev_1i1_dam","CUP_A2_housev_2l_dam_ruins","Land_cwa_stanice","Land_cwa_dum_m2","Land_cwa_dum_mesto2l","Land_Ss_hangar"};
        buildingCapacity[] = {
            {"Land_House_C_2_EP1", 4},
            {"Land_House_K_6_EP1", 4},
            {"Land_House_K_7_EP1", 4},
            {"Land_A_GeneralStore_01", 4}
        };
    };

    #include "unit_templates.h"
    #include "zone_templates.h"
};
