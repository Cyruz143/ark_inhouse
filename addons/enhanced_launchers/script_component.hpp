#define COMPONENT enhanced_launchers
#define COMPONENT_BEAUTIFIED Enhanced Launchers

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define DISPERSION 0.0333

#define ENHANCED_LAUNCHER \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = 960; \
    cost = 30; \
    soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,0.85,500}; \
    whistleDist = 32

#define NO_AI_FIREMODE \
    maxRange = 2; \
    maxRangeProbab = 0.01; \
    midRange = 1; \
    midRangeProbab = 0.01; \
    minRange = 0; \
    minRangeProbab = 0.01

#define FUSEDISTANCE \
    fuseDistance = 2.5