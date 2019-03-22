ark_admin_tools_fnc_callAttackHelo = {
    params ["_player"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pilotArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "pilots");
    private _heloArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "ah");
    if (isNil "_heloArray" || { count _heloArray == 0 }) exitWith {
        diag_log "[ARK] (Admin Tools) - No helo defined in Admiral template";
    };

    private _randomDir = random [0, 180, 360];
    private _pos = _player getPos [2500, _randomDir];
    private _vehicle = createVehicle [(selectRandom _heloArray), _pos, [], 0, "FLY"];
    private _grp = createGroup _side;

    private _driver = _grp createUnit [(selectRandom _pilotArray), [0,0,0], [], 0, "NONE"];
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _unit = _grp createUnit [(selectRandom _pilotArray), [0,0,0], [], 0, "NONE"];
        _unit assignAsTurret [_vehicle, _x];
        _unit moveInTurret [_vehicle, _x];
    } forEach allTurrets _vehicle;

    {
        _x setskill ["spotDistance",1];
        _x setskill ["spotTime",1];
        _x setskill ["courage",1];
        _x setskill ["commanding",1];
    } forEach units _grp;

    [_grp, position _player, 250, 6, "SAD", "AWARE", "RED", "FULL"] call CBA_fnc_taskPatrol;
};

ark_admin_tools_fnc_callArmour = {
    params ["_player"];

    private _unitTemplate = adm_camp_defaultUnitTemplate;
    private _side = [_unitTemplate] call adm_common_fnc_getUnitTemplateSide;
    private _pos = [_player, 850, 1000, 3, 0, 20, 0] call BIS_fnc_findSafePos;
    private _crewmanArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "crewmen");
    private _armourArray = getArray (configfile >> "Admiral" >> "UnitTemplates" >> _unitTemplate >> "armour");

    private _vehicle = createVehicle [(selectRandom _armourArray), _pos, [], 0, "NONE"];
    private _grp = createGroup _side;

    private _driver = _grp createUnit [(_crewmanArray #0), [0,0,0], [], 0, "NONE"];
    _driver assignAsDriver _vehicle;
    _driver moveInDriver _vehicle;

    {
        private _unit = _grp createUnit [(selectRandom _crewmanArray), [0,0,0], [], 0, "NONE"];
        _unit assignAsTurret [_vehicle, _x];
        _unit moveInTurret [_vehicle, _x];
    } forEach allTurrets _vehicle;

    _vehicle allowCrewInImmobile true;
    _vehicle setUnloadInCombat [false, false];

    [_grp, position _player, 100, 4, "MOVE", "AWARE", "RED", "FULL"] call CBA_fnc_taskPatrol;
};
