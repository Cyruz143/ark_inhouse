ark_ai_reloads_fnc_addMagazine = {
    params ["_unit","_weapon","_muzzle","_newMagazine","_oldMagazine"];
    if (isPlayer _unit) exitWith {};
    private _currentWeapon = currentWeapon (vehicle _unit);
    private _primaryWeapon = primaryWeapon _unit;
    if (_currentWeapon isEqualTo _primaryWeapon) then {
        _unit addMagazine (_oldMagazine select 0);
    };
};

["CAManBase", "init", {
    _this addEventHandler ["Reloaded", {call ark_ai_reloads_fnc_addMagazine}]
}] call CBA_fnc_addClassEventHandler;