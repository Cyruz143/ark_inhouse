// ACE Artillery
force force ace_artillerytables_advancedCorrections = false;
force ace_artillerytables_disableArtilleryComputer = false;
force force ace_mk6mortar_airResistanceEnabled = false;
force ace_mk6mortar_useAmmoHandling = true;
force ace_mk6mortar_allowCompass = true;
force ace_mk6mortar_allowComputerRangefinder = true;

// ACE Captives
force ace_captives_allowHandcuffOwnSide = false;
force ace_captives_allowSurrender = true;
force ace_captives_requireSurrender = 0;
force force ace_captives_requireSurrenderAi = false;

// ACE Common
force force ace_common_checkPBOsAction = 0;
force force ace_common_checkPBOsCheckAll = false;
force force ace_common_checkPBOsWhitelist = "[]";
force force ace_noradio_enabled = true;
force ace_parachute_hideAltimeter = false;

// ACE Cook off
force force ace_cookoff_ammoCookoffDuration = 0.3;
force force ace_cookoff_enable = 1;
force force ace_cookoff_enableAmmobox = true;
force force ace_cookoff_enableAmmoCookoff = true;
force force ace_cookoff_probabilityCoef = 1.5;

// ACE Crew Served Weapons
force force ace_csw_ammoHandling = 1;
force force ace_csw_defaultAssemblyMode = true;
force force ace_csw_handleExtraMagazines = true;
force force ace_csw_progressBarTimeCoefficent = 0.5;
ace_csw_dragAfterDeploy = true;

// ACE Explosives
force ace_explosives_customTimerDefault = 60;
force ace_explosives_customTimerMax = 300;
force ace_explosives_customTimerMin = 10;
force force ace_explosives_explodeOnDefuse = false;
force force ace_explosives_punishNonSpecialists = true;
force force ace_explosives_requireSpecialist = false;

// ACE Fragmentation Simulation
force force ace_frag_enabled = true;
force force ace_frag_maxTrack = 10;
force force ace_frag_maxTrackPerFrame = 10;
force force ace_frag_reflectionsEnabled = false;
force force ace_frag_spallEnabled = false;

// ACE Grenades
ace_grenades_convertExplosives = true;

// ACE Interaction
force force ace_interaction_disableNegativeRating = true;
force force ace_interaction_enableTeamManagement = true;

// ACE Logistics
force force ace_cargo_enable = true;
force ace_cargo_loadTimeCoefficient = 5;
force ace_cargo_paradropTimeCoefficent = 2.5;
force ace_rearm_distance = 20;
force force ace_rearm_level = 0;
force force ace_rearm_supply = 0;
force ace_refuel_hoseLength = 12;
force ace_refuel_rate = 1;
force force ace_repair_addSpareParts = false;
force force ace_repair_autoShutOffEngineWhenStartingRepair = true;
force force ace_repair_consumeItem_toolKit = 0;
force ace_repair_engineerSetting_fullRepair = 0;
force ace_repair_engineerSetting_repair = 2;
force ace_repair_engineerSetting_wheel = 2;
force ace_repair_fullRepairLocation = 0;
force force ace_repair_fullRepairRequiredItems = [];
force force ace_repair_miscRepairRequiredItems = [];
force force ace_repair_repairDamageThreshold = 0.6;
force force ace_repair_repairDamageThreshold_engineer = 0.4;
force force ace_repair_wheelRepairRequiredItems = [];

// ACE Magazine Repack
force force ace_magazinerepack_timePerAmmo = 1;
force force ace_magazinerepack_timePerBeltLink = 4;
force force ace_magazinerepack_timePerMagazine = 1;

// ACE Map
force force ace_map_BFT_Enabled = false;
force force ace_map_BFT_HideAiGroups = false;
force force ace_map_BFT_Interval = 1;
force force ace_map_BFT_ShowPlayerNames = false;
force force ace_map_DefaultChannel = 1;
force force ace_map_mapGlow = true;
force force ace_map_mapIllumination = true;
force force ace_map_mapLimitZoom = false;
force force ace_map_mapShake = false;
force force ace_map_mapShowCursorCoordinates = true;
force force ace_markers_moveRestriction = 0;
force force ace_markers_timestampEnabled = true;
force force ace_markers_timestampFormat = "HH:MM";
force force ace_markers_timestampHourFormat = 24;

// ACE Map Gestures
force force ace_map_gestures_allowCurator = false;
force force ace_map_gestures_allowSpectator = false;
force force ace_map_gestures_briefingMode = 0;
force force ace_map_gestures_enabled = true;
force force ace_map_gestures_interval = 0.03;
force force ace_map_gestures_maxRange = 7;
force force ace_map_gestures_maxRangeCamera = 14;
force force ace_map_gestures_onlyShowFriendlys = false;

