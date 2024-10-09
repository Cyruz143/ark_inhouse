#include "hull3_macros.h"

#include "\userconfig\hull3\log\gear.h"
#include "logbook.h"


#define INFIX_FUNC(FUNC)                        {(_this select 0) FUNC (_this select 1)}
#define ASSIGN_UNIFORM_ITEM_FUNC                INFIX_FUNC(addItemToUniform)
#define ASSIGN_VEST_ITEM_FUNC                   INFIX_FUNC(addItemToVest)
#define ASSIGN_BACKPACK_ITEM_FUNC               INFIX_FUNC(addItemToBackpack)
#define ASSIGN_PRIMARY_WEAPON_FUNC              INFIX_FUNC(addWeapon)
#define ASSIGN_PRIMARY_WEAPON_ITEM_FUNC         INFIX_FUNC(addPrimaryWeaponItem)
#define ASSIGN_SECONDARY_WEAPON_FUNC            INFIX_FUNC(addWeapon)
#define ASSIGN_SECONDARY_WEAPON_ITEM_FUNC       INFIX_FUNC(addSecondaryWeaponItem)
#define ASSIGN_HANDGUN_WEAPON_FUNC              INFIX_FUNC(addWeapon)
#define ASSIGN_HANDGUN_ITEM_FUNC                INFIX_FUNC(addHandgunItem)
#define ASSIGN_LINK_ITEM_FUNC                   INFIX_FUNC(linkItem)
#define CAN_ASSIGN_UNIFORM_ITEM_FUNC            INFIX_FUNC(canAddItemToUniform)
#define CAN_ASSIGN_VEST_ITEM_FUNC               INFIX_FUNC(canAddItemToVest)
#define CAN_ASSIGN_BACKPACK_ITEM_FUNC           INFIX_FUNC(canAddItemToBackpack)
#define CAN_ASSIGN_PRIMARY_WEAPON_FUNC          {primaryWeapon (_this select 0) == ""}
#define CAN_ASSIGN_PRIMARY_WEAPON_ITEM_FUNC     {!((_this select 1) in primaryWeaponItems (_this select 0))}
#define CAN_ASSIGN_SECONDARY_WEAPON_FUNC        {secondaryWeapon (_this select 0) == ""}
#define CAN_ASSIGN_SECONDARY_WEAPON_ITEM_FUNC   {!((_this select 1) in secondaryWeaponItems (_this select 0))}
#define CAN_ASSIGN_HANDGUN_WEAPON_FUNC          {handgunWeapon (_this select 0) == ""}
#define CAN_ASSIGN_HANDGUN_ITEM_FUNC            {!((_this select 1) in handgunItems (_this select 0))}
#define CAN_LINK_ITEM_FUNC                      {true}



hull3_gear_fnc_preInit = {
    hull3_gear_unitBaseClass = [TYPE_CLASS_GEAR, "unitBaseClass"] call hull3_config_fnc_getText;
    hull3_gear_vehicleBaseClass = [TYPE_CLASS_GEAR, "vehicleBaseClass"] call hull3_config_fnc_getText;
    [] call hull3_gear_fnc_addEventHandlers;
    DEBUG("hull3.gear","Gear functions preInit finished.");
};

hull3_gear_fnc_addEventHandlers = {
};

