class CfgPatches
{
	class Jangos_Armory_Vehicles_Laat
	{
		units[] = {
			"JA_104th_LAAT",
			"JA_104th_LAAT_AB"}; // All the new vehicles/units you've created in cfgVehicles
		weapons[] = {
			"JA_104th_guided_resupply_pod_launcher",
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F_EPB_Heli_Light_03", "A3_Armor_F_Beta", "A3_Soft_F", "lsd_vehicles_heli", "3as_nu", "A3_Air_F_Exp_VTOL_02", "3as_Starships", "A3_Weapons_F_Jets"};
	};
};

class CfgFactionClasses
{
	class 104th_Guys
	{
		displayname = "Jango's Finest";
		priority = 1; // Position in list.
		side = 1;	  // Opfor = 0, Blufor = 1, Indep = 2.
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
	class 104th_Categ_Clones_Droid
	{
		displayname = "104th - Droids";
	};
	class 104th_Categ_Clones_Terminals
	{
		displayname = "104th - Terminals";
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
class VehicleSystemsTemplateLeftPilot : DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot : DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class DefaultEventhandlers;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;

class cfgVehicles
{

	class SWLG_tanks_tx130;

	class ls_vehicle_laati_base;
	class ls_vehicle_laati_transport;
	class ls_vehicle_laati_airborne;
	class ls_vehicle_laatc_base;
	class OPTRE_UNSC_falcon;
	class OPTRE_Pelican_unarmed;
	class OPTRE_Pelican_armed;
	class Aux212_3AS_Reaper_Y_Wing;
	class ls_carrybox_base;
	class 3AS_Supply_Large_Ammo_Prop;
	class 3AS_Supply_Large_Orange_Prop;
	class 3AS_Supply_Large_Blue_Prop;
	class 3AS_Supply_Large_Black_Prop;
	class 3AS_Supply_Large_Medical_Prop;
	class Land_3AS_Medical_Droid;

	// Classes needed for the Bison change
	class OPTRE_Vehicles_Bison;
	class OPTRE_M413_base;
	class OPTRE_M412_IFV_UNSC;
	class Turrets;
	class MainTurret;
	class OPTRE_M412_IFV_UNSC_blk;

	// Classes for the BARC change
	class LandVehicle;
	class Car;
	class ls_vehicle_barc_base;
	class ls_vehicle_barc
	{
		class HitPoints;
		class ACE_SelfActions;
	};
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
	class Car_F : Car
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

	class Tank : LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
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
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds : Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_03_base_F : Tank_F
	{
	};
	class I_APC_Tracked_03_base_F : APC_Tracked_03_base_F
	{
	};
	class OPTRE_M494 : I_APC_Tracked_03_base_F
	{
		class VehicleTransport;
		class ACE_SelfActions;
	};

	class Box_212_Supply_F;
	class Box_212_Medical_F;

	class ls_vehicle_laati : ls_vehicle_laati_base
	{
		class ACE_SelfActions;
		class UserActions;
	};
	class JA_104th_LAAT : ls_vehicle_laati
	{
		displayName = "[104th] LAAT-I";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JA_104th_P2_1C_Engineer";

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
		allowTabLock = 1;
		radarType = 4;
		fuelCapacity = 4000;
		ls_impulsor_fuelDrain_1 = 0.000005;
		ls_impulsor_fuelDrain_2 = 0.000015;
		weapons[] = {"ls_weapon_laati_turret_50mm_he", "ls_weapon_laati_turret_50mm_ap", "212th_A2A_MissileSystem", "ls_weapon_laati_missiles", "ace_missileguidance_dagr", "Laserdesignator_pilotCamera", "FC_Dropcrate_PW1", "ls_weapon_CMFlareLauncher"};
		magazines[] = {
			"ls_magazine_50mm_200Rnd_HE_green",
			"ls_magazine_50mm_200Rnd_HE_green",
			"ls_magazine_50mm_200Rnd_HE_green",
			"ls_magazine_50mm_200Rnd_HE_green",
			"ls_magazine_50mm_200Rnd_HE_green",
			"ls_magazine_50mm_200Rnd_APFSDS_green",
			"ls_magazine_50mm_200Rnd_APFSDS_green",
			"ls_magazine_50mm_200Rnd_APFSDS_green",
			"ls_magazine_50mm_200Rnd_APFSDS_green",
			"ls_magazine_50mm_200Rnd_APFSDS_green",
			"ls_magazine_50mm_200Rnd_APFSDS_green",
			"212th_Drexl_4Rnd_A2A_mag",
			"212th_Drexl_4Rnd_A2A_mag",
			"12rnd_missiles",
			"12rnd_missiles",
			"12rnd_missiles",
			"Laserbatteries",
			"Pylon_FC_Dropcrate_P_1rnd",
			"Pylon_FC_Dropcrate_P_1rnd",
			"ls_mag_240rnd_CMFlareChaff_green",
			"ls_mag_240rnd_CMFlareChaff_green",
			"ls_mag_240rnd_CMFlareChaff_green",
			"ls_mag_240rnd_CMFlareChaff_green",
			"24Rnd_ACE_Hydra70_DAGR",
			"24Rnd_ACE_Hydra70_DAGR",
		};

