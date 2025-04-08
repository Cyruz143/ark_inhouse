[
    QGVAR(notification),
    "CHECKBOX",
    ["Show Notifications", "Show hints when your sound level is changed by addon"],
    ["ARK Inhouse","ARK Vehicle Volume"],
    true,
    0,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(ground),
    "SLIDER",
    ["Ground Vehicle Volume", "How loud the game volume is in ground vehicles"],
    ["ARK Inhouse","ARK Vehicle Volume"],
    [0.2, 1, 1, 1],
    0,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(water),
    "SLIDER",
    ["Water Vehicle Volume", "How loud the game volume is in water vehicles"],
    ["ARK Inhouse","ARK Vehicle Volume"],
    [0.2, 1, 1, 1],
    0,
    {},
    false
] call CBA_fnc_addSetting;

[
    QGVAR(air),
    "SLIDER",
    ["Air Vehicle Volume", "How loud the game volume is in air vehicles"],
    ["ARK Inhouse","ARK Vehicle Volume"],
    [0.2, 1, 1, 1],
    0,
    {},
    false
] call CBA_fnc_addSetting;
