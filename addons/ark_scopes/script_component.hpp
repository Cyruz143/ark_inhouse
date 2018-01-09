#define COMPONENT scopes
#define COMPONENT_BEAUTIFIED Scopes

#include "\x\ark\addons\ark_main\script_mod.hpp"
#include "\x\ark\addons\ark_main\script_macros.hpp"

#define SCOPE_VALUES \
    opticsZoomMin = 0.4375; \
    opticsZoomMax = 0.4375; \
    opticsZoomInit = 0.4375; \
    distanceZoomMin = 300; \
    distanceZoomMax = 300; \
    opticsPPEffects[] = {"OpticsCHAbera5", "OpticsBlur5"}; \
    opticsFlare = 0; \
    opticsDisablePeripherialVision = 0;

#define CQB_VALUES \
    opticsPPEffects[] = {""}; \
    opticsFlare = 0; \
    opticsDisablePeripherialVision = 0; \
    opticsZoomMin = 0.25; \
    opticsZoomMax = 1.25; \
    opticsZoomInit = 0.75; \
    distanceZoomMin = 100; \
    distanceZoomMax = 100; \
    memoryPointCamera = "eye"; \
    visionMode[] = {};