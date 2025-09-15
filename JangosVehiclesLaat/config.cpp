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
	class ls_vehicle_barc{
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
		fuelCapacity = 4000;
		ls_impulsor_fuelDrain_1 = 0.00001;
		ls_impulsor_fuelDrain_2 = 0.00003;
		weapons[] = {"ls_weapon_laati_turret_50mm_he", "ls_weapon_laati_turret_50mm_ap", "212th_A2A_MissileSystem", "ls_weapon_laati_missiles", "ace_missileguidance_dagr", "Laserdesignator_pilotCamera", "FC_Dropcrate_PW1", "CMFlareLauncher"};
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
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"24Rnd_ACE_Hydra70_DAGR",
			"24Rnd_ACE_Hydra70_DAGR",
		};

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

		class TransportWeapons
		{
		};
		class TransportMagazines
		{
			class _xx_501_DC15X_mag
			{
				count = 5;
				magazine = "AUX501_Weapons_Mags_40mw5";
			};
			class _xx_501_DC15L_mag
			{
				count = 10;
				magazine = "AUX501_Weapons_Mags_20mw240";
			};
			class _xx_501_DC15C_mag
			{
				count = 10;
				magazine = "AUX501_Weapons_Mags_20mw40";
			};
			class _xx_501_DC15ADP_mag
			{
				count = 5;
				magazine = "AUX501_Weapons_Mags_20mwdp30";
			};
			class _xx_501_DC15AUP_mag
			{
				count = 5;
				magazine = "AUX501_Weapons_Mags_20mwup30";
			};
			class _xx_501_DC15S_mag
			{
				count = 5;
				magazine = "AUX501_Weapons_Mags_10mw50";
			};
			class _xx_501_Stun_mag
			{
				count = 2;
				magazine = "AUX501_Weapons_Mags_Stun5";
			};
			class _xx_501_Z6_mag
			{
				count = 5;
				magazine = "AUX501_Weapons_Mags_10mw400";
			};
			class _xx_501_DC17DP_mag
			{
				count = 5;
				magazine = "AUX501_Weapons_Mags_20mwdp20";
			};
			class _xx_JLTS_DC15A_mag
			{
				count = 5;
				magazine = "JLTS_DC15A_mag";
			};
			class _xx_UGL_HE
			{
				count = 2;
				magazine = "AUX501_Weapons_Mags_GL_HE3";
			};
			class _xx_UGL_Smoke_White
			{
				count = 2;
				magazine = "AUX501_Weapons_Mags_GL_smoke_white6";
			};
			class _xx_UGL_Smoke_Blue
			{
				count = 2;
				magazine = "AUX501_Weapons_Mags_GL_smoke_blue3";
			};
			class _xx_UGL_Smoke_Green
			{
				count = 1;
				magazine = "AUX501_Weapons_Mags_GL_smoke_green3";
			};
			class _xx_UGL_Smoke_Orange
			{
				count = 1;
				magazine = "AUX501_Weapons_Mags_GL_smoke_orange3";
			};
			class _xx_UGL_Smoke_Purple
			{
				count = 1;
				magazine = "AUX501_Weapons_Mags_GL_smoke_purple3";
			};
			class _xx_UGL_Smoke_Red
			{
				count = 2;
				magazine = "AUX501_Weapons_Mags_GL_smoke_red3";
			};
			class _xx_UGL_Smoke_Yellow
			{
				count = 1;
				magazine = "AUX501_Weapons_Mags_GL_smoke_yellow3";
			};
			class _xx_ls_mag_at_plx
			{
				count = 1;
				magazine = "ls_mag_at_plx";
			};
			class _xx_ls_mag_rpg_1rnd
			{
				count = 3;
				magazine = "ls_mag_rpg_1rnd";
			};
			class _xx_501_ThermalDet
			{
				count = 8;
				magazine = "AUX501_Weapons_Mags_Thermal_Detonator";
			};
			class _xx_3AS_ThermalDet
			{
				count = 8;
				magazine = "3AS_ThermalDetonator";
			};
			class _xx_LS_ThermalDet
			{
				count = 8;
				magazine = "LS_mag_classC_thermalDet";
			};
			class _xx_BI_SmokeGrenade
			{
				count = 8;
				magazine = "SmokeShell";
			};
		};
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				count = 50;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_epinephrine
			{
				count = 20;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_morphine
			{
				count = 20;
				name = "ACE_morphine";
			};
			class _xx_ACE_packingBandage
			{
				count = 30;
				name = "ACE_packingBandage";
			};
			class _xx_ACE_quikclot
			{
				count = 30;
				name = "ACE_quikclot";
			};
			class _xx_ACE_salineIV
			{
				count = 5;
				name = "ACE_salineIV";
			};
			class _xx_ACE_salineIV_500
			{
				count = 5;
				name = "ACE_salineIV_500";
			};
			class _xx_ACE_tourniquet
			{
				count = 8;
				name = "ACE_tourniquet";
			};
		};

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
				};
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
