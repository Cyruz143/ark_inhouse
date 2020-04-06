[
    "ark_brass_enabled",
    "CHECKBOX",
    ["Enabled", "Enable staying brass"],
    ["ARK Inhouse","ARK Brass"],
    true,
    0,
    {},
    true
] call CBA_fnc_addSetting;

[
    "ark_brass_maxCases",
    "SLIDER",
    ["Amount of casings", "Maximum amount of cases that are dropped"],
    ["ARK Inhouse","ARK Brass"],
    [100, 500, 250, -1],
    0,
    {ark_brass_maxCases = _this},
    false
] call CBA_fnc_addSetting;