hull3_gear_fnc_assign = {
    params ["_unit", "_factionEntry", "_gearEntry", "_uniformEntry"];

    [_unit, _factionEntry] call hull3_gear_fnc_validateFaction;
    private _faction = [_unit, _factionEntry] call hull3_gear_fnc_getFaction;
    private _gearTemplate = [_unit, _factionEntry, _gearEntry] call hull3_gear_fnc_getTemplate;
    private _gearClass = [_unit, _gearEntry, _gearTemplate] call hull3_gear_fnc_getClass;
    if (_unit isKindOf "CAManBase") then {
        private _uniformTemplate = [_unit, _factionEntry, _uniformEntry] call hull3_uniform_fnc_getTemplate;
        [_unit, _faction, _gearTemplate, _uniformTemplate, _gearClass] call hull3_gear_fnc_assignUnit;
    } else {
        [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignVehicle;
    };
    _unit setVariable ["hull3_gear_isAssgined", true, true];
    ["gear.assigned", [_unit]] call hull3_event_fnc_emitEvent;
};

hull3_gear_fnc_assignUnit = {
    params ["_unit", "_faction", "_gearTemplate", "_uniformTemplate", "_gearClass"];

    DEBUG("hull3.gear.assign",FMT_4("Set faction to '%1', gear template to '%2', uniform template to '%3' and gear class to '%4'.",_faction,_gearTemplate,_uniformTemplate,_gearClass));
    [_unit, _uniformTemplate] call hull3_uniform_fnc_assignUniformInit;
    [_unit, _gearTemplate, _uniformTemplate, _gearClass] call hull3_uniform_fnc_assignUniformTemplate;
    [_unit, _faction, _gearTemplate, _gearClass] call hull3_gear_fnc_assignUnitInit;
    [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignUnitTemplate;

    // Wait to make sure client has time syncd back from server for light value
    [{time > 10}, {_this call hull3_gear_fnc_tryRemoveNightGear}, [_unit]] call CBA_fnc_waitUntilAndExecute;
};

hull3_gear_fnc_assignVehicle = {
    params ["_unit", "_gearTemplate", "_gearClass"];

    [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignVehicleInit;
    [_unit, _gearTemplate, _gearClass] call hull3_gear_fnc_assignVehicleTemplate;

    // Wait 1 frame as cargo needs to loaded in postInit
    if (["Logistics", "enableMedicalCrates"] call hull3_config_fnc_getBool) then {
        [{
            [_this] call hull3_gear_fnc_assignVehicleCrates;
            DEBUG("hull3.gear.assign",FMT_1("Trying to add medical crate to '%1'.",_this));
        }, _unit] call CBA_fnc_execNextFrame;
    };
};

hull3_gear_fnc_assignUnitInit = {
    params ["_unit", "_faction", "_template", "_class"];

    _unit setVariable ["hull3_faction", _faction, true];
    _unit setVariable ["hull3_gear_class", _class, true];
    _unit setVariable ["hull3_gear_template", _template, true];
    DEBUG("hull3.gear.assign",FMT_1("Initialized unit '%1' gear.",_unit));
};

hull3_gear_fnc_assignVehicleInit = {
    params ["_vehicle"];

    clearMagazineCargoGlobal _vehicle;
    clearWeaponCargoGlobal _vehicle;
    clearItemCargoGlobal _vehicle;
    clearBackpackCargoGlobal _vehicle;
    DEBUG("hull3.gear.assign",FMT_1("Initialized vehicle '%1' gear.",_vehicle));
};

hull3_gear_fnc_assignVehicleCrates = {
    params ["_vehicle"];

    private _cargoSpace = [_vehicle] call ace_cargo_fnc_getCargoSpaceLeft;

    if (_cargoSpace > 1) then {
        private _crate = "ARK_medicalSupplyCrate" createVehicle [0,0,0];
        private _loaded = [_crate, _vehicle, true] call ace_cargo_fnc_loadItem;
        if (_loaded) then {
            DEBUG("hull3.gear.assign",FMT_2("Successfully added crate '%1' added to ACE cargo of '%2'!",_crate,_vehicle));
        } else {
            DEBUG("hull3.gear.assign",FMT_2("Failed to add crate '%1' added to ACE cargo of '%2'!",_crate,_vehicle));
        };
    };
};

hull3_gear_fnc_validateFaction = {
    params ["_unit", "_factionEntry"];

    if (count _factionEntry > 0 && {!isClass ([FACTION_CONFIG, _factionEntry select 0] call hull3_config_fnc_getConfig)}) then {
        WARN("hull3.gear.assign",FMT_2("No faction found with name '%1' for unit '%2'!",_factionEntry select 0,_unit));
    };
};

hull3_gear_fnc_getFaction = {
    params ["_unit", "_factionEntry"];

    private _faction = DEFAULT_FACTION_NAME;
    if (count _factionEntry > 0 && {isClass ([FACTION_CONFIG, _factionEntry select 0] call hull3_config_fnc_getConfig)}) then {
        _faction = _factionEntry select 0;
    };

    _faction;
};

hull3_gear_fnc_getClass = {
    params ["_unit", "_gearEntry", "_gearTemplate"];

    private _gearClass = hull3_gear_unitBaseClass;
    if (count _gearEntry > 0) then {
        if (isClass ([TYPE_CLASS_GEAR, _gearTemplate, _gearEntry select 0] call hull3_config_fnc_getConfig)) then {
            _gearClass = _gearEntry select 0;
        } else {
            WARN("hull3.gear.assign",FMT_3("No gear class found with name '%1' in gear template '%2' for unit '%3'!",_gearEntry select 1,_gearTemplate,_unit));
        };
    };

    _gearClass;
};

hull3_gear_fnc_getTemplate = {
    params ["_unit", "_factionEntry", "_gearEntry"];

    private _gearTemplate = DEFAULT_TEMPLATE_NAME;
    if (count _gearEntry > 1) then {
        if (isClass ([TYPE_CLASS_GEAR, _gearEntry select 1] call hull3_config_fnc_getConfig)) then {
            _gearTemplate = _gearEntry select 1;
        } else {
            WARN("hull3.gear.assign",FMT_2("No gear template found with name '%1' for unit '%2'!",_gearEntry select 1,_unit));
        };
    } else {
        DECLARE(_faction) = if (count _factionEntry > 0) then { _factionEntry select 0 } else { faction _unit };
        _gearTemplate = [FACTION_CONFIG, _faction, TYPE_FIELD_GEAR] call hull3_config_fnc_getText;
    };

    _gearTemplate;
};

hull3_gear_fnc_assignUnitTemplate = {
    params ["_unit", "_template", "_class"];

    private _assignables = [
        ["primaryWeapon",           CONFIG_TYPE_TEXT,       "primary weapon",           ASSIGN_PRIMARY_WEAPON_FUNC,         CAN_ASSIGN_PRIMARY_WEAPON_FUNC,         hull3_gear_fnc_assignSingleItem],
        ["primaryWeaponItems",      CONFIG_TYPE_ARRAY,      "primary weapon items",     ASSIGN_PRIMARY_WEAPON_ITEM_FUNC,    CAN_ASSIGN_PRIMARY_WEAPON_ITEM_FUNC,    hull3_gear_fnc_assignSingleItemArray],
        ["secondaryWeapon",         CONFIG_TYPE_TEXT,       "secondary weapon",         ASSIGN_SECONDARY_WEAPON_FUNC,       CAN_ASSIGN_SECONDARY_WEAPON_FUNC,       hull3_gear_fnc_assignSingleItem],
        ["secondaryWeaponItems",    CONFIG_TYPE_ARRAY,      "secondary weapon items",   ASSIGN_SECONDARY_WEAPON_ITEM_FUNC,  CAN_ASSIGN_SECONDARY_WEAPON_ITEM_FUNC,  hull3_gear_fnc_assignSingleItemArray],
        ["handgunWeapon",           CONFIG_TYPE_TEXT,       "handgun weapon",           ASSIGN_HANDGUN_WEAPON_FUNC,         CAN_ASSIGN_HANDGUN_WEAPON_FUNC,         hull3_gear_fnc_assignSingleItem],
        ["handgunItems",            CONFIG_TYPE_ARRAY,      "handgun items",            ASSIGN_HANDGUN_ITEM_FUNC,           CAN_ASSIGN_HANDGUN_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["uniformMagazines",        CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignMultiItemArray],
        ["vestMagazines",           CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignMultiItemArray],
        ["backpackMagazines",       CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignMultiItemArray],
        ["uniformWeapons",          CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["vestWeapons",             CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignSingleItemArray],
        ["backpackWeapons",         CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignSingleItemArray],
        ["basicAssignItems",        CONFIG_TYPE_ARRAY,      "items",                    ASSIGN_LINK_ITEM_FUNC,              CAN_LINK_ITEM_FUNC,                     hull3_gear_fnc_assignSingleItemArray],
        ["assignItems",             CONFIG_TYPE_ARRAY,      "items",                    ASSIGN_LINK_ITEM_FUNC,              CAN_LINK_ITEM_FUNC,                     hull3_gear_fnc_assignSingleItemArray],
        ["binocular",               CONFIG_TYPE_TEXT,       "binocular",                ASSIGN_PRIMARY_WEAPON_FUNC,         CAN_LINK_ITEM_FUNC,                     hull3_gear_fnc_assignSingleItem],
        ["uniformItems",            CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignMultiItemArray],
        ["vestItems",               CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignMultiItemArray],
        ["backpackItems",           CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignMultiItemArray],
        ["uniformMedicalItems",     CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignMultiItemArray],
        ["vestMedicalItems",        CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignMultiItemArray],
        ["backpackMedicalItems",    CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignMultiItemArray]
    ];
    {
        private _configValue = [TYPE_CLASS_GEAR, _template, _class, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        [_x select 0, _unit, _configValue, _x select 2, _x select 3, _x select 4, _template, _class] call (_x select 5);
    } foreach _assignables;
    [_unit, _class, _template] call compile ([TYPE_CLASS_GEAR, _template, _class, "code"] call hull3_config_fnc_getText);
    _unit selectWeapon primaryWeapon _unit;
    DEBUG("hull3.gear.assign",FMT_3("Assigned gear class '%1' from template '%2' to unit '%3'.",_class,_template,_unit));
};

hull3_gear_fnc_assignVehicleTemplate = {
    params ["_vehicle", "_template", "_class"];

    private _assignables = [
        ["magazines",       CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleMagazines],
        ["weapons",         CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleWeapons],
        ["items",           CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems],
        ["radios",          CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems],
        ["medicalItems",    CONFIG_TYPE_ARRAY,      hull3_gear_fnc_assignVehicleItems]
    ];
    {
        DECLARE(_configValue) = [TYPE_CLASS_GEAR, _template, _class, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        [_vehicle, _configValue] call (_x select 2);
    } foreach _assignables;
    [_vehicle, _class, _template] call compile ([TYPE_CLASS_GEAR, _template, _class, "code"] call hull3_config_fnc_getText);
    DEBUG("hull3.gear.assign",FMT_3("Assigned gear class '%1' from template '%2' to vehicle '%3'.",_class,_template,_vehicle));
};

hull3_gear_fnc_assignSingleItem = {
    params ["_fieldName", "_unit", "_item", "_container", "_addFunc", "_canAddFunc", "_template", "_class"];

    [_unit, _item, 1, _container, _addFunc, _canAddFunc, _fieldName, _template, _class] call hull3_gear_fnc_assignItems;
};

hull3_gear_fnc_assignSingleItemArray = {
    params ["_fieldName", "_unit", "_items", "_container", "_addFunc", "_canAddFunc", "_template", "_class"];

    {
        [_unit, _x, 1, _container, _addFunc, _canAddFunc, _fieldName, _template, _class] call hull3_gear_fnc_assignItems;
    } foreach _items;
};

hull3_gear_fnc_assignMultiItemArray = {
    params ["_fieldName", "_unit", "_items", "_container", "_addFunc", "_canAddFunc", "_template", "_class"];

    {
        [_unit, _x select 0, _x select 1, _container, _addFunc, _canAddFunc, _fieldName, _template, _class] call hull3_gear_fnc_assignItems;
    } foreach _items;
};

hull3_gear_fnc_assignItems = {
    params ["_unit", "_item", "_amount", "_container", "_addFunc", "_canAddFunc", "_fieldName", "_template", "_class"];

    private _i = 1;
    private _assignedAmount = 0;
    private _canAddItem = [_unit, _item] call _canAddFunc;
    while {_canAddItem && {_i <= _amount}} do {
        [_unit, _item] call _addFunc;
        INC(_assignedAmount);
        _canAddItem = [_unit, _item] call _canAddFunc;
        INC(_i);
    };
    if (_assignedAmount < _amount) then {
        WARN("hull3.gear.assign",FMT_8("Failed to assign %1x'%2' (of %3) from '%4' to the %5 of unit '%6' from template '%7' and class '%8'.",_amount - _assignedAmount,_item,_amount,_fieldName,_container,_unit,_template,_class));
    } else {
        TRACE("hull3.gear.assign",FMT_5("Assigned %1x'%2' from '%3' to the %4 of unit '%5'.",_amount,_item,_fieldName,_container,_unit));
    };
};

hull3_gear_fnc_assignVehicleMagazines = {
    params ["_vehicle", "_magazines"];

    {
        _vehicle addMagazineCargoGlobal _x;
    } foreach _magazines;
    TRACE("hull3.gear.assign",FMT_2("Assigned magazines '%1' to vehicle '%2'.",_magazines,_vehicle));
};

hull3_gear_fnc_assignVehicleWeapons = {
    params ["_vehicle", "_weapons"];

    {
        _vehicle addWeaponCargoGlobal _x;
    } foreach _weapons;
    TRACE("hull3.gear.assign",FMT_2("Assigned weapons '%1' to vehicle '%2'.",_weapons,_vehicle));
};

hull3_gear_fnc_assignVehicleItems = {
    params ["_vehicle", "_items"];

    {
        _vehicle addItemCargoGlobal _x;
    } foreach _items;
    TRACE("hull3.gear.assign",FMT_2("Assigned items '%1' to vehicle '%2'.",_items,_vehicle));
};

hull3_gear_fnc_tryAssignRadios = {
    params ["_unit"];

    if (_unit getVariable ["hull3_gear_radiosAssigned", false]) exitWith {};

    private _gearTemplate = _unit getVariable ["hull3_gear_template", DEFAULT_TEMPLATE_NAME];
    private _gearClass = _unit getVariable ["hull3_gear_class", hull3_gear_unitBaseClass];
    [_unit] call hull3_gear_fnc_removeRadios;
    private _assignables = [
        ["uniformRadios",           CONFIG_TYPE_ARRAY,      "uniform",                  ASSIGN_UNIFORM_ITEM_FUNC,           CAN_ASSIGN_UNIFORM_ITEM_FUNC,           hull3_gear_fnc_assignSingleItemArray],
        ["vestRadios",              CONFIG_TYPE_ARRAY,      "vest",                     ASSIGN_VEST_ITEM_FUNC,              CAN_ASSIGN_VEST_ITEM_FUNC,              hull3_gear_fnc_assignSingleItemArray],
        ["backpackRadios",          CONFIG_TYPE_ARRAY,      "backpack",                 ASSIGN_BACKPACK_ITEM_FUNC,          CAN_ASSIGN_BACKPACK_ITEM_FUNC,          hull3_gear_fnc_assignSingleItemArray]
    ];
    {
        private _configValue = [TYPE_CLASS_GEAR, _gearTemplate, _gearClass, _x select 0] call (CONFIG_TYPE_FUNCTIONS select (_x select 1));
        // ADD ACRE2 preset stuff here?
        [_x select 0, _unit, _configValue, _x select 2, _x select 3, _x select 4, _gearTemplate, _gearClass] call (_x select 5);
    } foreach _assignables;
    DEBUG("hull3.gear.assign.acre",FMT_3("Assigned radios from template '%1' and class '%2' to unit '%3'.",_gearTemplate,_gearClass,_unit));
    _unit setVariable ["hull3_gear_radiosAssigned", true, true];
    ["gear.radio.assigned", [_unit]] call hull3_event_fnc_emitEvent;
};

hull3_gear_fnc_removeRadios = {
    params ["_unit"];

    private _radios = [] call acre_api_fnc_getCurrentRadioList;
    if (_radios isEqualTo []) exitWith {
        DEBUG("hull3.gear.assign.acre",FMT_1("No radios required removing for '%1'.",_unit));
    };

    DEBUG("hull3.gear.assign.acre",FMT_2("Removing radios from '%1' from unit '%2'.",_radios,_unit));
    {
        _unit removeItem _x;
    } forEach _radios;
};

hull3_gear_fnc_tryRemoveNightGear = {
    params ["_unit"];

    private _light = getLighting #1;
    private _threshold = ["General", "nightLightLevel"] call hull3_config_fnc_getNumber;
    if (_light < _threshold) exitWith {};
    DEBUG("hull3.gear.assign.night",FMT_2("Light level '%1' above threshold '%2'. Removing night gear from unit '%3'.",_light,_threshold,_unit));

    private _chemClasses = [
        "ACE_Chemlight_HiOrange",
        "ACE_Chemlight_HiRed",
        "ACE_Chemlight_HiYellow",
        "ACE_Chemlight_HiWhite",
        "ACE_Chemlight_Orange",
        "ACE_Chemlight_White",
        "ACE_Chemlight_IR"
    ];

    {
        if (_x in _chemClasses) then {
            _unit removeMagazineGlobal _x;
        };
    } forEach magazines _unit;

    {
        _unit removeItems _x;
    } forEach ["ACE_Flashlight_MX991","ACE_Flashlight_KSF1","ACE_Flashlight_XL50"];
};