player addEventHandler ["FiredMan", {call ark_brass_fnc_createCase}];
ark_brass_localArr = [];

ark_brass_fnc_createCase = {
    params ["_unit", "_weapon", "", "", "_ammo"];

    if (!local _unit || { !isNull objectParent _unit } || { _weapon in ["throw","put"] } ) exitWith {};

    private _cartridge = getText (configFile >> "CfgAmmo" >> _ammo >> "cartridge");
    if (_cartridge isEqualTo "") exitWith {};

    private _modelPath = "A3\Weapons_f\ammo\cartridge.p3d"; //Default cartridge is a 5.56mm model

    switch (_cartridge) do {
    case "FxCartridge_9mm": { _modelPath = "A3\Weapons_f\ammo\cartridge_small.p3d" };
    case "FxCartridge_65": { _modelPath = "A3\weapons_f\ammo\cartridge_65.p3d" };
    case "FxCartridge_762": { _modelPath = "A3\weapons_f\ammo\cartridge_762.p3d" };
    case "FxCartridge_127": { _modelPath = "A3\weapons_f\ammo\cartridge_127.p3d" };
    case "FxCartridge_slug": { _modelPath = "A3\weapons_f\ammo\cartridge_slug.p3d" };
};

    // This is all ACE magic stuff
    private _unitPosATL = getposATL _unit;
    private _weapDir = _unit weaponDirection currentWeapon _unit;
    private _ejectDir = _weapDir vectorCrossProduct [0, 0, 1];
    private _posATL = _unitPosATL vectorAdd
                      (_weapDir vectorMultiply (-0.5 + random 1.0 + random 1.0)) vectorAdd
                      (_ejectDir vectorMultiply (0.2 + random 1.0 + random 1.0));

    _posATL set [2, (_unitPosATL #2) + 0.01];

    [{
        params ["_modelPath","_posATL"];

        private _casing = createSimpleObject [_modelPath, [0,0,0], true];
        _casing setposATL _posATL;
        _casing setdir (random 360);
        ark_brass_localArr pushBack _casing;

    }, [_modelPath,_posATL], 0.4] call CBA_fnc_waitAndExecute;
};

// To save having 30 events fire out in a second when someone mag dumps a gun, gather them locally and send batches
[
    {
        if (ark_brass_localArr isEqualTo []) exitWith {};

        ["ark_brass_createdCase", [ark_brass_localArr]] call CBA_fnc_serverEvent;
        ark_brass_localArr = [];
    },
    10
] call CBA_fnc_addPerFrameHandler;