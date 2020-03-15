if (ark_brass_enabled) then {
    if (!hasInterface) exitWith {};
    ["CAManBase", "FiredMan", {call ark_brass_fnc_createCase}] call CBA_fnc_addClassEventHandler;
    ark_brass_caseArr = [];
};

ark_brass_fnc_createCase = {
    params ["_unit", "_weapon", "", "", "_ammo"];

    if (!isNull objectParent _unit || { _weapon in ["throw","put"] } ) exitWith {};

    private _cartridge = getText (configFile >> "CfgAmmo" >> _ammo >> "cartridge");
    if (_cartridge isEqualTo "") exitWith {};

    private _unitPosATL = getposATL _unit;
    // Distant shooters don't produce as many cases
    if ((positionCameraToWorld [0,0,0]) vectorDistance _unitPosATL > 100 && {random 1 < 0.9}) exitWith {};
    //Default cartridge is a 5.56mm model
    private _modelPath = "A3\Weapons_f\ammo\cartridge.p3d";

    switch (_cartridge) do {
        case "FxCartridge_9mm":     { _modelPath = "A3\Weapons_f\ammo\cartridge_small.p3d" };
        case "FxCartridge_65":      { _modelPath = "A3\weapons_f\ammo\cartridge_65.p3d" };
        case "FxCartridge_762":     { _modelPath = "A3\weapons_f\ammo\cartridge_762.p3d" };
        case "FxCartridge_127":     { _modelPath = "A3\weapons_f\ammo\cartridge_127.p3d" };
        case "FxCartridge_slug":    { _modelPath = "A3\weapons_f\ammo\cartridge_slug.p3d" };
    };

    // This is all ACE magic math stuff
    private _weapDir = _unit weaponDirection currentWeapon _unit;
    private _ejectDir = _weapDir vectorCrossProduct [0, 0, 1];
    private _posATL = _unitPosATL vectorAdd
                      (_weapDir vectorMultiply (-0.5 + random 1.0 + random 1.0)) vectorAdd
                      (_ejectDir vectorMultiply (0.2 + random 1.0 + random 1.0));

    _posATL set [2, (_unitPosATL #2) + 0.005];

    [
        {
            params ["_modelPath","_posATL"];

            private _casing = createSimpleObject [_modelPath, [0,0,0], true];
            _casing setposATL _posATL;
            _casing setdir (random 360);
            ark_brass_caseArr pushBack _casing;

            private _totalCasings = count ark_brass_caseArr;

            if (_totalCasings > ark_brass_maxCases) then {
                for "_i" from 0 to (_totalCasings - ark_brass_maxCases) do {
                    deleteVehicle (ark_brass_caseArr deleteAt 0);
                };
            };
        },
        [_modelPath,_posATL],
        0.4
    ] call CBA_fnc_waitAndExecute;
};