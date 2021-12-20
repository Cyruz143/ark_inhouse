ark_admin_tools_fnc_callReinforcements = {
    params ["_unit","_type"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _skillArray = ["Vehicles"] call adm_common_fnc_getZoneTemplateSkillValues;
    private _crewClasses = [_unitTemplate, "crewmen"] call adm_common_fnc_getUnitTemplateArray;
    private _vehArr = [_unitTemplate, _type] call adm_common_fnc_getUnitTemplateArray;
    private _pos = [_player, 850, 1000, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _spawnType = "NONE";

    if (_type isEqualTo "ah") then {
        _crewClasses = [_unitTemplate, "pilots"] call adm_common_fnc_getUnitTemplateArray;
        _pos = _unit getPos [2500, (random [0, 180, 360])];
        _spawnType = "FLY";
    };

    if (_type isEqualTo "technicals") then {
        _crewClasses = [_unitTemplate, "infantry"] call adm_common_fnc_getUnitTemplateArray;
    };

    private _vehicle = createVehicle [(selectRandom _vehArr), _pos, [], 0, _spawnType];
    private _grp = createGroup _side;
    _grp deleteGroupWhenEmpty true;

    private _driver = [[0,0,0], _grp, _crewClasses, _skillArray] call adm_common_fnc_placeMan;
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _unit = [[0,0,0], _grp, _crewClasses, _skillArray] call adm_common_fnc_placeMan;
        _unit assignAsTurret [_vehicle, _x];
        _unit moveInTurret [_vehicle, _x];
    } forEach allTurrets _vehicle;

    _vehicle allowCrewInImmobile true;
    _vehicle setUnloadInCombat [false, false];
    [_grp, position _player, 250, 6, "SAD", "AWARE", "RED", "FULL"] call CBA_fnc_taskPatrol;
};