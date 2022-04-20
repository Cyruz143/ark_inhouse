[
    "ark_brass_enabled",
    "CHECKBOX",
    ["Enabled", "Enable staying brass"],
    ["ARK Inhouse","ARK Brass"],
    false,
    false,
    {},
    true
] call CBA_fnc_addSetting;

[
    "ark_brass_maxCases",
    "SLIDER",
    ["Amount of casings", "Maximum amount of cases that are dropped"],
    ["ARK Inhouse","ARK Brass"],
    [100, 500, 250, -1],
    false
] call CBA_fnc_addSetting;