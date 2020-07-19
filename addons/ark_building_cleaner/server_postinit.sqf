addMissionEventHandler ["BuildingChanged", {call ark_building_cleaner_fnc_doClean}];

ark_building_cleaner_fnc_doClean = {
    params ["_buildingOld", "_buildingNew", "_isRuin"];

    if (_isRuin) then {
        private _radius = (0 boundingBoxReal _buildingOld) #2
        private _buildingPos = getPos _buildingOld;
        private _buildingEntities = entities [["Man","Thing"], ["Logic"], true] select {_x distance _buildingPos < _radius};
        private _buildingObjects = nearestObjects [_buildingPos, ["LandVehicle","Strategic","Thing"], _radius];
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

        diag_log "[ARK] (Building Cleaner) - Killed AI and removed objects from a ruin";
    };
};