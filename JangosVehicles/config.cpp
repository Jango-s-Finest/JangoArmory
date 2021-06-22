class CfgPatches
{
	class Jangos_Armory_Vehicles
	{
		units[] = {
			"JA_Base_LAAT",
			"JA_Base_LAAT_AB",
			"JA_104th_Base_LAAT",
			"JA_104th_Base_LAAT_AB",
			"JA_104th_Base_LAAT_Medic",
			"JA_104th_Echo_LAAT",
			"JA_104th_Echo_LAAT_AB",
			"JA_104th_Bail_LAAT",
			"JA_104th_Bail_LAAT_AB",
			"JA_104th_Base_LAAT_C",
			"JA_104th_Base_LAAT_Mk3",
			"JA_104th_Base_Vwing_Reaper",
			"JA_104th_Base_Arc170_Mk2",
			"JA_104th_Base_Ywing_Reaper",
			"JA_104th_Base_Uwing_Mk2",
			"JA_104th_Base_Falcon_Armed",
			"JA_104th_Base_Pelican_Unarmed",
			"JA_104th_Base_Pelican_Armed",
			"JA_104th_Base_Bantha",
			"JA_104th_Base_TX130",
			"JA_104th_Base_Barc_Speeder",
			"JA_104th_Base_Pathfinder",
			"JA_104th_Medical_Pathfinder",
			"JA_104th_Base_Tempest",
			"JA_104th_Box_Ammo",
			"JA_104th_Box_Explosives",
			"JA_104th_Box_Medic",
			"JA_104th_BARC",
			"JA_104th_BARC_WP",
			"JA_104th_BARC_Talon",
			"JA_104th_BARC_Beans",
			"JA_104th_BARC_Sniper",
			"JA_104th_BARC_EOD",
			"JA_104th_BARC_Medic",
			"OPTRE_M412_IFV_UNSC_cln"
		};	//All the new vehicles/units you've created in cfgVehicles
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_EPB_Heli_Light_03"};
	};
};

class CfgFactionClasses
{
	class 104th_Guys
	{
		displayname = "Jango's Finest";
		priority = 1; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
		icon = "";
	};
};
class CfgEditorCategories
{
	class 104th_Guys_2
	{
		displayname = "Jango's Finest";
		priority = 1;
		icon = "";
	};
};
class cfgEditorSubcategories
{
	class 104th_Categ_Clones_Vehicles_Air
	{
		displayname = "104th - Vehicles - Air";
	};
	class 104th_Categ_Clones_Vehicles_Land
	{
		displayname = "104th - Vehicles - Land";
	};
	class 104th_Categ_Clones_Boxes
	{
		displayname = "104th - Boxes";
	};
};


class SensorTemplatePassiveRadar;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class cfgVehicles {
	
	class 212th_B_APC_Wheeled_01_cannon_F;
	class RD501_fast_infantry_transport_republic;
	class RD501_fast_infantry_transport_republic_medic;
	class RD501_light_infantry_transport_Rep_MkII;
	class SWLG_tanks_tx130;
	class rd501_sw_barc;

	class lsd_laat_base;
	class lsd_heli_laati;
	class lsd_heli_laati_transport;
	class lsd_heli_laati_ab; 
	class lsd_laatc_base;
	class RD501_LAAT_cargo_Mk2;
	class RD501_LAAT_Mk3;
	class 212_Reaper_V_Wing;
	class RD501_ARC_170_MKII;
	class 212_Reaper_Y_Wing;
	class RD501_u_wing_MKII;
	class OPTRE_UNSC_falcon;
	class OPTRE_Pelican_unarmed;
	class OPTRE_Pelican_armed;
	
	//Classes needed for the Bison change
	class OPTRE_Vehicles_Bison;
	class OPTRE_M413_base;
	class OPTRE_M412_IFV_UNSC;
	class Turrets;
	class MainTurret;
	class OPTRE_M412_IFV_UNSC_blk;
	
