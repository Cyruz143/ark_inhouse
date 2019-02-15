["CAManBase", "Reloaded", {
    params ["_unit", "", "", "", "_oldMagazine"];

    if (isPlayer _unit) exitWith {};
    if (currentWeapon (vehicle _unit) isEqualTo primaryWeapon _unit) then {
        _unit addMagazine (_oldMagazine #0);
    };
}] call CBA_fnc_addClassEventHandler;

{
    [_x, "Reloaded", {
        params ["_vehicle"];

        if (isPlayer _vehicle) exitWith {};
        _vehicle setVehicleAmmoDef 1;
    }] call CBA_fnc_addClassEventHandler;
} forEach ["Air","Car","Tank"];