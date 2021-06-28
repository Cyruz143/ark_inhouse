["CAManBase", "Reloaded", {
    params ["_unit", "_weapon", "_muzzle", "_newMagazine"];

    if (isPlayer _unit || { _muzzle isNotEqualTo _weapon }) exitWith {};
    if (_weapon in ["Throw","Put"]) exitWith {};

    if (currentWeapon _unit isEqualTo primaryWeapon _unit) then {
        _unit addMagazine (_newMagazine #0);
    };
}] call CBA_fnc_addClassEventHandler;

//Pylons and CSW weapons don't reload so need to use Fired
{
    [_x, "Fired", {
        params ["_vehicle", "", "_muzzle"];

        if (isPlayer _vehicle) exitWith {};
        if (_vehicle ammo _muzzle isEqualTo 0) then {
            _vehicle setVehicleAmmoDef 1;
        }
    }] call CBA_fnc_addClassEventHandler;
} forEach ["Air","Car","Tank","StaticWeapon"];