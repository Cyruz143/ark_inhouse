/*
 *   Shamelessly borrowed from https://github.com/acemod/ACE3/pull/7443
 *   Can replace this with `player call ACE_hitreactions_fnc_throwWeapon` once merged
 */

ark_ace_medical_fnc_throwGun = {
    params ["_unit"];

    private _weapon = currentWeapon _unit;
    if (!isNull objectParent _unit || _weapon isEqualTo "") exitWith {objNull};

    private _data = weaponsItems _unit select {_x select 0 == _weapon} select 0;

    private _holder = createVehicle ["WeaponHolderSimulated", [0,0,0], [], 0, "CAN_COLLIDE"];
    _holder addWeaponWithAttachmentsCargoGlobal [_data, 1];

    private _vDir = _unit weaponDirection _weapon;
    private _vLat = vectorNormalized (_vDir vectorCrossProduct [0,0,1]);
    private _vUp = _vLat vectorCrossProduct _vDir;

    private _position = _unit modelToWorldWorld (_unit selectionPosition "RightHand") vectorAdd (_vLat vectorMultiply 0.59);
    private _velocity = vectorNormalized (_vDir vectorAdd (_vUp vectorMultiply 2)) vectorMultiply 1.5 vectorAdd velocity _unit;

    _unit removeWeapon _weapon;
    _holder setPosWorld _position;
    _holder setVectorDirAndUp [_vUp, _vLat];
    _holder setVelocity _velocity;
    _holder addTorque (call CBA_fnc_randomVector3D vectorMultiply 0.2);

    _holder // return
};

["ace_unconscious", {
    params ["_unit", "_state"];

    if (!local _unit || { !_state } || { !alive _unit } || { !isNull objectParent _unit }) exitWith {};
    player call ark_ace_medical_fnc_throwGun;
}] call CBA_fnc_addEventHandler;