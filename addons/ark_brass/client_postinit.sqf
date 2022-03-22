if (!hasInterface || !(ark_brass_enabled)) exitWith {};

ark_brass_namespace = createHashMap;
ark_brass_caseArr = [];
["CAManBase", "FiredMan", {call ark_brass_fnc_createCase}] call CBA_fnc_addClassEventHandler;

ark_brass_fnc_createCase = {
    params ["_unit", "_weapon", "", "", "_ammo"];

    if (!isNull objectParent _unit || { _weapon in ["Throw","Put"] } ) exitWith {};

    private _modelPath = ark_brass_namespace get _ammo;

    if (isNil "_modelPath") then {
        private _cartridge = getText (configFile >> "CfgAmmo" >> _ammo >> "cartridge");
        //Default cartridge is a 5.56mm model
        _modelPath = switch (_cartridge) do {
            case "FxCartridge_9mm":     { "A3\Weapons_f\ammo\cartridge_small.p3d" };
            case "FxCartridge_65":      { "A3\weapons_f\ammo\cartridge_65.p3d" };
            case "FxCartridge_762":     { "A3\weapons_f\ammo\cartridge_762.p3d" };
            case "FxCartridge_127":     { "A3\weapons_f\ammo\cartridge_127.p3d" };
            case "FxCartridge_slug":    { "A3\weapons_f\ammo\cartridge_slug.p3d" };
            case "":                    { "" };
            default { "A3\Weapons_f\ammo\cartridge.p3d" };
        };
        ark_brass_namespace set [_ammo, _modelPath];
    };

    if (_modelPath isEqualTo "") exitWith {};

    private _unitPos = getposATL _unit;
    // Distant shooters don't produce as many cases
    if ((positionCameraToWorld [0,0,0]) vectorDistance _unitPos > 100 && {random 1 < 0.9}) exitWith {};

    // This is all ACE magic math stuff
    private _weapDir = _unit weaponDirection currentWeapon _unit;
    private _ejectDir = _weapDir vectorCrossProduct [0, 0, 1];
    private _pos = _unitPos vectorAdd
                      (_weapDir vectorMultiply (-0.5 + random 1.0 + random 1.0)) vectorAdd
                      (_ejectDir vectorMultiply (0.2 + random 1.0 + random 1.0));

    _pos set [2, (_pos #2) + 0.005];

    [
        {
            params ["_modelPath","_pos"];

            private _casing = createSimpleObject [_modelPath, [0,0,0], true];
            _casing setPosATL _pos;
            _casing setDir (random 360);
            ark_brass_caseArr pushBack _casing;

            private _totalCasings = count ark_brass_caseArr;

            if (_totalCasings > ark_brass_maxCases) then {
                for "_i" from 0 to (_totalCasings - ark_brass_maxCases) do {
                    deleteVehicle (ark_brass_caseArr deleteAt 0);
                };
            };
        },
        [_modelPath,_pos],
        0.4
    ] call CBA_fnc_waitAndExecute;
};