#define MAINPREFIX x
#define PREFIX ark

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCH
#define VERSION_AR MAJOR,MINOR,PATCH
#define VERSION_CONFIG version = VERSION; versionStr = QUOTE(VERSION); versionAr[] = {VERSION_AR}

#define REQUIRED_VERSION 2.10

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(ARK Inhouse - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(ARK Inhouse - COMPONENT)
#endif
