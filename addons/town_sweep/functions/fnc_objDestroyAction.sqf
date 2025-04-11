#include "..\script_component.hpp"
/*
 * Author: Cyruz
 * N/A
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call ark_town_sweep_fnc_objDestroyAction
 */

private _action = [
    "destroyCache",
    "Destroy Cache",
    "\a3\ui_f\data\igui\cfg\simpletasks\types\danger_ca.paa",
    {
        player playActionNow "PutDown";
        [5,
            _target,
            {
                params ["_target"];
                _target setVariable ["ark_ts_canDestroy", false, true];
                [QGVAR(objDestroyCacheEvent), []] call CBA_fnc_serverEvent;
                [["\A3\ui_f\data\map\mapcontrol\taskIconDone_ca.paa", 2.0], ["Charges set for 30 seconds!"]] call CBA_fnc_notify;
            }, {
                [["\A3\ui_f\data\map\mapcontrol\taskIconFailed_ca.paa", 2.0], ["Destruction aborted!"]] call CBA_fnc_notify;
            },
            "Placing charges..."
        ] call ace_common_fnc_progressBar;
    },
    {_target getVariable ["ark_ts_canDestroy", true]}
] call ace_interact_menu_fnc_createAction;

["CUP_BOX_GER_Wps_F", 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToClass;
