#include "ark_macros.h"

// ark_scripts
// Contains config values to be used in the future.

class CfgVehicles {
    #include "ark_modules.hpp"
    #include "ark_ace_interaction.h"
};

class Hull3 {
    class Events {
       mission_safetytimer_ended = ADDON_PATH(ark_hull3_deploy_assign.sqf); 
    };
};

class ARK {
    class Inhouse {
        isEnabled = 1;
    };
};