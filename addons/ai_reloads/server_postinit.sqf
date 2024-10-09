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
        params ["_vehicle", "_weapon", "", "", "", "", "", "_gunner"];

        if (isPlayer _vehicle) exitWith {};

        if (((weaponState [_vehicle, (_vehicle unitTurret _gunner), _weapon]) #4) isEqualTo 0) then {
            _vehicle setVehicleAmmo 1;
        };
    }] call CBA_fnc_addClassEventHandler;
} forEach ["Air","Car","Tank","StaticWeapon"];
