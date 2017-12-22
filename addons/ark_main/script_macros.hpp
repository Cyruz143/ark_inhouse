#include "\x\cba\addons\main\script_macros_common.hpp"

// Main
#define VERSION MAJOR.MINOR.PATCH
#define VERSION_AR MAJOR,MINOR,PATCH
#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}
#define QUOTE(var1) #var1