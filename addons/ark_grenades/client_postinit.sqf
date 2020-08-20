{
    _x params ["_mag", "_throwableMag"];

    [
        _mag,
        "CONTAINER",
        "Covert to short fuse",
        nil,
        "\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
        [
            {true},
            {
                params ["", "", "_item", "", "_magArr"];
                _item isEqualTo (_magArr #0);
            }
        ],
        {
            params ["_unit", "", "", "", "_magArr"];
            _unit addMagazine (_magArr #1);
            false;
        },
        true,
        [_mag,_throwableMag]
    ] call CBA_fnc_addItemContextMenuOption;

    [
        _throwableMag,
        "CONTAINER",
        "Remove short fuse",
        nil,
        "\a3\ui_f\data\igui\cfg\simpletasks\types\destroy_ca.paa",
        [
            {true},
            {
                params ["", "", "_item", "", "_magArr"];
                _item isEqualTo (_magArr #1);
            }
        ],
        {
            params ["_unit", "", "", "", "_magArr"];
            _unit addMagazine (_magArr #0);
            false;
        },
        true,
        [_mag,_throwableMag]
    ] call CBA_fnc_addItemContextMenuOption;
} forEach [
    ["SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag_Throwable"],
    ["DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag_Throwable"]
];