class CfgPatches
{
	class Jangos_Armory_Vehicles
	{
		units[] = {
			"JA_104th_LAAT",
			"JA_104th_LAAT_AB",
			"JA_104th_Base_Falcon_Armed",
			"JA_104th_Base_Pelican_Unarmed",
			"JA_104th_Base_Pelican_Armed",
			"JA_104th_Base_TX130",
			"JA_104th_Box_Ammo",
			"JA_104th_Box_Explosives",
			"JA_104th_Box_Medic",
			"JA_104th_Box_Resupply",
			"JA_104th_BARC",
			"JA_104th_BARC_WP",
			"JA_104th_BARC_Talon",
			"JA_104th_BARC_Beans",
			"JA_104th_BARC_Sniper",
			"JA_104th_BARC_EOD",
			"JA_104th_BARC_Medic",
			"JA_104th_Oryx",
			"JA_104th_OryxNS",
			"JA_104th_APC_Light_Bantha",
			"JA_104th_LSV",
			"JA_104th_212th_3AS_Reaper_Z95_Headhunter_Blue",
			"JA_104th_3AS_Reaper_Y_Wing",
			"JA_104th_3AS_Reaper_Y_Wing_Blue",
			"JA_104th_3AS_Reaper_Y_Wing_BlueLeader",
			"JA_104th_NU",
			//"JA_104th_Droideka_Normal",
			//"BaseShield100m",
			"JA_104th_Republic_HR_Bag",
			"JA_104th_HeavyRepeater_Unarmoured",
			"JA_104th_ATRT",
			"JA_104th_Xian_Infantry",
			"JA_104th_Xian_Vehicle",
			"JA_104th_Republic_Transport",
			"JA_104th_Uwing",
			"JA_104th_N1",
			//"BaseShield100mSpawner",
			//"BaseShield500mSpawner",
			//"JA_104th_Droideka_Mobile",
			//"JA_104th_Droideka_Sniper",
			"JA_104th_Vulture_dynamicLoadout_base",
			"JA_104th_Vulture_dynamicLoadout",
			"JA_104th_Vulture_dynamicLoadout_AA",
			"JA_104th_Vulture_dynamicLoadout_Bare"
		};	//All the new vehicles/units you've created in cfgVehicles
		weapons[] = {"JA_104th_guided_resupply_pod_launcher"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_EPB_Heli_Light_03","A3_Armor_F_Beta", "A3_Soft_F", "lsd_vehicles_heli", "3as_nu", "A3_Air_F_Exp_VTOL_02", "3as_Starships", "A3_Weapons_F_Jets", "JMSLLTE_vehair_Uwing", "JMSLLTE_vehair_N1fighter"};
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

class DefaultEventhandlers;
class cfgVehicles {
	
	class SWLG_tanks_tx130;

	class lsd_laat_base;
	class lsd_heli_laati_transport;
	class lsd_heli_laati_ab; 
	class lsd_laatc_base;
	class OPTRE_UNSC_falcon;
	class OPTRE_Pelican_unarmed;
	class OPTRE_Pelican_armed;
	class Aux212_3AS_Reaper_Y_Wing;
	class ls_carrybox_base;
	
	
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
	
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_03_base_F: Tank_F{};
	class I_APC_Tracked_03_base_F: APC_Tracked_03_base_F{};
	class OPTRE_M494: I_APC_Tracked_03_base_F
	{
		class ACE_SelfActions;
	};
	

	class Box_212_Supply_F;
	class Box_212_Medical_F;
	
	//Classes for the Vulture Rebalance
	class 3AS_Vulture_Base_F;
	class 3AS_CIS_Vulture_F;
	class 3AS_CIS_Vulture_AA_F;
	class 3AS_CIS_Vulture_CAS_F;

	class lsd_heli_laati: lsd_laat_base
	{
		class ACE_SelfActions;
	};
	class JA_104th_LAAT: lsd_heli_laati
	{
		displayName = "LAAT-E 104th";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		
		armor = 250;
		armorStructural = 2;
		
		DriverCanEject = 1;
		cargoCanEject = 1;
		
		irScanRangeMax = 10000;
		irScanRangeMin = 100;
		irScanToEyeFactor = 4;
		laserScanner = 1;
		nvScanner = 1;
		showAllTargets = 2;
		reportRemoteTargets = True;
		ReceiveRemoteTargets = True;
		crewCrashProtection = 0.00001;
		radarType = 4;
		ls_impulsor_fuelDrain_1 = 0.00001;
		ls_impulsor_fuelDrain_2 = 0.00003;
		
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","212th_A2A_MissileSystem","missiles_DAR","Laserdesignator_pilotCamera","JA_104th_guided_resupply_pod_launcher","CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","212th_Drexl_4Rnd_A2A_mag","212th_Drexl_4Rnd_A2A_mag","12rnd_missiles","12rnd_missiles","12rnd_missiles","Laserbatteries","JA_104th_Guided_Resupply_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};

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
				explosionShielding = 3;
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
				radius = 0.001;
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
				radius = 0.001;
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
				radius = 0.001;
			};
			class HitAvionics
			{
				armor = 0.3;
				convexComponent = "avionics_hit";
				explosionShielding = 2;
				material = 51;
				name = "avionics_hit";
				passThrough = 1;
				visual = "";
				radius = 0.3;
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
						hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","B_AMRAAM_D","B_AMRAAM_D_RAIL","DAR","DAGR","B_GBU12","B_AGM65_RAIL","I_ORCA_RIGHT_PYLON","20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON"}; //hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AMRAAM_D_DUAL_RAIL","B_SDB_QUAD_RAIL","B_GBU12","B_AGM65_RAIL"};
						turret[] = {0};
						UIposition[] = {0.06,0.4};
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 4;
						UIposition[] = {0.08,0.35};
					};
					class PylonLeft3: PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 3;
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
		
		
		maximumLoad = 20000;
		
		class TransportWeapons{
			class _xx_SWLW_DC15A{
				count = 2;
				weapon = "SWLW_DC15A";
			};
			class _xx_SWLW_DC15S{
				count = 2;
				weapon = "SWLW_DC15S";
			};
			class _xx_JLTS_DC15S{
				count = 2;
				weapon = "JLTS_DC15S";
			};
			class _xx_JLTS_DC15A_plastic{
				count = 2;
				weapon = "JLTS_DC15A_plastic";
			};
			class _xx_ls_weapon_rps6{
				count = 2;
				weapon = "ls_weapon_rps6";
			};
			class _xx_ls_weapon_rps6_disposable{
				count = 4;
				weapon = "ls_weapon_rps6_disposable";
			};
			
		};
		
		class TransportMagazines
		{
			class _xx_JLTS_DC15A_mag{
				count = 20;
				magazine = "JLTS_DC15A_mag";
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
			class _xx_JLTS_stun_mag_short{
				count = 10;
				magazine = "JLTS_stun_mag_short";
			};
			class _xx_JLTS_stun_mag_long{
				count = 10;
				magazine = "JLTS_stun_mag_long";
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
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_ls_mag_at_plx{
				count = 10;
				magazine = "ls_mag_at_plx";
			};
			class _xx_ls_mag_rpg_1rnd{
				count = 10;
				magazine = "ls_mag_rpg_1rnd";
			};
			class _xx_1Rnd_HE_Grenade_shell{ //
				count = 10;
				magazine = "1Rnd_HE_Grenade_shell";
			};
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
		
		
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104bg.paa","lsd_vehicles_heli\laati\data\body2_co.paa","lsd_vehicles_heli\laati\data\door1_co.paa","lsd_vehicles_heli\laati\data\door2_co.paa","lsd_vehicles_heli\laati\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","lsd_vehicles_heli\laati\data\cockpits_co.paa","lsd_vehicles_heli\laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bg.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
			class logo: base
			{
				displayName = "104th Logo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bgwp.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
			}
			
			class plobro: base
			{
				displayName = "104th PloBros";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bgpb.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
			};
			
			class medevac: base
			{
				displayName = "104th MedEvac";
				textures[] = {"JangosVehicles\data\textures\body1_co_104medic.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"JangosVehicles\data\textures\door1_co_medic2.paa",
				"JangosVehicles\data\textures\door2_co_medic.paa",
				"JangosVehicles\data\textures\door3_co_medic.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
			};
			
			class Haze: base
			{
				displayName = "104th Haze";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"JangosVehicles\data\textures\door1_co_echo.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
			};
			
			class Beef: base
			{
				displayName = "104th Beef";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Beef.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
			};
			
