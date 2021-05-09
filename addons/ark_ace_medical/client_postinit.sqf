["ace_treatmentSucceded",{
    params ["", "_target"];

    if (!alive _target) then {
        if (group _target isEqualTo grpNull) then {
            diag_log "[ARK] (ACE Medical) - Unit had no group";
        } else {
            [_target] joinSilent grpNull;
            diag_log format ["[ARK] (ACE Medical) - Removed unit: %1 from group: %2",_target, group _target];
        };
    };
}] call CBA_fnc_addEventHandler;