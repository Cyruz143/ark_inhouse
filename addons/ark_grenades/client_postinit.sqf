["SatchelCharge_Remote_Mag", "CLOTHES", "Covert to short fuse", nil, nil, {true}, {
    params ["_unit", "_container"];

    switch (_container) do {
        case "UNIFORM_CONTAINER": { _unit addItemToUniform "SatchelCharge_Remote_Mag_Throwable" };
        case "VEST_CONTAINER": { _unit addItemToVest "SatchelCharge_Remote_Mag_Throwable" };
        case "BACKPACK_CONTAINER" : { _unit addItemToBackpack "SatchelCharge_Remote_Mag_Throwable" };
        default { _unit addMagazine "SatchelCharge_Remote_Mag_Throwable" };
    };

    false
}, true] call CBA_fnc_addItemContextMenuOption;

["SatchelCharge_Remote_Mag_Throwable", "CLOTHES", "Remove short fuse", nil, nil, {true}, {
    params ["_unit", "_container"];

    switch (_container) do {
        case "UNIFORM_CONTAINER": { _unit addItemToUniform "SatchelCharge_Remote_Mag" };
        case "VEST_CONTAINER": { _unit addItemToVest "SatchelCharge_Remote_Mag" };
        case "BACKPACK_CONTAINER" : { _unit addItemToBackpack "SatchelCharge_Remote_Mag" };
        default { _unit addMagazine "SatchelCharge_Remote_Mag" };
    };

    false
}, true] call CBA_fnc_addItemContextMenuOption;