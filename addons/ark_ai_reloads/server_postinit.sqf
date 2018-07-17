ark_ai_reloads_fnc_addMagazine = {
    params ["_ehArray"];
    private _unit = _ehArray select 0;
    private _oldMagazine = _ehArray select 4;
    
    if (isPlayer _unit) exitWith {};
    private _currentWeapon = currentWeapon (vehicle _unit);
    private _primaryWeapon = primaryWeapon _unit;
    if (_currentWeapon isEqualTo _primaryWeapon) then {
        _unit addMagazine (_oldMagazine select 0);
    };
};

["CAManBase", "Reloaded", {[_this] call ark_ai_reloads_fnc_addMagazine}] call CBA_fnc_addClassEventHandler;