[{
  {
    if (!(_x isKindOf "LandVehicle") || _x isKindOf "StaticWeapon") exitWith {};
    if (!canMove _x && !isnull (driver _x) && !((driver _x) in PlayableUnits)) then {[_x] call ark_fnc_vehicleRepair};
    
    private _isEHAlreadyApplied = _x getVariable ["ark_ai_vehicles_repair_eh_applied", false];
    if (_isEHAlreadyApplied) exitWith {};
    
    _x addEventHandler ["Hit", {[_this select 0] call ark_fnc_vehicleHit}];
    _x setVariable ["ark_ai_vehicles_repair_eh_applied", true, true];
  } forEach vehicles;
  
}, 15] call CBA_fnc_addPerFrameHandler;

ark_fnc_vehicleHit = {
  private _vehicle = _this select 0;
  
  _vehicle setVariable ["ark_ai_vehicles_last_hit", time, true];
};

ark_fnc_vehicleRepair = {
    private _vehicle = _this select 0;
    private _driver = driver _vehicle;
      
    private _waitingToRepair = _vehicle getVariable ["ark_ai_vehicles_awaiting_repair", false];

    if (_waitingToRepair) exitWith {};

    if (_driver != _vehicle && alive _driver) then {

        _vehicle setVariable ["ark_ai_vehicles_awaiting_repair", true, true];

        [_vehicle,_driver] spawn {
            params ["_vehicle","_driver"];

            waitUntil {
              private _lastHit = _vehicle getVariable ["ark_ai_vehicles_last_hit", 0];
              private _outOfCombatDelayTime = _lastHit + 10;

              (_driver findNearestEnemy _driver) distance _driver > 250 && time >= _outOfCombatDelayTime || time - _lastHit > 60;
            };

            _vehicle forceSpeed 0;
            sleep 2;

            {_driver disableAI _x;} forEach ["TARGET", "AUTOTARGET", "PATH", "FSM", "AUTOCOMBAT"];
            doGetOut _driver;
            sleep 2;

            _driver setVectorDir (getpos _driver vectorFromTo getpos _vehicle);
            _driver playMoveNow "Acts_carFixingWheel";
            sleep 15;

            if (!alive _driver || !alive _vehicle) exitWith {
                _vehicle setVariable ["ark_ai_vehicles_awaiting_repair", false, true];
            };

            _vehicle setDamage 0;

            _driver playMove "";
            _driver moveInDriver _vehicle;
            {_driver enableAI _x;} forEach ["TARGET", "AUTOTARGET", "PATH", "FSM", "AUTOCOMBAT"];

            _vehicle setVelocity [0,0,2];
            _vehicle forceSpeed -1;
            _vehicle setVariable ["ark_ai_vehicles_awaiting_repair", false, true];
        };
    };
};