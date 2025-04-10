#include "script_component.hpp"

if (hasInterface) exitWith {};

GVAR(bloodModels) = [
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodPool_01_Large_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodPool_01_Medium_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSplatter_01_Large_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSplatter_01_Medium_F.p3d",
    "a3\Props_F_Orange\Humanitarian\Garbage\BloodSpray_01_F.p3d"
];

addMissionEventHandler ["EntityKilled", {
    _this call FUNC(createBlood);
}];
