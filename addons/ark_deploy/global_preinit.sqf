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
    params ["_logic","","_activated"];

    if !(_activated) exitWith {
        diag_log "[ARK] (Deploy) - Module not activated";
    };
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
};

ark_deploy_fnc_assignDeployClick = {
    params ["_unit"];

    hint "Click anywhere on the map to deploy";
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
    private _pos_x = _position #0;
    private _pos_y = _position #1;

    {
        if (alive _x) then {
            _aliveUnits pushBack _x;
        };
    } forEach units (group _unit);

    {
       if (isWeaponDeployed _x || { isWeaponRested _x }) then {
            _x setPosASL (_x modelToWorldWorld [0,0,0]);
        };

        [
            {!(isWeaponDeployed (_this #0)) && !(isWeaponRested (_this #0))},
            {(_this #0) setposASL [(_this #1),(_this #2),-(_this #3)]},
            [_x,_pos_x,_pos_y,_underSurface],
            1,
            {(_this #0) setposASL [(_this #1),(_this #2),-(_this #3)]}
        ] call CBA_fnc_waitUntilAndExecute;
    } forEach _aliveUnits;

    openMap [false, false];
};

ark_fnc_ch_landDeploy = {
    params ["_unit", "_position"];

    _unit setVariable ["ark_deploy_canDeploy", false, true];
    onMapSingleClick "";

    private _aliveUnits = [];
    private _pos_x = _position #0;
    private _pos_y = _position #1;

    {
        if (alive _x) then {
            _aliveUnits pushBack _x;
        };
    } forEach units (group _unit);

    {
       if (isWeaponDeployed _x || { isWeaponRested _x }) then {
            _x setPosASL (_x modelToWorldWorld [0,0,0]);
        };

        [
            {!(isWeaponDeployed (_this #0)) && !(isWeaponRested (_this #0))},
            {(_this #0) setposATL [(_this #1),(_this #2), 0]},
            [_x,_pos_x,_pos_y],
            1,
            {(_this #0) setposATL [(_this #1),(_this #2), 0]}
        ] call CBA_fnc_waitUntilAndExecute;
    } forEach _aliveUnits;

    openMap [false, false];
};

ark_deploy_fnc_activatePreGroupDeploy = {
    hint "Activating (Pre Safety) Group Deploy now";
    ark_deploy_preDeployActive = true;
    publicVariable "ark_deploy_preDeployActive";
    {
        if ((_x isEqualTo leader group _x) && (side _x in ark_deploy_pre_factions)) then {
            _x setVariable ["ark_deploy_canDeploy", true, true];
        };
    } forEach allUnits;
};

ark_deploy_fnc_activatePostGroupDeploy = {
    hint "Activating (Post Safety) Group Deploy now";
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
