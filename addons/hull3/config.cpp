#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        author = "Kami";
        authors[] = {"ARK"};
        url = "https://github.com/kami-";
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ark_main"};
        VERSION_CONFIG;
    };
};

class Extended_PreInit_EventHandlers {
    class Hull3 {
        init = "call compileScript ['x\ark\addons\hull3\hull3_preinit.sqf'];";
    };
};

class Extended_PostInit_EventHandlers {
    class Hull3 {
        init = "call compileScript ['x\ark\addons\hull3\hull3_postinit.sqf'];";
    };
};

class Extended_PreStart_EventHandlers {
    class Hull3 {
        init = "call compileScript ['x\ark\addons\hull3\eden_functions.sqf'];";
    };
};

class CfgFactionClasses {
    class NO_CATEGORY;
    class Hull3 : NO_CATEGORY {
        displayName = "Hull3";
    };
};

class CfgVehicles {
    class Logic;
    class Module_F : Logic {
        class ModuleDescription {};
    };

    class Hull3_DisableGroupMarkers_Module : Module_F {
        scope = 2;
        displayName = "Disable Group Markers";
        icon = ADDON_PATH(resources\hull3_module.paa);
        category = "Hull3";
        function = "hull3_marker_fnc_disableGroupMarkers";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        is3DEN = 0;

        class Arguments {};

        class ModuleDescription : ModuleDescription {
            description = "Disable group markers for all players";
            sync[] = {};
        };
    };

    class Hull3_DisableFireTeamMarkers_Module : Module_F {
        scope = 2;
        displayName = "Disable Fire Team Member Markers";
        icon = ADDON_PATH(resources\hull3_module.paa);
        category = "Hull3";
        function = "hull3_marker_fnc_disableFireTeamMarkers";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        is3DEN = 0;

        class Arguments {};

        class ModuleDescription : ModuleDescription {
            description = "Disable fire team markers for all players";
            sync[] = {};
        };
    };
};

class CfgRespawnTemplates {
    respawnTemplatesNone[] = {"Hull3_RespawnHandler"};
    class Hull3_RespawnHandler {
        onPlayerRespawn = "hull3_unit_fnc_onPlayerRespawn";
    };
};

class Cfg3DEN {
    class EventHandlers {
        class Hull3 {
            OnMissionLoad       = "call (uiNamespace getVariable 'hull3_eden_fnc_intelSettings');";
            OnMissionSave       = "call (uiNamespace getVariable 'hull3_eden_fnc_intelSettings');";
        };
    };
};

class CfgMarkers {
    class Flag;
    class Hull3_UnitMarker : Flag {
        name = "Unit Icon";
        icon = ADDON_PATH(resources\hull3_unit_marker.paa);
        color[] = {1, 0, 0, 1};
        shadow = 0;
        scope = 1;
    };
};

// Hull3
#include "hull3.h"