	//Classes for the BARC change
	class LandVehicle;
	class Car;
	class ls_barc_base;
	class ls_ground_barc;
	class HitPoints;
	class HitLFWheel;
	class HitLF2Wheel;
	class HitRFWheel;
	class HitRF2Wheel;
	class HitBody;
	class HitGlass1;
	class HitGlass2;
	class HitGlass3;
	class HitGlass4;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
		class AnimationSources;
	};
	

	class Box_212_Supply_F;
	class Box_212_Medical_F;

	class JA_Base_LAAT: lsd_heli_laati {
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		displayName = "LAAT-E"; 
		
		armor = 500;
		armorStructural = 2;
		
		DriverCanEject = 1;
		
		irScanRangeMax = 10000;
		irScanRangeMin = 100;
		irScanToEyeFactor = 4;
		laserScanner = 1;
		nvScanner = 1;
		showAllTargets = 2;
		reportRemoteTargets = True;
		ReceiveRemoteTargets = True;
		crewCrashProtection = 0.001;
		radarType = 4;
		
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","RD501_wynd_a2a","missiles_DAR","Laserdesignator_pilotCamera","CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","RD501_a2a_x4_mag","RD501_a2a_x4_mag","12rnd_missiles","12rnd_missiles","12rnd_missiles","Laserbatteries","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};

		memoryPointDriverOptics = "slingcamera";
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 90;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
					initFov = 0.425;
					minFov = 0.425;
					maxFov = 0.425;
					directionStabilized = 1;
					thermalMode[] = {0,1};
					visionMode[] = {"Normal","NVG","Ti"};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class zoomx4: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.425/4)";
					minFov = "(0.425/4)";
					maxFov = "(0.425/4)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/8)";
					minFov = "(0.42/8)";
					maxFov = "(0.42/8)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/20)";
					minFov = "(0.42/20)";
					maxFov = "(0.42/20)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/50)";
					minFov = "(0.42/50)";
					maxFov = "(0.42/50)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/70)";
					minFov = "(0.42/70)";
					maxFov = "(0.42/70)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = -10;
			maxXRotSpeed = 0.3;
			maxYRotSpeed = 0.3;
			pilotOpticsShowCursor = 1;
			controllable = 1;
			ace_missileguidance_usePilotCameraForTargeting = 1;
		};
		
		class HitPoints
		{
			class HitHull
			{
				armor = 999;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = 1;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual = "zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "fuel_hit";
				hitpoint = "fuel_hit";
				name = "fuel_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 999;
			};
			class HitEngine
			{
				armor = 0.5;
				convexComponent = "engine_hit";
				explosionShielding = 2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual = "";
				radius = 0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent = "engine_hit_2";
				name = "engine_hit_2";
				hitpoint = "engine_hit_2";
			};
			class HitHRotor
			{
				armor = 3;
				convexComponent = "main_rotor_hit";
				explosionShielding = 2.5;
				material = 51;
				name = "main_rotor_hit";
				passThrough = 0.1;
				visual = "";
				radius = 0.01;
			};
			class HitVRotor
			{
				armor = 3;
				convexComponent = "tail_rotor_hit";
				explosionShielding = 6;
				material = 51;
				name = "tail_rotor_hit";
				passThrough = 0.3;
				visual = "";
				radius = 0.01;
			};
			class HitAvionics
			{
				armor = 1;
				convexComponent = "avionics_hit";
				explosionShielding = 2;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
		};
		
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class activeRadarSenorComponent
					{
						aimDown = 30;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 1000;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 3000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class AntiRadiationSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 12000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 100;
						aimDown = 0;
						allowsMarking = 1;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 2000;
					};
					class VisualSensorComponent
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 1000;
						aimDown = 0;
						animDirection = "";
						allowsMarking = 1;
						color[] = {1,1,0.5,0.8};
						componentType = "VisualSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						nightRangeCoef = 0;
						typeRecognitionDistance = 2000;
					};
					class PassiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 12000;
					};
					class LaserSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 0;
					};
					class NVSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "NVSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 0;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture = "swlb_a_vehicle\laat\data\ui\laat_ui.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 5;
						hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AMRAAM_D_DUAL_RAIL","B_SDB_QUAD_RAIL","B_GBU12","B_AGM65_RAIL","I_ORCA_RIGHT_PYLON","20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON"}; //hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AMRAAM_D_DUAL_RAIL","B_SDB_QUAD_RAIL","B_GBU12","B_AGM65_RAIL"};
						turret[] = {0};
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 4;
						hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AMRAAM_D_DUAL_RAIL","B_SDB_QUAD_RAIL","B_GBU12","B_AGM65_RAIL","I_ORCA_RIGHT_PYLON","20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON"};
						UIposition[] = {0.08,0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 3;
						hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AMRAAM_D_DUAL_RAIL","B_SDB_QUAD_RAIL","B_GBU12","B_AGM65_RAIL","I_ORCA_RIGHT_PYLON","20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON"};
						UIposition[] = {0.1,0.3};
					};
					class PylonRight3: PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.59,0.3};
					};
					class PylonRight2: PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.62,0.35};
					};
					class PylonRight1: PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.64,0.4};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "Default";
						attachment[] = {"PylonMissile_1Rnd_AAA_missiles","PylonMissile_1Rnd_AAA_missiles","PylonRack_12Rnd_PG_missiles","PylonRack_12Rnd_PG_missiles","PylonMissile_1Rnd_AAA_missiles","PylonMissile_1Rnd_AAA_missiles"};
					};
					class AT
					{
						displayName = "AT";
						attachment[] = {"PylonRack_12Rnd_PG_missiles","PylonMissile_1Rnd_LG_scalpel","PylonRack_12Rnd_PG_missiles","PylonRack_12Rnd_PG_missiles","PylonMissile_1Rnd_LG_scalpel","PylonRack_12Rnd_PG_missiles"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonRack_12Rnd_missiles","PylonMissile_1Rnd_AAA_missiles","PylonRack_12Rnd_missiles","PylonRack_12Rnd_missiles","PylonMissile_1Rnd_AAA_missiles","PylonRack_12Rnd_missiles"};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		
	};
	class JA_Base_LAAT_AB: lsd_heli_laati_ab 
	{
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		displayName = "LAAT-E Airborne"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		
		armor = 500;
		armorStructural = 2;
		
		DriverCanEject = 1;
		
		irScanRangeMax = 10000;
		irScanRangeMin = 100;
		irScanToEyeFactor = 4;
		laserScanner = 1;
		nvScanner = 1;
		showAllTargets = 2;
		reportRemoteTargets = True;
		ReceiveRemoteTargets = True;
		crewCrashProtection = 0.001;
		radarType = 4;
		
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","RD501_wynd_a2a","missiles_DAR","Laserdesignator_pilotCamera","CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","RD501_a2a_x4_mag","RD501_a2a_x4_mag","12rnd_missiles","12rnd_missiles","12rnd_missiles","Laserbatteries","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};

		memoryPointDriverOptics = "slingcamera";
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 90;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
					initFov = 0.425;
					minFov = 0.425;
					maxFov = 0.425;
					directionStabilized = 1;
					thermalMode[] = {0,1};
					visionMode[] = {"Normal","NVG","Ti"};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
				};
				class zoomx4: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.425/4)";
					minFov = "(0.425/4)";
					maxFov = "(0.425/4)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/8)";
					minFov = "(0.42/8)";
					maxFov = "(0.42/8)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/20)";
					minFov = "(0.42/20)";
					maxFov = "(0.42/20)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/50)";
					minFov = "(0.42/50)";
					maxFov = "(0.42/50)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/70)";
					minFov = "(0.42/70)";
					maxFov = "(0.42/70)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics = 1;
				showUAVViewInOptics = 0;
				showSlingLoadManagerInOptics = 1;
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = -10;
			maxXRotSpeed = 0.3;
			maxYRotSpeed = 0.3;
			pilotOpticsShowCursor = 1;
			controllable = 1;
			ace_missileguidance_usePilotCameraForTargeting = 1;
		};
		
		class HitPoints
		{
			class HitHull
			{
				armor = 999;
				convexComponent = "hull_hit";
				depends = "Total";
				explosionShielding = 1;
				material = 51;
				name = "hull_hit";
				passThrough = 1;
				visual = "zbytek";
				radius = 0.01;
			};
			class HitFuel
			{
				convexcomponent = "fuel_hit";
				hitpoint = "fuel_hit";
				name = "fuel_hit";
				explosionShielding = 2;
				radius = 0.1;
				visual = "";
				passthrough = 0.1;
				minimalhit = 0.1;
				material = -1;
				armor = 999;
			};
			class HitEngine
			{
				armor = 0.5;
				convexComponent = "engine_hit";
				explosionShielding = 2;
				material = 51;
				name = "engine_hit";
				hitpoint = "engine_hit";
				passThrough = 1;
				visual = "";
				radius = 0.2;
			};
			class HitEngine_1: HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2: HitEngine
			{
				convexComponent = "engine_hit_2";
				name = "engine_hit_2";
				hitpoint = "engine_hit_2";
			};
			class HitHRotor
			{
				armor = 3;
				convexComponent = "main_rotor_hit";
				explosionShielding = 2.5;
				material = 51;
				name = "main_rotor_hit";
				passThrough = 0.1;
				visual = "";
				radius = 0.01;
			};
			class HitVRotor
			{
				armor = 3;
				convexComponent = "tail_rotor_hit";
				explosionShielding = 6;
				material = 51;
				name = "tail_rotor_hit";
				passThrough = 0.3;
				visual = "";
				radius = 0.01;
			};
			class HitAvionics
			{
				armor = 1;
				convexComponent = "avionics_hit";
				explosionShielding = 2;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
		};
		
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class activeRadarSenorComponent
					{
						aimDown = 30;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 1000;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 3000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class AntiRadiationSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 12000;
						class AirTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 8000;
							minRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 100;
						aimDown = 0;
						allowsMarking = 1;
						animDirection = "";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 2000;
					};
					class VisualSensorComponent
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 37;
						maxTrackableSpeed = 1000;
						aimDown = 0;
						animDirection = "";
						allowsMarking = 1;
						color[] = {1,1,0.5,0.8};
						componentType = "VisualSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						nightRangeCoef = 0;
						typeRecognitionDistance = 2000;
					};
					class PassiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 16000;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 12000;
					};
					class LaserSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 0;
					};
					class NVSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "NVSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 0;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Driver";
					};
					class VehicleMissileDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Missile";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,16000,8000};
						resource = "RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		
	};
	class JA_104th_Base_LAAT: JA_Base_LAAT {
		displayName = "LAAT-E 104th";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104bg.paa","swlb_a_vehicle\laat\data\body2_co.paa","swlb_a_vehicle\laat\data\door1_co.paa","swlb_a_vehicle\laat\data\door2_co.paa","swlb_a_vehicle\laat\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","swlb_a_vehicle\laat\data\cockpits_co.paa","swlb_a_vehicle\laat\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bg.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
			class logo: base
			{
				displayName = "104th Logo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bgwp.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
			}
			
			class plobro: base
			{
				displayName = "104th PloBros";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bgpb.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
			};
			
			
		};
		textureList[] = {"base",1,"logo",1,"plobro",1};
	};
	class JA_104th_Base_LAAT_AB: JA_Base_LAAT_AB {
		displayName = "LAAT-E 104th Airborne";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104bg.paa","swlb_a_vehicle\laat\data\body2_co.paa","swlb_a_vehicle\laat\data\door1_co.paa","swlb_a_vehicle\laat\data\door2_co.paa","swlb_a_vehicle\laat\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","swlb_a_vehicle\laat\data\cockpits_co.paa","swlb_a_vehicle\laat\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bg.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
			class logo: base
			{
				displayName = "104th Logo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bgwp.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
			};
			
			class plobro: base
			{
				displayName = "104th Plo's Bros";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bgpb.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
			};
			
			
		};
		textureList[] = {"base",1,"logo",1,"plobro",1};
	};
	class JA_104th_Base_LAAT_Medic: JA_Base_LAAT_AB {
		displayName = "LAAT-E 104th MedEvac";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		attendant = 1;
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104medic.paa","swlb_a_vehicle\laat\data\body2_co.paa","JangosVehicles\data\textures\door1_co_medic2.paa","JangosVehicles\data\textures\door2_co_medic.paa","JangosVehicles\data\textures\door3_co_medic.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","swlb_a_vehicle\laat\data\cockpits_co.paa","swlb_a_vehicle\laat\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th MedEvac";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104medic.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"JangosVehicles\data\textures\door1_co_medic2.paa",
				"JangosVehicles\data\textures\door2_co_medic.paa",
				"JangosVehicles\data\textures\door3_co_medic.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	class JA_104th_Echo_LAAT: JA_Base_LAAT {
		displayName = "LAAT-E 104th Echo";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa","swlb_a_vehicle\laat\data\body2_co.paa","JangosVehicles\data\textures\door1_co_echo.paa","swlb_a_vehicle\laat\data\door2_co.paa","swlb_a_vehicle\laat\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","swlb_a_vehicle\laat\data\cockpits_co.paa","swlb_a_vehicle\laat\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Echo";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"JangosVehicles\data\textures\door1_co_echo.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	class JA_104th_Echo_LAAT_AB: JA_Base_LAAT_AB {
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		displayName = "LAAT-E 104th Echo Airborne";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa","swlb_a_vehicle\laat\data\body2_co.paa","JangosVehicles\data\textures\door1_co_echo.paa","swlb_a_vehicle\laat\data\door2_co.paa","swlb_a_vehicle\laat\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","swlb_a_vehicle\laat\data\cockpits_co.paa","swlb_a_vehicle\laat\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Echo";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"JangosVehicles\data\textures\door1_co_echo.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	class JA_104th_Bail_LAAT: JA_Base_LAAT {
		displayName = "LAAT-E 104th Bail";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa","swlb_a_vehicle\laat\data\body2_co.paa","swlb_a_vehicle\laat\data\door1_co.paa","swlb_a_vehicle\laat\data\door2_co.paa","swlb_a_vehicle\laat\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","swlb_a_vehicle\laat\data\cockpits_co.paa","swlb_a_vehicle\laat\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Bail";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};	
	class JA_104th_Bail_LAAT_AB: JA_Base_LAAT_AB {
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		displayName = "LAAT-E 104th Bail Airborne";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa","swlb_a_vehicle\laat\data\body2_co.paa","swlb_a_vehicle\laat\data\door1_co.paa","swlb_a_vehicle\laat\data\door2_co.paa","swlb_a_vehicle\laat\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","swlb_a_vehicle\laat\data\cockpits_co.paa","swlb_a_vehicle\laat\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Bail";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa",
				"swlb_a_vehicle\laat\data\body2_co.paa",
				"swlb_a_vehicle\laat\data\door1_co.paa",
				"swlb_a_vehicle\laat\data\door2_co.paa",
				"swlb_a_vehicle\laat\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"swlb_a_vehicle\laat\data\cockpits_co.paa",
				"swlb_a_vehicle\laat\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	class JA_104th_Base_LAAT_C: RD501_LAAT_cargo_Mk2 //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "LAAT C"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
	};
	class JA_104th_Base_LAAT_Mk3: RD501_LAAT_Mk3 //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "LAAT Mk3"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
	};
	class JA_104th_Base_Vwing_Reaper: 212_Reaper_V_Wing //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "V-Wing Reaper"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
	};
	class JA_104th_Base_Arc170_Mk2: RD501_ARC_170_MKII //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "ARC-170 Mk2"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
	};
	class JA_104th_Base_Uwing_Mk2: RD501_u_wing_MKII //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "U-Wing Mk2"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
	};
	class JA_104th_Base_Falcon_Armed: OPTRE_UNSC_falcon //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "Falcon Armed"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
	};
	class JA_104th_Base_Pelican_Unarmed: OPTRE_Pelican_unarmed //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "Pelican Unarmed"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
	};
	class JA_104th_Base_Pelican_Armed: OPTRE_Pelican_armed //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "Pelican Armed"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
	};

	//Split

	class JA_104th_Base_Bantha: 212th_B_APC_Wheeled_01_cannon_F{
		author = "Dak";
		displayName = "Bantha IFV"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class JA_104th_Base_TX130: SWLG_tanks_tx130 {
		author = "Dak";
		displayName = "TX-130"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class JA_104th_Base_Barc_Speeder: rd501_sw_barc {
		author = "Dak";
		displayName = "Barc Speeder"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class JA_104th_Base_Pathfinder: RD501_fast_infantry_transport_republic{
		author = "Dak";
		displayName = "Pathfinder"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class JA_104th_Medical_Pathfinder: RD501_fast_infantry_transport_republic_medic{
		author = "Dak";
		displayName = "Pathfinder - Medical"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class JA_104th_Base_Tempest: RD501_light_infantry_transport_Rep_MkII{
		author = "Dak";
		displayName = "Tempest"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class OPTRE_M412_IFV_UNSC_cln: OPTRE_M412_IFV_UNSC_blk {
		dlc = "OPTRE";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		displayName = "M412 Bison IFV [Clone]";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles\Bison\data\Bison_Body_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Misc_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_blk_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","OPTRE_Vehicles\Bison\data\Bison_90mm_blk_CO.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"OPTRE_M230","OPTRE_missiles_C2GMLS"};
				magazines[] = {"OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_APFSDS","OPTRE_100Rnd_50mm_APFSDS","OPTRE_100Rnd_50mm_APFSDS","OPTRE_100Rnd_50mm_APFSDS","OPTRE_2Rnd_C2GMLS_missiles","OPTRE_2Rnd_C2GMLS_missiles","OPTRE_2Rnd_C2GMLS_missiles"};
			};
		};	
	}
	class JA_104th_BARC: ls_ground_barc
	{
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		displayName = "BARC Speeder 104th";
		author = "Echo";
		maxSpeed = 280;
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\Body_104_CO.paa","JangosVehicles\data\textures\Weapons_104_CO.paa","JangosVehicles\data\textures\Dashboard_104_CO.paa"};
		class HitPoints: HitPoints
		{
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 0.2;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0.2;
			};
			class HitBody: HitBody
			{
				name = "body";
				visual = "camo1";
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.25;
			};
		};
	};
	class JA_104th_BARC_WP: JA_104th_BARC
	{
		displayName = "BARC Speeder 104th WP Logo";
		maxSpeed = 280;
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\Body_104_wp_CO.paa","JangosVehicles\data\textures\Weapons_104_CO.paa","JangosVehicles\data\textures\Dashboard_104_CO.paa"};
	};
	class JA_104th_BARC_Talon: JA_104th_BARC
	{
		displayName = "BARC Speeder 104th Talon Logo";
		maxSpeed = 280;
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\Body_104_talon_CO.paa","JangosVehicles\data\textures\Weapons_104_CO.paa","JangosVehicles\data\textures\Dashboard_104_CO.paa"};
	};
	class JA_104th_BARC_Beans: JA_104th_BARC
	{
		displayName = "BARC Speeder 104th Beans";
		maxSpeed = 280;
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\Body_104_beans_CO.paa","JangosVehicles\data\textures\Weapons_104_CO.paa","JangosVehicles\data\textures\Dashboard_104_CO.paa"};
	};
	class JA_104th_BARC_Sniper: JA_104th_BARC
	{
		displayName = "BARC Speeder 104th Sniper";
		maxSpeed = 280;
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\Body_104_sniper_CO.paa","JangosVehicles\data\textures\Weapons_104_CO.paa","JangosVehicles\data\textures\Dashboard_104_CO.paa"};
	};
	class JA_104th_BARC_Medic: JA_104th_BARC
	{
		displayName = "BARC Speeder 104th Medic";
		maxSpeed = 280;
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\Body_104_medic_CO.paa","JangosVehicles\data\textures\Weapons_104_CO.paa","JangosVehicles\data\textures\Dashboard_104_CO.paa"};
	};
	class JA_104th_BARC_EOD: JA_104th_BARC
	{
		displayName = "BARC Speeder 104th EOD";
		maxSpeed = 280;
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\Body_104_eod_CO.paa","JangosVehicles\data\textures\Weapons_104_CO.paa","JangosVehicles\data\textures\Dashboard_104_CO.paa"};
	};


	//Split

	class JA_104th_Box_Ammo: Box_212_Supply_F{
		author = "Dak";
		displayName = "Ammo Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "104th_Guys_2";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		maximumLoad = 3000;
		class TransportWeapons{
		};
		class TransportMagazines
		{
			class _xx_SWOP_SWOP_WESTARM5_MAG{ //
				count = 10;
				magazine = "SWOP_WESTARM5_Mag";
			};
			class _xx_212th_200Rnd_VALKEN38SAW_mag{ //
				count = 10;
				magazine = "212th_200Rnd_VALKEN38SAW_mag";
			};
			class _xx_JLTS_DC15A_mag{
				count = 20;
				magazine = "JLTS_DC15A_mag";
			};
			class _xx_212th_15rnd_Energy_dc15XM_mag{
				count = 30;
				magazine = "212th_15rnd_Energy_dc15XM_mag";
			};
			class _xx_JLTS_DC17SA_mag{
				count = 30;
				magazine = "JLTS_DC17SA_mag";
			};
			class _xx_JLTS_DW32S_mag{
				count = 10;
				magazine = "JLTS_DW32S_mag";
			};
			class _xx_JLTS_Z6_mag{
				count = 10;
				magazine = "JLTS_Z6_mag";
			};
			class _xx_DCStun_Mag{
				count = 10;
				magazine = "DCStun_Mag";
			};
			class _xx_SWOP_SWOP_DC17Pistol_Mag_Mag{
				count = 15;
				magazine = "RD501_DC17_x20_mag";
			};
			class _xx_SWOP_SWOP_dc15xBlasterRifle_RD501_Mag_Mag{
				count = 20;
				magazine = "RD501_DC15x_x6_mag";
			};
			class _xx_SWLW_DC15A_mag{
				count = 20;
				magazine = "SWLW_DC15A_mag";
			};
			class _xx_SWLW_DC15S_mag{
				count = 20;
				magazine = "SWLW_DC15S_mag";
			};
			class _xx_SWLW_DC17_mag{
				count = 20;
				magazine = "SWLW_DC17_mag";
			};
		};
		class TransportItems{
		};
	};
	class JA_104th_Box_Explosives: Box_212_Supply_F{
		author = "Dak";
		displayName = "Explosives Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "104th_Guys_2";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		maximumLoad = 2000;
		class TransportWeapons{
		};
		class TransportMagazines
		{
			class _xx_SWLW_smokeRed_mag{
				count = 10;
				magazine = "SWLW_smokeRed_mag";
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell{
				count = 10;
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell{
				count = 10;
				magazine = "1Rnd_SmokePurple_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell{
				count = 10;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_1Rnd_SmokeWhite_Grenade_shell{
				count = 10;
				magazine = "1Rnd_SmokeWhite_Grenade_shell";
			};
			class _xx_SWOP_1Rnd_AT_Grenade_DC15A_Mag{
				count = 10;
				magazine = "RD501_DC15s_x60_mag";
			};
			class _xx_SWLW_plx1_at_mag{
				count = 10;
				magazine = "SWLW_plx1_at_mag";
			};
			class _xx_SWLW_rps6_mag{
				count = 10;
				magazine = "SWLW_rps6_mag";
			};
			class _xx_1Rnd_HE_Grenade_shell{ //
				count = 10;
				magazine = "1Rnd_HE_Grenade_shell";
			};
		};
		class TransportItems{
		};
	};
	class JA_104th_Box_Medic: Box_212_Medical_F{
		author = "Dak";
		displayName = "Medic Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "104th_Guys_2";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		maximumLoad = 2000;
		class TransportWeapons{
		};
		class TransportMagazines{
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage{
				count = 110;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_epinephrine{
				count = 50;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_morphine{
				count = 50;
				name = "ACE_morphine";
			};
			class _xx_ACE_packingBandage{
				count = 110;
				name = "ACE_packingBandage";
			};
			class _xx_ACE_plasmaIV{
				count = 10;
				name = "ACE_plasmaIV";
			};
			class _xx_ACE_plasmaIV_250{
				count = 10;
				name = "ACE_plasmaIV_250";
			};
			class _xx_ACE_plasmaIV_500{
				count = 10;
				name = "ACE_plasmaIV_500";
			};
			class _xx_ACE_quikclot{
				count = 110;
				name = "ACE_quikclot";
			};
			class _xx_ACE_salineIV{
				count = 10;
				name = "ACE_salineIV";
			};
			class _xx_ACE_salineIV_250{
				count = 10;
				name = "ACE_salineIV_250";
			};
			class _xx_ACE_salineIV_500{
				count = 10;
				name = "ACE_salineIV_500";
			};
			class _xx_ACE_tourniquet{
				count = 20;
				name = "ACE_tourniquet";
			};
		};
	};
};