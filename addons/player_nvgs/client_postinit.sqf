player addEventHandler ["VisionModeChanged", {
    params ["_person", "_visionMode"];
    if (isNull objectParent _person) then {
        if (_visionMode == 1) then {
            playSound "ark_nvg_on";
        };
        if (_visionMode == 0) then {
            playSound "ark_nvg_off";
        };
    };
}];

ark_player_nvgs_fnc_enableOverlay = {
    ark_player_nvgs_ppHandle = ppEffectCreate ["colorCorrections", 1501];
    ark_player_nvgs_ppHandle ppEffectAdjust [0.4, 0.6, 0, [0, 0.1, 0.4, 0], [0.3, 0.9, 2.4, 0], [1, 1, 1, 0]];
    ark_player_nvgs_ppHandle ppEffectForceInNVG true;
    ark_player_nvgs_ppHandle ppEffectCommit 0;

    if (isNil "ark_player_nvgs_nvgEH") then {
        ark_player_nvgs_nvgEH = ["visionMode", {
            params ["_unit", "_visionMode"];

            if (_visionMode isEqualTo 1) then {
                ark_player_nvgs_ppHandle ppEffectEnable true;
            };

            if (_visionMode isEqualTo 0) then {
                ark_player_nvgs_ppHandle ppEffectEnable false;
            };
        }] call CBA_fnc_addPlayerEventHandler;
    };

    if (visibleMap) then {
        openMap false;
        [["\A3\ui_f\data\map\MapControl\taskicondone_ca.paa", 2.0], ["Colour blind overlay enabled"]] call CBA_fnc_notify;
    };
};

ark_player_nvgs_fnc_disableOverlay = {
    ark_player_nvgs_ppHandle ppEffectEnable false;
    ppEffectDestroy ark_player_nvgs_ppHandle;
    if (visibleMap) then {
        openMap false;
        [["\A3\ui_f\data\map\MapControl\taskiconfailed_ca.paa", 2.0], ["Colour blind overlay disabled"]] call CBA_fnc_notify;
    };
};

player addEventHandler ["Killed", {call ark_player_nvgs_fnc_disableOverlay}];

player createDiaryRecord ["Diary", ["Colour blind Mode",
"<br/>
Some members struggle with green overlays due to colour blindness. This adds a filter to change the colour to something useable!
<br/><br/>
Toggle: <execute expression = 'call ark_player_nvgs_fnc_enableOverlay' >ON</execute> / <execute expression = 'call ark_player_nvgs_fnc_disableOverlay' >OFF</execute>"
]];