// ACE Map Tools
force force ace_maptools_drawStraightLines = false;

// ACE Medical
force force ace_medical_ai_enabledFor = 0;
force force ace_medical_AIDamageThreshold = 0.2;
force force ace_medical_bleedingCoefficient = 0.5;
force force ace_medical_blood_bloodLifetime = 600;
force force ace_medical_blood_enabledFor = 1;
force force ace_medical_blood_maxBloodObjects = 500;
force force ace_medical_fatalDamageSource = 1;
force force ace_medical_fractures = 1;
force force ace_medical_fractureChance = 0.2;
force force ace_medical_gui_maxDistance = 3;
force force ace_medical_ivFlowRate = 1.5;
force force ace_medical_limping = 1;
force force ace_medical_painCoefficient = 1;
force force ace_medical_painUnconsciousChance = 0.1;
force force ace_medical_playerDamageThreshold = 4;
force force ace_medical_spontaneousWakeUpChance = 0.5;
force force ace_medical_spontaneousWakeUpEpinephrineBoost = 5;
force force ace_medical_statemachine_AIUnconsciousness = false;
force force ace_medical_statemachine_cardiacArrestBleedoutEnabled = true;
force force ace_medical_statemachine_cardiacArrestTime = 300;
force force ace_medical_statemachine_fatalInjuriesAI = 0;
force force ace_medical_statemachine_fatalInjuriesPlayer = 0;
force force ace_medical_treatment_advancedBandages = 0;
force force ace_medical_treatment_advancedDiagnose = false;
force force ace_medical_treatment_advancedMedication = false;
force force ace_medical_treatment_allowBodyBagUnconscious = true;
force force ace_medical_treatment_allowLitterCreation = true;
force force ace_medical_treatment_allowSelfIV = 1;
force force ace_medical_treatment_allowSelfStitch = 1;
force force ace_medical_treatment_allowSelfPAK = 1;
force force ace_medical_treatment_allowSharedEquipment = 0;
force force ace_medical_treatment_clearTraumaAfterBandage = true;
force force ace_medical_treatment_consumePAK = 0;
force force ace_medical_treatment_consumeSurgicalKit = 0;
force force ace_medical_treatment_convertItems = 0;
force force ace_medical_treatment_cprSuccessChance = 0.4;
force force ace_medical_treatment_holsterRequired = 0;
force force ace_medical_treatment_litterCleanupDelay = 600;
force force ace_medical_treatment_locationEpinephrine = 0;
force force ace_medical_treatment_locationIV = 0;
force force ace_medical_treatment_locationPAK = 3;
force force ace_medical_treatment_locationsBoostTraining = false;
force force ace_medical_treatment_locationSurgicalKit = 0;
force force ace_medical_treatment_maxLitterObjects = 500;
force force ace_medical_treatment_medicEpinephrine = 0;
force force ace_medical_treatment_medicIV = 0;
force force ace_medical_treatment_medicPAK = 0;
force force ace_medical_treatment_medicSurgicalKit = 0;
force force ace_medical_treatment_timeCoefficientPAK = 1;
force force ace_medical_treatment_treatmentTimeAutoinjector = 5;
force force ace_medical_treatment_treatmentTimeBodyBag = 15;
force force ace_medical_treatment_treatmentTimeCPR = 10;
force force ace_medical_treatment_treatmentTimeIV = 10;
force force ace_medical_treatment_treatmentTimeSplint = 5;
force force ace_medical_treatment_treatmentTimeTourniquet = 0.5;
force force ace_medical_treatment_woundReopenChance = 1;
force force ace_medical_treatment_woundStitchTime = 5;

// ACE Nightvision
force force ace_nightvision_aimDownSightsBlur = 0;
force force ace_nightvision_disableNVGsWithSights = false;
force force ace_nightvision_effectScaling = 0.5;
force force ace_nightvision_fogScaling = 0.5;
force force ace_nightvision_noiseScaling = 0.5;
force force ace_nightvision_shutterEffects = true;

// ACE Pointing
force force ace_finger_enabled = true;
force force ace_finger_maxRange = 4;

// ACE Pylons
force force ace_pylons_enabledForZeus = false;
force force ace_pylons_enabledFromAmmoTrucks = false;
force force ace_pylons_rearmNewPylons = false;
force force ace_pylons_requireEngineer = false;
force force ace_pylons_requireToolkit = false;
force force ace_pylons_searchDistance = 15;
force force ace_pylons_timePerPylon = 5;

// ACE Quick Mount
force force ace_quickmount_enabled = true;
force force ace_quickmount_distance = 3;
force force ace_quickmount_speed = 18;

// ACE Spectator
force force ace_spectator_enableAI = true;
force force ace_spectator_maxFollowDistance = 25;
force force ace_spectator_restrictModes = 0;
force force ace_spectator_restrictVisions = 0;

