#define COMPONENT flashlights
#define COMPONENT_BEAUTIFIED Flashlights

#include "\x\ark\addons\main\script_mod.hpp"
#include "\x\ark\addons\main\script_macros.hpp"

#define MACRO_FLASHLIGHT_UPGRADE \
    direction = "flash"; \
    position = "flash dir"; \
    ambient[] = {6, 9, 9}; \
    color[] = {185, 190, 199}; \
    coneFadeCoef = 80; \
    dayLight = 1; \
    flareMaxDistance = 150; \
    flareSize = 1; \
    innerAngle = 15; \
    intensity = 100; \
    outerAngle = 120; \
    size = 1; \
    useFlare = 1; \
    class Attenuation { \
        constant = 1; \
        hardLimitEnd = 120; \
        hardLimitStart = 70; \
        linear = 1; \
        quadratic = 0; \
        start = 0.1; \
    }; \
    scale [] = {0}
