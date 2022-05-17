addMissionEventHandler ["BuildingChanged", {call ark_building_cleaner_fnc_doClean}];

ark_building_cleaner_fnc_doClean = {
    params ["_buildingOld", "_buildingNew", "_isRuin"];

    if (_isRuin) then {
        private _radius = (0 boundingBoxReal _buildingOld) #2;
        private _buildingPos = getPos _buildingOld;
        private _entities = entities [["Man","Thing"], ["Logic"]] select {_x distance _buildingPos < _radius};
        private _objects = nearestObjects [_buildingPos, ["StaticWeapon","Strategic","NonStrategic","Thing"], _radius];

        // Dont delete the "new" ruin!
        _objects deleteAt (_objects find _buildingNew);

        // Can remove deleteVehicle on 2.10 ref: T63050
        {
            if (!isPlayer _x) then {
                if (alive _x) then {
                    _x setDamage 1;
                } else {
                    deleteVehicle _x;
                };
            };
        } forEach _entities;

        {deleteVehicle _x} forEach _objects;

        ["Building Cleaner","INFO","fnc_doClean","Killed AI and removed objects from a ruin"] call ark_admin_tools_fnc_log;
    };
};