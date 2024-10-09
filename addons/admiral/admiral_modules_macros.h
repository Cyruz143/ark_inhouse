#define ZONE_NAME_ARG_CLASS                 Admiral_ZoneName
#define AXIS_A_ARG_CLASS                    Admiral_AxisA
#define AXIS_B_ARG_CLASS                    Admiral_AxisB
#define ANGLE_ARG_CLASS                     Admiral_Angle
#define SHAPE_ARG_CLASS                     Admiral_Shape
#define UNIT_TEMPLATE_ARG_CLASS             Admiral_UnitTemplate
#define ZONE_TEMPLATE_ARG_CLASS             Admiral_ZoneTemplate
#define CQC_POOL_ARG_CLASS                  Admiral_CqcPool
#define MIN_HEIGHT_ARG_CLASS                Admiral_MinHeight
#define PATROL_INFANTRY_POOL_ARG_CLASS      Admiral_PatrolInfantryPool
#define PATROL_TECHNICAL_POOL_ARG_CLASS     Admiral_PatrolTechnicalPool
#define PATROL_ARMOUR_POOL_ARG_CLASS        Admiral_PatrolArmourPool
#define CAMP_INFANTRY_POOL_ARG_CLASS        Admiral_CampInfantryPool
#define CAMP_TECHNICAL_POOL_ARG_CLASS       Admiral_CampTechnicalPool
#define CAMP_ARMOUR_POOL_ARG_CLASS          Admiral_CampArmourPool
#define INFANTRY_WAVE_ARG_CLASS             Admiral_InfantryWave
#define TECHNICAL_WAVE_ARG_CLASS            Admiral_TechnicalWave
#define ARMOUR_WAVE_ARG_CLASS               Admiral_ArmourWave
#define CAMP_DELAY_ARG_CLASS                Admiral_CampDelay
#define INFANTRY_GROUP_DELAY_ARG_CLASS      Admiral_InfantryGroupDelay
#define TECHNICAL_GROUP_DELAY_ARG_CLASS     Admiral_TechnicalGroupDelay
#define ARMOUR_GROUP_DELAY_ARG_CLASS        Admiral_ArmourGroupDelay
#define INFANTRY_SPAWN_CHANCE_ARG_CLASS     Admiral_InfantrySpawnChance
#define PATROL_SPAWN_CHANCE_ARG_CLASS       Admiral_PatrolSpawnChance
#define ARMOUR_SPAWN_CHANCE_ARG_CLASS       Admiral_ArmourSpawnChance

#define QUOTE(VAR) #VAR

#define DEFAULT_ARGS [ \
    [QUOTE(ZONE_NAME_ARG_CLASS), "name"], \
    [QUOTE(UNIT_TEMPLATE_ARG_CLASS), "unitTemplate"], \
    [QUOTE(ZONE_TEMPLATE_ARG_CLASS), "zoneTemplate"] \
]

#define CQC_VARS [ \
    [QUOTE(CQC_POOL_ARG_CLASS), "pool"], \
    [QUOTE(MIN_HEIGHT_ARG_CLASS), "minHeight"] \
]

#define PATROL_POOL_MODULE_VARS             [QUOTE(PATROL_INFANTRY_POOL_ARG_CLASS), QUOTE(PATROL_TECHNICAL_POOL_ARG_CLASS), QUOTE(PATROL_ARMOUR_POOL_ARG_CLASS)]
#define CAMP_POOL_MODULE_VARS               [QUOTE(CAMP_INFANTRY_POOL_ARG_CLASS), QUOTE(CAMP_TECHNICAL_POOL_ARG_CLASS), QUOTE(CAMP_ARMOUR_POOL_ARG_CLASS)]
#define CAMP_WAVE_MODULE_VARS               [QUOTE(INFANTRY_WAVE_ARG_CLASS), QUOTE(TECHNICAL_WAVE_ARG_CLASS), QUOTE(ARMOUR_WAVE_ARG_CLASS)]
#define PERIODIC_GROUP_DELAY_MODULE_VARS    [QUOTE(INFANTRY_GROUP_DELAY_ARG_CLASS), QUOTE(TECHNICAL_GROUP_DELAY_ARG_CLASS), QUOTE(ARMOUR_GROUP_DELAY_ARG_CLASS)]
#define RANDOM_SPAWN_CHANCE_MODULE_VARS     [QUOTE(INFANTRY_SPAWN_CHANCE_ARG_CLASS), QUOTE(PATROL_SPAWN_CHANCE_ARG_CLASS), QUOTE(ARMOUR_SPAWN_CHANCE_ARG_CLASS)]

#define PUSH_GROUP_TYPE_CONFIG(CFGNAME,MODULE,MODULEVARS,CONFIGS) \
    DECLARE(_groupTypeConfig) = [0, 0, 0]; \
    { \
        _groupTypeConfig set [_forEachIndex, MODULE getVariable _x]; \
    } forEach MODULEVARS; \
    CONFIGS pushBack [CFGNAME, _groupTypeConfig]