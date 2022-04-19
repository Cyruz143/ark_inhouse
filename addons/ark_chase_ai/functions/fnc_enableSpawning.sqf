ark_chase_ai_fnc_enableSpawning = {
    params ["_enabled"];

    if (_enabled && { ark_chase_ai_var_spawning }) exitWith {
        ["Chase AI", "ERROR","fnc_enableSpawning","You tried to enable spawning while it was already enabled!"] call ark_admin_tools_fnc_log;
    };

    ark_chase_ai_var_spawning = _enabled;

    if (_enabled) then {
        if (isNil "ark_chase_ai_grp") then {
            ark_chase_ai_grp = createGroup ark_chase_ai_var_side;
            ark_chase_ai_grp deleteGroupWhenEmpty true;
            ark_chase_ai_grp enableAttack false;
        };
        call ark_chase_ai_fnc_unitSpawner;
    };
};