addMissionEventHandler ["BuildingChanged", {
     params ["_buildingOld", "_buildingNew", "_isRuin"];
     if (_isRuin) then {
         private _buildingPos = getPos _buildingOld;
         private _radius = sizeOf typeOf _buildingOld / 2;
         private _aiInBuilding = _buildingPos nearEntities ["Man", _radius];
         private _objectsInBuilding = _buildingPos nearObjects ["Thing",_radius];
         {
            if (!isPlayer _x) then {
                _x setDamage [1, false];
            };
         } forEach _aiInBuilding;

         {
            deleteVehicle _x;
         } forEach _objectsInBuilding;

         diag_log "[ARK] (Building Cleaner) - Killed AI and removed objects from a ruin";
     };
 }];