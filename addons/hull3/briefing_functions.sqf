#include "hull3_macros.h"

#include "\userconfig\hull3\log\briefing.h"
#include "logbook.h"


hull3_briefing_fnc_preInit = {
    [] call hull3_briefing_fnc_addEventHandlers;
    DEBUG("hull3.briefing","Briefing functions preInit finished.");
};

hull3_briefing_fnc_addEventHandlers = {
    ["marker.group.created", hull3_briefing_fnc_addNotes] call hull3_event_fnc_addEventHandler;
};

hull3_briefing_fnc_addNotes = {
    [] call compile preprocessFile ADDON_PATH(briefing\hull3.sqf);
    DEBUG("hull3.briefing","Added Hull to briefing notes.");
    [] call hull_briefing_fnc_addAcreAdmin;
    [] call hull3_briefing_fnc_addOrbat;
    [] call hull3_briefing_fnc_addSideNotes;
};

hull3_briefing_fnc_addOrbat = {
    private "_orbat";
    _orbat = "";
    {
        if (side player == side leader _x) then {
            DECLARE(_units) = units _x;
            _orbat = _orbat + format ['<marker name="%1">%2</marker><br/>', _x getVariable "hull3_marker_group", _x];
            _orbat = _orbat + format ['    %1: %2',(_units select 0) getVariable "hull3_gear_class", name (_units select 0)];
            for "_i" from 1 to (count _units) - 1 do {
                DECLARE(_unit) = _units select _i;
                _orbat = _orbat + format [' | %1: %2',_unit getVariable "hull3_gear_class", name _unit];
            };
            _orbat = _orbat + '<br/>'
        };
    } foreach hull3_marker_groups;
    player createDiaryRecord ["Diary", ["ORBAT", _orbat]];
    DEBUG("hull3.briefing","Added ORBAT to briefing notes.");
};

hull3_briefing_fnc_addSideNotes = {
    private "_briefingFile";
    call {
        if (side player == WEST) exitWith {_briefingFile = ["Briefing", "blufor"] call hull3_config_fnc_getText};
        if (side player == EAST) exitWith {_briefingFile = ["Briefing", "opfor"] call hull3_config_fnc_getText};
        if (side player == RESISTANCE) exitWith {_briefingFile = ["Briefing", "indfor"] call hull3_config_fnc_getText};
        _briefingFile = ["Briefing", "civilian"] call hull3_config_fnc_getText;
    };
    [] call compile preprocessFile _briefingFile;
    DEBUG("hull3.briefing","Added Side notes to briefing notes.");
};

hull_briefing_fnc_addAcreAdmin = {
    player createDiaryRecord ["Diary", ["ACRE Administration", "
        <br/>
        Only use these when appropriate! If you are unsure, ask a host.
        <br/><br/>
        <execute expression='[] spawn hull3_acre_fnc_adminAssign343;'>Add AN/PRC-343</execute>
        <br/><br/>
        <execute expression='[] spawn hull3_acre_fnc_adminAssign152;'>Add AN/PRC-152</execute>
        <br/><br/>
    "]];
};