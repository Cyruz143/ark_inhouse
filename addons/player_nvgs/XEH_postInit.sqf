#include "script_component.hpp"

if (!hasInterface) exitWith {};

player addEventHandler ["VisionModeChanged", {
    params ["_person", "_visionMode"];
    if (isNull objectParent _person) then {
        private _visionModeSound = ["ark_nvg_off", "ark_nvg_on"] select _visionMode;
        playSound _visionModeSound;
    };
}];

player addEventHandler ["Killed", {
    _this call FUNC(disableOverlay);
}];

player createDiaryRecord ["Diary", ["Colour blind Mode",
    "<br/>
    Some members struggle with green overlays due to colour blindness. This adds a filter to change the colour to something useable!
    <br/><br/>
    Toggle: <execute expression = 'call ark_player_nvgs_fnc_enableOverlay' >ON</execute> / <execute expression = 'call ark_player_nvgs_fnc_disableOverlay' >OFF</execute>"
]];
