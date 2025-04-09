ark_deploy_fnc_initVariables = {
    ark_deploy_deployEnabled = false; // module sets this to true
    ark_deploy_deployActive = false;
    ark_deploy_preDeployRequired = false;
    ark_deploy_preDeployActive = false;
    ark_deploy_deployActive = false;
    ark_deploy_pre_factions = [];
    ark_deploy_post_factions = [];
};

ark_deploy_module_init = {
    params ["_logic"];

    ark_deploy_pre_factions = _logic getVariable "Pre_Safety";
    ark_deploy_post_factions = _logic getVariable "Post_Safety";
    ark_deploy_pre_factions = call compile ark_deploy_pre_factions;
    ark_deploy_post_factions = call compile ark_deploy_post_factions;
    if (count ark_deploy_pre_factions > 0) then {
        ark_deploy_preDeployRequired = true;
    };
    ark_deploy_deployEnabled = true;
    publicVariable "ark_deploy_deployEnabled";
    publicVariable "ark_deploy_deployActive";
    publicVariable "ark_deploy_preDeployActive";
    publicVariable "ark_deploy_preDeployRequired";
    publicVariable "ark_deploy_pre_factions";
    publicVariable "ark_deploy_post_factions";

    //Return true because spawnd from module
    true;
};

ark_deploy_fnc_assignDeployClick = {
    params ["_unit"];

    [["\x\ark\addons\main\resources\click.paa", 2.0], ["Click anywhere on the map to deploy"]] call CBA_fnc_notify;
    openMap [true, true];
    _unit onMapSingleClick {
        if (surfaceIsWater _pos) then {
            [_this, _pos] call ark_fnc_ch_waterDeploy;
        } else {
            [_this, _pos] call ark_fnc_ch_landDeploy;
        };
    };
};

ark_fnc_ch_waterDeploy = {
    params ["_unit", "_position"];

    _unit setVariable ["ark_deploy_canDeploy", false, true];
    onMapSingleClick "";

    private _underSurface = (abs (getTerrainHeightASL _position)) / 2;
    private _aliveUnits = [];

    {
        if (alive _x) then {
            _aliveUnits pushBack _x;
        };
    } forEach units (group _unit);

    {
        _x setPosWorld (_x modelToWorldWorld [0,0,0]);
        [{(_this #0) setPosASL [(_this #1),(_this #2),-(_this #3)]}, [_x, _position #0, _position #1, _underSurface]] call CBA_fnc_execNextFrame;
    } forEach _aliveUnits;

    openMap [false, false];
};

ark_fnc_ch_landDeploy = {
    params ["_unit", "_position"];

    _unit setVariable ["ark_deploy_canDeploy", false, true];
    onMapSingleClick "";

    private _aliveUnits = [];
    {
        if (alive _x) then {
            _aliveUnits pushBack _x;
        };
    } forEach units (group _unit);

    {
        _x setPosWorld (_x modelToWorldWorld [0,0,0]);
        [{(_this #0) setPosATL [(_this #1),(_this #2),0]}, [_x, _position #0, _position #1]] call CBA_fnc_execNextFrame;
    } forEach _aliveUnits;

    openMap [false, false];
};

ark_deploy_fnc_activatePreGroupDeploy = {
    [["\x\ark\addons\main\resources\click.paa", 2.0], ["Activating (Pre Safety) Group Deploy now"]] call CBA_fnc_notify;
    ark_deploy_preDeployActive = true;
    publicVariable "ark_deploy_preDeployActive";
    {
        if ((_x isEqualTo leader group _x) && (side _x in ark_deploy_pre_factions)) then {
            _x setVariable ["ark_deploy_canDeploy", true, true];
        };
    } forEach allUnits;
};

ark_deploy_fnc_activatePostGroupDeploy = {
    [["\x\ark\addons\main\resources\click.paa", 2.0], ["Activating (Post Safety) Group Deploy now"]] call CBA_fnc_notify;
    ark_deploy_deployActive = true;
    publicVariable "ark_deploy_deployActive";
    {
        if ((_x isEqualTo leader group _x) && (side _x in ark_deploy_post_factions)) then {
            _x setVariable ["ark_deploy_canDeploy", true, true];
        };
    } forEach allUnits;
};

ark_deploy_fnc_canPlayerPostDeploy = {
    params ["_unit"];

    private _canDeploy = _unit getVariable ["ark_deploy_canDeploy", false];
    (_canDeploy && ark_deploy_deployActive && ((side _unit) in ark_deploy_post_factions));
};

ark_deploy_fnc_canPlayerPreDeploy = {
    params ["_unit"];

    private _canDeploy = _unit getVariable ["ark_deploy_canDeploy", false];
    (_canDeploy && ark_deploy_preDeployActive && (side _unit in ark_deploy_pre_factions));
};

call ark_deploy_fnc_initVariables;
