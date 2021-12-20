addMissionEventHandler ["BuildingChanged", {call ark_building_cleaner_fnc_doClean}];

ark_building_cleaner_fnc_doClean = {
    params ["_buildingOld", "_buildingNew", "_isRuin"];

    if (_isRuin) then {
        private _radius = (0 boundingBoxReal _buildingOld) #2;
        private _buildingPos = getPos _buildingOld;
        private _buildingEntities = entities [["Man","Thing"], ["Logic"], true] select {_x distance _buildingPos < _radius};
        private _buildingObjects = nearestObjects [_buildingPos, ["StaticWeapon","Strategic","Thing"], _radius];
        _buildingObjects deleteAt (_buildingObjects find _buildingNew);
        {deleteVehicle _x} forEach _buildingObjects;

        {
            if (!isPlayer _x) then {
                if (alive _x) then {
                    _x setDamage 1;
                } else {
                    deleteVehicle _x;
                };
            };
        } forEach _buildingEntities;

        ["Building Cleaner","INFO","fnc_doClean","Killed AI and removed objects from a ruin"] call ark_admin_tools_fnc_log;
    };
};