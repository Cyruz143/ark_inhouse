#include "script_component.hpp"

hull3_settings_fnc_init = {
    [] call hull3_settings_fnc_setNonStandardGeneralSettings;
    [] call hull3_settings_fnc_setModuleVariables;
};

hull3_settings_fnc_setNonStandardGeneralSettings = {
    if (!(["General", "enableRadio"] call hull3_config_fnc_getBool)) then {
        enableRadio false;
        0 fadeRadio 0;
        LOG("hull3.settings: enableRadio is disabled.");
    };
    if (!(["General", "enableSaving"] call hull3_config_fnc_getBool)) then {
        enableSaving [false, false];
        LOG("hull3.settings: Saving is disabled.");
    };
    if (!(["General", "enableSentences"] call hull3_config_fnc_getBool)) then {
        enableSentences false;
        LOG("hull3.settings: enableSentences is disabled.");
    };
    if (["General", "disableRemoteSensors"] call hull3_config_fnc_getBool) then {
        disableRemoteSensors true;
        LOG("hull3.settings: RemoteSensors are disabled.");
    };
    if (!(["General", "enableEnvironment"] call hull3_config_fnc_getBool)) then {
        [{time > 0}, {enableEnvironment [false, true];}] call CBA_fnc_waitUntilAndExecute;
        LOG("hull3.settings: Ambient animals are disabled.");
    };
    if (["General", "fadeEnvironment"] call hull3_config_fnc_getBool) then {
        5 fadeEnvironment 0.35;
        LOG("hull3.settings: Reduced environmental sounds.");
    };
};

hull3_settings_fnc_setModuleVariables = {
    if (isNil {hull3_marker_isGroupEnabled}) then {
        hull3_marker_isGroupEnabled = ["Marker", "isGroupEnabled"] call hull3_config_fnc_getBool;
        LOG_1("hull3.settings.marker: Group marker module was not found. Setting Group Marker enabled from config to %1.",hull3_marker_isGroupEnabled);
    };
    if (isNil {hull3_marker_isFireTeamEnabled}) then {
        hull3_marker_isFireTeamEnabled = ["Marker", "isFireTeamEnabled"] call hull3_config_fnc_getBool;
        LOG_1("hull3.settings.marker: Fire Team Member marker module was not found. Setting Fire Team Member marker enabled from config to %1.",hull3_marker_isFireTeamEnabled);
    };
};
