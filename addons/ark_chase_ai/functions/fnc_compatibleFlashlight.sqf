ark_chase_ai_fnc_compatibleFlashlight = {
    params ["_unit"];

    private _wep = primaryWeapon _unit;
    private _flashLight = ark_chase_ai_var_compatFlashlights get _wep;

    if (isNil "_flashLight") then {
        private _flashLights = [];
        private _pointers = [_wep, "pointer"] call CBA_fnc_compatibleItems;

        {
            if (getNumber (configfile >> "CfgWeapons" >> _x >> "ItemInfo" >> "FlashLight" >> "useFlare") == 1) then {
                _flashLights pushback _x;
            };
        } forEach _pointers;

        if (_flashLights isEqualTo []) then {
            _flashLight = "";
        } else {
            _flashLight = _flashLights #0;
        };

        ark_chase_ai_var_compatFlashlights set [_wep,_flashLight];
    };

    _flashLight
};