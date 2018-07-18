["CAManBase", "Reloaded", {
    params ["_unit", "", "", "", "_oldMagazine"];

    if (isPlayer _unit) exitWith {};
    private _currentWeapon = currentWeapon (vehicle _unit);
    private _primaryWeapon = primaryWeapon _unit;
    if (_currentWeapon isEqualTo _primaryWeapon) then {
        _unit addMagazine (_oldMagazine select 0);
    };
}] call CBA_fnc_addClassEventHandler;