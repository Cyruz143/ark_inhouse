[
    "SatchelCharge_Remote_Mag",
    "CONTAINER",
    "Covert to short fuse",
    nil,
    "\z\ace\addons\explosives\UI\Place_Explosive_ca.paa",
    [
        {true},
        {
            params ["", "", "_item"];
            _item isEqualTo "SatchelCharge_Remote_Mag";
        }
    ],
    {
        params ["_unit"];
        _unit addMagazine "SatchelCharge_Remote_Mag_Throwable";
        false;
    },
    true
] call CBA_fnc_addItemContextMenuOption;

[
    "SatchelCharge_Remote_Mag_Throwable",
    "CONTAINER",
    "Remove short fuse",
    nil,
    "\z\ace\addons\explosives\UI\Place_Explosive_ca.paa",
    [
        {true},
        {
            params ["", "", "_item"];
            _item isEqualTo "SatchelCharge_Remote_Mag_Throwable";
        }
    ],
    {
        params ["_unit"];
        _unit addMagazine "SatchelCharge_Remote_Mag";
        false;
    },
    true
] call CBA_fnc_addItemContextMenuOption;

