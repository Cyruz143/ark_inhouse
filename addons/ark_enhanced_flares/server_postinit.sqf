ark_ace_cookoff_fnc_removeFlares = {
    params ["_killed"];

    if (!(_killed isKindOf "Car")
        || { !(_killed isKindOf "Tank") }
        || { !(_killed isKindOf "Air") }
        || { !(_killed isKindOf "Ship") }) exitWith {};

    {
        _x params ["_mag"];
        private _ammo = getText (configFile >> "CfgMagazines" >> _mag >> "ammo");
        private _intensity = getNumber (configFile >> "CfgAmmo" >> _ammo >> "intensity");
        private _flare = getNumber (configFile >> "CfgAmmo" >> _ammo >> "ace_grenades_flare");

        if (_intensity isNotEqualTo 0 || _flare isEqualTo 1) then {
            [_killed, _mag] call CBA_fnc_removeMagazineCargo;
        };
    } forEach magazinesAmmoCargo _killed;

    ["Enhanced Flares", "INFO","fnc_removeFlare","Removing flares from container", _obj] call ark_admin_tools_fnc_log;
};

addMissionEventHandler ["EntityKilled", {call ark_ace_cookoff_fnc_removeFlares}];