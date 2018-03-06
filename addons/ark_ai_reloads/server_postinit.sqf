[] spawn {
    while {true} do {
        {
            private _isEHAlreadyApplied = _x getVariable ["ark_ai_reloads_eh_applied", false];
            if !(_isEHAlreadyApplied) then {
                _x addEventHandler ["Reloaded", {call ark_ai_reloads_fnc_addMagazine}];
                _x setVariable ["ark_ai_reloads_eh_applied", true, true];
            };
        } forEach (allUnits - playableUnits);
        sleep 30;
    };
};

ark_ai_reloads_fnc_addMagazine = {
    params ["_unit","_weapon","_muzzle","_newMagazine","_oldMagazine"];
    private _currentWeapon = currentWeapon (vehicle _unit);
    private _primaryWeapon = primaryWeapon _unit;
    if (_currentWeapon isEqualTo _primaryWeapon) then {
        _unit addMagazine (_oldMagazine select 0);
    };
};