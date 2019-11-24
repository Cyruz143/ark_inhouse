["CAManBase", "Reloaded", {
    params ["_unit", "_weapon", "_muzzle", "_newMagazine"];

    if (isPlayer _unit || { _muzzle != _weapon }) exitWith {};
    if (_weapon in ["throw","put"]) exitWith {};

    if (currentWeapon _unit isEqualTo primaryWeapon _unit) then {
        _unit addMagazine (_newMagazine #0);
    };
}] call CBA_fnc_addClassEventHandler;

{
    [_x, "Reloaded", {
        params ["_vehicle"];

        if (isPlayer _vehicle) exitWith {};
        _vehicle setVehicleAmmoDef 1;
    }] call CBA_fnc_addClassEventHandler;
} forEach ["Air","Car","Tank"];