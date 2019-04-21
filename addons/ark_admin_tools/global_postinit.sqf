ark_admin_tools_fnc_callAttackHelo = {
    params ["_player"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
    private _skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _heloArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "ah");
    if (isNil "_heloArray" || { count _heloArray == 0 }) exitWith {
        diag_log "[ARK] (Admin Tools) - No helo defined in Admiral template";
    };

    private _pos = _player getPos [2500, (random [0, 180, 360])];
    private _vehicle = createVehicle [(selectRandom _heloArray), _pos, [], 0, "FLY"];

    private _grp = createGroup _side;
    private _pilot = [[0,0,0], _grp, _pilotClassnames, _skillArray] call adm_common_fnc_placeMan;
    _pilot assignAsDriver _vehicle;
    _pilot moveInDriver _vehicle;

    {
        private _unit = [[0,0,0], _grp, _pilotClassnames, _skillArray] call adm_common_fnc_placeMan;
        _unit assignAsTurret [_vehicle, _x];
        _unit moveInTurret [_vehicle, _x];
    } forEach allTurrets _vehicle;

    [_grp, position _player, 250, 6, "SAD", "AWARE", "RED", "FULL"] call CBA_fnc_taskPatrol;
};

ark_admin_tools_fnc_callArmour = {
    params ["_player"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pos = [_player, 850, 1000, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _crewmanClassnames = [_unitTemplate, "crewmen"] call adm_common_fnc_getUnitTemplateArray;
    private _skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _armourArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "armour");

    private _vehicle = createVehicle [(selectRandom _armourArray), _pos, [], 0, "NONE"];
    private _grp = createGroup _side;

    private _driver = [[0,0,0], _grp, _crewmanClassnames, _skillArray] call adm_common_fnc_placeMan;
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _unit = [[0,0,0], _grp, _crewmanClassnames, _skillArray] call adm_common_fnc_placeMan;
        _unit assignAsTurret [_vehicle, _x];
        _unit moveInTurret [_vehicle, _x];
    } forEach allTurrets _vehicle;

    _vehicle allowCrewInImmobile true;
    _vehicle setUnloadInCombat [false, false];

    [_grp, position _player, 100, 4, "MOVE", "AWARE", "RED", "FULL"] call CBA_fnc_taskPatrol;
};

ark_admin_tools_fnc_callTechnical = {
    params ["_player"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pos = [_player, 850, 1000, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _infantryClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    private _skillArray = ["Camp"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _technicalArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "technicals");

    private _vehicle = createVehicle [(selectRandom _technicalArray), _pos, [], 0, "NONE"];
    private _grp = createGroup _side;

    private _driver = [[0,0,0], _grp, _infantryClassnames, _skillArray] call adm_common_fnc_placeMan;
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _unit = [[0,0,0], _grp, _infantryClassnames, _skillArray] call adm_common_fnc_placeMan;
        _unit assignAsTurret [_vehicle, _x];
        _unit moveInTurret [_vehicle, _x];
    } forEach allTurrets _vehicle;

    _vehicle allowCrewInImmobile true;
    _vehicle setUnloadInCombat [false, false];

    [_grp, position _player, 100, 4, "MOVE", "AWARE", "RED", "FULL"] call CBA_fnc_taskPatrol;
};

// Custom CBA EHs
["ark_admin_tools_eh_endMission", BIS_fnc_endMission] call CBA_fnc_addEventHandler;

// Custom CBA chat commands
["endmission", {
    params ["_ending"];
    if (_ending == "") then {
        ["ark_admin_tools_eh_endMission", ["end1", true]] call CBA_fnc_globalEvent;
    } else {
        ["ark_admin_tools_eh_endMission", [_ending, true]] call CBA_fnc_globalEvent;
    };
}, "adminLogged"] call CBA_fnc_registerChatCommand;

["failmission", {
    params ["_ending"];
    if (_ending == "") then {
        ["ark_admin_tools_eh_endMission", ["loser", false]] call CBA_fnc_globalEvent;
    } else {
        ["ark_admin_tools_eh_endMission", [_ending, false]] call CBA_fnc_globalEvent;
    };
}, "adminLogged"] call CBA_fnc_registerChatCommand;
