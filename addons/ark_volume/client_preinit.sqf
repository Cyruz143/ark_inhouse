[
    "ark_volume_ground",
    "SLIDER",
    ["Ground Vehicle Volume", "How loud the game volume is in ground vehicles"],
    ["ARK Inhouse","ARK Vehicle Volume"],
    [0.2, 1, 1, 1],
    0,
    {ark_volume_groundVolume = _this},
    false
] call CBA_fnc_addSetting;

[
    "ark_volume_water",
    "SLIDER",
    ["Water Vehicle Volume", "How loud the game volume is in water vehicles"],
    ["ARK Inhouse","ARK Vehicle Volume"],
    [0.2, 1, 1, 1],
    0,
    {ark_volume_waterVolume = _this},
    false
] call CBA_fnc_addSetting;

[
    "ark_volume_air",
    "SLIDER",
    ["Air Vehicle Volume", "How loud the game volume is in air vehicles"],
    ["ARK Inhouse","ARK Vehicle Volume"],
    [0.2, 1, 1, 1],
    0,
    {ark_volume_airVolume = _this},
    false
] call CBA_fnc_addSetting;