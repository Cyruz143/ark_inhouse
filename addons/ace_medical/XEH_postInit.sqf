#include "script_component.hpp"

if (hasInterface) then {
    ["ace_treatmentSucceded",{
        params ["_caller", "_target", "", "_className"];

        if (!alive _target) exitWith {
            if (group _target isEqualTo grpNull) then {
                LOG_1("ace_treatmentSucceded, Unit (%1) had no group",_target);
            } else {
                [_target] joinSilent grpNull;
                LOG_2(" ace_treatmentSucceded, Removed unit (%1) from group (%2)",_target,group _target);
            };
        };

        ["ark_medicalMessage", [_caller,_className], _target] call CBA_fnc_targetEvent;
    }] call CBA_fnc_addEventHandler;

    ["ark_medicalMessage", {
        params ["_medic","_className"];

        if (!(player getVariable ["ACE_isUnconscious", false])) exitWith {};

        private _medicName = [_medic] call ace_common_fnc_getName;
        private _text = format ["<t shadow='2' size='0.5' font='EtelkaMonospaceProBold'>You're being treated by %1</t>", _medicName];

        switch (_className) do {
            case "ApplyTourniquet" : {_text = format ["<t shadow='2' size='0.5' font='EtelkaMonospaceProBold'>You're having a tourniquet applied by %1</t>", _medicName]};
            case "BasicBandage" : {_text = format ["<t shadow='2' size='0.5' font='EtelkaMonospaceProBold'>You're being bandaged by %1</t>", _medicName]};
            case "Splint" : {_text = format ["<t shadow='2' size='0.5' font='EtelkaMonospaceProBold'>You're having a limb splinted by %1</t>", _medicName]};
            case "Morphine" : {_text = format ["<t shadow='2' size='0.5' font='EtelkaMonospaceProBold'>You're receiving an injection by %1</t>", _medicName]};
            case "Epinephrine" : {_text = format ["<t shadow='2' size='0.5' font='EtelkaMonospaceProBold'>You're receiving an injection by %1</t>", _medicName]};
            case "BloodIV_500" : {_text = format ["<t shadow='2' size='0.5' font='EtelkaMonospaceProBold'>You're being given a transfusion by %1</t>", _medicName]};
            default {};
        };

        [_text,-1,(safeZoneH + safeZoneY) -  18 * (pixelH * pixelGrid),5,0,0] spawn BIS_fnc_dynamicText;
    }] call CBA_fnc_addEventHandler;
};

if (isServer) then {
    call FUNC(setMedicalSettings);

    ["LandVehicle", "init", {
        params ["_vehicle"];
        _vehicle call FUNC(vehicleDismount);
    }] call CBA_fnc_addClassEventHandler;
};
