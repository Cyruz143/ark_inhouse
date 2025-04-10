#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * Adds player actions for races.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_race_fnc_addActions
 */

player addAction ["<t color='#FF0000'>B O O S T</t>", {
    objectParent player call FUNC(goFast);
},nil,50,false,true,"","!(isNull objectParent player)"];

player addAction ["<t color='#009900'>Unflip Car</t>", {
    objectParent player call FUNC(flipCar);
},nil,2,false,true,"","!(isNull objectParent player) && {speed objectParent player < 2}"];