		memoryPointDriverOptics = "slingcamera";
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0.2;
		tBody = 150;

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
					thermalMode[] = {0, 1};
					visionMode[] = {"Normal", "NVG", "Ti"};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
				};
				class zoomx4 : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.425/4)";
					minFov = "(0.425/4)";
					maxFov = "(0.425/4)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8 : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/8)";
					minFov = "(0.42/8)";
					maxFov = "(0.42/8)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20 : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/20)";
					minFov = "(0.42/20)";
					maxFov = "(0.42/20)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50 : Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(0.42/50)";
					minFov = "(0.42/50)";
					maxFov = "(0.42/50)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70 : Wide
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
			class HitEngine_1 : HitEngine
			{
				convexComponent = "engine_hit_1";
				name = "engine_hit_1";
				hitpoint = "engine_hit_1";
			};
			class HitEngine_2 : HitEngine
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
						color[] = {0, 1, 1, 1};
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
						color[] = {0.5, 1, 0.5, 0.5};
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
						color[] = {1, 0, 0, 1};
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
						color[] = {1, 1, 0.5, 0.8};
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
						color[] = {0.5, 1, 0.5, 0.5};
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
							maxRange = 10000;
							minRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 10000;
							minRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1, 1, 1, 0};
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
						color[] = {1, 1, 1, 0};
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
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
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
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
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
						range[] = {4000, 2000, 16000, 8000};
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
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "B_AMRAAM_D", "B_AMRAAM_D_RAIL", "DAR", "DAGR", "B_GBU12", "B_AGM65_RAIL", "I_ORCA_RIGHT_PYLON", "20MM_TWIN_CANNON", "B_MISSILE_PYLON", "B_BOMB_PYLON"}; // hardpoints[] = {"SCALPEL_1RND","B_ASRAAM","DAR","DAGR","B_AMRAAM_D_DUAL_RAIL","B_SDB_QUAD_RAIL","B_GBU12","B_AGM65_RAIL"};
						turret[] = {0};
						UIposition[] = {0.06, 0.4};
					};
					class PylonLeft2 : PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 4;
						UIposition[] = {0.08, 0.35};
					};
					class PylonLeft3 : PylonLeft1
					{
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 3;
						UIposition[] = {0.1, 0.3};
					};
					class PylonRight3 : PylonLeft3
					{
						mirroredMissilePos = 3;
						UIposition[] = {0.59, 0.3};
					};
					class PylonRight2 : PylonLeft2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.62, 0.35};
					};
					class PylonRight1 : PylonLeft1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.64, 0.4};
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
						attachment[] = {"PylonMissile_1Rnd_AAA_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonRack_12Rnd_PG_missiles", "PylonRack_12Rnd_PG_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonMissile_1Rnd_AAA_missiles"};
					};
					class AT
					{
						displayName = "AT";
						attachment[] = {"PylonRack_12Rnd_PG_missiles", "PylonMissile_1Rnd_LG_scalpel", "PylonRack_12Rnd_PG_missiles", "PylonRack_12Rnd_PG_missiles", "PylonMissile_1Rnd_LG_scalpel", "PylonRack_12Rnd_PG_missiles"};
					};
					class CAS
					{
						displayName = "CAS";
						attachment[] = {"PylonRack_12Rnd_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonRack_12Rnd_missiles", "PylonRack_12Rnd_missiles", "PylonMissile_1Rnd_AAA_missiles", "PylonRack_12Rnd_missiles"};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};

		maximumLoad = 20000;

		hiddenselectionstextures[] = {
			"JangosVehicles\data\textures\body1_co_104bg.paa",
			"\ls\core\addons\vehicles_laati\data\body2_co.paa",
			"\ls\core\addons\vehicles_laati\data\door1_co.paa",
			"\ls\core\addons\vehicles_laati\data\door2_co.paa",
			"\ls\core\addons\vehicles_laati\data\door3_co.paa",
			"JangosVehicles\data\textures\wings_co_104bg.paa",
			"JangosVehicles\data\textures\missiles_co_104.paa",
			"\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
			"\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
		class TextureSources
		{
			class base
			{
				displayName = "104th";
				author = "Legion Studio + Echo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bg.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door1_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door3_co.paa",
							  "JangosVehicles\data\textures\wings_co_104bg.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
				factions[] = {"104th_Guys"};
			};

			class logo : base
			{
				displayName = "104th Logo";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bgwp.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door1_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door3_co.paa",
							  "JangosVehicles\data\textures\wings_co_104bg.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			}

			class plobro : base
			{
				displayName = "104th PloBros";
				textures[] = {"JangosVehicles\data\textures\body1_co_104bgpb.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door1_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door3_co.paa",
							  "JangosVehicles\data\textures\wings_co_104bg.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};

			class medevac : base
			{
				displayName = "104th MedEvac";
				textures[] = {"JangosVehicles\data\textures\body1_co_104medic.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "JangosVehicles\data\textures\door1_co_medic2.paa",
							  "JangosVehicles\data\textures\door2_co_medic.paa",
							  "JangosVehicles\data\textures\door3_co_medic.paa",
							  "JangosVehicles\data\textures\wings_co_104bg.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};

			class Beef : base
			{
				displayName = "104th Beef";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Beef.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door1_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door3_co.paa",
							  "JangosVehicles\data\textures\wings_co_104bg.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};

			class Bail : base
			{
				displayName = "104th Bail";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Bail.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door1_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door3_co.paa",
							  "JangosVehicles\data\textures\wings_co_104bg.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};

			class Varelli : base
			{
				displayName = "104th Varelli";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Varelli.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door1_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door3_co.paa",
							  "JangosVehicles\data\textures\wings_co_104bg.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};

			class OD : base
			{
				displayName = "104th OD";
				textures[] = {"JangosVehicles\data\textures\body1_co_104OD.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door1_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door3_co.paa",
							  "JangosVehicles\data\textures\wings_co_104bg.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};

			class Fish : base
			{
				displayName = "104th Fish";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Fish.paa",
							  "\ls\core\addons\vehicles_laati\data\body2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door1_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door2_co.paa",
							  "\ls\core\addons\vehicles_laati\data\door3_co.paa",
							  "JangosVehicles\data\textures\wings_co_104Fish.paa",
							  "JangosVehicles\data\textures\missiles_co_104.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};
			class Cherryy : base
			{
				displayName = "104th Cherryy";
				textures[] = {"JangosVehicles\data\textures\body1_co_104Cherryy.paa",
							  "JangosVehicles\data\textures\body2_co_104Cherryy_104Cherryy_104Cherryy.paa",
							  "lJangosVehicles\data\textures\door1_co_104Cherryy_104Cherryy.paa",
							  "JangosVehicles\data\textures\door2_co_104Cherryy.paa",
							  "JangosVehicles\data\textures\door3_co_104Cherryy.paa",
							  "JangosVehicles\data\textures\wings_co_104Cherryy.paa",
							  "JangosVehicles\data\textures\missiles_co_104Cherryy.paa",
							  "\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
							  "\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};
			class Duce : base
			{
				displayName = "104th Duce";
				textures[] = {
					"JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Body_Main.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Body_Interior.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Door_Front.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Door_Back.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Door_Ramp.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Wings.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Missles.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Cockpit.paa",
					"\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};
			class Hightower : base
			{
				displayName = "104th Hightower";
				textures[] = {
					"JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Body_Main.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Body_Interior.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Door_Front.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Door_Back.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Door_Ramp.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Wings.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Missles.paa",
					"\ls\core\addons\vehicles_laati\data\cockpits_co.paa",
					"\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};
			class Dak : base
			{
				displayName = "104th Dak";
				textures[] = {
					"JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Body_Main.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Interior.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Door_Front.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Door_Back.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Door_Ramp.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Wings.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Missiles.paa",
					"JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Cockpit.paa",
					"\ls\core\addons\vehicles_laati\data\glass_ca.paa"};
			};
		};
		textureList[] = {"base", 1, "logo", 1, "plobro", 1};
		class ACE_SelfActions : ACE_SelfActions
		{
			class Style_Changer
			{
				displayName = "Change Camo";
				exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled = 0;
				priority = 2;
				class DefaultSkin
				{
					displayName = "Republic";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = "_target setObjectTextureGlobal [0,'\ls\core\addons\vehicles_laati\data\body1_co.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'\ls\core\addons\vehicles_laati\data\wings_co.paa']; _target setObjectTextureGlobal [6,'\ls\core\addons\vehicles_laati\data\missiles_co.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class 104th_Skins
				{
					displayname = "104th Skins";
					class 104th_Blue : DefaultSkin
					{
						displayName = "104th Blue";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bg.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Logo : DefaultSkin
					{
						displayName = "104th Logo";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bgwp.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_PloBro : DefaultSkin
					{
						displayName = "104th PloBro";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104bgpb.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_MedEvac : DefaultSkin
					{
						displayName = "104th MedEvac";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104medic.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\door1_co_medic2.paa']; _target setObjectTextureGlobal [3,'JangosVehicles\data\textures\door2_co_medic.paa']; _target setObjectTextureGlobal [4,'JangosVehicles\data\textures\door3_co_medic.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
				};
				class Custom_Skins
				{
					displayname = "Custom Skins";
					class 104th_Haze : DefaultSkin
					{
						displayName = "Haze";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Echo.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\door1_co_echo.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Beef : DefaultSkin
					{
						displayName = "Beef";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Beef.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Bail : DefaultSkin
					{
						displayName = "Bail";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Bail.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_OD : DefaultSkin
					{
						displayName = "OD";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104OD.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Varelli : DefaultSkin
					{
						displayName = "Varelli";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Varelli.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104bg.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Fish : DefaultSkin
					{
						displayName = "Fish";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Fish.paa']; _target setObjectTextureGlobal [1,'\ls\core\addons\vehicles_laati\data\body2_co.paa']; _target setObjectTextureGlobal [2,'\ls\core\addons\vehicles_laati\data\door1_co.paa']; _target setObjectTextureGlobal [3,'\ls\core\addons\vehicles_laati\data\door2_co.paa']; _target setObjectTextureGlobal [4,'\ls\core\addons\vehicles_laati\data\door3_co.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104Fish.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Cherryy : DefaultSkin
					{
						displayName = "Cherryy";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\body1_co_104Cherryy.paa']; _target setObjectTextureGlobal [1,'JangosVehicles\data\textures\body2_co_104Cherryy.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\door1_co_104Cherryy.paa']; _target setObjectTextureGlobal [3,'JangosVehicles\data\textures\door2_co_104Cherryy.paa']; _target setObjectTextureGlobal [4,'JangosVehicles\data\textures\door3_co_104Cherryy.paa']; _target setObjectTextureGlobal [5,'JangosVehicles\data\textures\wings_co_104Cherryy.paa']; _target setObjectTextureGlobal [6,'JangosVehicles\data\textures\missiles_co_104Cherryy.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Duce : DefaultSkin
					{
						displayName = "Duce";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Body_Main.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Body_Interior.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Door_Front.paa']; _target setObjectTextureGlobal [3,'JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Door_Back.paa']; _target setObjectTextureGlobal [4,'JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Door_Ramp.paa']; _target setObjectTextureGlobal [5,'JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Wings.paa']; _target setObjectTextureGlobal [6,'JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Missles.paa']; _target setObjectTextureGlobal [7,'JangosVehiclesLaat\data\textures\104th_Pilot_Duce_Laat_Cockpit.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Hightower : DefaultSkin
					{
						displayName = "Hightower";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Body_Main.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Body_Interior.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Door_Front.paa']; _target setObjectTextureGlobal [3,'JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Door_Back.paa']; _target setObjectTextureGlobal [4,'JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Door_Ramp.paa']; _target setObjectTextureGlobal [5,'JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Wings.paa']; _target setObjectTextureGlobal [6,'JangosVehiclesLaat\data\textures\104th_Pilot_Hightower_Laat_Missles.paa']; _target setObjectTextureGlobal [7,'\ls\core\addons\vehicles_laati\data\cockpits_co.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
					class 104th_Dak : DefaultSkin
					{
						displayName = "Dak";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Body_Main.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Interior.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Door_Front.paa']; _target setObjectTextureGlobal [3,'JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Door_Back.paa']; _target setObjectTextureGlobal [4,'JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Door_Ramp.paa']; _target setObjectTextureGlobal [5,'JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Wings.paa']; _target setObjectTextureGlobal [6,'JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Missiles.paa']; _target setObjectTextureGlobal [7,'JangosVehiclesLaat\data\textures\104th_Pilot_Dak_Laat_Cockpit.paa']; _target setObjectTextureGlobal [8,'\ls\core\addons\vehicles_laati\data\glass_ca.paa']";
					};
				};
			};
		};
		class UserActions : UserActions
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
		class ls_impulsor
		{
			enabled = 1;
			speed = 400;
			fuelDrain = 0.00005;
			overchargeSpeed = 800;
			overchargeFuelDrain = 0.00020;
			overchargeCooldown = 60;
			impulseSoundOn = "ls_impulseOn_laat";
			impulseSoundOff = "ls_impulseOff_laat";
			repulseSoundOn = "";
			repulseSoundOff = "";
		};
		class Turrets:Turrets
		{
			class MainTurret
			{
				visionMode[] = {"Normal","NVG","TI"};
				thermalMode[] = {0,1};
				discreteDistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2400};
				gunnerOpticsEffect[] = {"TankCommanderOptics1","BWTV"};
				primaryObserver = 0;
				primaryGunner = 1;
				primary = 1;
				usePip = 1;
				turretFollowFreeLook = 0;
				gunnerCompartments = "Compartment2";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Copilot";
				showHMD = 1;
				castCargoShadow = 0;
				viewCargoShadow = 0;
				castDriverShadow = 0;
				viewDriverShadow = 0;
				CanEject = 0;
				hideWeaponsGunner = 1;
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				memoryPointGunnerOutOptics = "gunnerviewout";
				discreteDistanceInitIndex = 5;
				gunnerAction = "Driver_mid01";
				gunnerInAction = "Driver_mid01";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunnerUsesPilotView = 0;
				commanding = -1;
				startEngine = 0;
				stabilizedInAxes = 3;
				showAllTargets = 4;
				memoryPointLRocket = "RocketL";
				memoryPointRRocket = "RocketR";
				memoryPointLMissile = "RocketL";
				memoryPointRMissile = "RocketR";
				selectionFireAnim = "zasleh_b";
				weapons[] = {"ls_weapon_laati_turret_50mm_he"};
				magazines[] = {"ls_magazine_50mm_200Rnd_HE_green","ls_magazine_50mm_200Rnd_HE_green"};
				gunBeg = "konec hlavne b";
				gunEnd = "usti hlavne b";
				memoryPointGun = "konec hlavne b";
				outGunnerMayFire = 1;
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
				turretInfoType = "RscOptics_Heli_Attack_01_gunner";
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner.wss",0.316228,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical.wss",0.316228,1,30};
				minElev = -80;
				maxElev = 30;
				minTurn = 100;
				maxTurn = 260;
				initElev = -45;
				initTurn = 180;
				minCamElev = -80;
				maxCamElev = -30;
				memoryPointGunnerOptics = "gunnerview";
				class ViewGunner
				{
					visionMode[] = {"Normal","NVG"};
					gunnerOpticsEffect[] = {};
					stabilizedInAxes = 0;
					directionStabilized = 0;
					horizontallyStabilized = 0;
					initFov = 1;
					minFov = 0.6;
					maxFov = 0.85;
					initAngleX = 180;
					minAngleX = 90;
					maxAngleX = 270;
					initAngleY = -45;
					minAngleY = -90;
					maxAngleY = -30;
					minMoveX = -0.1;
					maxMoveX = 0.1;
					minMoveY = -0.025;
					maxMoveY = 0.1;
					minMoveZ = -0.1;
					maxMoveZ = 0.1;
					gunnerOpticsModel = "";
				};
				class ViewOptics
				{
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {0,1};
					minAngleX = 0;
					maxAngleX = 0;
					initAngleX = 0;
					minAngleY = -15;
					maxAngleY = 15;
					initAngleY = 0;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 0.75;
				};
				class OpticsIn
				{
					class Wide
					{
						visionMode[] = {"Normal","NVG","TI"};
						thermalMode[] = {0,1};
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = -15;
						maxAngleY = 15;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsdisplayName = "W";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
					};
					class Medium
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsdisplayName = "M";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F.p3d";
						visionMode[] = {"Normal","NVG","TI"};
						thermalMode[] = {0,1};
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = -15;
						maxAngleY = 15;
					};
					class Narrow
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsdisplayName = "N";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F.p3d";
						visionMode[] = {"Normal","NVG","TI"};
						thermalMode[] = {0,1};
						initAngleX = 0;
						minAngleX = 0;
						maxAngleX = 0;
						initAngleY = 0;
						minAngleY = -15;
						maxAngleY = 15;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsEffect[] = {};
						initAngleX = -10;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						gunnerOpticsModel = "";
					};
				};
				class Components
				{
					class TransportCountermeasuresComponent
					{
					};
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class Components
						{
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
								range[] = {4000,2000,16000,8000};
								componentType = "SensorsDisplayComponent";
								resource = "RscCustomInfoSensors";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
							class MineDetectorDisplay
							{
								componentType = "MineDetectorDisplayComponent";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SlingLoadDisplay
							{
								componentType = "SlingLoadDisplayComponent";
							};
						};
						componentType = "VehicleSystemsDisplayManager";
						left = 1;
						defaultDisplay = "EmptyDisplay";
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class Components
						{
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
								range[] = {4000,2000,16000,8000};
								componentType = "SensorsDisplayComponent";
								resource = "RscCustomInfoSensors";
							};
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
							};
							class MineDetectorDisplay
							{
								componentType = "MineDetectorDisplayComponent";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SlingLoadDisplay
							{
								componentType = "SlingLoadDisplayComponent";
							};
						};
						defaultDisplay = "SensorDisplay";
						componentType = "VehicleSystemsDisplayManager";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
					};
				};
				turretCanSee = "1 + 2 + 4 + 8 + 32";
				class TurretSpec
				{
					showHeadPhones = 1;
				};
				enableManualFire = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.2;
						material = 51;
						name = "vez";
						visual = "vez";
						passThrough = 0.3;
					};
					class HitGun
					{
						armor = 0.2;
						material = 51;
						name = "zbran";
						visual = "zbran";
						passThrough = 0.1;
					};
				};
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				proxyType = "CPGunner";
				gunnerType = "";
				soundElevation[] = {"",0.00316228,1};
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				initCamElev = 0;
				hasGunner = 1;
				canUseScanners = 1;
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerOpticsShowCursor = 0;
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsEffect[] = {};
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				ejectDeadGunner = 0;
				canHideGunner = -1;
				forceHideGunner = 0;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				LODTurnedIn = -1;
				LODTurnedOut = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				forceNVG = 0;
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				dontCreateAI = 0;
				disableSoundAttenuation = 0;
				slingLoadOperator = 0;
				playerPosition = 0;
				allowLauncherIn = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_rearL
			{
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				memoryPointsGetInGunner = "pos cargo 16";
				memoryPointsGetInGunnerDir = "pos cargo 16 dir";
				gunnerName = "Passenger (Ramp Left)";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				proxyIndex = 16;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_rearR
			{
				gunnerName = "Passenger (Ramp Right)";
				memoryPointsGetInGunner = "pos cargo 15";
				memoryPointsGetInGunnerDir = "pos cargo 15 dir";
				proxyIndex = 15;
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_1
			{
				gunnerName = "Passenger (Left Side)";
				memoryPointsGetInGunner = "pos cargo 3";
				memoryPointsGetInGunnerDir = "pos cargo 3 dir";
				proxyIndex = 3;
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_2
			{
				proxyIndex = 4;
				memoryPointsGetInGunner = "pos cargo 4";
				memoryPointsGetInGunnerDir = "pos cargo 4 dir";
				gunnerName = "Passenger (Left Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_3
			{
				proxyIndex = 5;
				memoryPointsGetInGunner = "pos cargo 5";
				memoryPointsGetInGunnerDir = "pos cargo 5 dir";
				gunnerName = "Passenger (Left Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_4
			{
				proxyIndex = 6;
				memoryPointsGetInGunner = "pos cargo 6";
				memoryPointsGetInGunnerDir = "pos cargo 6 dir";
				gunnerName = "Passenger (Left Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_5
			{
				proxyIndex = 7;
				memoryPointsGetInGunner = "pos cargo 7";
				memoryPointsGetInGunnerDir = "pos cargo 7 dir";
				gunnerName = "Passenger (Left Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_14
			{
				proxyIndex = 14;
				memoryPointsGetInGunner = "pos cargo 14";
				memoryPointsGetInGunnerDir = "pos cargo 14 dir";
				gunnerName = "Passenger (Left Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_1
			{
				gunnerName = "Passenger (Right Side)";
				memoryPointsGetInGunner = "pos cargo 8";
				memoryPointsGetInGunnerDir = "pos cargo 8 dir";
				proxyIndex = 8;
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_2
			{
				proxyIndex = 9;
				memoryPointsGetInGunner = "pos cargo 9";
				memoryPointsGetInGunnerDir = "pos cargo 9 dir";
				gunnerName = "Passenger (Right Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_3
			{
				proxyIndex = 10;
				memoryPointsGetInGunner = "pos cargo 10";
				memoryPointsGetInGunnerDir = "pos cargo 10 dir";
				gunnerName = "Passenger (Right Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_4
			{
				proxyIndex = 11;
				memoryPointsGetInGunner = "pos cargo 11";
				memoryPointsGetInGunnerDir = "pos cargo 11 dir";
				gunnerName = "Passenger (Right Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_5
			{
				proxyIndex = 12;
				memoryPointsGetInGunner = "pos cargo 12";
				memoryPointsGetInGunnerDir = "pos cargo 12 dir";
				gunnerName = "Passenger (Right Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_13
			{
				proxyIndex = 13;
				memoryPointsGetInGunner = "pos cargo 13";
				memoryPointsGetInGunnerDir = "pos cargo 13 dir";
				gunnerName = "Passenger (Right Side)";
				allowLauncherIn = 1;
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerInAction = "vehicle_passenger_stand_2";
				startEngine = 0;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				hasGunner = 1;
				gunnerCompartments = "Compartment3";
				isPersonTurret = 2;
				playerPosition = 12;
				ejectDeadGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_17
			{
				gunnerName = "Passenger (Right Door)";
				gunnerAction = "passenger_bench_1";
				gunnerInAction = "passenger_bench_1";
				proxyIndex = 17;
				memoryPointsGetInGunner = "pos cargo 17";
				memoryPointsGetInGunnerDir = "pos cargo 17 dir";
				gunnerGetInAction = "GetInHeli_Light_01bench";
				gunnerGetOutAction = "GetOutLow";
				ejectDeadGunner = 1;
				gunnerCompartments = "Compartment4";
				allowLauncherIn = 1;
				startEngine = 0;
				hasGunner = 1;
				isPersonTurret = 2;
				playerPosition = 12;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_18
			{
				proxyIndex = 18;
				memoryPointsGetInGunner = "pos cargo 18";
				memoryPointsGetInGunnerDir = "pos cargo 18 dir";
				gunnerName = "Passenger (Right Door)";
				gunnerAction = "passenger_bench_1";
				gunnerInAction = "passenger_bench_1";
				gunnerGetInAction = "GetInHeli_Light_01bench";
				gunnerGetOutAction = "GetOutLow";
				ejectDeadGunner = 1;
				gunnerCompartments = "Compartment4";
				allowLauncherIn = 1;
				startEngine = 0;
				hasGunner = 1;
				isPersonTurret = 2;
				playerPosition = 12;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_right_19
			{
				proxyIndex = 19;
				memoryPointsGetInGunner = "pos cargo 19";
				memoryPointsGetInGunnerDir = "pos cargo 19 dir";
				gunnerName = "Passenger (Right Door)";
				gunnerAction = "passenger_bench_1";
				gunnerInAction = "passenger_bench_1";
				gunnerGetInAction = "GetInHeli_Light_01bench";
				gunnerGetOutAction = "GetOutLow";
				ejectDeadGunner = 1;
				gunnerCompartments = "Compartment4";
				allowLauncherIn = 1;
				startEngine = 0;
				hasGunner = 1;
				isPersonTurret = 2;
				playerPosition = 12;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_20
			{
				gunnerName = "Passenger (Left Door)";
				gunnerCompartments = "Compartment5";
				proxyIndex = 20;
				memoryPointsGetInGunner = "pos cargo 20";
				memoryPointsGetInGunnerDir = "pos cargo 20 dir";
				gunnerAction = "passenger_bench_1";
				gunnerInAction = "passenger_bench_1";
				gunnerGetInAction = "GetInHeli_Light_01bench";
				gunnerGetOutAction = "GetOutLow";
				ejectDeadGunner = 1;
				allowLauncherIn = 1;
				startEngine = 0;
				hasGunner = 1;
				isPersonTurret = 2;
				playerPosition = 12;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_21
			{
				proxyIndex = 21;
				memoryPointsGetInGunner = "pos cargo 21";
				memoryPointsGetInGunnerDir = "pos cargo 21 dir";
				gunnerName = "Passenger (Left Door)";
				gunnerCompartments = "Compartment5";
				gunnerAction = "passenger_bench_1";
				gunnerInAction = "passenger_bench_1";
				gunnerGetInAction = "GetInHeli_Light_01bench";
				gunnerGetOutAction = "GetOutLow";
				ejectDeadGunner = 1;
				allowLauncherIn = 1;
				startEngine = 0;
				hasGunner = 1;
				isPersonTurret = 2;
				playerPosition = 12;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
			class CargoTurret_left_22
			{
				proxyIndex = 22;
				memoryPointsGetInGunner = "pos cargo 22";
				memoryPointsGetInGunnerDir = "pos cargo 22 dir";
				gunnerName = "Passenger (Left Door)";
				gunnerCompartments = "Compartment5";
				gunnerAction = "passenger_bench_1";
				gunnerInAction = "passenger_bench_1";
				gunnerGetInAction = "GetInHeli_Light_01bench";
				gunnerGetOutAction = "GetOutLow";
				ejectDeadGunner = 1;
				allowLauncherIn = 1;
				startEngine = 0;
				hasGunner = 1;
				isPersonTurret = 2;
				playerPosition = 12;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				maxElev = 45;
				minElev = -35;
				maxTurn = 61;
				minTurn = -65;
				dontCreateAI = 1;
				forceHideGunner = 1;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				class Hitpoints
				{
				};
				animationSourceBody = "";
				animationSourceGun = "";
				body = "";
				canEject = 1;
				commanding = 0;
				gun = "";
				hideWeaponsGunner = 0;
				isCopilot = 0;
				primaryGunner = 0;
				proxyType = "CPCargo";
				turretFollowFreeLook = 0;
				viewGunnerInExternal = 1;
				disableSoundAttenuation = 1;
				outGunnerMayFire = 1;
				showAsCargo = 1;
				animationSourceHatch = "hatchGunner";
				animationSourceCamElev = "camElev";
				gunnerType = "";
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",0.00316228,1};
				soundElevation[] = {"",0.00316228,1};
				initElev = 0;
				initTurn = 0;
				minOutElev = -4;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 60;
				initOutTurn = 0;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				minCamElev = -90;
				maxCamElev = 90;
				initCamElev = 0;
				stabilizedInAxes = 3;
				primary = 1;
				turretCanSee = 0;
				canUseScanners = 1;
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				gunnerOpticsModel = "";
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOpticsShowCursor = 0;
				turretInfoType = "";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				memoryPointGunnerOutOptics = "";
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutFireAlsoInInternalCamera = 1;
				gunnerUsesPilotView = 0;
				castGunnerShadow = 0;
				viewGunnerShadow = 1;
				viewGunnerShadowDiff = 1;
				viewGunnerShadowAmb = 1;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				showHMD = 0;
				lockWhenDriverOut = 0;
				lockWhenVehicleSpeed = -1;
				memoryPointsGetInGunnerPrecise = "";
				missileBeg = "spice rakety";
				missileEnd = "konec rakety";
				armorLights = 0.4;
				class Reflectors
				{
				};
				aggregateReflectors[] = {};
				class GunFire
				{
					access = 0;
					cloudletDuration = 0.2;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 0.2;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 0.5;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletFire";
					cloudletColor[] = {1,1,1,0};
					interval = 0.01;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 4500;
					deltaT = -3000;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {0.82,0.95,0.93,0};
						};
						class T1
						{
							maxT = 200;
							color[] = {0.75,0.77,0.9,0};
						};
						class T2
						{
							maxT = 400;
							color[] = {0.56,0.62,0.67,0};
						};
						class T3
						{
							maxT = 600;
							color[] = {0.39,0.46,0.47,0};
						};
						class T4
						{
							maxT = 800;
							color[] = {0.24,0.31,0.31,0};
						};
						class T5
						{
							maxT = 1000;
							color[] = {0.23,0.31,0.29,0};
						};
						class T6
						{
							maxT = 1500;
							color[] = {0.21,0.29,0.27,0};
						};
						class T7
						{
							maxT = 2000;
							color[] = {0.19,0.23,0.21,0};
						};
						class T8
						{
							maxT = 2300;
							color[] = {0.22,0.19,0.1,0};
						};
						class T9
						{
							maxT = 2500;
							color[] = {0.35,0.2,0.02,0};
						};
						class T10
						{
							maxT = 2600;
							color[] = {0.62,0.29,0.03,0};
						};
						class T11
						{
							maxT = 2650;
							color[] = {0.59,0.35,0.05,0};
						};
						class T12
						{
							maxT = 2700;
							color[] = {0.75,0.37,0.03,0};
						};
						class T13
						{
							maxT = 2750;
							color[] = {0.88,0.34,0.03,0};
						};
						class T14
						{
							maxT = 2800;
							color[] = {0.91,0.5,0.17,0};
						};
						class T15
						{
							maxT = 2850;
							color[] = {1,0.6,0.2,0};
						};
						class T16
						{
							maxT = 2900;
							color[] = {1,0.71,0.3,0};
						};
						class T17
						{
							maxT = 2950;
							color[] = {0.98,0.83,0.41,0};
						};
						class T18
						{
							maxT = 3000;
							color[] = {0.98,0.91,0.54,0};
						};
						class T19
						{
							maxT = 3100;
							color[] = {0.98,0.99,0.6,0};
						};
						class T20
						{
							maxT = 3300;
							color[] = {0.96,0.99,0.72,0};
						};
						class T21
						{
							maxT = 3600;
							color[] = {1,0.98,0.91,0};
						};
						class T22
						{
							maxT = 4200;
							color[] = {1,1,1,0};
						};
					};
				};
				class GunClouds
				{
					access = 0;
					cloudletDuration = 0.3;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 1;
					cloudletGrowUp = 1;
					cloudletFadeIn = 0.01;
					cloudletFadeOut = 1;
					cloudletAccY = 0.4;
					cloudletMinYSpeed = 0.2;
					cloudletMaxYSpeed = 0.8;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					interval = 0.05;
					size = 3;
					sourceSize = 0.5;
					timeToLive = 0;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class MGunClouds
				{
					access = 0;
					cloudletGrowUp = 0.05;
					cloudletFadeIn = 0;
					cloudletFadeOut = 0.1;
					cloudletDuration = 0.05;
					cloudletAnimPeriod = 1;
					cloudletSize = 1;
					cloudletAlpha = 0.3;
					cloudletAccY = 0;
					cloudletMinYSpeed = -100;
					cloudletMaxYSpeed = 100;
					cloudletShape = "cloudletClouds";
					cloudletColor[] = {1,1,1,0};
					timeToLive = 0;
					interval = 0.02;
					size = 0.3;
					sourceSize = 0.02;
					initT = 0;
					deltaT = 0;
					class Table
					{
						class T0
						{
							maxT = 0;
							color[] = {1,1,1,0};
						};
					};
				};
				class Turrets
				{
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.3;
					minFov = 0.07;
					maxFov = 0.35;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
					speedZoomMaxSpeed = 1e+10;
					speedZoomMaxFOV = 0;
				};
				forceNVG = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				gunnerDoor = "";
				preciseGetInOut = 0;
				allowTabLock = 1;
				showAllTargets = 0;
				slingLoadOperator = 0;
				allowLauncherOut = 0;
				class TurnIn
				{
					turnOffset = 0;
				};
				class TurnOut
				{
					turnOffset = 0;
				};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh";
				showCrewAim = 0;
				ace_fcs_Enabled = 0;
				ace_fcs_MinDistance = 200;
				ace_fcs_MaxDistance = 5500;
				ace_fcs_DistanceInterval = 5;
			};
		};
	};
	class JA_104th_LAAT_AB : JA_104th_LAAT
	{
		displayName = "LAAT-E 104th Airborne";
		model = "\ls\core\addons\vehicles_laati\ls_vehicle_laati_airborne.p3d";
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
						color[] = {0, 1, 1, 1};
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
						color[] = {0.5, 1, 0.5, 0.5};
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
						color[] = {1, 0, 0, 1};
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
						color[] = {1, 1, 0.5, 0.8};
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
						color[] = {0.5, 1, 0.5, 0.5};
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
						color[] = {1, 1, 1, 0};
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
						color[] = {1, 1, 1, 0};
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
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
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
						range[] = {4000, 2000, 16000, 8000};
						resource = "RscCustomInfoSensors";
					};
					class CrewDisplay
					{
						componentType = "CrewDisplayComponent";
						resource = "RscCustomInfoCrew";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRight
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
						range[] = {4000, 2000, 16000, 8000};
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
};
