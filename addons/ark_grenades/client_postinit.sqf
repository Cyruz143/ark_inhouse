["SatchelCharge_Remote_Mag", "CONTAINER", "Covert to short fuse", nil, nil, {true}, {
    params ["_unit"];

    _unit addMagazine "SatchelCharge_Remote_Mag_Throwable";

    false
}, true] call CBA_fnc_addItemContextMenuOption;

["SatchelCharge_Remote_Mag_Throwable", "CONTAINER", "Remove short fuse", nil, nil, {true}, {
    params ["_unit"];

    _unit addMagazine "SatchelCharge_Remote_Mag";

    false
}, true] call CBA_fnc_addItemContextMenuOption;