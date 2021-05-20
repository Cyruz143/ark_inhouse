#define COMPONENT enhanced_launchers
#define COMPONENT_BEAUTIFIED Enhanced Launchers

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define ENHANCED_LAUNCHER \
    airLock = 1; \
    allowAgainstInfantry = 1; \
    aiAmmoUsageFlags = "64 + 128 + 256 + 512"; \
    cost = 40; \
    soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",6,0.85,500}; \
    whistleDist = 32;