			class Bail: base
			{
				displayName = "104th Beef";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
			};
			
			
		};
		textureList[] = {"base",1,"logo",1,"plobro",1};
		class ACE_SelfActions: ACE_SelfActions
		{
			class Style_Changer
			{
				displayName = "Change Camo";
				exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled = 0;
				priority = 2;
				class DefaultSkin
				{
					displayName = "Republic";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = "_target setObjectTextureGlobal [0,'lsd_vehicles_heli\laati\data\body1_co.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'lsd_vehicles_heli\laati\data\wings_co.paa']; _target setObjectTextureGlobal [6,'lsd_vehicles_heli\laati\data\missiles_co.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class 104th_Skins
				{
					displayname = "104th Skins";
					class 104th_Blue: DefaultSkin
					{
						displayName = "104th Blue";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bg.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Logo: DefaultSkin
					{
						displayName = "104th Logo";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bgwp.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_PloBro: DefaultSkin
					{
						displayName = "104th PloBro";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bgpb.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_MedEvac: DefaultSkin
					{
						displayName = "104th MedEvac";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104medic.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\door1_co_medic2.paa']; _target setObjectTextureGlobal [3,'JangosVehicles\data\textures\door2_co_medic.paa']; _target setObjectTextureGlobal [4,'JangosVehicles\data\textures\door3_co_medic.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
				};
				class Custom_Skins
				{
					displayname = "Custom Skins";
					class 104th_Haze: DefaultSkin
					{
						displayName = "Haze";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Echo.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\door1_co_echo.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Beef: DefaultSkin
					{
						displayName = "Beef";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Beef.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
					class 104th_Bail: DefaultSkin
					{
						displayName = "Bail";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Bail.paa']; _target setObjectTextureGlobal [1,'lsd_vehicles_heli\laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'lsd_vehicles_heli\laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'lsd_vehicles_heli\laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'lsd_vehicles_heli\laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'lsd_vehicles_heli\laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'lsd_vehicles_heli\laati\data\glass_ca.paa']";
					};
				};
			};
		};
	};
	class JA_104th_LAAT_AB: JA_104th_LAAT 
	{
		displayName = "LAAT-E 104th Airborne";
		model = "\lsd_vehicles_heli\laati\lsd_heli_laati_ab";
		
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
	
	/*
	class JA_104th_Base_LAAT_Medic: JA_Base_LAAT_AB {
		displayName = "LAAT-E 104th MedEvac";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		attendant = 1;
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104medic.paa","lsd_vehicles_heli\laati\data\body2_co.paa","JangosVehicles\data\textures\door1_co_medic2.paa","JangosVehicles\data\textures\door2_co_medic.paa","JangosVehicles\data\textures\door3_co_medic.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","lsd_vehicles_heli\laati\data\cockpits_co.paa","lsd_vehicles_heli\laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th MedEvac";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104medic.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"JangosVehicles\data\textures\door1_co_medic2.paa",
				"JangosVehicles\data\textures\door2_co_medic.paa",
				"JangosVehicles\data\textures\door3_co_medic.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	class JA_104th_Echo_LAAT: JA_Base_LAAT {
		displayName = "LAAT-E 104th Echo";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa","lsd_vehicles_heli\laati\data\body2_co.paa","JangosVehicles\data\textures\door1_co_echo.paa","lsd_vehicles_heli\laati\data\door2_co.paa","lsd_vehicles_heli\laati\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","lsd_vehicles_heli\laati\data\cockpits_co.paa","lsd_vehicles_heli\laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Echo";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"JangosVehicles\data\textures\door1_co_echo.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	class JA_104th_Echo_LAAT_AB: JA_Base_LAAT_AB {
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		displayName = "LAAT-E 104th Echo Airborne";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa","lsd_vehicles_heli\laati\data\body2_co.paa","JangosVehicles\data\textures\door1_co_echo.paa","lsd_vehicles_heli\laati\data\door2_co.paa","lsd_vehicles_heli\laati\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","lsd_vehicles_heli\laati\data\cockpits_co.paa","lsd_vehicles_heli\laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Echo";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Echo.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"JangosVehicles\data\textures\door1_co_echo.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	class JA_104th_Bail_LAAT: JA_Base_LAAT {
		displayName = "LAAT-E 104th Bail";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa","lsd_vehicles_heli\laati\data\body2_co.paa","lsd_vehicles_heli\laati\data\door1_co.paa","lsd_vehicles_heli\laati\data\door2_co.paa","lsd_vehicles_heli\laati\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","lsd_vehicles_heli\laati\data\cockpits_co.paa","lsd_vehicles_heli\laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Bail";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};	
	class JA_104th_Bail_LAAT_AB: JA_Base_LAAT_AB {
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		displayName = "LAAT-E 104th Bail Airborne";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa","lsd_vehicles_heli\laati\data\body2_co.paa","lsd_vehicles_heli\laati\data\door1_co.paa","lsd_vehicles_heli\laati\data\door2_co.paa","lsd_vehicles_heli\laati\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","lsd_vehicles_heli\laati\data\cockpits_co.paa","lsd_vehicles_heli\laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Bail";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	class JA_104th_Beef_LAAT: JA_Base_LAAT {
		displayName = "LAAT-E 104th Beef";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Beef.paa","lsd_vehicles_heli\laati\data\body2_co.paa","lsd_vehicles_heli\laati\data\door1_co.paa","lsd_vehicles_heli\laati\data\door2_co.paa","lsd_vehicles_heli\laati\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","lsd_vehicles_heli\laati\data\cockpits_co.paa","lsd_vehicles_heli\laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Beef";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Beef.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};	
	class JA_104th_Beef_LAAT_AB: JA_Base_LAAT_AB {
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		displayName = "LAAT-E 104th Beef Airborne";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\body1_co_104Beef.paa","lsd_vehicles_heli\laati\data\body2_co.paa","lsd_vehicles_heli\laati\data\door1_co.paa","lsd_vehicles_heli\laati\data\door2_co.paa","lsd_vehicles_heli\laati\data\door3_co.paa","JangosVehicles\data\textures\wings_co_104bg.paa","JangosVehicles\data\textures\missiles_co_104.paa","lsd_vehicles_heli\laati\data\cockpits_co.paa","lsd_vehicles_heli\laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th Beef";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Beef.paa",
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"JangosVehicles\data\textures\wings_co_104bg.paa",
				"JangosVehicles\data\textures\missiles_co_104.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};
			
		};
		textureList[] = {"base",1};
	};
	*/
	
	class Plane_Fighter_03_base_F;
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components;
	};
	class 3as_Z95_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class ACE_SelfActions;
		class Components: Components
		{
			class TransportPylonsComponent;
		};
	};
	
	class JA_104th_212th_3AS_Reaper_Z95_Headhunter_Blue: 3as_Z95_base
	{
		Author = "212th + 3AS + Echo"
		displayName = "Z-95 Reaper (Blue)"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselections[] = {"camo","camo1","camo2"};
		hiddenselectionstextures[] = {"3AS\3as_Z95\Data\blue_co.paa","3AS\3as_Z95\Data\cockpit_co.paa","3AS\3as_saber\data\glass\glass_ca"};
		weapons[] = {"CMFlareLauncher","Laserdesignator_pilotCamera","ls_laat_gun","ls_laat_gun_2","3as_V19_Medium_Cannon","RD501_Republic_Aircraft_Laser_AA"};
		magazines[] = {"Laserbatteries","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","RD501_Republic_Aircraft_Laser_AA_Mag_600","RD501_Republic_Aircraft_Laser_AA_Mag_600","RD501_Republic_Aircraft_Laser_AA_Mag_600"};
		vehicleClass = "GAR_LAATCatNSub";
		crew = "SWLB_clone_pilot_base_P2";
		aileronSensitivity = 2.9;
		aileronControlsSensitivityCoef = 4;
		defaultUserMFDvalues[] = {0,1,0,1,0};
		class transportweapons{};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 4;
			};
			class _xx_3AS_SmokeWhite
			{
				magazine = "3AS_SmokeWhite";
				count = 4;
			};
			class _xx_3AS_SmokeGreen
			{
				magazine = "3AS_SmokeGreen";
				count = 4;
			};
			class _xx_3AS_SmokeBlue
			{
				magazine = "3AS_SmokeBlue";
				count = 4;
			};
			class _xx_OPTRE_M8_Flare_Blue
			{
				magazine = "OPTRE_M8_Flare_Blue";
				count = 4;
			};
			class _xx_OPTRE_M8_Flare_Green
			{
				magazine = "OPTRE_M8_Flare_Green";
				count = 4;
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 10;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 20;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 8;
			};
			class _xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 2;
			};
			class _xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 2;
			};
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 1;
			};
		};
		class MFD
		{
			class B_Plane_Fighter_01_static_HUD
			{
				enableParallax = 1;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.0325,0.0325,0.1};
				helmetRight[] = {0.065,0,0};
				helmetDown[] = {0,-0.065,0};
				font = "PuristaLight";
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.5};
					pos10[] = {1.225,1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {"user0","user1","user2"};
				class Bones
				{
					class ThrustVectoringRotation
					{
						type = "rotational";
						source = "vtolvectoring";
						sourceScale = 100;
						center[] = {0.12,0.75};
						min = 0;
						max = 100;
						minAngle = 0;
						maxAngle = -90;
						aspectRatio = 0.982906;
					};
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class PlaneOrientation
					{
						type = "vector";
						source = "forward";
						pos[] = {0.5,0.5};
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class ThrustVectoringRotation2
					{
						type = "rotational";
						source = "vtolvectoring";
						sourceScale = 100;
						center[] = {0.06,0.145};
						min = 0;
						max = 100;
						minAngle = 0;
						maxAngle = -90;
						aspectRatio = 0.982906;
					};
					class MissileFlightTimeRot1
					{
						type = "rotational";
						source = "MissileFlightTime";
						sourceScale = 1;
						center[] = {0,0};
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.985402;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class TargetingPodDir
					{
						source = "pilotcameratoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class TargetingPodTarget
					{
						source = "pilotcameratargettoview";
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class ImpactPointRelative
					{
						type = "vector";
						source = "impactpointtoviewweaponRelative";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class NormalizeBombCircle
					{
						type = "normalizedorsmaller";
						limit = 0.08;
						aspectRatio = 0.985402;
					};
					class Limit0109
					{
						type = "limit";
						limits[] = {0.1,0.1,0.9,0.9};
					};
					class LimitWaypoint
					{
						type = "limit";
						limits[] = {0.2,0.1,0.8,0.1};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPoint";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class WPPointToView: WPPoint
					{
						source = "WPPointToView";
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1ToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.774,0.77};
					};
					class Airport2: Airport1
					{
						source = "airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source = "airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source = "airportCorner4ToView";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.5};
						pos3[] = {0.5822,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.581};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5,0.5};
						min = "-rad(30)";
						max = "rad(30)";
						minAngle = "180.25-30";
						maxAngle = "180.75+30";
						aspectRatio = 1;
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.5};
						pos10[] = {0.884,0.88};
						type = "horizontoview";
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
					class LevelP90: Level0
					{
						angle = 90;
					};
					class LevelM90: Level0
					{
						angle = -90;
					};
					class LarAmmoMax
					{
						type = "linear";
						source = "LarAmmoMax";
						sourceScale = 1;
						min = 0;
						max = 1;
						minPos[] = {0,1};
						maxPos[] = {0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source = "LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source = "LarTargetDist";
					};
				};
				class Draw
				{
					width = 1;
					alpha = "user3";
					color[] = {"user0","user1","user2"};
					condition = "on";
					class ThrustVectoring
					{
						condition = "1+vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "vtolvectoring";
							sourceScale = 90;
							align = "left";
							scale = 1;
							pos[] = {{0.18,0.71},1};
							right[] = {{"0.18+.05",0.71},1};
							down[] = {{0.18,"0.71+.08"},1};
						};
						class VectoringArrow
						{
							type = "line";
							width = 6;
							points[] = {{"ThrustVectoringRotation",{"-0.034","-0.006*4"},1},{"ThrustVectoringRotation",{"-0.044*2","0.0"},1},{"ThrustVectoringRotation",{"-0.034","0.006*4"},1},{"ThrustVectoringRotation",{"-0.034","-0.006*4"},1},{},{"ThrustVectoringRotation",{"-0.044","0.0"},1},{"ThrustVectoringRotation",{"-0.004","0.0"},1},{}};
						};
					};
					class ThrustVectoringAuto
					{
						condition = "-vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "static";
							sourceScale = 1;
							text = "AUTO";
							align = "left";
							scale = 1;
							pos[] = {{0.2,0.71},1};
							right[] = {{"0.20+.05",0.71},1};
							down[] = {{0.2,"0.71+.08"},1};
						};
					};
					class ThrustVectoringAuto2
					{
						condition = "vtolvectoring";
						class VectorigNumber
						{
							type = "text";
							source = "static";
							sourceScale = 1;
							text = "MANUAL";
							align = "left";
							scale = 1;
							pos[] = {{0.103,0.14},1};
							right[] = {{0.123,0.14},1};
							down[] = {{0.103,0.155},1};
						};
					};
					class PlaneW
					{
						clipTL[] = {0,1};
						clipBR[] = {1,0};
						type = "line";
						width = 3;
						points[] = {{"PlaneOrientation",{-0.04,0},1},{"PlaneOrientation",{-0.015,0},1},{"PlaneOrientation",{-0.0075,0.015},1},{"PlaneOrientation",{0,0},1},{"PlaneOrientation",{0.0075,0.015},1},{"PlaneOrientation",{0.015,0},1},{"PlaneOrientation",{0.04,0},1}};
					};
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 3;
						points[] = {{"Velocity",{0,-0.02},1},{"Velocity",{0.01,-0.01732},1},{"Velocity",{0.01732,-0.01},1},{"Velocity",{0.02,0},1},{"Velocity",{0.01732,0.01},1},{"Velocity",{0.01,0.01732},1},{"Velocity",{0,0.02},1},{"Velocity",{-0.01,0.01732},1},{"Velocity",{-0.01732,0.01},1},{"Velocity",{-0.02,0},1},{"Velocity",{-0.01732,-0.01},1},{"Velocity",{-0.01,-0.01732},1},{"Velocity",{0,-0.02},1},{},{"Velocity",{0.04,0},1},{"Velocity",{0.02,0},1},{},{"Velocity",{-0.04,0},1},{"Velocity",{-0.02,0},1},{},{"Velocity",{0,-0.04},1},{"Velocity",{0,-0.02},1}};
					};
					class MachineGunCrosshairGroup
					{
						type = "group";
						condition = "-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPointRelative",{0,-0.0886861},1},{"ImpactPointRelative",{0,-0.0788321},1},{},{"ImpactPointRelative",{0,0.0886861},1},{"ImpactPointRelative",{0,0.0788321},1},{},{"ImpactPointRelative",{-0.09,0},1},{"ImpactPointRelative",{-0.08,0},1},{},{"ImpactPointRelative",{0.09,0},1},{"ImpactPointRelative",{0.08,0},1},{},{"ImpactPointRelative",{0,-0.0019708},1},{"ImpactPointRelative",{0,0.0019708},1},{},{"ImpactPointRelative",{-0.002,0},1},{"ImpactPointRelative",{0.002,0},1},{}};
						};
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ImpactPointRelative",{0,-0.0630657},1},{"ImpactPointRelative",{0,-0.0788321},1},{"MissileFlightTimeRot1",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot2",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot3",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot4",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot5",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot6",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot7",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot8",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot9",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot10",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot11",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot12",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot13",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot14",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot15",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot16",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot17",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot18",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot19",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot20",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot20",{0,0.064},1,"ImpactPointRelative",1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPointRelative",{0,-0.0788321},1},{"ImpactPointRelative",{0.013888,-0.0776339},1},{"ImpactPointRelative",{0.02736,-0.0740785},1},{"ImpactPointRelative",{0.04,-0.0682686},1},{"ImpactPointRelative",{0.051424,-0.0603854},1},{"ImpactPointRelative",{0.06128,-0.0506733},1},{"ImpactPointRelative",{0.06928,-0.0394161},1},{"ImpactPointRelative",{0.075176,-0.0269606},1},{"ImpactPointRelative",{0.078784,-0.0136853},1},{"ImpactPointRelative",{0.08,0},1},{"ImpactPointRelative",{0.078784,0.0136853},1},{"ImpactPointRelative",{0.075176,0.0269606},1},{"ImpactPointRelative",{0.06928,0.0394161},1},{"ImpactPointRelative",{0.06128,0.0506733},1},{"ImpactPointRelative",{0.051424,0.0603854},1},{"ImpactPointRelative",{0.04,0.0682686},1},{"ImpactPointRelative",{0.02736,0.0740785},1},{"ImpactPointRelative",{0.013888,0.0776339},1},{"ImpactPointRelative",{0,0.0788321},1},{"ImpactPointRelative",{-0.013888,0.0776339},1},{"ImpactPointRelative",{-0.02736,0.0740785},1},{"ImpactPointRelative",{-0.04,0.0682686},1},{"ImpactPointRelative",{-0.051424,0.0603854},1},{"ImpactPointRelative",{-0.06128,0.0506733},1},{"ImpactPointRelative",{-0.06928,0.0394161},1},{"ImpactPointRelative",{-0.075176,0.0269606},1},{"ImpactPointRelative",{-0.078784,0.0136853},1},{"ImpactPointRelative",{-0.08,0},1},{"ImpactPointRelative",{-0.078784,-0.0136853},1},{"ImpactPointRelative",{-0.075176,-0.0269606},1},{"ImpactPointRelative",{-0.06928,-0.0394161},1},{"ImpactPointRelative",{-0.06128,-0.0506733},1},{"ImpactPointRelative",{-0.051424,-0.0603854},1},{"ImpactPointRelative",{-0.04,-0.0682686},1},{"ImpactPointRelative",{-0.02736,-0.0740785},1},{"ImpactPointRelative",{-0.013888,-0.0776339},1},{"ImpactPointRelative",{0,-0.0788321},1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPointRelative",{-0.002,0.11},1};
							right[] = {"ImpactPointRelative",{0.045,0.11},1};
							down[] = {"ImpactPointRelative",{-0.002,0.15},1};
						};
					};
					class AAMissileCrosshairGroup
					{
						type = "group";
						condition = "AAmissile";
						class AAMissileCrosshair
						{
							type = "line";
							width = 4;
							points[] = {{"PlaneOrientation",{0,-0.24635},1},{"PlaneOrientation",{0.0434,-0.242606},1},{"PlaneOrientation",{0.0855,-0.231495},1},{"PlaneOrientation",{0.125,-0.213339},1},{"PlaneOrientation",{0.1607,-0.188704},1},{"PlaneOrientation",{0.1915,-0.158354},1},{"PlaneOrientation",{0.2165,-0.123175},1},{"PlaneOrientation",{0.234925,-0.0842518},1},{"PlaneOrientation",{0.2462,-0.0427664},1},{"PlaneOrientation",{0.25,0},1},{"PlaneOrientation",{0.2462,0.0427664},1},{"PlaneOrientation",{0.234925,0.0842518},1},{"PlaneOrientation",{0.2165,0.123175},1},{"PlaneOrientation",{0.1915,0.158354},1},{"PlaneOrientation",{0.1607,0.188704},1},{"PlaneOrientation",{0.125,0.213339},1},{"PlaneOrientation",{0.0855,0.231495},1},{"PlaneOrientation",{0.0434,0.242606},1},{"PlaneOrientation",{0,0.24635},1},{"PlaneOrientation",{-0.0434,0.242606},1},{"PlaneOrientation",{-0.0855,0.231495},1},{"PlaneOrientation",{-0.125,0.213339},1},{"PlaneOrientation",{-0.1607,0.188704},1},{"PlaneOrientation",{-0.1915,0.158354},1},{"PlaneOrientation",{-0.2165,0.123175},1},{"PlaneOrientation",{-0.234925,0.0842518},1},{"PlaneOrientation",{-0.2462,0.0427664},1},{"PlaneOrientation",{-0.25,0},1},{"PlaneOrientation",{-0.2462,-0.0427664},1},{"PlaneOrientation",{-0.234925,-0.0842518},1},{"PlaneOrientation",{-0.2165,-0.123175},1},{"PlaneOrientation",{-0.1915,-0.158354},1},{"PlaneOrientation",{-0.1607,-0.188704},1},{"PlaneOrientation",{-0.125,-0.213339},1},{"PlaneOrientation",{-0.0855,-0.231495},1},{"PlaneOrientation",{-0.0434,-0.242606},1},{"PlaneOrientation",{0,-0.24635},1}};
						};
						class Lines
						{
							type = "line";
							width = 4;
							points[] = {{{0.21,0.55},1},{{0.19,0.55},1},{{0.19,0.71},1},{{0.21,0.71},1},{},{{0.21,0.67},1},{{0.19,0.67},1},{},{{0.21,0.63},1},{{0.19,0.63},1},{},{{0.21,0.59},1},{{0.19,0.59},1},{},{"LarTargetDist",-0.16,{0.17,0.73},1},{"LarTargetDist",-0.16,{0.19,0.71},1},{"LarTargetDist",-0.16,{0.17,0.69},1},{}};
						};
						class Poly
						{
							type = "polygon";
							points[] = {{{"LarAmmoMin",-0.16,{0.191,0.71},1},{"LarAmmoMax",-0.16,{0.191,0.71},1},{"LarAmmoMax",-0.16,{0.208,0.71},1},{"LarAmmoMin",-0.16,{0.208,0.71},1}}};
						};
						class TopText
						{
							type = "text";
							source = "LarTop";
							sourceScale = 0.001;
							scale = 1;
							pos[] = {{0.22,0.53},1};
							right[] = {{0.26,0.53},1};
							down[] = {{0.22,0.57},1};
							align = "right";
						};
						class MiddleText: TopText
						{
							source = "LarTop";
							sourcePrecision = -1;
							sourceScale = 0.0005;
							pos[] = {{0.22,0.61},1};
							right[] = {{0.26,0.61},1};
							down[] = {{0.22,0.65},1};
						};
						class SpeedText: TopText
						{
							source = "LarTargetSpeed";
							align = "left";
							sourceScale = 3.6;
							pos[] = {"LarTargetDist",-0.16,{0.16,0.69},1};
							right[] = {"LarTargetDist",-0.16,{0.2,0.69},1};
							down[] = {"LarTargetDist",-0.16,{0.16,0.73},1};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition = "ATmissile";
						type = "group";
						class ATMissileCrosshair
						{
							type = "line";
							width = 4;
							points[] = {{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.15,-0.13},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.15,0.13},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.15,-0.13},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.15,0.13},1},{},{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.13,-0.15},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.13,0.15},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.13,-0.15},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.13,0.15},1}};
						};
					};
					class RocketCrosshairGroup
					{
						type = "group";
						condition = "Rocket";
						class MachineGunCrosshair
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPoint",{0,-0.0394161},1},{"ImpactPoint",{0,-0.019708},1},{},{"ImpactPoint",{0,0.0394161},1},{"ImpactPoint",{0,0.019708},1},{},{"ImpactPoint",{-0.04,0},1},{"ImpactPoint",{-0.02,0},1},{},{"ImpactPoint",{0.04,0},1},{"ImpactPoint",{0.02,0},1},{},{"ImpactPoint",{0.01,-0.0394161},1},{"ImpactPoint",{-0.01,-0.0394161},1},{},{"ImpactPoint",{0,-0.0019708},1},{"ImpactPoint",{0,0.0019708},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1},{}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,0.07},1};
							right[] = {"ImpactPoint",{0.045,0.07},1};
							down[] = {"ImpactPoint",{-0.002,0.11},1};
						};
					};
					class BombCrosshairGroup
					{
						type = "group";
						condition = "bomb";
						class BombCrosshair
						{
							width = 4;
							type = "line";
							points[] = {{"ImpactPoint",{0,0.0886861},1},{"ImpactPoint",{0,0.0788321},1},{},{"ImpactPoint",{-0.09,0},1},{"ImpactPoint",{-0.08,0},1},{},{"ImpactPoint",{0.09,0},1},{"ImpactPoint",{0.08,0},1},{},{"ImpactPoint",{0,-0.0019708},1},{"ImpactPoint",{0,0.0019708},1},{},{"ImpactPoint",{-0.002,0},1},{"ImpactPoint",{0.002,0},1},{},{"ImpactPoint",{0,-0.0788321},1},{"ImpactPoint",{0.013888,-0.0776339},1},{"ImpactPoint",{0.02736,-0.0740785},1},{"ImpactPoint",{0.04,-0.0682686},1},{"ImpactPoint",{0.051424,-0.0603854},1},{"ImpactPoint",{0.06128,-0.0506733},1},{"ImpactPoint",{0.06928,-0.0394161},1},{"ImpactPoint",{0.075176,-0.0269606},1},{"ImpactPoint",{0.078784,-0.0136853},1},{"ImpactPoint",{0.08,0},1},{"ImpactPoint",{0.078784,0.0136853},1},{"ImpactPoint",{0.075176,0.0269606},1},{"ImpactPoint",{0.06928,0.0394161},1},{"ImpactPoint",{0.06128,0.0506733},1},{"ImpactPoint",{0.051424,0.0603854},1},{"ImpactPoint",{0.04,0.0682686},1},{"ImpactPoint",{0.02736,0.0740785},1},{"ImpactPoint",{0.013888,0.0776339},1},{"ImpactPoint",{0,0.0788321},1},{"ImpactPoint",{-0.013888,0.0776339},1},{"ImpactPoint",{-0.02736,0.0740785},1},{"ImpactPoint",{-0.04,0.0682686},1},{"ImpactPoint",{-0.051424,0.0603854},1},{"ImpactPoint",{-0.06128,0.0506733},1},{"ImpactPoint",{-0.06928,0.0394161},1},{"ImpactPoint",{-0.075176,0.0269606},1},{"ImpactPoint",{-0.078784,0.0136853},1},{"ImpactPoint",{-0.08,0},1},{"ImpactPoint",{-0.078784,-0.0136853},1},{"ImpactPoint",{-0.075176,-0.0269606},1},{"ImpactPoint",{-0.06928,-0.0394161},1},{"ImpactPoint",{-0.06128,-0.0506733},1},{"ImpactPoint",{-0.051424,-0.0603854},1},{"ImpactPoint",{-0.04,-0.0682686},1},{"ImpactPoint",{-0.02736,-0.0740785},1},{"ImpactPoint",{-0.013888,-0.0776339},1},{"ImpactPoint",{0,-0.0788321},1},{},{},{"ImpactPoint",-1,"Velocity",1,"NormalizeBombCircle",1,"ImpactPoint",1,{0,0},1},{"Velocity",1,"Limit0109",1,{0,0},1}};
						};
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ImpactPoint",{0,-0.0630657},1},{"ImpactPoint",{0,-0.0788321},1},{"MissileFlightTimeRot1",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.064},1,"ImpactPoint",1}};
						};
						class Distance
						{
							type = "text";
							source = "ImpactDistance";
							sourceScale = 0.001;
							sourcePrecision = 1;
							max = 15;
							align = "center";
							scale = 1;
							pos[] = {"ImpactPoint",{-0.002,0.11},1};
							right[] = {"ImpactPoint",{0.045,0.11},1};
							down[] = {"ImpactPoint",{-0.002,0.15},1};
						};
					};
					class WeaponsText
					{
						condition = "1- mgun";
						class WeaponsText
						{
							type = "text";
							source = "weapon";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.032,0.84},1};
							right[] = {{0.087,0.84},1};
							down[] = {{0.032,0.885},1};
						};
					};
					class MGunText
					{
						condition = "mgun";
						class WeaponsText
						{
							type = "text";
							source = "static";
							text = "GUN";
							sourceScale = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.032,0.84},1};
							right[] = {{0.087,0.84},1};
							down[] = {{0.032,0.885},1};
						};
					};
					class AmmoText
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.032,0.88},1};
						right[] = {{0.087,0.88},1};
						down[] = {{0.032,0.925},1};
					};
					class Laser
					{
						condition = "laseron";
						class LaserText
						{
							type = "text";
							source = "static";
							text = "LASER";
							align = "left";
							scale = 1;
							pos[] = {{0.932,0.8},1};
							right[] = {{0.987,0.8},1};
							down[] = {{0.932,0.845},1};
						};
					};
					class Flaps
					{
						condition = "flaps";
						class FlapsText
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "left";
							scale = 1;
							pos[] = {{0.932,0.92},1};
							right[] = {{0.987,0.92},1};
							down[] = {{0.932,0.965},1};
						};
					};
					class ILS
					{
						condition = "ils";
						class GearText
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "left";
							scale = 1;
							pos[] = {{0.932,0.84},1};
							right[] = {{0.987,0.84},1};
							down[] = {{0.932,0.885},1};
						};
						class Glideslope
						{
							clipTL[] = {0,0};
							clipBR[] = {1,1};
							class airport
							{
								type = "line";
								points[] = {{"airport1",1},{"airport2",1},{"airport4",1},{"airport3",1},{"airport1",1}};
							};
						};
					};
					class CollectiveNumber
					{
						type = "text";
						source = "throttle";
						sourceScale = 100;
						align = "left";
						scale = 1;
						pos[] = {{0.932,0.71},1};
						right[] = {{"0.932+.05",0.71},1};
						down[] = {{0.932,"0.71+.08"},1};
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.952,0.71},1};
						right[] = {{"0.952+.05",0.71},1};
						down[] = {{0.952,"0.71+.08"},1};
					};
					class TargetLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1}};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1}};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = {0.3,0.3};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = {{0.485,0.216788},1};
							right[] = {{0.545,0.216788},1};
							down[] = {{0.485,0.266058},1};
						};
					};
					class StallGroup
					{
						type = "group";
						condition = "stall";
						color[] = {1,0,0};
						blinkingPattern[] = {0.2,0.2};
						blinkingStartsOn = 1;
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = {{0.5,0.25},1};
							right[] = {{0.54,0.25},1};
							down[] = {{0.5,0.29},1};
						};
					};
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407807},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173806},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodDir",1,{-0.0208056,-0.00407807},1},{"TargetingPodDir",1,{-0.0208056,0.00407808},1},{},{"TargetingPodDir",1,{-0.0176381,0.0116134},1},{"TargetingPodDir",1,{-0.0117854,0.0173806},1},{},{"TargetingPodDir",1,{-0.00413849,0.0205019},1},{"TargetingPodDir",1,{0.00413849,0.0205019},1},{},{"TargetingPodDir",1,{0.0117854,0.0173806},1},{"TargetingPodDir",1,{0.0176381,0.0116134},1},{},{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407808},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173807},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{}};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,-0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{}};
						};
					};
					class MainCenterLine1
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{-0.49,"0 + 0.025"},1},{"PlaneW",{-0.49,0},1},{"PlaneW",{-0.45,0},1}};
					};
					class MainCenterLine2
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{-0.33,0},1},{"PlaneW",{-0.25,0},1}};
					};
					class MainCenterLine3
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{0.49,"0 + 0.025"},1},{"PlaneW",{0.49,0},1},{"PlaneW",{0.25,0},1}};
					};
					class SpeedIndicatorBox
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{-0.49,-0.25},1},{"PlaneW",{-0.49,-0.2},1},{"PlaneW",{-0.3,-0.2},1},{"PlaneW",{-0.3,-0.25},1},{"PlaneW",{-0.49,-0.25},1}};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "center";
						scale = 1;
						pos[] = {"PlaneW",{-0.4,-0.25},1};
						right[] = {"PlaneW",{-0.3,-0.25},1};
						down[] = {"PlaneW",{-0.4,-0.2},1};
					};
					class AltitudeNumberASL
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						sourceLength = 4;
						align = "center";
						scale = 1;
						pos[] = {"PlaneW",{0.4,-0.25},1};
						right[] = {"PlaneW",{0.48,-0.25},1};
						down[] = {"PlaneW",{0.4,-0.2},1};
					};
					class AltitudeNumberAGL: AltitudeNumberASL
					{
						source = "altitudeAGL";
						pos[] = {"PlaneW",{0.4,-0.2},1};
						right[] = {"PlaneW",{0.48,-0.2},1};
						down[] = {"PlaneW",{0.4,-0.15},1};
					};
					class AltitudeRadarTextASL
					{
						type = "text";
						source = "static";
						text = "ASL:";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"PlaneW",{0.32,-0.25},1};
						right[] = {"PlaneW",{"+0.32 + 0.04",-0.25},1};
						down[] = {"PlaneW",{0.32,"-0.25 + 0.05"},1};
					};
					class AltitudeRadarTextAGL
					{
						type = "text";
						source = "static";
						text = "AGL:";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"PlaneW",{0.32,-0.192},1};
						right[] = {"PlaneW",{"+0.32 + 0.04",-0.192},1};
						down[] = {"PlaneW",{0.32,"-0.192 + 0.041"},1};
					};
					class PitchNumber
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {"PlaneW",{-0.39,-0.076},1};
						right[] = {"PlaneW",{"-0.39 + 0.05",-0.076},1};
						down[] = {"PlaneW",{-0.39,"-0.076 + 0.05"},1};
					};
					class PitchText
					{
						type = "text";
						source = "static";
						text = "P:";
						align = "left";
						scale = 1;
						pos[] = {"PlaneW",{-0.41,-0.076},1};
						right[] = {"PlaneW",{"-0.41 + 0.04",-0.076},1};
						down[] = {"PlaneW",{-0.41,"-0.076 + 0.05"},1};
					};
					class RollNumber
					{
						type = "text";
						source = "horizonBank";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {"PlaneW",{-0.39,-0.025},1};
						right[] = {"PlaneW",{"-0.39 + 0.05",-0.025},1};
						down[] = {"PlaneW",{-0.39,"-0.025 + 0.05"},1};
					};
					class RollText
					{
						type = "text";
						source = "static";
						text = "R:";
						align = "left";
						scale = 1;
						pos[] = {"PlaneW",{-0.41,-0.025},1};
						right[] = {"PlaneW",{"-0.41 + 0.04",-0.025},1};
						down[] = {"PlaneW",{-0.41,"-0.025 + 0.05"},1};
					};
					class ClimbNumber
					{
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {"PlaneW",{-0.39,0.026},1};
						right[] = {"PlaneW",{"-0.39 + 0.05",0.026},1};
						down[] = {"PlaneW",{-0.39,"+0.026 + 0.05"},1};
					};
					class ClimbText
					{
						type = "text";
						source = "static";
						text = "C:";
						align = "left";
						scale = 1;
						pos[] = {"PlaneW",{-0.41,0.026},1};
						right[] = {"PlaneW",{"-0.41 + 0.04",0.026},1};
						down[] = {"PlaneW",{-0.41,"+0.026 + 0.05"},1};
					};
					class fuelNumber
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {"PlaneW",{-0.4,0.1},1};
						right[] = {"PlaneW",{"-0.40 + 0.04",0.1},1};
						down[] = {"PlaneW",{-0.4,"0.10 + 0.05"},1};
					};
					class fuelPercent
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {"PlaneW",{-0.35,0.1},1};
						right[] = {"PlaneW",{"-0.35 + 0.04",0.1},1};
						down[] = {"PlaneW",{-0.35,"0.10 + 0.05"},1};
					};
					class fuelText
					{
						type = "text";
						source = "static";
						text = "F:";
						align = "left";
						scale = 1;
						pos[] = {"PlaneW",{-0.41,0.1},1};
						right[] = {"PlaneW",{"-0.41 + 0.04",0.1},1};
						down[] = {"PlaneW",{-0.41,"0.1 + 0.05"},1};
					};
					class HeadingArrow
					{
						type = "line";
						width = 3;
						points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.02,0.042},1},{"WPPoint",1,"LimitWaypoint",1,{0,0.022},1},{"WPPoint",1,"LimitWaypoint",1,{0.02,0.042},1}};
					};
					class WP
					{
						condition = "wpvalid";
						class WPdist
						{
							type = "text";
							source = "wpdist";
							sourceScale = 0.001;
							sourcePrecision = 1;
							align = "right";
							scale = 1;
							pos[] = {{0.924,0.505018},1};
							down[] = {{0.924,0.542464},1};
							right[] = {{0.964,0.505018},1};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							sourceLength = 2;
							align = "right";
							scale = 1;
							pos[] = {{0.877,0.505018},1};
							right[] = {{0.917,0.505018},1};
							down[] = {{0.877,0.542464},1};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = "WP";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.825+0.01",0.5065},1};
							right[] = {{0.875,0.5065},1};
							down[] = {{"0.825+0.01",0.5415},1};
						};
						class WPKM
						{
							type = "text";
							source = "static";
							text = ":";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.825+0.09",0.5065},1};
							right[] = {{0.955,0.5065},1};
							down[] = {{"0.825+0.09",0.5415},1};
						};
					};
					class HeadingRotation
					{
						condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type = "text";
							source = "cameraDir";
							sourceScale = 1;
							align = "center";
							scale = 1;
							pos[] = {{"0.80-0.302","0.082+0.065"},1};
							right[] = {{"0.83-0.302","0.082+0.065"},1};
							down[] = {{"0.80-0.302","0.113+0.065"},1};
						};
						class HeadingArrow
						{
							type = "line";
							width = 3;
							points[] = {{{0.488,0.141},1},{{0.512,0.141},1},{{0.542,0.161},1},{{0.512,0.181},1},{{0.488,0.181},1},{{0.458,0.161},1},{{0.488,0.141},1},{}};
						};
					};
					class HeadingScale
					{
						type = "scale";
						NeverEatSeaWeed = 1;
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 3;
						top = 0.1;
						center = 0.5;
						bottom = 0.9;
						lineXleft = 0.105;
						lineYright = 0.115;
						lineXleftMajor = 0.095;
						lineYrightMajor = 0.115;
						majorLineEach = 5;
						numberEach = 5;
						step = "18 / 9";
						stepSize = "(0.70 - 0.3) / 15";
						align = "center";
						scale = 1;
						pos[] = {0.096,0.0546};
						right[] = {0.143,0.0546};
						down[] = {0.096,0.093};
					};
					class HeadingIndicatorBox
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW",{-0.035,-0.455},1},{"PlaneW",{-0.035,-0.5},1},{"PlaneW",{0.035,-0.5},1},{"PlaneW",{0.035,-0.455},1},{"PlaneW",{-0.035,-0.455},1}};
					};
					class HeadingIndicatorArrow
					{
						type = "polygon";
						points[] = {{{"PlaneW",{-0.015,-0.455},1},{"PlaneW",{0,-0.445},1},{"PlaneW",{0.015,-0.455},1}}};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {"PlaneW",{0,"(-0.5   )"},1};
						right[] = {"PlaneW",{0.03,"(-0.5   )"},1};
						down[] = {"PlaneW",{0,"(-0.5 + 0.045 )"},1};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 2;
						points[] = {{"HorizonBankRot",{0,"0.39421001-0.109"},1},{"HorizonBankRot",{0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{-0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{0,"0.39421001-0.109"},1}};
					};
					class HorizonBankRotLines
					{
						type = "line";
						width = 3;
						points[] = {{{0.619959,0.712986},1},{{0.631439,0.744203},1},{},{{0.58291,0.739019},1},{{0.588087,0.760778},1},{},{{0.540574,0.748504},1},{{0.543184,0.770838},1},{},{{0.4975,0.740421},1},{{0.4975,0.77421},1},{},{{0.454426,0.748504},1},{{0.451816,0.770838},1},{},{{0.41209,0.739019},1},{{0.406913,0.760778},1},{},{{0.375041,0.712986},1},{{0.363561,0.744203},1}};
					};
					class Horizont
					{
						clipTL[] = {0.2,0.2};
						clipBR[] = {0.8,0.8};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								width = 3;
								points[] = {{"Level0",{0.75,0},1},{"Level0",{0.065,0},1},{},{"Level0",{-0.065,0},1},{"Level0",{-0.75,0},1}};
							};
						};
						class HideOnTurn
						{
							condition = "on";
							class Limiter
							{
								class Level0
								{
									type = "line";
									width = 2;
									points[] = {};
								};
								class LevelM5: Level0
								{
									type = "line";
									points[] = {{"LevelM5",{-0.235,-0.02},1},{"LevelM5",{-0.235,0},1},{},{"LevelM5",{-0.22,0},1},{"LevelM5",{-0.205,0},1},{},{"LevelM5",{-0.19,0},1},{"LevelM5",{-0.175,0},1},{},{"LevelM5",{-0.16,0},1},{"LevelM5",{-0.145,0},1},{},{"LevelM5",{-0.13,0},1},{"LevelM5",{-0.115,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.085,0},1},{},{"LevelM5",{-0.07,0},1},{"LevelM5",{-0.055,0},1},{},{},{"LevelM5",{0.235,-0.02},1},{"LevelM5",{0.235,0},1},{},{"LevelM5",{0.22,0},1},{"LevelM5",{0.205,0},1},{},{"LevelM5",{0.19,0},1},{"LevelM5",{0.175,0},1},{},{"LevelM5",{0.16,0},1},{"LevelM5",{0.145,0},1},{},{"LevelM5",{0.13,0},1},{"LevelM5",{0.115,0},1},{},{"LevelM5",{0.1,0},1},{"LevelM5",{0.085,0},1},{},{"LevelM5",{0.07,0},1},{"LevelM5",{0.055,0},1},{}};
								};
								class VALM_1_5
								{
									type = "text";
									source = "static";
									text = -5;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM5",{-0.26,-0.032},1};
									right[] = {"LevelM5",{-0.2,-0.032},1};
									down[] = {"LevelM5",{-0.26,0.018},1};
								};
								class VALM_1_5_R
								{
									type = "text";
									source = "static";
									text = -5;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM5",{0.26,-0.032},1};
									right[] = {"LevelM5",{0.32,-0.032},1};
									down[] = {"LevelM5",{0.26,0.018},1};
								};
								class LevelP5: Level0
								{
									type = "line";
									points[] = {{"LevelP5",{"-0.22-0.015",0.02},1},{"LevelP5",{"-0.22-0.015",0},1},{"LevelP5",{-0.06,0},1},{},{"LevelP5",{0.06,0},1},{"LevelP5",{"+0.22+0.015",0},1},{"LevelP5",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_5
								{
									type = "text";
									source = "static";
									text = "5";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP5",{-0.26,-0.017},1};
									right[] = {"LevelP5",{-0.2,-0.017},1};
									down[] = {"LevelP5",{-0.26,0.033},1};
								};
								class VALP_1_5_R
								{
									type = "text";
									source = "static";
									text = "5";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP5",{0.26,-0.017},1};
									right[] = {"LevelP5",{0.32,-0.017},1};
									down[] = {"LevelP5",{0.26,0.033},1};
								};
								class LevelM10: Level0
								{
									type = "line";
									points[] = {{"LevelM10",{-0.235,-0.02},1},{"LevelM10",{-0.235,0},1},{},{"LevelM10",{-0.22,0},1},{"LevelM10",{-0.205,0},1},{},{"LevelM10",{-0.19,0},1},{"LevelM10",{-0.175,0},1},{},{"LevelM10",{-0.16,0},1},{"LevelM10",{-0.145,0},1},{},{"LevelM10",{-0.13,0},1},{"LevelM10",{-0.115,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.085,0},1},{},{"LevelM10",{-0.07,0},1},{"LevelM10",{-0.055,0},1},{},{},{"LevelM10",{0.235,-0.02},1},{"LevelM10",{0.235,0},1},{},{"LevelM10",{0.22,0},1},{"LevelM10",{0.205,0},1},{},{"LevelM10",{0.19,0},1},{"LevelM10",{0.175,0},1},{},{"LevelM10",{0.16,0},1},{"LevelM10",{0.145,0},1},{},{"LevelM10",{0.13,0},1},{"LevelM10",{0.115,0},1},{},{"LevelM10",{0.1,0},1},{"LevelM10",{0.085,0},1},{},{"LevelM10",{0.07,0},1},{"LevelM10",{0.055,0},1},{}};
								};
								class VALM_1_10
								{
									type = "text";
									source = "static";
									text = -10;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM10",{-0.26,-0.032},1};
									right[] = {"LevelM10",{-0.2,-0.032},1};
									down[] = {"LevelM10",{-0.26,0.018},1};
								};
								class VALM_1_10_R
								{
									type = "text";
									source = "static";
									text = -10;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM10",{0.26,-0.032},1};
									right[] = {"LevelM10",{0.32,-0.032},1};
									down[] = {"LevelM10",{0.26,0.018},1};
								};
								class LevelP10: Level0
								{
									type = "line";
									points[] = {{"LevelP10",{"-0.22-0.015",0.02},1},{"LevelP10",{"-0.22-0.015",0},1},{"LevelP10",{-0.06,0},1},{},{"LevelP10",{0.06,0},1},{"LevelP10",{"+0.22+0.015",0},1},{"LevelP10",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_10
								{
									type = "text";
									source = "static";
									text = "10";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10",{-0.26,-0.017},1};
									right[] = {"LevelP10",{-0.2,-0.017},1};
									down[] = {"LevelP10",{-0.26,0.033},1};
								};
								class VALP_1_10_R
								{
									type = "text";
									source = "static";
									text = "10";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10",{0.26,-0.017},1};
									right[] = {"LevelP10",{0.32,-0.017},1};
									down[] = {"LevelP10",{0.26,0.033},1};
								};
								class LevelM15: Level0
								{
									type = "line";
									points[] = {{"LevelM15",{-0.235,-0.02},1},{"LevelM15",{-0.235,0},1},{},{"LevelM15",{-0.22,0},1},{"LevelM15",{-0.205,0},1},{},{"LevelM15",{-0.19,0},1},{"LevelM15",{-0.175,0},1},{},{"LevelM15",{-0.16,0},1},{"LevelM15",{-0.145,0},1},{},{"LevelM15",{-0.13,0},1},{"LevelM15",{-0.115,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.085,0},1},{},{"LevelM15",{-0.07,0},1},{"LevelM15",{-0.055,0},1},{},{},{"LevelM15",{0.235,-0.02},1},{"LevelM15",{0.235,0},1},{},{"LevelM15",{0.22,0},1},{"LevelM15",{0.205,0},1},{},{"LevelM15",{0.19,0},1},{"LevelM15",{0.175,0},1},{},{"LevelM15",{0.16,0},1},{"LevelM15",{0.145,0},1},{},{"LevelM15",{0.13,0},1},{"LevelM15",{0.115,0},1},{},{"LevelM15",{0.1,0},1},{"LevelM15",{0.085,0},1},{},{"LevelM15",{0.07,0},1},{"LevelM15",{0.055,0},1},{}};
								};
								class VALM_1_15
								{
									type = "text";
									source = "static";
									text = -15;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM15",{-0.26,-0.032},1};
									right[] = {"LevelM15",{-0.2,-0.032},1};
									down[] = {"LevelM15",{-0.26,0.018},1};
								};
								class VALM_1_15_R
								{
									type = "text";
									source = "static";
									text = -15;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM15",{0.26,-0.032},1};
									right[] = {"LevelM15",{0.32,-0.032},1};
									down[] = {"LevelM15",{0.26,0.018},1};
								};
								class LevelP15: Level0
								{
									type = "line";
									points[] = {{"LevelP15",{"-0.22-0.015",0.02},1},{"LevelP15",{"-0.22-0.015",0},1},{"LevelP15",{-0.06,0},1},{},{"LevelP15",{0.06,0},1},{"LevelP15",{"+0.22+0.015",0},1},{"LevelP15",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_15
								{
									type = "text";
									source = "static";
									text = "15";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP15",{-0.26,-0.017},1};
									right[] = {"LevelP15",{-0.2,-0.017},1};
									down[] = {"LevelP15",{-0.26,0.033},1};
								};
								class VALP_1_15_R
								{
									type = "text";
									source = "static";
									text = "15";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP15",{0.26,-0.017},1};
									right[] = {"LevelP15",{0.32,-0.017},1};
									down[] = {"LevelP15",{0.26,0.033},1};
								};
								class LevelM20: Level0
								{
									type = "line";
									points[] = {{"LevelM20",{-0.235,-0.02},1},{"LevelM20",{-0.235,0},1},{},{"LevelM20",{-0.22,0},1},{"LevelM20",{-0.205,0},1},{},{"LevelM20",{-0.19,0},1},{"LevelM20",{-0.175,0},1},{},{"LevelM20",{-0.16,0},1},{"LevelM20",{-0.145,0},1},{},{"LevelM20",{-0.13,0},1},{"LevelM20",{-0.115,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.085,0},1},{},{"LevelM20",{-0.07,0},1},{"LevelM20",{-0.055,0},1},{},{},{"LevelM20",{0.235,-0.02},1},{"LevelM20",{0.235,0},1},{},{"LevelM20",{0.22,0},1},{"LevelM20",{0.205,0},1},{},{"LevelM20",{0.19,0},1},{"LevelM20",{0.175,0},1},{},{"LevelM20",{0.16,0},1},{"LevelM20",{0.145,0},1},{},{"LevelM20",{0.13,0},1},{"LevelM20",{0.115,0},1},{},{"LevelM20",{0.1,0},1},{"LevelM20",{0.085,0},1},{},{"LevelM20",{0.07,0},1},{"LevelM20",{0.055,0},1},{}};
								};
								class VALM_1_20
								{
									type = "text";
									source = "static";
									text = -20;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM20",{-0.26,-0.032},1};
									right[] = {"LevelM20",{-0.2,-0.032},1};
									down[] = {"LevelM20",{-0.26,0.018},1};
								};
								class VALM_1_20_R
								{
									type = "text";
									source = "static";
									text = -20;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM20",{0.26,-0.032},1};
									right[] = {"LevelM20",{0.32,-0.032},1};
									down[] = {"LevelM20",{0.26,0.018},1};
								};
								class LevelP20: Level0
								{
									type = "line";
									points[] = {{"LevelP20",{"-0.22-0.015",0.02},1},{"LevelP20",{"-0.22-0.015",0},1},{"LevelP20",{-0.06,0},1},{},{"LevelP20",{0.06,0},1},{"LevelP20",{"+0.22+0.015",0},1},{"LevelP20",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_20
								{
									type = "text";
									source = "static";
									text = "20";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20",{-0.26,-0.017},1};
									right[] = {"LevelP20",{-0.2,-0.017},1};
									down[] = {"LevelP20",{-0.26,0.033},1};
								};
								class VALP_1_20_R
								{
									type = "text";
									source = "static";
									text = "20";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20",{0.26,-0.017},1};
									right[] = {"LevelP20",{0.32,-0.017},1};
									down[] = {"LevelP20",{0.26,0.033},1};
								};
								class LevelM25: Level0
								{
									type = "line";
									points[] = {{"LevelM25",{-0.235,-0.02},1},{"LevelM25",{-0.235,0},1},{},{"LevelM25",{-0.22,0},1},{"LevelM25",{-0.205,0},1},{},{"LevelM25",{-0.19,0},1},{"LevelM25",{-0.175,0},1},{},{"LevelM25",{-0.16,0},1},{"LevelM25",{-0.145,0},1},{},{"LevelM25",{-0.13,0},1},{"LevelM25",{-0.115,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.085,0},1},{},{"LevelM25",{-0.07,0},1},{"LevelM25",{-0.055,0},1},{},{},{"LevelM25",{0.235,-0.02},1},{"LevelM25",{0.235,0},1},{},{"LevelM25",{0.22,0},1},{"LevelM25",{0.205,0},1},{},{"LevelM25",{0.19,0},1},{"LevelM25",{0.175,0},1},{},{"LevelM25",{0.16,0},1},{"LevelM25",{0.145,0},1},{},{"LevelM25",{0.13,0},1},{"LevelM25",{0.115,0},1},{},{"LevelM25",{0.1,0},1},{"LevelM25",{0.085,0},1},{},{"LevelM25",{0.07,0},1},{"LevelM25",{0.055,0},1},{}};
								};
								class VALM_1_25
								{
									type = "text";
									source = "static";
									text = -25;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM25",{-0.26,-0.032},1};
									right[] = {"LevelM25",{-0.2,-0.032},1};
									down[] = {"LevelM25",{-0.26,0.018},1};
								};
								class VALM_1_25_R
								{
									type = "text";
									source = "static";
									text = -25;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM25",{0.26,-0.032},1};
									right[] = {"LevelM25",{0.32,-0.032},1};
									down[] = {"LevelM25",{0.26,0.018},1};
								};
								class LevelP25: Level0
								{
									type = "line";
									points[] = {{"LevelP25",{"-0.22-0.015",0.02},1},{"LevelP25",{"-0.22-0.015",0},1},{"LevelP25",{-0.06,0},1},{},{"LevelP25",{0.06,0},1},{"LevelP25",{"+0.22+0.015",0},1},{"LevelP25",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_25
								{
									type = "text";
									source = "static";
									text = "25";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP25",{-0.26,-0.017},1};
									right[] = {"LevelP25",{-0.2,-0.017},1};
									down[] = {"LevelP25",{-0.26,0.033},1};
								};
								class VALP_1_25_R
								{
									type = "text";
									source = "static";
									text = "25";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP25",{0.26,-0.017},1};
									right[] = {"LevelP25",{0.32,-0.017},1};
									down[] = {"LevelP25",{0.26,0.033},1};
								};
								class LevelM30: Level0
								{
									type = "line";
									points[] = {{"LevelM30",{-0.235,-0.02},1},{"LevelM30",{-0.235,0},1},{},{"LevelM30",{-0.22,0},1},{"LevelM30",{-0.205,0},1},{},{"LevelM30",{-0.19,0},1},{"LevelM30",{-0.175,0},1},{},{"LevelM30",{-0.16,0},1},{"LevelM30",{-0.145,0},1},{},{"LevelM30",{-0.13,0},1},{"LevelM30",{-0.115,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.085,0},1},{},{"LevelM30",{-0.07,0},1},{"LevelM30",{-0.055,0},1},{},{},{"LevelM30",{0.235,-0.02},1},{"LevelM30",{0.235,0},1},{},{"LevelM30",{0.22,0},1},{"LevelM30",{0.205,0},1},{},{"LevelM30",{0.19,0},1},{"LevelM30",{0.175,0},1},{},{"LevelM30",{0.16,0},1},{"LevelM30",{0.145,0},1},{},{"LevelM30",{0.13,0},1},{"LevelM30",{0.115,0},1},{},{"LevelM30",{0.1,0},1},{"LevelM30",{0.085,0},1},{},{"LevelM30",{0.07,0},1},{"LevelM30",{0.055,0},1},{}};
								};
								class VALM_1_30
								{
									type = "text";
									source = "static";
									text = -30;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM30",{-0.26,-0.032},1};
									right[] = {"LevelM30",{-0.2,-0.032},1};
									down[] = {"LevelM30",{-0.26,0.018},1};
								};
								class VALM_1_30_R
								{
									type = "text";
									source = "static";
									text = -30;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM30",{0.26,-0.032},1};
									right[] = {"LevelM30",{0.32,-0.032},1};
									down[] = {"LevelM30",{0.26,0.018},1};
								};
								class LevelP30: Level0
								{
									type = "line";
									points[] = {{"LevelP30",{"-0.22-0.015",0.02},1},{"LevelP30",{"-0.22-0.015",0},1},{"LevelP30",{-0.06,0},1},{},{"LevelP30",{0.06,0},1},{"LevelP30",{"+0.22+0.015",0},1},{"LevelP30",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_30
								{
									type = "text";
									source = "static";
									text = "30";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30",{-0.26,-0.017},1};
									right[] = {"LevelP30",{-0.2,-0.017},1};
									down[] = {"LevelP30",{-0.26,0.033},1};
								};
								class VALP_1_30_R
								{
									type = "text";
									source = "static";
									text = "30";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30",{0.26,-0.017},1};
									right[] = {"LevelP30",{0.32,-0.017},1};
									down[] = {"LevelP30",{0.26,0.033},1};
								};
								class LevelM35: Level0
								{
									type = "line";
									points[] = {{"LevelM35",{-0.235,-0.02},1},{"LevelM35",{-0.235,0},1},{},{"LevelM35",{-0.22,0},1},{"LevelM35",{-0.205,0},1},{},{"LevelM35",{-0.19,0},1},{"LevelM35",{-0.175,0},1},{},{"LevelM35",{-0.16,0},1},{"LevelM35",{-0.145,0},1},{},{"LevelM35",{-0.13,0},1},{"LevelM35",{-0.115,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.085,0},1},{},{"LevelM35",{-0.07,0},1},{"LevelM35",{-0.055,0},1},{},{},{"LevelM35",{0.235,-0.02},1},{"LevelM35",{0.235,0},1},{},{"LevelM35",{0.22,0},1},{"LevelM35",{0.205,0},1},{},{"LevelM35",{0.19,0},1},{"LevelM35",{0.175,0},1},{},{"LevelM35",{0.16,0},1},{"LevelM35",{0.145,0},1},{},{"LevelM35",{0.13,0},1},{"LevelM35",{0.115,0},1},{},{"LevelM35",{0.1,0},1},{"LevelM35",{0.085,0},1},{},{"LevelM35",{0.07,0},1},{"LevelM35",{0.055,0},1},{}};
								};
								class VALM_1_35
								{
									type = "text";
									source = "static";
									text = -35;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM35",{-0.26,-0.032},1};
									right[] = {"LevelM35",{-0.2,-0.032},1};
									down[] = {"LevelM35",{-0.26,0.018},1};
								};
								class VALM_1_35_R
								{
									type = "text";
									source = "static";
									text = -35;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM35",{0.26,-0.032},1};
									right[] = {"LevelM35",{0.32,-0.032},1};
									down[] = {"LevelM35",{0.26,0.018},1};
								};
								class LevelP35: Level0
								{
									type = "line";
									points[] = {{"LevelP35",{"-0.22-0.015",0.02},1},{"LevelP35",{"-0.22-0.015",0},1},{"LevelP35",{-0.06,0},1},{},{"LevelP35",{0.06,0},1},{"LevelP35",{"+0.22+0.015",0},1},{"LevelP35",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_35
								{
									type = "text";
									source = "static";
									text = "35";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP35",{-0.26,-0.017},1};
									right[] = {"LevelP35",{-0.2,-0.017},1};
									down[] = {"LevelP35",{-0.26,0.033},1};
								};
								class VALP_1_35_R
								{
									type = "text";
									source = "static";
									text = "35";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP35",{0.26,-0.017},1};
									right[] = {"LevelP35",{0.32,-0.017},1};
									down[] = {"LevelP35",{0.26,0.033},1};
								};
								class LevelM40: Level0
								{
									type = "line";
									points[] = {{"LevelM40",{-0.235,-0.02},1},{"LevelM40",{-0.235,0},1},{},{"LevelM40",{-0.22,0},1},{"LevelM40",{-0.205,0},1},{},{"LevelM40",{-0.19,0},1},{"LevelM40",{-0.175,0},1},{},{"LevelM40",{-0.16,0},1},{"LevelM40",{-0.145,0},1},{},{"LevelM40",{-0.13,0},1},{"LevelM40",{-0.115,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.085,0},1},{},{"LevelM40",{-0.07,0},1},{"LevelM40",{-0.055,0},1},{},{},{"LevelM40",{0.235,-0.02},1},{"LevelM40",{0.235,0},1},{},{"LevelM40",{0.22,0},1},{"LevelM40",{0.205,0},1},{},{"LevelM40",{0.19,0},1},{"LevelM40",{0.175,0},1},{},{"LevelM40",{0.16,0},1},{"LevelM40",{0.145,0},1},{},{"LevelM40",{0.13,0},1},{"LevelM40",{0.115,0},1},{},{"LevelM40",{0.1,0},1},{"LevelM40",{0.085,0},1},{},{"LevelM40",{0.07,0},1},{"LevelM40",{0.055,0},1},{}};
								};
								class VALM_1_40
								{
									type = "text";
									source = "static";
									text = -40;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM40",{-0.26,-0.032},1};
									right[] = {"LevelM40",{-0.2,-0.032},1};
									down[] = {"LevelM40",{-0.26,0.018},1};
								};
								class VALM_1_40_R
								{
									type = "text";
									source = "static";
									text = -40;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM40",{0.26,-0.032},1};
									right[] = {"LevelM40",{0.32,-0.032},1};
									down[] = {"LevelM40",{0.26,0.018},1};
								};
								class LevelP40: Level0
								{
									type = "line";
									points[] = {{"LevelP40",{"-0.22-0.015",0.02},1},{"LevelP40",{"-0.22-0.015",0},1},{"LevelP40",{-0.06,0},1},{},{"LevelP40",{0.06,0},1},{"LevelP40",{"+0.22+0.015",0},1},{"LevelP40",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_40
								{
									type = "text";
									source = "static";
									text = "40";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40",{-0.26,-0.017},1};
									right[] = {"LevelP40",{-0.2,-0.017},1};
									down[] = {"LevelP40",{-0.26,0.033},1};
								};
								class VALP_1_40_R
								{
									type = "text";
									source = "static";
									text = "40";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40",{0.26,-0.017},1};
									right[] = {"LevelP40",{0.32,-0.017},1};
									down[] = {"LevelP40",{0.26,0.033},1};
								};
								class LevelM45: Level0
								{
									type = "line";
									points[] = {{"LevelM45",{-0.235,-0.02},1},{"LevelM45",{-0.235,0},1},{},{"LevelM45",{-0.22,0},1},{"LevelM45",{-0.205,0},1},{},{"LevelM45",{-0.19,0},1},{"LevelM45",{-0.175,0},1},{},{"LevelM45",{-0.16,0},1},{"LevelM45",{-0.145,0},1},{},{"LevelM45",{-0.13,0},1},{"LevelM45",{-0.115,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.085,0},1},{},{"LevelM45",{-0.07,0},1},{"LevelM45",{-0.055,0},1},{},{},{"LevelM45",{0.235,-0.02},1},{"LevelM45",{0.235,0},1},{},{"LevelM45",{0.22,0},1},{"LevelM45",{0.205,0},1},{},{"LevelM45",{0.19,0},1},{"LevelM45",{0.175,0},1},{},{"LevelM45",{0.16,0},1},{"LevelM45",{0.145,0},1},{},{"LevelM45",{0.13,0},1},{"LevelM45",{0.115,0},1},{},{"LevelM45",{0.1,0},1},{"LevelM45",{0.085,0},1},{},{"LevelM45",{0.07,0},1},{"LevelM45",{0.055,0},1},{}};
								};
								class VALM_1_45
								{
									type = "text";
									source = "static";
									text = -45;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM45",{-0.26,-0.032},1};
									right[] = {"LevelM45",{-0.2,-0.032},1};
									down[] = {"LevelM45",{-0.26,0.018},1};
								};
								class VALM_1_45_R
								{
									type = "text";
									source = "static";
									text = -45;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM45",{0.26,-0.032},1};
									right[] = {"LevelM45",{0.32,-0.032},1};
									down[] = {"LevelM45",{0.26,0.018},1};
								};
								class LevelP45: Level0
								{
									type = "line";
									points[] = {{"LevelP45",{"-0.22-0.015",0.02},1},{"LevelP45",{"-0.22-0.015",0},1},{"LevelP45",{-0.06,0},1},{},{"LevelP45",{0.06,0},1},{"LevelP45",{"+0.22+0.015",0},1},{"LevelP45",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_45
								{
									type = "text";
									source = "static";
									text = "45";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP45",{-0.26,-0.017},1};
									right[] = {"LevelP45",{-0.2,-0.017},1};
									down[] = {"LevelP45",{-0.26,0.033},1};
								};
								class VALP_1_45_R
								{
									type = "text";
									source = "static";
									text = "45";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP45",{0.26,-0.017},1};
									right[] = {"LevelP45",{0.32,-0.017},1};
									down[] = {"LevelP45",{0.26,0.033},1};
								};
								class LevelM50: Level0
								{
									type = "line";
									points[] = {{"LevelM50",{-0.235,-0.02},1},{"LevelM50",{-0.235,0},1},{},{"LevelM50",{-0.22,0},1},{"LevelM50",{-0.205,0},1},{},{"LevelM50",{-0.19,0},1},{"LevelM50",{-0.175,0},1},{},{"LevelM50",{-0.16,0},1},{"LevelM50",{-0.145,0},1},{},{"LevelM50",{-0.13,0},1},{"LevelM50",{-0.115,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.085,0},1},{},{"LevelM50",{-0.07,0},1},{"LevelM50",{-0.055,0},1},{},{},{"LevelM50",{0.235,-0.02},1},{"LevelM50",{0.235,0},1},{},{"LevelM50",{0.22,0},1},{"LevelM50",{0.205,0},1},{},{"LevelM50",{0.19,0},1},{"LevelM50",{0.175,0},1},{},{"LevelM50",{0.16,0},1},{"LevelM50",{0.145,0},1},{},{"LevelM50",{0.13,0},1},{"LevelM50",{0.115,0},1},{},{"LevelM50",{0.1,0},1},{"LevelM50",{0.085,0},1},{},{"LevelM50",{0.07,0},1},{"LevelM50",{0.055,0},1},{}};
								};
								class VALM_1_50
								{
									type = "text";
									source = "static";
									text = -50;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM50",{-0.26,-0.032},1};
									right[] = {"LevelM50",{-0.2,-0.032},1};
									down[] = {"LevelM50",{-0.26,0.018},1};
								};
								class VALM_1_50_R
								{
									type = "text";
									source = "static";
									text = -50;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM50",{0.26,-0.032},1};
									right[] = {"LevelM50",{0.32,-0.032},1};
									down[] = {"LevelM50",{0.26,0.018},1};
								};
								class LevelP50: Level0
								{
									type = "line";
									points[] = {{"LevelP50",{"-0.22-0.015",0.02},1},{"LevelP50",{"-0.22-0.015",0},1},{"LevelP50",{-0.06,0},1},{},{"LevelP50",{0.06,0},1},{"LevelP50",{"+0.22+0.015",0},1},{"LevelP50",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_50
								{
									type = "text";
									source = "static";
									text = "50";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50",{-0.26,-0.017},1};
									right[] = {"LevelP50",{-0.2,-0.017},1};
									down[] = {"LevelP50",{-0.26,0.033},1};
								};
								class VALP_1_50_R
								{
									type = "text";
									source = "static";
									text = "50";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50",{0.26,-0.017},1};
									right[] = {"LevelP50",{0.32,-0.017},1};
									down[] = {"LevelP50",{0.26,0.033},1};
								};
								class LevelM60: Level0
								{
									type = "line";
									points[] = {{"LevelM60",{-0.235,-0.02},1},{"LevelM60",{-0.235,0},1},{},{"LevelM60",{-0.22,0},1},{"LevelM60",{-0.205,0},1},{},{"LevelM60",{-0.19,0},1},{"LevelM60",{-0.175,0},1},{},{"LevelM60",{-0.16,0},1},{"LevelM60",{-0.145,0},1},{},{"LevelM60",{-0.13,0},1},{"LevelM60",{-0.115,0},1},{},{"LevelM60",{-0.1,0},1},{"LevelM60",{-0.085,0},1},{},{"LevelM60",{-0.07,0},1},{"LevelM60",{-0.055,0},1},{},{},{"LevelM60",{0.235,-0.02},1},{"LevelM60",{0.235,0},1},{},{"LevelM60",{0.22,0},1},{"LevelM60",{0.205,0},1},{},{"LevelM60",{0.19,0},1},{"LevelM60",{0.175,0},1},{},{"LevelM60",{0.16,0},1},{"LevelM60",{0.145,0},1},{},{"LevelM60",{0.13,0},1},{"LevelM60",{0.115,0},1},{},{"LevelM60",{0.1,0},1},{"LevelM60",{0.085,0},1},{},{"LevelM60",{0.07,0},1},{"LevelM60",{0.055,0},1},{}};
								};
								class VALM_1_60
								{
									type = "text";
									source = "static";
									text = -60;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM60",{-0.26,-0.032},1};
									right[] = {"LevelM60",{-0.2,-0.032},1};
									down[] = {"LevelM60",{-0.26,0.018},1};
								};
								class VALM_1_60_R
								{
									type = "text";
									source = "static";
									text = -60;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM60",{0.26,-0.032},1};
									right[] = {"LevelM60",{0.32,-0.032},1};
									down[] = {"LevelM60",{0.26,0.018},1};
								};
								class LevelP60: Level0
								{
									type = "line";
									points[] = {{"LevelP60",{"-0.22-0.015",0.02},1},{"LevelP60",{"-0.22-0.015",0},1},{"LevelP60",{-0.06,0},1},{},{"LevelP60",{0.06,0},1},{"LevelP60",{"+0.22+0.015",0},1},{"LevelP60",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_60
								{
									type = "text";
									source = "static";
									text = "60";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60",{-0.26,-0.017},1};
									right[] = {"LevelP60",{-0.2,-0.017},1};
									down[] = {"LevelP60",{-0.26,0.033},1};
								};
								class VALP_1_60_R
								{
									type = "text";
									source = "static";
									text = "60";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60",{0.26,-0.017},1};
									right[] = {"LevelP60",{0.32,-0.017},1};
									down[] = {"LevelP60",{0.26,0.033},1};
								};
								class LevelM70: Level0
								{
									type = "line";
									points[] = {{"LevelM70",{-0.235,-0.02},1},{"LevelM70",{-0.235,0},1},{},{"LevelM70",{-0.22,0},1},{"LevelM70",{-0.205,0},1},{},{"LevelM70",{-0.19,0},1},{"LevelM70",{-0.175,0},1},{},{"LevelM70",{-0.16,0},1},{"LevelM70",{-0.145,0},1},{},{"LevelM70",{-0.13,0},1},{"LevelM70",{-0.115,0},1},{},{"LevelM70",{-0.1,0},1},{"LevelM70",{-0.085,0},1},{},{"LevelM70",{-0.07,0},1},{"LevelM70",{-0.055,0},1},{},{},{"LevelM70",{0.235,-0.02},1},{"LevelM70",{0.235,0},1},{},{"LevelM70",{0.22,0},1},{"LevelM70",{0.205,0},1},{},{"LevelM70",{0.19,0},1},{"LevelM70",{0.175,0},1},{},{"LevelM70",{0.16,0},1},{"LevelM70",{0.145,0},1},{},{"LevelM70",{0.13,0},1},{"LevelM70",{0.115,0},1},{},{"LevelM70",{0.1,0},1},{"LevelM70",{0.085,0},1},{},{"LevelM70",{0.07,0},1},{"LevelM70",{0.055,0},1},{}};
								};
								class VALM_1_70
								{
									type = "text";
									source = "static";
									text = -70;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM70",{-0.26,-0.032},1};
									right[] = {"LevelM70",{-0.2,-0.032},1};
									down[] = {"LevelM70",{-0.26,0.018},1};
								};
								class VALM_1_70_R
								{
									type = "text";
									source = "static";
									text = -70;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM70",{0.26,-0.032},1};
									right[] = {"LevelM70",{0.32,-0.032},1};
									down[] = {"LevelM70",{0.26,0.018},1};
								};
								class LevelP70: Level0
								{
									type = "line";
									points[] = {{"LevelP70",{"-0.22-0.015",0.02},1},{"LevelP70",{"-0.22-0.015",0},1},{"LevelP70",{-0.06,0},1},{},{"LevelP70",{0.06,0},1},{"LevelP70",{"+0.22+0.015",0},1},{"LevelP70",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_70
								{
									type = "text";
									source = "static";
									text = "70";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70",{-0.26,-0.017},1};
									right[] = {"LevelP70",{-0.2,-0.017},1};
									down[] = {"LevelP70",{-0.26,0.033},1};
								};
								class VALP_1_70_R
								{
									type = "text";
									source = "static";
									text = "70";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70",{0.26,-0.017},1};
									right[] = {"LevelP70",{0.32,-0.017},1};
									down[] = {"LevelP70",{0.26,0.033},1};
								};
								class LevelM80: Level0
								{
									type = "line";
									points[] = {{"LevelM80",{-0.235,-0.02},1},{"LevelM80",{-0.235,0},1},{},{"LevelM80",{-0.22,0},1},{"LevelM80",{-0.205,0},1},{},{"LevelM80",{-0.19,0},1},{"LevelM80",{-0.175,0},1},{},{"LevelM80",{-0.16,0},1},{"LevelM80",{-0.145,0},1},{},{"LevelM80",{-0.13,0},1},{"LevelM80",{-0.115,0},1},{},{"LevelM80",{-0.1,0},1},{"LevelM80",{-0.085,0},1},{},{"LevelM80",{-0.07,0},1},{"LevelM80",{-0.055,0},1},{},{},{"LevelM80",{0.235,-0.02},1},{"LevelM80",{0.235,0},1},{},{"LevelM80",{0.22,0},1},{"LevelM80",{0.205,0},1},{},{"LevelM80",{0.19,0},1},{"LevelM80",{0.175,0},1},{},{"LevelM80",{0.16,0},1},{"LevelM80",{0.145,0},1},{},{"LevelM80",{0.13,0},1},{"LevelM80",{0.115,0},1},{},{"LevelM80",{0.1,0},1},{"LevelM80",{0.085,0},1},{},{"LevelM80",{0.07,0},1},{"LevelM80",{0.055,0},1},{}};
								};
								class VALM_1_80
								{
									type = "text";
									source = "static";
									text = -80;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM80",{-0.26,-0.032},1};
									right[] = {"LevelM80",{-0.2,-0.032},1};
									down[] = {"LevelM80",{-0.26,0.018},1};
								};
								class VALM_1_80_R
								{
									type = "text";
									source = "static";
									text = -80;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM80",{0.26,-0.032},1};
									right[] = {"LevelM80",{0.32,-0.032},1};
									down[] = {"LevelM80",{0.26,0.018},1};
								};
								class LevelP80: Level0
								{
									type = "line";
									points[] = {{"LevelP80",{"-0.22-0.015",0.02},1},{"LevelP80",{"-0.22-0.015",0},1},{"LevelP80",{-0.06,0},1},{},{"LevelP80",{0.06,0},1},{"LevelP80",{"+0.22+0.015",0},1},{"LevelP80",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_80
								{
									type = "text";
									source = "static";
									text = "80";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80",{-0.26,-0.017},1};
									right[] = {"LevelP80",{-0.2,-0.017},1};
									down[] = {"LevelP80",{-0.26,0.033},1};
								};
								class VALP_1_80_R
								{
									type = "text";
									source = "static";
									text = "80";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80",{0.26,-0.017},1};
									right[] = {"LevelP80",{0.32,-0.017},1};
									down[] = {"LevelP80",{0.26,0.033},1};
								};
								class LevelM90: Level0
								{
									type = "line";
									points[] = {{"LevelM90",{-0.235,-0.02},1},{"LevelM90",{-0.235,0},1},{},{"LevelM90",{-0.22,0},1},{"LevelM90",{-0.205,0},1},{},{"LevelM90",{-0.19,0},1},{"LevelM90",{-0.175,0},1},{},{"LevelM90",{-0.16,0},1},{"LevelM90",{-0.145,0},1},{},{"LevelM90",{-0.13,0},1},{"LevelM90",{-0.115,0},1},{},{"LevelM90",{-0.1,0},1},{"LevelM90",{-0.085,0},1},{},{"LevelM90",{-0.07,0},1},{"LevelM90",{-0.055,0},1},{},{},{"LevelM90",{0.235,-0.02},1},{"LevelM90",{0.235,0},1},{},{"LevelM90",{0.22,0},1},{"LevelM90",{0.205,0},1},{},{"LevelM90",{0.19,0},1},{"LevelM90",{0.175,0},1},{},{"LevelM90",{0.16,0},1},{"LevelM90",{0.145,0},1},{},{"LevelM90",{0.13,0},1},{"LevelM90",{0.115,0},1},{},{"LevelM90",{0.1,0},1},{"LevelM90",{0.085,0},1},{},{"LevelM90",{0.07,0},1},{"LevelM90",{0.055,0},1},{}};
								};
								class VALM_1_90
								{
									type = "text";
									source = "static";
									text = -90;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM90",{-0.26,-0.032},1};
									right[] = {"LevelM90",{-0.2,-0.032},1};
									down[] = {"LevelM90",{-0.26,0.018},1};
								};
								class VALM_1_90_R
								{
									type = "text";
									source = "static";
									text = -90;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM90",{0.26,-0.032},1};
									right[] = {"LevelM90",{0.32,-0.032},1};
									down[] = {"LevelM90",{0.26,0.018},1};
								};
								class LevelP90: Level0
								{
									type = "line";
									points[] = {{"LevelP90",{"-0.22-0.015",0.02},1},{"LevelP90",{"-0.22-0.015",0},1},{"LevelP90",{-0.06,0},1},{},{"LevelP90",{0.06,0},1},{"LevelP90",{"+0.22+0.015",0},1},{"LevelP90",{"+0.22+0.015",0.02},1}};
								};
								class VALP_1_90
								{
									type = "text";
									source = "static";
									text = "90";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP90",{-0.26,-0.017},1};
									right[] = {"LevelP90",{-0.2,-0.017},1};
									down[] = {"LevelP90",{-0.26,0.033},1};
								};
								class VALP_1_90_R
								{
									type = "text";
									source = "static";
									text = "90";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP90",{0.26,-0.017},1};
									right[] = {"LevelP90",{0.32,-0.017},1};
									down[] = {"LevelP90",{0.26,0.033},1};
								};
							};
						};
						class UnhideOnTurn
						{
							condition = "on";
							class Cross
							{
								type = "line";
								width = 3;
								points[] = {{"PlaneW",{-0.02,0},1},{"PlaneW",{-0.04,0},1},{},{"PlaneW",{0.02,0},1},{"PlaneW",{0.04,0},1},{},{"PlaneW",{0,-0.019708},1},{"PlaneW",{0,-0.0394161},1},{},{"PlaneW",{0,0.019708},1},{"PlaneW",{0,0.0394161},1},{}};
							};
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = {0.5,0.5};
						pos10[] = {0.773,0.773};
						width = 4;
						points[] = {{{-0.002,-0.002},1},{{0.002,-0.002},1},{{0.002,0.002},1},{{-0.002,0.002},1},{{-0.002,-0.002},1}};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target",1,"Limit0109",1,{0.02,0.02},1},{"Target",1,"Limit0109",1,{-0.02,0.02},1},{"Target",1,"Limit0109",1,{-0.02,-0.02},1},{"Target",1,"Limit0109",1,{0.02,-0.02},1},{"Target",1,"Limit0109",1,{0.02,0.02},1}};
						};
					};
				};
			};
		};
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
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\Z95Init.sqf';";
		};
		class UserActions
		{
			class Aircraft_MFD_Open_N
			{
				displayName = "Open I-TGT System";
				position = "pos cano";
				radius = 15;
				shortcut = "User4";
				condition = "('FIR_TGTPOD' in weapons this or 'Laserdesignator_pilotCamera' in weapons this) and player in this and isengineon this";                
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf"";";
				onlyforplayer = "false";
				hideOnUse = 1;
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
				UIPicture = "3as\3as_z95\data\plane_z95_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"B_MISSILE_PYLON","B_BOMB_PYLON","B_AMRAAM_D","B_AMRAAM_D_RAIL"};
						attachment = "PylonRack_Missile_BIM9X_x1";
						priority = 10;
						maxweight = 50000;
						UIposition[] = {0.6,0.45};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.05,0.45};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1
					{
						priority = 9;
						UIposition[] = {0.55,0.35};
					};
					class pylons4: pylons3
					{
						priority = 13;
						UIposition[] = {0.1,0.35};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1
					{
						priority = 7;
						UIposition[] = {0.5,0.25};
					};
					class pylons6: pylons5
					{
						priority = 12;
						UIposition[] = {0.15,0.25};
						mirroredMissilePos = 5;
					};
					class Pylons7
					{
						hardpoints[] = {"z95_CANON_PYLON"};
						priority = 5;
						attachment = "3as_PylonWeapon_Z95_240Rnd_Heavy_Shells";
						maxweight = 50000;
						UIposition[] = {0.325,0.15};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		
	};
	
	class JA_104th_Base_Falcon_Armed: OPTRE_UNSC_falcon
	{
		author = "Dak";
		displayName = "Falcon Armed"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		visionMode[] = {"Normal","NVG","Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		memoryPointDriverOptics = "gunner1";
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		weapons[] = {"OPTRE_M638","CMFlareLauncher","Laserdesignator_pilotCamera"};
		magazines[] = {"OPTRE_2000Rnd_20mm_HE","OPTRE_2000Rnd_20mm_HE","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\OPTRE_Vehicles\falcon\FalconPylonPic.paa";
				class pylons
				{
					class WingPylonRight1
					{
						maxweight = 1200;
						hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AGM65_RAIL","B_MISSILE_PYLON"};
						attachment = "PylonRack_12Rnd_PG_missiles";
						bay = -1;
						priority = 3;
						UIposition[] = {0.35,0.1};
						turret[] = {};
					};
					class WingPylonLeft1: WingPylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.467};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
				};
			};
			class TransportCounterMeasuresComponent;
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
		};
		class UserActions
		{
			class FullAirbrakeEngage
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_FullAirbrakeEngage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Engage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Disengage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
		};
	};
	class JA_104th_Base_Pelican_Unarmed: OPTRE_Pelican_unarmed
	{
		author = "Dak";
		displayName = "Pelican Unarmed"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		class UserActions
		{
			class PelLift_LoadVehicle
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement = "0 = [this,vehicle player] spawn OPTRE_fnc_PelicanLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID = 9;
				displayName = "Load Supply Pods";
				displayNameDefault = "Load Supply Pods";
				textToolTip = "Load Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement = "OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID = 7;
				displayName = "Unload Vehicle / Supply Pods";
				displayNameDefault = "Unload Vehicle / Supply Pods";
				textToolTip = "Unload Vehicle / Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = [this] spawn OPTRE_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID = 8;
				displayName = "Detach Individual Supply Pod Menu";
				displayNameDefault = "Detach Individual Supply Pod Menu";
				textToolTip = "Detach Individual Supply Pod Menu";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class RampOpen
			{
				userActionID = 50;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 100000;
				priority = 4;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				animPeriod = 5;
			};
			class RampClose: RampOpen
			{
				userActionID = 51;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				animPeriod = 5;
			};
			class FullAirbrakeEngage
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_FullAirbrakeEngage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Engage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Disengage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
		};
	};
	class JA_104th_Base_Pelican_Armed: OPTRE_Pelican_armed
	{
		author = "Dak";
		displayName = "Pelican Armed"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		weapons[] = {"CMFlareLauncher","OPTRE_missiles_Anvil1","Laserdesignator_pilotCamera"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		class UserActions
		{
			class PelLift_LoadVehicle
			{
				userActionID = 6;
				displayName = "Load Vehicle";
				displayNameDefault = "Load Vehicle";
				textToolTip = "Load Vehicle";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				statement = "0 = [this,vehicle player] spawn OPTRE_fnc_PelicanLoadValidate;";
			};
			class PelLift_LoadPodMenu
			{
				userActionID = 9;
				displayName = "Load Supply Pods";
				displayNameDefault = "Load Supply Pods";
				textToolTip = "Load Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 15;
				priority = 2;
				onlyForPlayer = 0;
				condition = "!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				statement = "OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
			};
			class PelLift_UnLoadVehicle
			{
				userActionID = 7;
				displayName = "Unload Vehicle / Supply Pods";
				displayNameDefault = "Unload Vehicle / Supply Pods";
				textToolTip = "Unload Vehicle / Supply Pods";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = [this] spawn OPTRE_fnc_PelicanUnLoadValidate;";
			};
			class PelLift_OpenDetachPodMenu
			{
				userActionID = 8;
				displayName = "Detach Individual Supply Pod Menu";
				displayNameDefault = "Detach Individual Supply Pod Menu";
				textToolTip = "Detach Individual Supply Pod Menu";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 5;
				priority = 3;
				onlyForPlayer = 0;
				condition = "(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				statement = "0 = this spawn OPTRE_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
			};
			class RampOpen
			{
				userActionID = 50;
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 100000;
				priority = 4;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cargoDoor_1"" < 0.5) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				animPeriod = 5;
			};
			class RampClose: RampOpen
			{
				userActionID = 51;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				priority = 4;
				condition = "((this animationPhase ""cargoDoor_1"" > 0.5) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				animPeriod = 5;
			};
			class FullAirbrakeEngage
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_FullAirbrakeEngage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Engage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Disengage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
		};
	};
	
	class JA_104th_3AS_Reaper_Y_Wing: Aux212_3AS_Reaper_Y_Wing
	{
		Author = "212th + 3AS + Echo"
		displayName = "104th Reaper BTL-B Y-Wing";
		crew = "SWLB_clone_pilot_base_P2";
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		radarTargetSize = 1; //No idea who in 3AS thought it's a good idea to make the Y-Wing more stealthy than the stealth fighters, so I'm changing it.
		irTargetSize = 1;
		VTOLPitchInfluence = 12;
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		stallSpeed = 0;
		
		armor = 550;
		weapons[] = {"Laserdesignator_pilotCamera","CMFlareLauncher","212th_YWing_Voltic_Cannon","RD501_Republic_Aircraft_Laser_AA","212th_A2A_MissileSystem","212th_WGM_MissileSystem","212th_Gizka_Bomb_ReleaseSystem"};
		magazines[] = {"Laserbatteries","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","RD501_Republic_Aircraft_Laser_AA_Mag_600","RD501_Republic_Aircraft_Laser_AA_Mag_600","RD501_Republic_Aircraft_Laser_AA_Mag_600","RD501_Republic_Aircraft_Laser_AA_Mag_600","212th_Drexl_4Rnd_A2A_mag","212th_Drexl_4Rnd_A2A_mag","212th_Drexl_4Rnd_A2A_mag","212th_Basilisk_4Rnd_WGM_mag","212th_Basilisk_4Rnd_WGM_mag","212th_Basilisk_4Rnd_WGM_mag","212th_Basilisk_4Rnd_WGM_mag","212th_Gizka_Bomb_mag","212th_Gizka_Bomb_mag","212th_Gizka_Bomb_mag","212th_Gizka_Bomb_mag"};
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
		
		class ACE_SelfActions
		{
			class LAAT_HUD_Changer
			{
				displayName = "Change HUD Color";
				exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled = 0;
				priority = 2.5;
				icon = "212th\Other\212th_Func\textures\vic_hud\colorWheel.paa";
				class Red_HUD
				{
					displayName = "Red HUD Color";
					exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = "[1,0,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					showDisabled = 0;
					runOnHover = 1;
					priority = 2.5;
					icon = "212th\Other\212th_Func\textures\vic_hud\red.paa";
				};
				class Orange_HUD: Red_HUD
				{
					displayName = "Orange HUD Color";
					statement = "[1,.05,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\orange.paa";
				};
				class Yellow_HUD: Red_HUD
				{
					displayName = "Yellow HUD Color";
					statement = "[1,1,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\yellow.paa";
				};
				class Green_HUD: Red_HUD
				{
					displayName = "Green HUD Color";
					statement = "[0,1,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\green.paa";
				};
				class Cyan_HUD: Red_HUD
				{
					displayName = "Cyan HUD Color";
					statement = "[0,1,1,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\cyan.paa";
				};
				class Blue_HUD: Red_HUD
				{
					displayName = "Blue HUD Color";
					statement = "[0,0,1,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\blue.paa";
				};
				class Purple_HUD: Red_HUD
				{
					displayName = "Purple HUD Color";
					statement = "[.5,0,.5,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\purple.paa";
				};
				class White_HUD: Red_HUD
				{
					displayName = "White HUD Color";
					statement = "[1,1,1,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\white.paa";
				};
				class Black_HUD: Red_HUD
				{
					displayName = "Black HUD Color";
					statement = "[0,0,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\black.paa";
				};
				class Clear_HUD: Red_HUD
				{
					displayName = "No HUD Color";
					statement = "[1,1,1,0,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\noHud.paa";
				};
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\ECM\YWing-init.sqf';";
		};
		class UserActions
		{
			class Aircraft_MFD_Open_N
			{
				displayName = "Open I-TGT System";
				position = "pos cano";
				radius = 15;
				shortcut = "User4";
				condition = "player in this and isengineon this";                
				statement = "this execVM ""\FIR_AirWeaponSystem_US\Script\TGTSystem\FIR_AWS_MFD_N_Open.sqf"";";
				onlyforplayer = "false";
				hideOnUse = 1;
			};  

			class ECM_ON
			{
				displayName = "ECM JAMMER ON";
				position = "pos cano";
				radius = 15;
				shortcut = "User2";
				condition = "player in this and isengineon this";
				statement = "[this] execVM ""\JangosVehicles\Script\ECM\ECM_ON.sqf"";";
				onlyforplayer = "False";
				hideOnUse = 1;
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
						aimDown = 0;
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
						typeRecognitionDistance = 8000;
						class AirTarget
						{
							maxRange = 16000;
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
					class AntiRadiationSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
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
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
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
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
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
						typeRecognitionDistance = 4000;
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
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
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
				UIPicture = "JangosVehicles\data\textures\plane_ywing_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","B_AMRAAM_D","B_AMRAAM_D_RAIL","DAR","DAGR","B_GBU12","B_AGM65_RAIL","20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON"};
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 10;
						maxweight = 8000;
						UIposition[] = {0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.15,0.25};
						mirroredMissilePos = 1;
					};
					class pylons3: pylons1
					{
						priority = 9;
						UIposition[] = {0.55,0.35};
					};
					class pylons4: pylons3
					{
						UIposition[] = {0.1,0.35};
						mirroredMissilePos = 3;
					};
					class pylons5: pylons1
					{
						priority = 7;
						UIposition[] = {0.6,0.45};
					};
					class pylons6: pylons5
					{
						UIposition[] = {0.05,0.45};
						mirroredMissilePos = 5;
					};
					class pylons7: pylons1
					{
						priority = 9;
						UIposition[] = {0.45,0.4};
					};
					class pylons8: pylons3
					{
						UIposition[] = {0.2,0.4};
						mirroredMissilePos = 7;
					};
				};
				class presets
				{
					class empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class AA
					{
						displayName = "$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_AMRAAM_D_x2","PylonRack_Missile_BIM9X_x1","PylonRack_Missile_BIM9X_x1","PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F","PylonRack_Missile_AGM_02_x2","PylonRack_Missile_AGM_02_x2","PylonMissile_1Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F"};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
	};
	
	class JA_104th_3AS_Reaper_Y_Wing_Blue: JA_104th_3AS_Reaper_Y_Wing
	{
		displayName = "104th Reaper BTL-B Y-Wing Blue";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\YWing_Body_Blue.paa","3as\3as_btlb\data\detail_co.paa","3as\3as_btlb\data\interior_co.paa"};
		class TextureSources
		{
			class Blue
			{
				displayName = "Blue Leader";
				author = "$STR_3as_Studio";
				textures[] = {"JangosVehicles\data\textures\YWing_Body_Blue.paa","3as\3as_btlb\data\detail_co.paa","3as\3as_btlb\data\interior_co.paa"};
				factions[] = {"104th_Guys"};
			};
		};
	};
	
	class JA_104th_3AS_Reaper_Y_Wing_BlueLeader: JA_104th_3AS_Reaper_Y_Wing
	{
		displayName = "104th Reaper BTL-B Y-Wing Blue Leader";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\YWing_Body_BlueLeader.paa","3as\3as_btlb\data\detail_co.paa","3as\3as_btlb\data\interior_co.paa"};
		class TextureSources
		{
			class BlueLeader
			{
				displayName = "Blue Leader";
				author = "$STR_3as_Studio";
				textures[] = {"JangosVehicles\data\textures\YWing_Body_BlueLeader.paa","3as\3as_btlb\data\detail_co.paa","3as\3as_btlb\data\interior_co.paa"};
				factions[] = {"104th_Guys"};
			};
		};
	};
	
	class JA_104th_vulture_dynamicLoadout_base: 3AS_Vulture_Base_F {
		irTargetSize = 1;
		radarTargetSize = 1;
		armor = 50;
		displayName = "Swarm-Vulture Droid";
	};
	
	class JA_104th_Vulture_dynamicLoadout: 3AS_CIS_Vulture_CAS_F {
		irTargetSize = 1;
		radarTargetSize = 1;
		armor = 50;
		Displayname = "Swarm-Vulture Droid (CAS)";
	};
	
	
	class SensorTemplateIR;
	class SensorTemplateVisual;
	class SensorTemplatePassiveRadar;
	class SensorTemplateActiveRadar;
	class SensorTemplateLaser;
	class SensorTemplateNV;

	
	class JA_104th_Vulture_dynamicLoadout_AA: 3AS_CIS_Vulture_AA_F {
		irTargetSize = 1;
		radarTargetSize = 1;
		armor = 50;
		Displayname = "Swarm-Vulture Droid (AA)";
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 1000;
							maxRange = 10000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 400;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 2000;
						maxFogSeeThrough = 0.995;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+10;
						minTrackableATL = -1e+10;
						maxTrackableATL = 1e+10;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						maxTrackableSpeed = 100;
						aimDown = 1;
						animDirection = "";
						componentType = "VisualSensorComponent";
						nightRangeCoef = 0;
						maxFogSeeThrough = 0.94;
						color[] = {1,1,0.5,0.8};
						typeRecognitionDistance = 2000;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableSpeed = -1e+10;
						minTrackableATL = -1e+10;
						maxTrackableATL = 1e+10;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType = "PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange = 45000;
							maxRange = 45000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						color[] = {0.5,1,0.5,0.5};
						minTrackableSpeed = -1e+10;
						maxTrackableSpeed = 1e+10;
						minTrackableATL = -1e+10;
						maxTrackableATL = 1e+10;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 30000;
							maxRange = 30000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						groundNoiseDistanceCoef = 0.2;
						componentType = "ActiveRadarSensorComponent";
						maxGroundNoiseDistance = 200;
						minSpeedThreshold = 30;
						maxSpeedThreshold = 40;
						color[] = {0,1,1,1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+10;
						maxTrackableSpeed = 1e+10;
						minTrackableATL = -1e+10;
						maxTrackableATL = 1e+10;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType = "LaserSensorComponent";
						class AirTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 15000;
							maxRange = 15000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						typeRecognitionDistance = 0;
						color[] = {1,1,1,0};
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+10;
						maxTrackableSpeed = 1e+10;
						minTrackableATL = -1e+10;
						maxTrackableATL = 1e+10;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = {1,1,1,0};
						typeRecognitionDistance = 0;
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						allowsMarking = 1;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+10;
						maxTrackableSpeed = 1e+10;
						minTrackableATL = -1e+10;
						maxTrackableATL = 1e+10;
					};
				};
			};
			class TransportPylonsComponent
			{
				class Pylons
				{
					class Pylons1
					{
						hardpoints[] = {"vulture_AA","B_BIM9X_RAIL","B_BIM9X_DUAL_RAIL"};
						attachment = "3as_PylonMissle_Vulture_2Rnd_Missile_AA";
						priority = 5;
						maxweight = 1200;
						UIposition[] = {0.35,0.15};
					};
					class Pylons2: Pylons1
					{
						maxweight = 1200;
						UIposition[] = {0.35,-0.15};
					};
					class Pylons3: Pylons1
					{
						UIposition[] = {0.35,0.3};
						mirroredMissilePos = 2;
					};
					class Pylons4: Pylons2
					{
						UIposition[] = {0.35,-0.3};
						mirroredMissilePos = 1;
					};
					class Pylons5: Pylons1
					{
						UIposition[] = {0.35,0};
						priority = 4;
					};
					class Pylons6: Pylons5
					{
						UIposition[] = {0.35,0.5};
						mirroredMissilePos = 5;
					};
					class Pylons7: Pylons1
					{
						priority = 10;
						attachment = "3as_PylonWeapon_100Rnd_Vulture_Heavy_shells";
						maxweight = 1200;
						UIposition[] = {0.1,0.27};
						hardpoints[] = {"3as_Vulture_AOE_Cannon"};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "AA";
						attachment[] = {"3as_PylonMissle_Vulture_2Rnd_Missile_AA","3as_PylonMissle_Vulture_2Rnd_Missile_AA","3as_PylonWeapon_100Rnd_Vulture_Heavy_shells"};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay = "EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
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
						range[] = {8000,2000,4000,16000,30000};
						resource = "RscCustomInfoSensors";
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
						resource = "RscCustomInfoMiniMap";
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
						range[] = {8000,2000,4000,16000,30000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	};
	
	class JA_104th_Vulture_dynamicLoadout_Bare: 3AS_CIS_Vulture_F {
		irTargetSize = 1;
		radarTargetSize = 1;
		armor = 50;
		Displayname = "Swarm-Vulture Droid (Guns Only)";
	};


	//Split
	
	

	class JA_104th_Base_TX130: SWLG_tanks_tx130
	{
		author = "Dak";
		displayName = "TX-130"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\TX130Init.sqf';";
		};
	};
	
	class JA_104th_BARC: ls_ground_barc
	{
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		displayName = "BARC Speeder 104th";
		author = "Legion Studios + Echo";
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

	//class 3as_nuclass_f;
	class 3AS_Nuclass;
	/*
	class 3AS_Nuclass: 3as_nuclass_f
	{
		class ACE_SelfActions;
	};
	*/
	class JA_104th_NU: 3AS_Nuclass
	{
		displayName = "104th Nu-Class Shuttle";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		armor = 600;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		visionMode[] = {"Normal","NVG","Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\nu\exterior_104_CO.paa","JangosVehicles\data\textures\nu\wings_104_CO.paa","JangosVehicles\data\textures\nu\interior_104_co.paa","JangosVehicles\data\textures\nu\cockpit_doors_104_co.paa"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		class Components
		{
			class TransportCounterMeasuresComponent;
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
		};
		class UserActions
		{
			class rampOpen
			{
				displayName = "Cargo Ramp Open";
				position = "cargoaction";
				radius = 12;
				condition = "(this animationSourcePhase 'ramp' ==0 AND (alive this))";
				statement = "this animateSource ['ramp',1]";
				onlyforplayer = 0;
				role = 0;
			};
			class rampClose: rampOpen
			{
				displayName = "Cargo Ramp Close";
				position = "cargoaction";
				radius = 12;
				condition = "(this animationSourcePhase 'ramp' ==1 AND (alive this))";
				statement = "this animateSource ['ramp',0]";
				onlyforplayer = 0;
			};
			class frontrampOpen
			{
				role = 0;
				displayName = "Ramp Open";
				position = "frontaction";
				radius = 12;
				condition = "(this animationSourcePhase 'rampfront' ==0 AND (alive this))";
				statement = "this animateSource ['rampfront',1]";
				onlyforplayer = 0;
			};
			class frontrampClose: frontrampOpen
			{
				displayName = "Ramp Close";
				position = "frontaction";
				radius = 12;
				condition = "(this animationSourcePhase 'rampfront' ==1 AND (alive this))";
				statement = "this animateSource ['rampfront',0]";
				onlyforplayer = 0;
			};
			class FullAirbrakeEngage
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_FullAirbrakeEngage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Engage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Disengage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\NuInit.sqf';";
		};
	};
	
	
	//Xi'an for Star Wars
	//Xian Infantry
	
	class VTOL_02_infantry_dynamicLoadout_base_F;
	class O_T_VTOL_02_infantry_dynamicLoadout_F: VTOL_02_infantry_dynamicLoadout_base_F
	{
		class NewTurret;
		class CargoTurret;
	};
	class JA_104th_Xian_Infantry: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		displayName = "104th Xian Infantry";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JLTS_Clone_P2_DC15S";
		typicalcargo[] = {"JLTS_Clone_P2_DC15S"};
		visionMode[] = {"Normal","NVG","Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		weapons[] = {"CMFlareLauncher","Laserdesignator_pilotCamera"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};
		airBrakeFrictionCoef = 75;
		
		class Turrets
		{
			class GunnerTurret: NewTurret
			{
				animationSourceBody = "Gunner_rotH_source";
				animationSourceGun = "Gunner_rotV_source";
				body = "Cannon_turret_rot";
				castGunnerShadow = 1;
				commanding = -1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex = 5;
				enableManualFire = 0;
				gun = "Cannon_rot";
				gunBeg = "Cannon_barrel_end";
				gunEnd = "Cannon_barrel_beg";
				gunnerAction = "gunner_01_VTOL_02";
				gunnerCompartments = "Compartment2";
				gunnerForceOptics = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerInAction = "gunner_01_VTOL_02";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "Pedals_2_left_2";
				gunnerRightLegAnimName = "Pedals_2_right_2";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerUsesPilotView = 0;
				isCopilot = 1;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.5;
				memoryPointGunnerOptics = "Cannon_pip_pos";
				memoryPointsGetInGunner = "GetIn_gunner_pos";
				memoryPointsGetInGunnerDir = "GetIn_gunner_dir";
				minElev = -30;
				maxElev = 20;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				outGunnerMayFire = 1;
				particlesDir = "Cannon_barrel_end";
				particlesPos = "Cannon_barrel_beg";
				primaryGunner = 1;
				proxyIndex = 1;
				selectionFireAnim = "Cannon_muzzleflash";
				showAllTargets = 4;
				stabilizedInAxes = 3;
				startEngine = 0;
				turretInfoType = "RscOptics_VTOL_02_gunner";
				magazines[] = {"212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","Laserbatteries"};
				weapons[] = {"212th_YWing_Voltic_Cannon","Laserdesignator_mounted"};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 10;
						minAngleX = -45;
						maxAngleX = 25;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
						opticsDisplayName = "W";
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
						opticsDisplayName = "M";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						opticsDisplayName = "N";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 10;
						minAngleX = -45;
						maxAngleX = 25;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
						visionMode[] = {"Normal","NVG"};
					};
				};
				class Components
				{
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
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
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
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
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
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "GetIn_cargo_ffv_left_pos";
				memoryPointsGetInGunnerDir = "GetIn_cargo_ffv_left_dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				proxyIndex = 9;
				isPersonTurret = 1;
				enabledByAnimationSource = "Door_1_source";
				soundAttenuationTurret = "HeliAttenuationRamp";
				LODTurnedIn = 1200;
				LODTurnedOut = 1200;
				LODOpticsIn = 1200;
				LODOpticsOut = 1200;
				disableSoundAttenuation = 0;
				class TurnOut
				{
					limitsArrayTop[] = {{10.6151,-94.8295},{9.1304,-73.6575},{-11.9946,-56.092}};
					limitsArrayBottom[] = {{-30.122,-94.8727},{-26.9148,-75.6837},{-26.8921,-56.0434}};
				};
				class TurnIn: TurnOut{};
			};
			class CargoTurret_02: CargoTurret_01
			{
				memoryPointsGetInGunner = "GetIn_cargo_ffv_right_pos";
				memoryPointsGetInGunnerDir = "GetIn_cargo_ffv_right_dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex = 8;
				class TurnOut
				{
					limitsArrayTop[] = {{-2.025,25.5708},{15.6257,39.3879},{18.1105,67.7249}};
					limitsArrayBottom[] = {{-19.7491,25.1857},{-19.2213,45.1216},{-20.604,66.8477}};
				};
				class TurnIn: TurnOut{};
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
						aimDown = 0;
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
						typeRecognitionDistance = 8000;
						class AirTarget
						{
							maxRange = 16000;
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
					class AntiRadiationSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
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
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
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
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
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
						typeRecognitionDistance = 4000;
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
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
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
				defaultDisplay = "EmptyDisplay";
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
						range[] = {8000,2000,4000,16000,30000};
						resource = "RscCustomInfoSensors";
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
						range[] = {8000,2000,4000,16000,30000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON","O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						turret[] = {0};
						UIposition[] = {0.35,0.16};
					};
					class PylonRight2: PylonRight1
					{
						attachment = "PylonRack_19Rnd_Rocket_Skyfire";
						priority = 4;
						hardpoints[] = {"20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON","O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						UIposition[] = {0.33,0.21};
					};
					class PylonLeft2: PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.33,0.34};
					};
					class PylonLeft1: PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.39};
					};
				};
				class presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_4Rnd_LG_scalpel"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonRack_19Rnd_Rocket_Skyfire","PylonMissile_1Rnd_Bomb_03_F","PylonMissile_1Rnd_Bomb_03_F","PylonRack_19Rnd_Rocket_Skyfire"};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_4Rnd_LG_scalpel"};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		class TextureSources
		{
			class White
			{
				displayName = "White Camo";
				author = "The Uiltimate Builder";
				factions[] = {"104th_Guys"};
				textures[] = {"JangosVehicles\data\textures\xian\xian_ext01_CO.paa","JangosVehicles\data\textures\xian\xian_ext02_CO.paa","JangosVehicles\data\textures\xian\xian_ext03_L_CO.paa","JangosVehicles\data\textures\xian\xian_ext03_R_CO.paa"};
			};
		};
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\xian\xian_ext01_CO.paa","JangosVehicles\data\textures\xian\xian_ext02_CO.paa","JangosVehicles\data\textures\xian\xian_ext03_L_CO.paa","JangosVehicles\data\textures\xian\xian_ext03_R_CO.paa"};
	};
	
	
	//Xian Vehicle
	class VTOL_02_vehicle_dynamicLoadout_base_F;
	class O_T_VTOL_02_vehicle_dynamicLoadout_F: VTOL_02_vehicle_dynamicLoadout_base_F
	{
		class NewTurret;
	};
	class JA_104th_Xian_Vehicle: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		displayName = "104th Xian Vehicle";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JLTS_Clone_P2_DC15S";
		typicalcargo[] = {"JLTS_Clone_P2_DC15S"};
		visionMode[] = {"Normal","NVG","Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		weapons[] = {"CMFlareLauncher","Laserdesignator_pilotCamera"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};
		airBrakeFrictionCoef = 75;
		class Turrets
		{
			class GunnerTurret: NewTurret
			{
				animationSourceBody = "Gunner_rotH_source";
				animationSourceGun = "Gunner_rotV_source";
				body = "Cannon_turret_rot";
				castGunnerShadow = 1;
				commanding = -1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				discreteDistanceInitIndex = 5;
				enableManualFire = 0;
				gun = "Cannon_rot";
				gunBeg = "Cannon_barrel_end";
				gunEnd = "Cannon_barrel_beg";
				gunnerAction = "gunner_01_VTOL_02";
				gunnerCompartments = "Compartment2";
				gunnerForceOptics = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerInAction = "gunner_01_VTOL_02";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "Pedals_2_left_2";
				gunnerRightLegAnimName = "Pedals_2_right_2";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerUsesPilotView = 0;
				isCopilot = 1;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.5;
				memoryPointGunnerOptics = "Cannon_pip_pos";
				memoryPointsGetInGunner = "GetIn_gunner_pos";
				memoryPointsGetInGunnerDir = "GetIn_gunner_dir";
				minElev = -30;
				maxElev = 20;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				outGunnerMayFire = 1;
				particlesDir = "Cannon_barrel_end";
				particlesPos = "Cannon_barrel_beg";
				primaryGunner = 1;
				proxyIndex = 1;
				selectionFireAnim = "Cannon_muzzleflash";
				showAllTargets = 4;
				stabilizedInAxes = 3;
				startEngine = 0;
				turretInfoType = "RscOptics_VTOL_02_gunner";
				magazines[] = {"212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","212th_Voltic_Cannon_Magazine","Laserbatteries"};
				weapons[] = {"212th_YWing_Voltic_Cannon","Laserdesignator_mounted"};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 10;
						minAngleX = -45;
						maxAngleX = 25;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
						opticsDisplayName = "W";
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
						opticsDisplayName = "M";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						opticsDisplayName = "N";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 10;
						minAngleX = -45;
						maxAngleX = 25;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
						visionMode[] = {"Normal","NVG"};
					};
				};
				class Components
				{
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
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
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
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
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
						};
					};
				};
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
						aimDown = 0;
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
						typeRecognitionDistance = 8000;
						class AirTarget
						{
							maxRange = 16000;
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
					class AntiRadiationSensorComponent
					{
						aimDown = 0;
						allowsMarking = 1;
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
						class AirTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
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
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
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
						typeRecognitionDistance = 4000;
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
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 16000;
							minRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
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
				defaultDisplay = "EmptyDisplay";
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
						range[] = {8000,2000,4000,16000,30000};
						resource = "RscCustomInfoSensors";
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
						range[] = {8000,2000,4000,16000,30000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Exp\VTOL_02\Data\UI\VTOL_02_3DEN_CA.paa";
				class Pylons
				{
					class PylonRight1
					{
						attachment = "PylonRack_4Rnd_LG_scalpel";
						priority = 5;
						hardpoints[] = {"20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON","O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						turret[] = {0};
						UIposition[] = {0.35,0.16};
					};
					class PylonRight2: PylonRight1
					{
						attachment = "PylonRack_19Rnd_Rocket_Skyfire";
						priority = 4;
						hardpoints[] = {"20MM_TWIN_CANNON","B_MISSILE_PYLON","B_BOMB_PYLON","O_MISSILE_PYLON","O_BOMB_PYLON","UNI_SCALPEL"};
						UIposition[] = {0.33,0.21};
					};
					class PylonLeft2: PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.33,0.34};
					};
					class PylonLeft1: PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.39};
					};
				};
				class presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class Default
					{
						displayName = "$STR_vehicle_default";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_19Rnd_Rocket_Skyfire","PylonRack_4Rnd_LG_scalpel"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonRack_19Rnd_Rocket_Skyfire","PylonMissile_1Rnd_Bomb_03_F","PylonMissile_1Rnd_Bomb_03_F","PylonRack_19Rnd_Rocket_Skyfire"};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_1Rnd_Missile_AGM_01_F","PylonRack_4Rnd_LG_scalpel"};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
		class TextureSources
		{
			class White
			{
				displayName = "White Camo";
				author = "The Uiltimate Builder";
				factions[] = {"104th_Guys"};
				textures[] = {"JangosVehicles\data\textures\xian\xian_ext01_CO.paa","JangosVehicles\data\textures\xian\xian_ext02_CO.paa","JangosVehicles\data\textures\xian\xian_ext03_L_CO.paa","JangosVehicles\data\textures\xian\xian_ext03_R_CO.paa"};
			};
		};
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\xian\xian_ext01_CO.paa","JangosVehicles\data\textures\xian\xian_ext02_CO.paa","JangosVehicles\data\textures\xian\xian_ext03_L_CO.paa","JangosVehicles\data\textures\xian\xian_ext03_R_CO.paa"};
	};
	
	//Republic Transport
	class 3AS_Republic_Transport_01;
	class JA_104th_Republic_Transport: 3AS_Republic_Transport_01
	{
		displayName = "104th Republic Transport";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JLTS_Clone_P2_DC15S";
		typicalcargo[] = {"JLTS_Clone_P2_DC15S"};
		visionMode[] = {"Normal","NVG","Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		armor = 600;
		irTargetSize = 1; //Again, raising this value to not make it a Stealth ship.
		radarTargetSize = 1; //Again, raising this value to not make it a Stealth ship.
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		class EventHandlers: DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\RTInit.sqf';";
		};
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\104_hs_ext_co.paa","3as\3as_starships\data\hs_int_co.paa","a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"};
	};
	
	class JMSLLTE_UwingHeli_Reb_F;
	class JA_104th_Uwing: JMSLLTE_UwingHeli_Reb_F
	{
		displayName = "104th U-Wing Dropship";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JLTS_Clone_P2_DC15S";
		typicalcargo[] = {"JLTS_Clone_P2_DC15S"};
		visionMode[] = {"Normal","NVG","Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		armor = 200;
		cargoAction[] = {"passenger_generic01_foldhands"};
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		textureList[] = {"Tex_Uwing_blue",1,"Tex_Uwing_white",1,"Tex_Uwing_rogue",1,"Tex_Uwing_anvil",1,"Tex_Uwing_NRearly",1,"Tex_Uwing_CavernAngels",1};
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","Laserdesignator_pilotCamera","JA_104th_guided_resupply_pod_launcher","CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","Laserbatteries","JA_104th_Guided_Resupply_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		class EventHandlers: DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\MedAirInit.sqf';";
		};
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\OPTRE_Vehicles\falcon\FalconPylonPic.paa";
				class pylons
				{
					class WingPylonRight1
					{
						maxweight = 1200;
						hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AGM65_RAIL","B_MISSILE_PYLON"};
						attachment = "PylonRack_12Rnd_PG_missiles";
						bay = -1;
						priority = 3;
						UIposition[] = {0.35,0.1};
						turret[] = {};
					};
					class WingPylonLeft1: WingPylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35,0.467};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "Empty";
						attachment[] = {};
					};
				};
			};
			class TransportCounterMeasuresComponent;
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
		};
		class UserActions
		{
			class FullAirbrakeEngage
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_FullAirbrakeEngage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 57;
			};
			class Thruster400Engage
			{
				animPeriod = 5;
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName = "<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault = "<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Engage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#04B45F'>Engage Forward Thrusters";
				userActionID = 52;
			};
			class Thruster400Disengage
			{
				animPeriod = 5;
				condition = "(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName = "<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault = "<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this execVM ""\JangosVehicles\Script\Falcon\fn_Thruster400Disengage.sqf"";"; //Script from A2 Declassified - Fireteam Zulu, copied with permission from Vespade. Full credit to FZ.
				textToolTip = "<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID = 53;
			};
			class OpenLeftDoor
			{
				displayName = "[Open Left Door]";
				displayNameDefault = "[Open Left Door]";
				textToolTip = "[Open Left Door]";
				position = "pilotview";
				radius = 20;
				priority = 9999;
				onlyForPlayer = 1;
				condition = "this doorPhase ""Door_L"" < 0.5 AND (alive this) AND (player in [gunner this, driver this])";
				statement = "this animateDoor ['Door_L', 1];this animate ['DoorsHandler',1]";
				animPeriod = 4;
			};
			class CloseLeftDoor: OpenLeftDoor
			{
				displayName = "[Close Left Door]";
				displayNameDefault = "[Close Left Door]";
				textToolTip = "[Close Left Door]";
				priority = 9999;
				condition = "this doorPhase ""Door_L"" > 0.5 AND (alive this) AND (player in [gunner this, driver this])";
				statement = "this animateDoor ['Door_L', 0];this animate ['DoorsHandler',0];";
				animPeriod = 4;
			};
			class OpenRightDoor
			{
				displayName = "[Open Right Door]";
				displayNameDefault = "[Open Right Door]";
				textToolTip = "[Open Right Door]";
				position = "pilotview";
				radius = 20;
				priority = 9999;
				onlyForPlayer = 1;
				condition = "this doorPhase ""Door_R"" < 0.5 AND (alive this) AND (player in [gunner this, driver this])";
				statement = "this animateDoor ['Door_R', 1];this animate ['DoorsHandler',1]";
				animPeriod = 4;
			};
			class CloseRightDoor: OpenRightDoor
			{
				displayName = "[Close Right Door]";
				displayNameDefault = "[Close Right Door]";
				textToolTip = "[Close Right Door]";
				priority = 9999;
				condition = "this doorPhase ""Door_R"" > 0.5 AND (alive this) AND (player in [gunner this, driver this])";
				statement = "this animateDoor ['Door_R', 0];this animate ['DoorsHandler',0];";
				animPeriod = 4;
			};
			class SfoilsOpen
			{
				displayName = "[S-foils attack position]";
				displayNameDefault = "[S-foils attack position]";
				textToolTip = "[S-foils attack position]";
				position = "pilotview";
				radius = 20;
				priority = 7777;
				onlyForPlayer = 1;
				condition = "this doorPhase ""Wings"" < 0.5 AND (alive this) AND (player in [gunner this, driver this])";
				statement = "this animateDoor ['Wings', 1];";
				animPeriod = 5;
			};
			class SfoilsClose: SfoilsOpen
			{
				displayName = "[S-foils close]";
				displayNameDefault = "[S-foils close]";
				textToolTip = "[S-foils close]";
				priority = 7777;
				condition = "this doorPhase ""Wings"" > 0.5 AND (alive this) AND (player in [gunner this, driver this])";
				statement = "this animateDoor ['Wings', 0];";
				animPeriod = 5;
			};
		};
	};
	
	class JMSLLTE_N1fighter_naboo_F;
	class JA_104th_N1: JMSLLTE_N1fighter_naboo_F
	{
		displayName = "104th N-1 Starfighter";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JLTS_Clone_P2_DC15S";
		visionMode[] = {"Normal","NVG","Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		hiddenSelectionsTextures[] = {"\JMSLLTE_vehicles_air\N1\data\n1_base_co.paa","\JMSLLTE_vehicles_air\Xwing\data\droid_dark_co.paa"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		class EventHandlers: DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\LightAirInit.sqf';";
		};
		class Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\JMSLLTE_vehicles_air\N1\data\ico_N1.paa";
				class pylons
				{
					class pylons1
					{
						maxweight = 500;
						hardpoints[] = {"JMSLLTE_N1_CANNON_PYLON"};
						attachment = "PylonRack_JMSLLTE_1000Rnd_N1_N1_mag";
						priority = 3;
						UIposition[] = {0.2,0.3};
						turret[] = {};
					};
					class pylons2: pylons1
					{
						UIposition[] = {0.4,0.3};
						mirroredMissilePos = 1;
					};
					class pylons3
					{
						maxweight = 500;
						hardpoints[] = {"JMSLLTE_MG7A_10RND_PROTON_PYLON"};
						attachment = "PylonRack_JMSLLTE_10Rnd_MG7_proton_missiles";
						priority = 1;
						UIposition[] = {0.3,0.2};
						turret[] = {};
					};
					class pylons4
					{
						maxweight = 1200;
						hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AGM65_RAIL","B_MISSILE_PYLON"};
						attachment = "PylonRack_12Rnd_PG_missiles";
						bay = -1;
						priority = 3;
						UIposition[] = {0.1,0.1};
						turret[] = {};
					};
					class pylons5: pylons4
					{
						mirroredMissilePos = 4;
						UIposition[] = {0.5,0.1};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName = "$STR_empty";
						attachment[] = {};
					};
					class N1
					{
						displayName = "N1/MG7-A";
						attachment[] = {"PylonRack_JMSLLTE_1000Rnd_N1_N1_mag","PylonRack_JMSLLTE_1000Rnd_N1_N1_mag","PylonRack_JMSLLTE_10Rnd_MG7_proton_missiles"};
					};
				};
			};
			class TransportCounterMeasuresComponent;
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
		};
		
	};
	
	
	class 3AS_ATRT;
	class JA_104th_ATRT: 3AS_ATRT
	{
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		displayName = "104th ATRT";
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\ATRT_104th_CO.paa"};
	};

	//class OPTRE_M494;

	class JA_104th_OryxNS: OPTRE_M494
	{
		
		
		displayName = "104th Oryx IFV Unshielded";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		crew = "SWLB_clone_pilot_base_P2";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						stabilizedInAxes = 3;
						minElev = -12;
						maxElev = 60; //Original 45
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {"3AS_Sabre_MG","Laserdesignator_mounted"};
						magazines[] = {"3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","Laserbatteries"};
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						memoryPointGunnerOptics = "commanderview";
						memoryPointGunnerOutOptics = "commanderview";
						gunnerForceOptics = 0;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerHasFlares = 1;
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {0,1};
						};
						startEngine = 0;
						viewGunnerInExternal = 1;
						LODTurnedIn = 1100;
						selectionFireAnim = "zasleh3";
					};
				};
				memoryPointGun = "usti hlavne"; //"usti hlavne2" is the MG port left of the gun, while "usti hlavne" is the end of the cannon barrel.
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				weapons[] = {"Laserdesignator_mounted","ls_laat_gun","ls_laat_gun_2","3AS_Sabre_MG","OPTRE_M670_ATGM_Launcher","SmokeLauncher"};
				magazines[] = {"Laserbatteries","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","3AS_300Rnd_SabreMG_Mag","OPTRE_2Rnd_GAT_missiles","OPTRE_2Rnd_GAT_missiles","OPTRE_2Rnd_GAT_missiles","OPTRE_2Rnd_GAT_missiles","OPTRE_2Rnd_GAT_missiles","OPTRE_2Rnd_GAT_missiles","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
				minElev = -12;
				maxElev = 60; //Original 35
				initElev = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				turretInfoType = "RscWeaponRangeZeroing";
				selectionFireAnim = "zasleh2";
				gun = "maingun";
				body = "mainturret";
				gunAxis = "Osa Hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				LODTurnedIn = 1100;
				turretAxis = "OsaVeze";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
					class Zoom1: Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.014;
						minFov = 0.014;
						maxFov = 0.014;
					};
					class Zoom2: Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.007;
						minFov = 0.007;
						maxFov = 0.007;
					};
				};
				castGunnerShadow = 0;
				stabilizedInAxes = 3;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				gunnerForceOptics = 0;
				usePip = 1;
			};
		};
		
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\OryxCrew\OryxCrew.sqf';";
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	
		
		class textureSources
		{
			class colorclone
			{
				displayName = "Clone 104th";
				author = "Article 2 Studios";
				textures[] = {"JangosVehicles\data\textures\oryx\oryx_armor_clone_co.paa","JangosVehicles\data\textures\oryx\oryx_main_clone_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","JangosVehicles\data\textures\oryx\oryx_turret_clone_co.paa","JangosVehicles\data\textures\oryx\scorp_mg_clone_co.paa","\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colorcloneblue
			{
				displayName = "Clone Blue";
				author = "Article 2 Studios";
				textures[] = {"JangosVehicles\data\textures\oryx\oryx_armor_clone_blue_co.paa","JangosVehicles\data\textures\oryx\oryx_main_clone_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","JangosVehicles\data\textures\oryx\oryx_turret_clone_co.paa","JangosVehicles\data\textures\oryx\scorpion_mg_clone_co.paa","\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colorclonewhite
			{
				displayName = "Clone White";
				author = "Article 2 Studios";
				textures[] = {"JangosVehicles\data\textures\oryx\oryx_armor_clone_white_co.paa","JangosVehicles\data\textures\oryx\oryx_main_clone_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","JangosVehicles\data\textures\oryx\oryx_turret_clone_co.paa","JangosVehicles\data\textures\oryx\scorp_mg_clone_co.paa","\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colorstand
			{
				displayName = "Standard";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\Oryx\data\texture\oryx_armor_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_main_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_turret_co.paa","\OPTRE_Vehicles\Oryx\data\texture\scorpion_mg_co.paa","\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colordes
			{
				displayName = "Tan";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_desert_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_desert_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_desert_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_desert_co.paa","\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colortund
			{
				displayName = "White Digital";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_tundra_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_tundra_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_tundra_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_tundra_co.paa","\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\oryx\oryx_armor_clone_co.paa","JangosVehicles\data\textures\oryx\oryx_main_clone_co.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa","JangosVehicles\data\textures\oryx\oryx_turret_clone_co.paa","JangosVehicles\data\textures\oryx\scorp_mg_clone_co.paa","\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
		
		class ACE_SelfActions: ACE_SelfActions
		{
			class TFAR_IntercomChannel
			{
				displayName = "$STR_tfar_core_Intercom_ACESelfAction_Name";
				condition = "true";
				statement = "";
				icon = "";
				class TFAR_IntercomChannel_disabled
				{
					displayName = "Disabled";
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};
				class TFAR_IntercomChannel_1
				{
					displayName = "$STR_tfar_core_Intercom_ACESelfAction_Channel1";
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};
				class TFAR_IntercomChannel_2
				{
					displayName = "$STR_tfar_core_Intercom_ACESelfAction_Channel2";
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};
				class TFAR_IntercomChannel_Misc_1
				{
					displayName = "Misc channel 1";
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};
				class TFAR_IntercomChannel_Misc_2
				{
					displayName = "Misc channel 2";
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
				};
				class TFAR_IntercomChannel_Misc_3
				{
					displayName = "Misc channel 3";
					condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
					statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
				};
			};
		};
		
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1,20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"212th\Vehicles\212th_APC02\data\sounds\engine_start_int",0.39810717,1};
		soundEngineOnExt[] = {"212th\Vehicles\212th_APC02\data\sounds\engine_star_ext",0.56234133,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop",0.39810717,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop",0.56234133,1,200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1,1,100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",1,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",1,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",1,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",1,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",1,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",1,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",0.3548134,1,200};
				frequency = "0.95 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",0.39810717,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",0.4466836,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",0.5011872,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",0.56234133,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",0.63095737,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",0.70794576,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext",0.56234133,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext",0.63095737,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext",0.63095737,1,230};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext",0.70794576,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext",0.70794576,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext",1,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext",1.1220185,1,400};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class Idle_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int",0.31622776,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int",0.3548134,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int",0.3548134,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.5011872,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.63095737,1,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1,1,60};
				frequency = "1";
				volume = "camPos*rock*(Speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1,1,60};
				frequency = "1";
				volume = "camPos*sand*(Speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1,1,60};
				frequency = "1";
				volume = "camPos*grass*(Speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1,1,60};
				frequency = "1";
				volume = "camPos*mud*(Speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1,1,60};
				frequency = "1";
				volume = "camPos*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(Speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.5848932,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(Speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(Speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(Speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(Speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(Speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(Speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5011872,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(Speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		
	};
	class JA_104th_Oryx: JA_104th_OryxNS
	{
		
		displayName = "104th Oryx IFV Shielded";
		
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\OryxCrew\OryxCrewShield.sqf';";
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class JA_104th_OryxSC: JA_104th_OryxNS 
	{
		
		displayName = "104th Oryx IFV Shielded Debug";
		scope = 0;
		scopeCurator = 0;
		
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\OryxCrew\OryxCrewShieldComponent.sqf';";
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		
	};
	
	class 212th_B_APC_Wheeled_02_cannon_F;
	class JA_104th_APC_Light_Bantha: 212th_B_APC_Wheeled_02_cannon_F
	{
		displayName = "104th Light Bantha";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		
		crewCrashProtection = 0.05;
		
		class Components
		{
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				right = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - (  (10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType = "SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,1000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				left = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType = "MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType = "SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType = "UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType = "TransportFeedDisplayComponent";
						source = "PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {4000,2000,1000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\OryxCrew\BanthaCrew.sqf';";
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
		};
		
	};
	
	class O_T_LSV_02_armed_F;
	class JA_104th_LSV: O_T_LSV_02_armed_F
	{
		displayName = "104th Light Strike Vehicle";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "SWLB_clone_sniper_base_P2";
		
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\OryxCrew\LSVGun.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
		};
		
	};
	
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class 3as_Deka_Static_Sniper_Base: StaticMGWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	
	class RD501_droideka_normal;
	class RD501_droideka_sniper;
	//class RD501_droideka_mobile;
	
	/*class JA_104th_Droideka_Normal: RD501_droideka_normal
	{
		Displayname = "Droideka Shielded";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\DroidekaInit.sqf';";
		};
	};
	class JA_104th_Droideka_Mobile: RD501_droideka_mobile
	{
		Displayname = "Droideka Mobile Shielded";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\DroidekaMobileInit.sqf';";
		};
	};
	
	class JA_104th_Droideka_Sniper: 3as_Deka_Static_Sniper_Base
	{
		Displayname = "Droideka Sniper Shielded";
		scope = 0;
		scopeCurator = 0;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\DroidekaInit.sqf';";
		};
		model = "\3as\3as_deka\deka_Sniper.p3d";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"RD501_Vehicles\textures\droideka\rd501_sniperdroideka_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"3as\3as_deka\data\dekaSniper.rvmat","3as\3as_deka\data\dekaSniper.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat"};
		};
		damageResistance = 0.02;
		crewVulnerable = 0;
		armor = 100;
		armorStructural = 2;
		class Hitpoints
		{
			class HitHull
			{
				armor = 1000;
				material = -1;
				name = "hull_hit";
				visual = "zbytek";
				passthrough = 0.03;
				minimalhit = 0.14;
				explosionshielding = 2;
				radius = 0.25;
			};
			class HitEngine
			{
				armor = 300;
				material = -1;
				name = "engine_hit";
				passThrough = 0.08;
				minimalHit = 0.24;
				explosionShielding = 1;
				radius = 0.33;
			};
			class hitammo_l: HitEngine
			{
				name = "ammo_l_hit";
			};
			class hitammo_r: hitammo_l
			{
				name = "ammo_r_hit";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg[] = {"Usti hlavne"};
				gunEnd[] = {"Konec hlavne"};
				memoryPointGun[] = {"usti hlavne"};
				gunnerForceOptics = 1;
				optics = 1;
				minElev = -15;
				maxElev = 35;
				minTurn = -360;
				maxTurn = 360;
				weapons[] = {"RD501_droideka_sniper"};
				magazines[] = {"RD501_CIS_droideka_sniper_cell_x10_mag","RD501_CIS_droideka_sniper_cell_x10_mag","RD501_CIS_droideka_sniper_cell_x10_mag","RD501_CIS_droideka_sniper_cell_x10_mag"};
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {"Normal","NVG","TI"};
				};
			};
		};
	};
	class JA_104th_Droideka_Normal: JA_104th_Droideka_Sniper
	{
		Displayname = "Droideka Shielded";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\DroidekaInit.sqf';";
		};
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0;
		model = "3AS\3AS_Deka\Deka.p3d";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"RD501_Vehicles\textures\droideka\rd501_deka_co.paa"};
		picture = "\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture = "\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		threat[] = {0.6,0.6,1.0};
		armor = 30;
		armorStructural = 2;
		explosionShielding = 0.1;
		damageResistance = 0.02;
		impactDamageMultiplier = 0.1;
		minTotalDamageThreshold = 0.01;
		crewVulnerable = 0;
		accuracy = 0.12;
		getInAction = "";
		getOutAction = "";
		class Hitpoints
		{
			class HitHull
			{
				armor = 1000;
				material = -1;
				name = "hull_hit";
				visual = "zbytek";
				passthrough = 0.03;
				minimalhit = 0.14;
				explosionshielding = 2;
				radius = 0.25;
			};
			class HitEngine
			{
				armor = 300;
				material = -1;
				name = "engine_hit";
				passThrough = 0.08;
				minimalHit = 0.24;
				explosionShielding = 1;
				radius = 0.33;
			};
			class hitammo_l: HitEngine
			{
				name = "ammo_l_hit";
			};
			class hitammo_r: hitammo_l
			{
				name = "ammo_r_hit";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointGunnerOptics = "gunner_view";
				gunBeg[] = {"Usti hlavne","Usti hlavne2"};
				gunEnd[] = {"Konec hlavne","Konec hlavne2"};
				primary = 1;
				primaryGunner = 1;
				enableManualFire = 1;
				optics = 0;
				minElev = -15;
				maxElev = 35;
				minTurn = -360;
				maxTurn = 360;
				selectionFireAnim = "zasleh";
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				weapons[] = {"RD501_droideka_dual"};
				magazines[] = {"RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag","RD501_droideka_dual_blaster_cell_x60_mag"};
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				gunnerForceOptics = 1;
				turretInfoType = "RscOptics_UAV_gunner";
				LODTurnedIn = -1;
				LODTurnedOut = -1;
				visionMode[] = {"Normal","NVG","TI"};
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				forceHideGunner = 1;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				memoryPointGun[] = {"usti hlavne","usti hlavne2"};
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					visionMode[] = {"Normal","NVG"};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "main_turret_hit";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "main_gun_hit";
						visual = "";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
			};
		};
		isUav = 1;
		crew = "O_UAV_AI";
		class simpleobject
		{
			animate[] = {{"maingun",0},{"mainturret",0},{"damagehide",0}};
		};
		destrType = "DestructBuilding";
		explosionEffect = "FuelExplosion";
		class DestructionEffects
		{
			class Dust
			{
				intensity = 0.1;
				interval = 1;
				lifeTime = 0.01;
				position = "destructionEffect2";
				simulation = "particles";
				type = "HousePartDust";
			};
			class Light1
			{
				enabled = "distToWater";
				intensity = 0.1;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "light";
				type = "ObjectDestructionLightSmall";
			};
			class Fire1
			{
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "particles";
				type = "ObjectDestructionFire1Small";
			};
			class Refract1
			{
				intensity = 1;
				interval = 1;
				lifeTime = 3;
				position = "destructionEffect";
				simulation = "particles";
				type = "SmallFireFRefract";
			};
			class Sound
			{
				intensity = 1;
				interval = 1;
				lifeTime = 1;
				position = "destructionEffect";
				simulation = "sound";
				type = "Fire";
			};
			class sparks1
			{
				intensity = 0.5;
				interval = 1;
				lifeTime = 0;
				position = "destructionEffect2";
				simulation = "particles";
				type = "ObjectDestructionSparks";
			};
			class Smoke1
			{
				simulation = "particles";
				type = "BarelDestructionSmoke";
				position[] = {0,0,0};
				intensity = 0.2;
				interval = 1;
				lifeTime = 1;
			};
			class HouseDestr
			{
				intensity = 1;
				interval = 1;
				lifeTime = 5;
				position = "";
				simulation = "destroy";
				type = "DelayedDestruction";
			};
		};
	};
	*/

	class House_F;
	class B_UAV_01_F;
	class B_UGV_01_F;
	class shieldtest: House_F {
		
		displayname = "shieldspheretest";
		model = "JangosVehicles\data\models\ShieldSphereTest.p3d";
		hiddenSelections[] = {};
		scope = 2;
		class EventHandlers: DefaultEventhandlers
		{
			killed="deleteVehicle (_this select 0)";
		};
	};
	class oryxshield: shieldtest {
		displayname = "Oryx shield bubble";
		model = "JangosVehicles\data\models\OryxShield.p3d";
		hiddenSelections[] = {};
	};
	class oryxshieldvo: oryxshield {
		
		displayname = "Oryx shield bubble Visual";
		model = "JangosVehicles\data\models\OryxShieldvo.p3d";
		hiddenSelections[] = {};
	};
	class oryxshieldred: oryxshield {
		
		displayname = "Oryx shield bubble Red";
		model = "JangosVehicles\data\models\OryxShieldRed.p3d";
		hiddenSelections[] = {};
	};
	class oryxshieldfb: oryxshield {
		
		displayname = "Oryx shield bubble Full Blue";
		model = "JangosVehicles\data\models\OryxShieldfb.p3d";
		hiddenSelections[] = {};
	};
	class oryxshieldhb: oryxshield {
		
		displayname = "Oryx shield bubble Half Blue";
		model = "JangosVehicles\data\models\OryxShieldhb.p3d";
		hiddenSelections[] = {};
	};
	class TX130shield: shieldtest {
		displayname = "TX130 shield bubble";
		model = "JangosVehicles\data\models\TX130Shield.p3d";
		hiddenSelections[] = {};
	};
	class TX130shieldvo: shieldtest {
		displayname = "TX130 shield bubble Visual";
		model = "JangosVehicles\data\models\TX130Shieldvo.p3d";
		hiddenSelections[] = {};
	};
	class TX130shieldfb: shieldtest {
		displayname = "TX130 shield bubble Full Blue";
		model = "JangosVehicles\data\models\TX130Shieldfb.p3d";
		hiddenSelections[] = {};
	};
	class TX130shieldhb: shieldtest {
		displayname = "TX130 shield bubble Half Blue";
		model = "JangosVehicles\data\models\TX130Shieldhn.p3d";
		hiddenSelections[] = {};
	};
	class TX130shieldred: shieldtest {
		
		displayname = "TX130 shield bubble Red";
		model = "JangosVehicles\data\models\TX130ShieldRed.p3d";
		hiddenSelections[] = {};
		
	};
	class ywingshield: shieldtest {
		displayname = "Y-Wing shield bubble";
		model = "JangosVehicles\data\models\YWingShield.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class ywingshieldvo: shieldtest {
		displayname = "Y-Wing shield bubble Visual";
		model = "JangosVehicles\data\models\YWingShieldvo.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class ywingshieldfb: shieldtest {
		displayname = "Y-Wing shield bubble Full Blue";
		model = "JangosVehicles\data\models\YWingShieldfb.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class ywingshieldhb: shieldtest {
		displayname = "Y-Wing shield bubble Half Blue";
		model = "JangosVehicles\data\models\YWingShieldhb.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class ywingshieldred: shieldtest {
		displayname = "Y-Wing shield bubble Red";
		model = "JangosVehicles\data\models\YWingShieldRed.p3d";
		hiddenSelections[] = {};
	};
	class z95shieldvo: shieldtest {
		displayname = "Z-95 shield bubble Visual";
		model = "JangosVehicles\data\models\Z95Shieldvo.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class z95shieldfb: shieldtest {
		displayname = "Z-95 shield bubble Full Blue";
		model = "JangosVehicles\data\models\Z95Shieldfb.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class z95shieldhb: shieldtest {
		displayname = "Z-95 shield bubble Half Blue";
		model = "JangosVehicles\data\models\Z95Shieldhb.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class z95shieldred: shieldtest {
		displayname = "Z-95 shield bubble Red";
		model = "JangosVehicles\data\models\Z95ShieldRed.p3d";
		hiddenSelections[] = {};
	};
	class droidekashieldvo: shieldtest {
		
		displayname = "Droideka shield bubble Visual";
		model = "JangosVehicles\data\models\Droidekavo.p3d";
		hiddenSelections[] = {};
	};
	class droidekashieldfb: shieldtest {
		
		displayname = "Droideka shield bubble Full Blue";
		model = "JangosVehicles\data\models\Droidekafb.p3d";
		hiddenSelections[] = {};
	};
	class droidekashieldhb: shieldtest {
		
		displayname = "Droideka shield bubble Half Blue";
		model = "JangosVehicles\data\models\Droidekahb.p3d";
		hiddenSelections[] = {};
	};
	class droidekashieldred: shieldtest {
		
		displayname = "Droideka shield bubble Red";
		model = "JangosVehicles\data\models\Droidekared.p3d";
		hiddenSelections[] = {};
	};
	/*class BaseShield100m: House_F {
		
		displayname = "Base Shield Sphere 100m";
		model = "JangosVehicles\data\models\100mBubble.p3d";
		hiddenSelections[] = {};
		scope = 2;
		scopeCurator = 2;
		author = "Echo";
		armor = 10000;
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\BaseShieldInit.sqf';";
			killed="deleteVehicle (_this select 0)";
		};
	};
	class BaseShield100mFB: shieldtest {
		
		displayname = "Base Shield Sphere 100m Full Blue";
		model = "JangosVehicles\data\models\100mBubblefb.p3d";
		hiddenSelections[] = {};
		scope = 0;
	};
	class BaseShield100mHB: shieldtest {
		
		displayname = "Base Shield Sphere 100m Half Blue";
		model = "JangosVehicles\data\models\100mBubblehb.p3d";
		hiddenSelections[] = {};
		scope = 0;
	};
	class BaseShield100mRed: shieldtest {
		
		displayname = "Base Shield Sphere 100m Red";
		model = "JangosVehicles\data\models\100mBubblered.p3d";
		hiddenSelections[] = {};
		scope = 0;
	};
	class BaseShield100mSpawner: B_UGV_01_F
	{
		
		displayname = "100m Base Shield Spawner";
		scope = 2;
		scopeCurator = 2;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		author = "Echo";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\100mBaseShieldSpawner.sqf';";
			killed="deleteVehicle (_this select 0)";
		};
	};
	class BaseShield500m: House_F {
		
		displayname = "Base Shield Sphere 500m";
		model = "JangosVehicles\data\models\500mBubble.p3d";
		hiddenSelections[] = {};
		scope = 2;
		scopeCurator = 2;
		author = "Echo";
		armor = 10000;
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\BaseShieldInit.sqf';";
			killed="deleteVehicle (_this select 0)";
		};
	};
	class BaseShield500mSpawner: B_UGV_01_F
	{
		
		displayname = "500m Base Shield Spawner";
		scope = 2;
		scopeCurator = 2;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		author = "Echo";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\500mBaseShieldSpawner.sqf';";
			killed="deleteVehicle (_this select 0)";
		};
	};*/
	
	class Land_HelipadEmpty_F;
	class 104th_EmptySoundPad: Land_HelipadEmpty_F {
		displayname = "Shield bubble Sound";
		hiddenSelections[] = {};
		scope = 2;
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\ShieldSound.sqf';";
		};
	};
	class 104th_GiantEmptySoundPad: Land_HelipadEmpty_F {
		displayname = "Giant Shield bubble Sound";
		hiddenSelections[] = {};
		scope = 2;
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\JangosVehicles\Script\Shield\GiantShieldSound.sqf';";
		};
	};


	//Split

	class JA_104th_Box_Ammo: ls_carrybox_base{
		author = "Dak";
		displayName = "Ammo Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		maximumLoad = 3000;
		class TransportWeapons{
		};
		class TransportMagazines
		{
			class _xx_JLTS_DC15A_mag{
				count = 20;
				magazine = "JLTS_DC15A_mag";
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
			class _xx_JLTS_stun_mag_short{
				count = 10;
				magazine = "JLTS_stun_mag_short";
			};
			class _xx_JLTS_stun_mag_long{
				count = 10;
				magazine = "JLTS_stun_mag_long";
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
	class JA_104th_Box_Explosives: ls_carrybox_base{
		author = "Dak";
		displayName = "Explosives Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "104th_Guys";
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
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_ls_mag_at_plx{
				count = 10;
				magazine = "ls_mag_at_plx";
			};
			class _xx_ls_mag_rpg_1rnd{
				count = 10;
				magazine = "ls_mag_rpg_1rnd";
			};
			class _xx_1Rnd_HE_Grenade_shell{ //
				count = 10;
				magazine = "1Rnd_HE_Grenade_shell";
			};
		};
		class TransportItems{
		};
	};
	class JA_104th_Box_Medic: ls_carrybox_base{
		author = "Dak";
		displayName = "Medic Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "104th_Guys";
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
	class RD501_resuppy_box_pod_ammo;
	class JA_104th_Box_Resupply: RD501_resuppy_box_pod_ammo{
		author = "501st + Echo";
		displayName = "Resupply Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		class TransportWeapons
		{
			class _xx_ls_weapon_rps6{
				count = 1;
				weapon = "ls_weapon_rps6";
			};
		};
		class TransportMagazines
		{
			class _xx_JLTS_DC15A_mag{
				count = 10;
				magazine = "JLTS_DC15A_mag";
			};
			class _xx_JLTS_DC17SA_mag{
				count = 15;
				magazine = "JLTS_DC17SA_mag";
			};
			class _xx_JLTS_DW32S_mag{
				count = 5;
				magazine = "JLTS_DW32S_mag";
			};
			class _xx_JLTS_Z6_mag{
				count = 5;
				magazine = "JLTS_Z6_mag";
			};
			class _xx_JLTS_stun_mag_short{
				count = 3;
				magazine = "JLTS_stun_mag_short";
			};
			class _xx_JLTS_stun_mag_long{
				count = 3;
				magazine = "JLTS_stun_mag_long";
			};
			class _xx_SWLW_DC15A_mag{
				count = 10;
				magazine = "SWLW_DC15A_mag";
			};
			class _xx_SWLW_DC15S_mag{
				count = 10;
				magazine = "SWLW_DC15S_mag";
			};
			class _xx_3AS_DC15A_mag{
				count = 10;
				magazine = "3AS_45rnd_EC50_Mag";
			};
			class _xx_3AS_DC15S_mag{
				count = 10;
				magazine = "3AS_60rnd_EC30_Mag";
			};
			class _xx_3AS_DC15L_mag{
				count = 5;
				magazine = "3AS_200rnd_EC40_Mag";
			};
			class _xx_SWLW_DC17_mag{
				count = 10;
				magazine = "SWLW_DC17_mag";
			};
			class _xx_501_DC15X_mag{
				count = 5;
				magazine = "AUX501_Weapons_Mags_40mw5";
			};
			class _xx_501_DC15L_mag{
				count = 5;
				magazine = "AUX501_Weapons_Mags_20mw240";
			};
			class _xx_SWLW_smokeRed_mag{
				count = 3;
				magazine = "SWLW_smokeRed_mag";
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell{
				count = 2;
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
			};
			class _xx_1Rnd_SmokePurple_Grenade_shell{
				count = 2;
				magazine = "1Rnd_SmokePurple_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell{
				count = 2;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_1Rnd_SmokeWhite_Grenade_shell{
				count = 2;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_HE_Grenade_shell{
				count = 5;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			class _xx_ls_mag_at_plx{
				count = 1;
				magazine = "ls_mag_at_plx";
			};
			class _xx_ls_mag_rpg_1rnd{
				count = 3;
				magazine = "ls_mag_rpg_1rnd";
			};
			class _xx_3AS_ThermalDet{
				count = 8;
				magazine = "3AS_ThermalDetonator";
			};
			class _xx_LS_ThermalDet{
				count = 8;
				magazine = "LS_mag_classC_thermalDet";
			};
			class _xx_BI_SmokeGrenade{
				count = 8;
				magazine = "SmokeShell";
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage{
				count = 30;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_epinephrine{
				count = 20;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_morphine{
				count = 20;
				name = "ACE_morphine";
			};
			class _xx_ACE_packingBandage{
				count = 30;
				name = "ACE_packingBandage";
			};
			class _xx_ACE_quikclot{
				count = 30;
				name = "ACE_quikclot";
			};
			class _xx_ACE_salineIV{
				count = 5;
				name = "ACE_salineIV";
			};
			class _xx_ACE_salineIV_500{
				count = 5;
				name = "ACE_salineIV_500";
			};
			class _xx_ACE_tourniquet{
				count = 8;
				name = "ACE_tourniquet";
			};
		};
	};
	
	
	//Split Z7 Rework
	
	class Weapon_Base_F;
	class SWLW_GH_Z7;
	class 104th_GH_Z7: SWLW_GH_Z7
	{
		author = "SW Legion Studios";
		displayName = "Z7-104 Rotary Shoulder Gun";
		scope = 2;
		class TransportWeapons
		{
			class 104th_Z7
			{
				count = 1;
				weapon = "104th_Z7";
			};
		};
		class TransportMagazines
		{
			class SWLW_Z7_mag_800rnd
			{
				count = 1;
				magazine = "SWLW_Z7_mag_800rnd";
			};
		};
	};
	class JA_104th_GH_T9: SWLW_GH_Z7
	{
		author = "SW Legion Studios";
		displayName = "T9-104 Shoulder Cannon";
		scope = 2;
		class TransportWeapons
		{
			class JA_104th_ShoulderCannon
			{
				count = 1;
				weapon = "JA_104th_ShoulderCannon";
			};
		};
		class TransportMagazines
		{
			class JA_104th_LaserCannon_mag
			{
				count = 1;
				magazine = "JA_104th_LaserCannon_mag";
			};
		};
	};
	
	
	class 3AS_Republic_HR_Bag;
	class JA_104th_Republic_HR_Bag : 3AS_Republic_HR_Bag
    {
        faction="3AS_REP";
        author="3AS + Ice";
        scope=2;
        editorCategory="EdCat_Equipment";
        editorSubcategory="EdSubcat_DismantledWeapons";
        displayName="104th Heavy Repeater";
        hiddenSelections[]=
        {
            "camo1"
        };
        hiddenSelectionsTextures[]=
        {
            "JangosVehicles\data\textures\Backpack_E-Web_Greyscale.paa"
        };
        class assembleInfo
        {
            primary=1;
            base="";
            displayName="104th Heavy Repeater";
            assembleTo="JA_104th_HeavyRepeater_Unarmoured";
        };
    };
	
	class 3AS_HeavyRepeater_Unarmoured;
	class JA_104th_HeavyRepeater_Unarmoured: 3AS_HeavyRepeater_Unarmoured
	{
		displayName = "104th Heavy Repeater";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"JA_104th_Republic_HR_Bag"};
			displayName = "";
		};
	};
	
};

class CfgAmmo
{
	class ls_50mm_laat_apfsds;
	class ls_50mm_laat_apfsds_104th: ls_50mm_laat_apfsds
	{
		hit = 400;
		indirectHit = 2;
		
	};
	
	class ls_127x99_red;
	class ls_127x99_blue_104th: ls_127x99_red
	{
		
		model = "ls_weapons_core\effects\laser_blue";
		effectfly = "ls_plasma_blue";
		
	};
	class Bo_GBU12_LGB;
	class JA_104th_guided_resupply_ammo: Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		explosive = 0;
		whistleOnFire = 1;
		aiAmmoUsageFlags = 0;
		model = "kobra\442_misc\box\box10.p3d";
	};
	
	class SWLW_ammo_chaingun_blue;
	class JA_104th_T9_green: SWLW_ammo_chaingun_blue
	{
		caliber = 10;
		craterEffects = "ExploAmmoCrater";
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		deflecting = 3;
		deflectionSlowDown = 0.8;
		explosionAngle = 60;
		effectfly = "ls_plasma_blue";
		explosive = 0;
		flaresize = 3;
		fuseDistance = 1;
		hit = 240;
		indirectHit = 5;
		indirectHitRange = 0.2;
		model = "ls_weapons_core\effects\laser_green";
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		tracerscale = 3;
		typicalSpeed = 960;
		warheadName = "AP";
		
		
	};
};

class CfgMagazines
{
	class SWLW_Z7_mag;
	class SWLW_Z7_mag_800rnd: SWLW_Z7_mag
	{
		displayname = "Chaingun energy cell (800rnd)";
		count = 800;
		mass = 80;
	};
	class SDT_IonDisruptor_mag;
	class JA_104th_LaserCannon_mag: SWLW_Z7_mag
	{
		displayName = "1rnd Laser Cannon 50mm AP";
		ammo = "JA_104th_T9_green";
		//ammo = "ls_50mm_laat_apfsds";
		count = 1;
		mass = 8;
	};
	
	class 200rnd_laat_apfsds_mag;
	class 200rnd_laat_apfsds_mag_104th: 200rnd_laat_apfsds_mag
	{
		ammo = "ls_50mm_laat_apfsds_104th";
	};
	
	class ls_500Rnd_127x99_mag_red;
	class ls_500Rnd_127x99_mag_blue_104th: ls_500Rnd_127x99_mag_red
	{
		displayname = "12.7x99mm 500Rnd plasma cell (Blue)";
		ammo = "ls_127x99_blue_104th";
		
	};
	class 2Rnd_GBU12_LGB;
	class JA_104th_Guided_Resupply_Magazine: 2Rnd_GBU12_LGB
	{
		author = "RD501";
		ammo = "JA_104th_guided_resupply_ammo";
		displayName = "Supply Pod";
		displayNameShort = "Supply Pod";
		descriptionShort = "Supply Pod";
	};
};

class CfgRecoils
{
	class recoil_default;
	class 104th_Z7_recoil: recoil_default
	{
		kickBack[] = {0.045,0.08};
		muzzleOuter[] = {0.3,0.3,0.3,0.2};
		permanent = 0.03;
		temporary = 0.02;
	};
	class JA_104th_ShoulderCannon_recoil: recoil_default
	{
		kickBack[] = {0.045,0.08};
		muzzleOuter[] = {0.3,0.3,0.3,0.2};
		permanent = 0.03;
		temporary = 0.02;
	};
};

class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class SWLW_Z7;
	class 104th_Z7: SWLW_Z7
	{
		author = "SW Legion Studios + Echo";
		scope = 2;
		displayName = "Z7-104 Rotary Shoulder Gun";
		magazines[] = {"SWLW_Z7_mag_800rnd","ls_mag_flak_800rnd"};
	};
	
	class SDT_IonDisruptor;
	class JA_104th_ShoulderCannon: SWLW_Z7
	{
		scope = 2;
		displayName = "T9-104 Shoulder Laser Cannon";
		//magazines[] = {"SWLW_Z7_mag_800rnd","ls_mag_flak_800rnd"};
		magazines[] = {"JA_104th_LaserCannon_mag"};
		model = "SDT_Eternal\data\iondisruptor\IonDisruptor.p3d";
		
		
	};
	
	class ls_laat_gun_2;
	class ls_laat_gun_2_104th: ls_laat_gun_2
	{
		magazines[] = {"200rnd_laat_apfsds_mag_104th"};
		
		
		
	};
	class ls_aat_127;
	class ls_127_blue_104th: ls_aat_127
	{
		
		magazines[] = {"ls_500Rnd_127x99_mag_blue_104th"};
		
		
	};
	class SWLB_CEE_Engineer_Vest_NCO;
	class JA_104th_Engineer_EWEB_Vest: SWLB_CEE_Engineer_Vest_NCO
	{
		
		Displayname = "Clone Engineer E-Web vest";
		
		class ItemInfo
		{
			_generalMacro = "VestItem";
			author = "Bohemia Interactive";
			containerClass = "Supply450";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
			mass = 80;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
			uniformType = "Default";
			class HitpointsProtectionInfo
			{
				class Legs
				{
					armor = 6;
					hitpointName = "HitLegs";
					passThrough = 0.3;
				};
			};
		};
		
	};
	class GBU12BombLauncher;
	class JA_104th_guided_resupply_pod_launcher: GBU12BombLauncher
	{
		displayName = "Supply Pod";
		descriptionShort = "Guided Resupply Pod Launcher";
		magazines[] = {"JA_104th_Guided_Resupply_Magazine"};
		class EventHandlers
		{
			//fired = "hint 'Fired eventhandler called'";
			fired = "_this spawn JA_104th_fnc_GURE_grplFired";
		};
	};
};

class CfgFunctions
{
	class JA_104th
	{
		tag = "JA_104th";
		class guidedResupply
		{
			file = "JangosVehicles\Script\501Resupply";
			class GURE_spawnResupply
			{
				file = "JangosVehicles\Script\501Resupply\spawn_resupply.sqf";
			};
			class GURE_grplFired
			{
				file = "JangosVehicles\Script\501Resupply\grpl_fired.sqf";
			};
		};
	};
};

class cfgSounds {
	
	sounds[] = {};
		
	class ShieldHit0
	{
		sound[] = {"JangosVehicles\data\sounds\Shield\ShieldHit_0.ogg", 100, 1, 100};
		name = "ShieldHit0";
		titles[] = {"ShieldHit0"};
		duration = 1;
	};
	class ShieldHit1
	{
		sound[] = {"JangosVehicles\data\sounds\Shield\ShieldHit_1.ogg", 100, 1, 100};
		name = "ShieldHit1";
		titles[] = {"ShieldHit1"};
		duration = 1;
	};
	class ShieldHit2
	{
		sound[] = {"JangosVehicles\data\sounds\Shield\ShieldHit_2.ogg", 100, 1, 100};
		name = "ShieldHit2";
		titles[] = {"ShieldHit2"};
		duration = 1;
	};
	class ShieldHit3
	{
		sound[] = {"JangosVehicles\data\sounds\Shield\ShieldHit_3.ogg", 100, 1, 100};
		name = "ShieldHit3";
		titles[] = {"ShieldHit3"};
		duration = 1;
	};
	class ShieldHit4
	{
		sound[] = {"JangosVehicles\data\sounds\Shield\ShieldHit_4.ogg", 100, 1, 100};
		name = "ShieldHit4";
		titles[] = {"ShieldHit4"};
		duration = 1;
	};
	class IonCannon1
	{
		sound[] = {"JangosVehicles\data\sounds\Shield\IonCannon1.ogg", 100, 1, 100};
		name = "IonCannon1";
		titles[] = {"IonCannon1"};
		duration = 3;
	};
	
};