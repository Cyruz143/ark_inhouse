["ark_sling_sling_loading_eh_fixLocality", 
    {
        params ["_heli", "_object"];
        
        private _heliOwner = owner _heli;
        if (_heliOwner != owner _object) then {
            _object setOwner _heliOwner;
        };
    }
] call CBA_fnc_addEventHandler;

["Helicopter", "init", 
    {
        params ["_heli"];
        
        _heli addEventHandler ["RopeAttach", {
            params ["_heli", "", "_object"];
            ["ark_sling_sling_loading_eh_fixLocality", [_heli, _object]] call CBA_fnc_serverEvent;
        }];
    }, 
    true, 
    [],
    true
] call CBA_fnc_addClassEventHandler;