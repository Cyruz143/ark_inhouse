ark_admin_tools_fnc_callAttackHelo = {
    params ["_player"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _pilotClassnames = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
    private _heloArray = [_unitTemplate, "ah"] call adm_common_fnc_getUnitTemplateArray;

    if (isNil "_heloArray" || { count _heloArray == 0 }) exitWith {
        diag_log "[ARK] (Admin Tools) - No helo defined in Admiral template";
    };

    private _pos = _player getPos [2500, (random [0, 180, 360])];
    private _vehicle = createVehicle [(selectRandom _heloArray), _pos, [], 0, "FLY"];

    private _grp = createGroup _side;
    _grp deleteGroupWhenEmpty true;
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
    private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _pos = [_player, 850, 1000, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _crewmanClassnames = [_unitTemplate, "crewmen"] call adm_common_fnc_getUnitTemplateArray;
    private _armourArray = [_unitTemplate, "armour"] call adm_common_fnc_getUnitTemplateArray;

    private _vehicle = createVehicle [(selectRandom _armourArray), _pos, [], 0, "NONE"];
    private _grp = createGroup _side;
    _grp deleteGroupWhenEmpty true;

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
    private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _pos = [_player, 850, 1000, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _infantryClassnames = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    private _technicalArray = [_unitTemplate, "technicals"] call adm_common_fnc_getUnitTemplateArray;

    private _vehicle = createVehicle [(selectRandom _technicalArray), _pos, [], 0, "NONE"];
    private _grp = createGroup _side;
    _grp deleteGroupWhenEmpty true;

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

// Custom CBA chat commands
["endmission", {
    ["end1",true] remoteExecCall ['BIS_fnc_endMission',0];
}, "adminLogged"] call CBA_fnc_registerChatCommand;

["failmission", {
    ["loser",false] remoteExecCall ['BIS_fnc_endMission',0];
}, "adminLogged"] call CBA_fnc_registerChatCommand;