// ACE Uncategorized
force force ace_fastroping_requireRopeItems = false;
force force ace_gunbag_swapGunbagEnabled = true;
force force ace_hitreactions_minDamageToTrigger = 0.25;
force force ace_laser_dispersionCount = 2;
force force ace_overpressure_distanceCoefficient = 1;

// ACE User Interface
force force ace_ui_allowSelectiveUI = true;
force force ace_ui_ammoCount = false;
force force ace_ui_staminaBar = true;

// ACE View Distance Limiter
force force ace_viewdistance_enabled = true;
force force ace_viewdistance_limitViewDistance = 10000;

// ACE Weapons
force force ace_laserpointer_enabled = true;
force force ace_common_persistentLaserEnabled = true;

// ACE Zeus
force force ace_zeus_autoAddObjects = true;
force force ace_zeus_canCreateZeus = -1;
force force ace_zeus_radioOrdnance = false;
force force ace_zeus_remoteWind = false;
force force ace_zeus_revealMines = 0;
force force ace_zeus_zeusAscension = false;
force force ace_zeus_zeusBird = false;

// ACRE2
force force acre_sys_core_ignoreAntennaDirection = true;
force acre_sys_core_fullDuplex = false;
force force acre_sys_core_interference = true;
force force acre_sys_core_revealToAI = 1;
force force acre_sys_core_ts3ChannelSwitch = false;
force force acre_sys_core_unmuteClients = true;
force force acre_sys_signal_signalModel = 0;

// CBA Weapons
force force cba_disposable_dropUsedLauncher = 2;
force force cba_disposable_replaceDisposableLauncher = true;

// CBA Network
force force cba_network_loadoutValidation = 0;

// CUP
force force CUP_CheckCfgPatches = false;
force force CUP_Vehicles_PreventBarrelClip = false;

// CUP Static Weapons
force force CUP_staticWeapons_allowMovement = false;
force force CUP_staticWeapons_allowRotation = false;

// DUI - Squad Radar - Main
force force diwako_dui_colors = "ace";
force force diwako_dui_icon_style = "standard";
force force diwako_dui_main_squadBlue = [0,0,1,1];
force force diwako_dui_main_squadGreen = [0,1,0,1];
force force diwako_dui_main_squadMain = [0,0,1,0];
force force diwako_dui_main_squadRed = [1,0,0,1];
force force diwako_dui_main_squadYellow = [1,1,0,1];

// DUI - Squad Radar - Nametags
force force diwako_dui_nametags_deadColor = [0.2,0.2,0.2,1];
force force diwako_dui_nametags_deadRenderDistance = 3.5;
force force diwako_dui_nametags_drawRank = false;
force force diwako_dui_nametags_enabled = true;
force force diwako_dui_nametags_enableFOVBoost = false;
force force diwako_dui_nametags_enableOcclusion = false;
force force diwako_dui_nametags_groupColor = [1,1,1,1];
force force diwako_dui_nametags_groupNameOtherGroupColor = [0.6,0.85,0.6,1];
force force diwako_dui_nametags_nameOtherGroupColor = [0.2,1,0,1];
force force diwako_dui_nametags_renderDistance = 15;
force force diwako_dui_nametags_showUnconAsDead = true;
force force diwako_dui_nametags_useLIS = true;
force force diwako_dui_nametags_useSideIsFriendly = true;

// DUI - Squad Radar - Radar
diwako_dui_compass_style = ["\z\diwako_dui\addons\radar\UI\compass_styles\bi\compass_limited.paa","\z\diwako_dui\addons\radar\UI\compass_styles\bi\compass.paa"];
force force diwako_dui_compassRange = 50;
force force diwako_dui_compassRefreshrate = 0;
force force diwako_dui_dir_showMildot = false;
force force diwako_dui_distanceWarning = 3;
force diwako_dui_enable_compass = true;
force force diwako_dui_enable_compass_dir = 1;
force force diwako_dui_enable_occlusion = false;
force force diwako_dui_enable_occlusion_cone = 360;
force diwako_dui_namelist = true;
force force diwako_dui_radar_ace_finger = true;
force force diwako_dui_radar_ace_medic = true;
force force diwako_dui_radar_compassRangeCrew = 100;
force force diwako_dui_radar_group_by_vehicle = true;
force force diwako_dui_radar_icon_scale_crew = 2;
force force diwako_dui_radar_occlusion_fade_time = 10;
force force diwako_dui_radar_showSpeaking = false;
force force diwako_dui_radar_showSpeaking_radioOnly = false;
force force diwako_dui_radar_showSpeaking_replaceIcon = false;
force force diwako_dui_radar_sortType = "none";
force force diwako_dui_radar_sqlFirst = false;
force force diwako_dui_radar_vehicleCompassEnabled = true;

// NIArms
force force niarms_magSwitch = false;