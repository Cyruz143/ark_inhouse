["CAManBase", "Reloaded", {
    params ["_unit", "", "", "", "_oldMagazine"];

    if (isPlayer _unit) exitWith {};
    private _currentWeapon = currentWeapon (vehicle _unit);
    private _primaryWeapon = primaryWeapon _unit;
    if (_currentWeapon isEqualTo _primaryWeapon) then {
        _unit addMagazine (_oldMagazine #0);
    };
}] call CBA_fnc_addClassEventHandler;

{
    [_x, "Reloaded", {
        params ["_vehicle"];

        if (isPlayer _vehicle) exitWith {};
        _vehicle setVehicleAmmoDef 1;
    }] call CBA_fnc_addClassEventHandler;
} forEach ["Air","LandVehicle"];