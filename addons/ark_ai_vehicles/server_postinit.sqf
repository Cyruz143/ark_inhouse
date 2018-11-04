["Car", "Dammaged", {call ark_ai_vehicles_vehicleDamaged}] call CBA_fnc_addClassEventHandler;

ark_ai_vehicles_pfh_vehicleLoop = [{
        {
            if ((_x isKindOf "Car" || _x isKindOf "Tank") && (count crew _x > 0) && alive _x) then {
                if (!alive (gunner _x) && alive (driver _x) && !isPlayer (driver _x)) then {
                    [_x] call ark_ai_vehicles_fnc_gunnerDead;
                };
            };
        } forEach vehicles;
}, 15] call CBA_fnc_addPerFrameHandler;

ark_ai_vehicles_vehicleDamaged = {
    params ["_vehicle","","","","_hitPoint"];

    _vehicle setVariable ["ark_ai_vehicles_last_hit", time, true];
    private _wheelArray = ["hitlfwheel", "hitlbwheel", "hitlmwheel", "hitlf2wheel", "hitrfwheel", "hitrbwheel", "hitrmwheel", "hitrf2wheel"];

    if !(_hitPoint in _wheelArray) exitWith {};

    if (!isNull (driver _vehicle) && !isPlayer (driver _vehicle) && !(canMove _vehicle)) then {
        [_vehicle] call ark_ai_vehicles_canRepair;
    };
};

ark_ai_vehicles_canRepair = {
    params ["_vehicle"];

    private _cookingOff = _vehicle getVariable ["ACE_cookoff_isCookingOff", false];
    private _waitingToRepair = _vehicle getVariable ["ark_ai_vehicles_awaiting_repair", false];
    private _gunnerDead = _vehicle getVariable ["ark_ai_vehicles_gunner_dead", false];

    if (_cookingOff || _waitingToRepair) exitWith {
        diag_log "[ARK] (AI Vehicles) - Vehicle is cooking off / waiting to be repaired already";
    };

    if (_gunnerDead) exitWith {
        diag_log "[ARK] (AI Vehicles) - Aborting repair due to gunner death";
    };

    _vehicle setVariable ["ark_ai_vehicles_awaiting_repair", true, true];

    [
        {
            private _lastHit = (_this #0) getVariable ["ark_ai_vehicles_last_hit", 0];
            private _outOfCombatDelayTime = _lastHit + 10;

            time >= _outOfCombatDelayTime
        },
        {[(_this #0)] call ark_ai_vehicles_doRepair},
        [_vehicle],
        30,
        {[(_this #0)] call ark_ai_vehicles_doRepair}
    ] call CBA_fnc_waitUntilAndExecute;
};

ark_ai_vehicles_doRepair = {
    params ["_vehicle"];

    private _driver = driver _vehicle;
    private _vehicleClassName = typeOf _vehicle;

    if (_driver != _vehicle && alive _driver) then {

        _vehicle setVariable ["ark_ai_vehicles_awaiting_repair", true, true];

        [_vehicle,_driver,_vehicleClassName] spawn {
            params ["_vehicle","_driver","_vehicleClassName"];

            _vehicle forceSpeed 0;
            sleep 2;

            private _group = group _driver;
            _group lockWP true;
            private _wp = _group addWaypoint [getPos _driver, 0, currentWaypoint _group];

            {
                _driver disableAI _x;
            } forEach ["TARGET", "AUTOTARGET", "PATH", "FSM", "AUTOCOMBAT"];
            
            doGetOut _driver;
            sleep 2;

            _driver setVectorDir (getpos _driver vectorFromTo getpos _vehicle);
            _driver playMoveNow "Acts_carFixingWheel";
            sleep 15;

            if (!alive _driver || !alive _vehicle) exitWith {
                _vehicle setVariable ["ark_ai_vehicles_awaiting_repair", false, true];
            };

            {
                _vehicle setHit [getText(configFile >> "cfgVehicles" >> _vehicleClassName >> "HitPoints" >> _x >> "name"), 0, true];
            } forEach ["HitLFWheel", "HitLBWheel", "HitLMWheel", "HitLF2Wheel", "HitRFWheel", "HitRBWheel", "HitRMWheel", "HitRF2Wheel"];

            _vehicle setPosATL [getPosATL _vehicle #0, getPosATL _vehicle #1, 0.5];

            _driver playMove "";
            _driver assignAsDriver _vehicle;
            _driver moveInDriver _vehicle;
            _driver enableAI "ALL";
            _vehicle forceSpeed -1;
            
            deleteWaypoint [_group, currentWaypoint _group];
            _group lockWP false;
            
            _vehicle setVariable ["ark_ai_vehicles_awaiting_repair", false, true];
        };
    };
};

ark_ai_vehicles_fnc_gunnerDead = {
    params ["_vehicle"];
    private _driver = driver _vehicle;
    private _allTurrets = allTurrets [_vehicle, false];
    private _gunnerTurret = [_vehicle] call ace_common_fnc_getTurretGunner;

    if (isNil "_allTurrets" || { count _allTurrets == 0 }) exitWith {
        diag_log "[ARK] (AI Vehicles) - Vehicle has no turrets";
    };
    _vehicle setVariable ["ark_ai_vehicles_gunner_dead", true, true];

    [_vehicle,_driver,_gunnerTurret] spawn {
        params ["_vehicle","_driver","_gunnerTurret"];

        _vehicle forceSpeed 0;
        sleep 4;
        doGetOut _driver;
        sleep 2;
        _driver assignAsTurret [_vehicle,_gunnerTurret];
        _driver moveInTurret [_vehicle,_gunnerTurret];
    };
};