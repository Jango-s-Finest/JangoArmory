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
			"JA_104th_Box_Engineer",
			"JA_104th_Box_Medic",
			"JA_104th_Medical_Droid",
			"JA_104th_Vehicle_spawner_Droid_Air",
			"JA_104th_Vehicle_spawner_Droid_Ground",
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
			"JA_104th_3AS_Reaper_ARC_170_Blue",
			"JA_104th_3AS_Reaper_Y_Wing",
			"JA_104th_3AS_Reaper_Y_Wing_Blue",
			"JA_104th_3AS_Reaper_Y_Wing_BlueLeader",
			"JA_104th_NU",
			"JA_104th_Republic_HR_Bag",
			"JA_104th_HeavyRepeater_Unarmoured",
			"JA_104th_ATRT",
			"JA_104th_Xian_Infantry",
			"JA_104th_Xian_Vehicle",
			"JA_104th_Republic_Transport",
			"JA_104th_Heavy_Assault_Ship",
			"JA_104th_Uwing",
			"JA_104th_N1",
			"JA_104th_VWing",
			"JA_104th_V19_Torrent",
			"JA_104th_Vulture_dynamicLoadout_base",
			"JA_104th_Vulture_dynamicLoadout",
			"JA_104th_Vulture_dynamicLoadout_AA",
			"JA_104th_Vulture_dynamicLoadout_Bare",
			}; // All the new vehicles/units you've created in cfgVehicles
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
		class HitPoints;
	};

	class Box_212_Supply_F;
	class Box_212_Medical_F;

	// Classes for the Vulture Rebalance
	class 3AS_Vulture_Base_F;
	class 3AS_CIS_Vulture_F;
	class 3AS_CIS_Vulture_AA_F;
	class 3AS_CIS_Vulture_CAS_F;

	class 3AS_Z95_Republic;
	class JA_104th_212th_3AS_Reaper_Z95_Headhunter_Blue : 3AS_Z95_Republic{
		Author = "212th + 3AS + Echo";
		displayName = "Z-95 Reaper (Blue)";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselections[] = {"camo", "camo1", "camo2"};
		hiddenselectionstextures[] = {"3AS\3as_Z95\Data\blue_co.paa", "3AS\3as_Z95\Data\cockpit_co.paa", "3AS\3as_saber\data\glass\glass_ca"};
		weapons[] = {"CMFlareLauncher", "Laserdesignator_pilotCamera", "ls_weapon_laati_turret_50mm_he", "ls_weapon_laati_turret_50mm_ap", "3as_V19_Medium_Cannon", "RD501_Republic_Aircraft_Laser_AA"};
		magazines[] = {"Laserbatteries", "120Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlare_Chaff_Magazine", "3as_V19_800Rnd_Medium_shells", "3as_V19_800Rnd_Medium_shells", "3as_V19_800Rnd_Medium_shells", "3as_V19_800Rnd_Medium_shells", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "RD501_Republic_Aircraft_Laser_AA_Mag_600", "RD501_Republic_Aircraft_Laser_AA_Mag_600", "RD501_Republic_Aircraft_Laser_AA_Mag_600"};
		vehicleClass = "GAR_LAATCatNSub";
		crew = "ls_clone_phase2_pilot";
		aileronSensitivity = 2.9;
		aileronControlsSensitivityCoef = 4;
		defaultUserMFDvalues[] = {0, 1, 0, 1, 0};
		class transportweapons
		{
		};
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
				helmetPosition[] = {-0.0325, 0.0325, 0.1};
				helmetRight[] = {0.065, 0, 0};
				helmetDown[] = {0, -0.065, 0};
				font = "PuristaLight";
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5, 0.5};
					pos10[] = {1.225, 1.1};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {"user0", "user1", "user2"};
				class Bones
				{
					class ThrustVectoringRotation
					{
						type = "rotational";
						source = "vtolvectoring";
						sourceScale = 100;
						center[] = {0.12, 0.75};
						min = 0;
						max = 100;
						minAngle = 0;
						maxAngle = -90;
						aspectRatio = 0.982906;
					};
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class Velocity : Pos10Vector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class PlaneOrientation
					{
						type = "vector";
						source = "forward";
						pos[] = {0.5, 0.5};
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weaponToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class ThrustVectoringRotation2
					{
						type = "rotational";
						source = "vtolvectoring";
						sourceScale = 100;
						center[] = {0.06, 0.145};
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
						center[] = {0, 0};
						min = 0;
						max = 0.5;
						minAngle = 0;
						maxAngle = 18;
						aspectRatio = 0.985402;
					};
					class MissileFlightTimeRot2 : MissileFlightTimeRot1
					{
						maxAngle = 36;
						max = 1;
					};
					class MissileFlightTimeRot3 : MissileFlightTimeRot1
					{
						maxAngle = 54;
						max = 1.5;
					};
					class MissileFlightTimeRot4 : MissileFlightTimeRot1
					{
						maxAngle = 72;
						max = 2;
					};
					class MissileFlightTimeRot5 : MissileFlightTimeRot1
					{
						maxAngle = 90;
						max = 2.5;
					};
					class MissileFlightTimeRot6 : MissileFlightTimeRot1
					{
						maxAngle = 108;
						max = 3;
					};
					class MissileFlightTimeRot7 : MissileFlightTimeRot1
					{
						maxAngle = 126;
						max = 3.5;
					};
					class MissileFlightTimeRot8 : MissileFlightTimeRot1
					{
						maxAngle = 144;
						max = 4;
					};
					class MissileFlightTimeRot9 : MissileFlightTimeRot1
					{
						maxAngle = 162;
						max = 4.5;
					};
					class MissileFlightTimeRot10 : MissileFlightTimeRot1
					{
						maxAngle = 180;
						max = 5;
					};
					class MissileFlightTimeRot11 : MissileFlightTimeRot1
					{
						maxAngle = 198;
						max = 5.5;
					};
					class MissileFlightTimeRot12 : MissileFlightTimeRot1
					{
						maxAngle = 216;
						max = 6;
					};
					class MissileFlightTimeRot13 : MissileFlightTimeRot1
					{
						maxAngle = 234;
						max = 6.5;
					};
					class MissileFlightTimeRot14 : MissileFlightTimeRot1
					{
						maxAngle = 252;
						max = 7;
					};
					class MissileFlightTimeRot15 : MissileFlightTimeRot1
					{
						maxAngle = 270;
						max = 7.5;
					};
					class MissileFlightTimeRot16 : MissileFlightTimeRot1
					{
						maxAngle = 288;
						max = 8;
					};
					class MissileFlightTimeRot17 : MissileFlightTimeRot1
					{
						maxAngle = 306;
						max = 8.5;
					};
					class MissileFlightTimeRot18 : MissileFlightTimeRot1
					{
						maxAngle = 324;
						max = 9;
					};
					class MissileFlightTimeRot19 : MissileFlightTimeRot1
					{
						maxAngle = 342;
						max = 9.5;
					};
					class MissileFlightTimeRot20 : MissileFlightTimeRot1
					{
						maxAngle = 360;
						max = 10;
					};
					class Target
					{
						type = "vector";
						source = "targetToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class TargetingPodDir
					{
						source = "pilotcameratoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class TargetingPodTarget
					{
						source = "pilotcameratargettoview";
						type = "vector";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class ImpactPoint
					{
						type = "vector";
						source = "ImpactPointToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class ImpactPointRelative
					{
						type = "vector";
						source = "impactpointtoviewweaponRelative";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
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
						limits[] = {0.1, 0.1, 0.9, 0.9};
					};
					class LimitWaypoint
					{
						type = "limit";
						limits[] = {0.2, 0.1, 0.8, 0.1};
					};
					class WPPoint
					{
						type = "vector";
						source = "WPPoint";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class WPPointToView : WPPoint
					{
						source = "WPPointToView";
					};
					class Airport1
					{
						type = "vector";
						source = "airportCorner1ToView";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.774, 0.77};
					};
					class Airport2 : Airport1
					{
						source = "airportCorner2ToView";
					};
					class Airport3 : Airport1
					{
						source = "airportCorner3ToView";
					};
					class Airport4 : Airport1
					{
						source = "airportCorner4ToView";
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5, 0.5};
						pos3[] = {0.5822, 0.5};
					};
					class ILS_W : ILS_H
					{
						pos3[] = {0.5, 0.581};
					};
					class HorizonBankRot
					{
						type = "rotational";
						source = "horizonBank";
						center[] = {0.5, 0.5};
						min = "-rad(30)";
						max = "rad(30)";
						minAngle = "180.25-30";
						maxAngle = "180.75+30";
						aspectRatio = 1;
					};
					class Level0 : Pos10Vector
					{
						pos0[] = {0.5, 0.5};
						pos10[] = {0.884, 0.88};
						type = "horizontoview";
						angle = 0;
					};
					class LevelP5 : Level0
					{
						angle = 5;
					};
					class LevelM5 : Level0
					{
						angle = -5;
					};
					class LevelP10 : Level0
					{
						angle = 10;
					};
					class LevelM10 : Level0
					{
						angle = -10;
					};
					class LevelP15 : Level0
					{
						angle = 15;
					};
					class LevelM15 : Level0
					{
						angle = -15;
					};
					class LevelP20 : Level0
					{
						angle = 20;
					};
					class LevelM20 : Level0
					{
						angle = -20;
					};
					class LevelP25 : Level0
					{
						angle = 25;
					};
					class LevelM25 : Level0
					{
						angle = -25;
					};
					class LevelP30 : Level0
					{
						angle = 30;
					};
					class LevelM30 : Level0
					{
						angle = -30;
					};
					class LevelP35 : Level0
					{
						angle = 35;
					};
					class LevelM35 : Level0
					{
						angle = -35;
					};
					class LevelP40 : Level0
					{
						angle = 40;
					};
					class LevelM40 : Level0
					{
						angle = -40;
					};
					class LevelP45 : Level0
					{
						angle = 45;
					};
					class LevelM45 : Level0
					{
						angle = -45;
					};
					class LevelP50 : Level0
					{
						angle = 50;
					};
					class LevelM50 : Level0
					{
						angle = -50;
					};
					class LevelP60 : Level0
					{
						angle = 60;
					};
					class LevelM60 : Level0
					{
						angle = -60;
					};
					class LevelP70 : Level0
					{
						angle = 70;
					};
					class LevelM70 : Level0
					{
						angle = -70;
					};
					class LevelP80 : Level0
					{
						angle = 80;
					};
					class LevelM80 : Level0
					{
						angle = -80;
					};
					class LevelP90 : Level0
					{
						angle = 90;
					};
					class LevelM90 : Level0
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
						minPos[] = {0, 1};
						maxPos[] = {0, 0};
					};
					class LarAmmoMin : LarAmmoMax
					{
						source = "LarAmmoMin";
					};
					class LarTargetDist : LarAmmoMax
					{
						source = "LarTargetDist";
					};
				};
				class Draw
				{
					width = 1;
					alpha = "user3";
					color[] = {"user0", "user1", "user2"};
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
							pos[] = {{0.18, 0.71}, 1};
							right[] = {{"0.18+.05", 0.71}, 1};
							down[] = {{0.18, "0.71+.08"}, 1};
						};
						class VectoringArrow
						{
							type = "line";
							width = 6;
							points[] = {{"ThrustVectoringRotation", {"-0.034", "-0.006*4"}, 1}, {"ThrustVectoringRotation", {"-0.044*2", "0.0"}, 1}, {"ThrustVectoringRotation", {"-0.034", "0.006*4"}, 1}, {"ThrustVectoringRotation", {"-0.034", "-0.006*4"}, 1}, {}, {"ThrustVectoringRotation", {"-0.044", "0.0"}, 1}, {"ThrustVectoringRotation", {"-0.004", "0.0"}, 1}, {}};
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
							pos[] = {{0.2, 0.71}, 1};
							right[] = {{"0.20+.05", 0.71}, 1};
							down[] = {{0.2, "0.71+.08"}, 1};
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
							pos[] = {{0.103, 0.14}, 1};
							right[] = {{0.123, 0.14}, 1};
							down[] = {{0.103, 0.155}, 1};
						};
					};
					class PlaneW
					{
						clipTL[] = {0, 1};
						clipBR[] = {1, 0};
						type = "line";
						width = 3;
						points[] = {{"PlaneOrientation", {-0.04, 0}, 1}, {"PlaneOrientation", {-0.015, 0}, 1}, {"PlaneOrientation", {-0.0075, 0.015}, 1}, {"PlaneOrientation", {0, 0}, 1}, {"PlaneOrientation", {0.0075, 0.015}, 1}, {"PlaneOrientation", {0.015, 0}, 1}, {"PlaneOrientation", {0.04, 0}, 1}};
					};
					class PlaneMovementCrosshair
					{
						type = "line";
						width = 3;
						points[] = {{"Velocity", {0, -0.02}, 1}, {"Velocity", {0.01, -0.01732}, 1}, {"Velocity", {0.01732, -0.01}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.01732, 0.01}, 1}, {"Velocity", {0.01, 0.01732}, 1}, {"Velocity", {0, 0.02}, 1}, {"Velocity", {-0.01, 0.01732}, 1}, {"Velocity", {-0.01732, 0.01}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.01732, -0.01}, 1}, {"Velocity", {-0.01, -0.01732}, 1}, {"Velocity", {0, -0.02}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.04}, 1}, {"Velocity", {0, -0.02}, 1}};
					};
					class MachineGunCrosshairGroup
					{
						type = "group";
						condition = "-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPointRelative", {0, -0.0886861}, 1}, {"ImpactPointRelative", {0, -0.0788321}, 1}, {}, {"ImpactPointRelative", {0, 0.0886861}, 1}, {"ImpactPointRelative", {0, 0.0788321}, 1}, {}, {"ImpactPointRelative", {-0.09, 0}, 1}, {"ImpactPointRelative", {-0.08, 0}, 1}, {}, {"ImpactPointRelative", {0.09, 0}, 1}, {"ImpactPointRelative", {0.08, 0}, 1}, {}, {"ImpactPointRelative", {0, -0.0019708}, 1}, {"ImpactPointRelative", {0, 0.0019708}, 1}, {}, {"ImpactPointRelative", {-0.002, 0}, 1}, {"ImpactPointRelative", {0.002, 0}, 1}, {}};
						};
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ImpactPointRelative", {0, -0.0630657}, 1}, {"ImpactPointRelative", {0, -0.0788321}, 1}, {"MissileFlightTimeRot1", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot2", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot3", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot4", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot5", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot6", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot7", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot8", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot9", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot10", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot11", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot12", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot13", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot14", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot15", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot16", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot17", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot18", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot19", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot20", {0, 0.08}, 1, "ImpactPointRelative", 1}, {"MissileFlightTimeRot20", {0, 0.064}, 1, "ImpactPointRelative", 1}};
						};
						class Circle_Min_Range
						{
							type = "line";
							width = 3;
							points[] = {{"ImpactPointRelative", {0, -0.0788321}, 1}, {"ImpactPointRelative", {0.013888, -0.0776339}, 1}, {"ImpactPointRelative", {0.02736, -0.0740785}, 1}, {"ImpactPointRelative", {0.04, -0.0682686}, 1}, {"ImpactPointRelative", {0.051424, -0.0603854}, 1}, {"ImpactPointRelative", {0.06128, -0.0506733}, 1}, {"ImpactPointRelative", {0.06928, -0.0394161}, 1}, {"ImpactPointRelative", {0.075176, -0.0269606}, 1}, {"ImpactPointRelative", {0.078784, -0.0136853}, 1}, {"ImpactPointRelative", {0.08, 0}, 1}, {"ImpactPointRelative", {0.078784, 0.0136853}, 1}, {"ImpactPointRelative", {0.075176, 0.0269606}, 1}, {"ImpactPointRelative", {0.06928, 0.0394161}, 1}, {"ImpactPointRelative", {0.06128, 0.0506733}, 1}, {"ImpactPointRelative", {0.051424, 0.0603854}, 1}, {"ImpactPointRelative", {0.04, 0.0682686}, 1}, {"ImpactPointRelative", {0.02736, 0.0740785}, 1}, {"ImpactPointRelative", {0.013888, 0.0776339}, 1}, {"ImpactPointRelative", {0, 0.0788321}, 1}, {"ImpactPointRelative", {-0.013888, 0.0776339}, 1}, {"ImpactPointRelative", {-0.02736, 0.0740785}, 1}, {"ImpactPointRelative", {-0.04, 0.0682686}, 1}, {"ImpactPointRelative", {-0.051424, 0.0603854}, 1}, {"ImpactPointRelative", {-0.06128, 0.0506733}, 1}, {"ImpactPointRelative", {-0.06928, 0.0394161}, 1}, {"ImpactPointRelative", {-0.075176, 0.0269606}, 1}, {"ImpactPointRelative", {-0.078784, 0.0136853}, 1}, {"ImpactPointRelative", {-0.08, 0}, 1}, {"ImpactPointRelative", {-0.078784, -0.0136853}, 1}, {"ImpactPointRelative", {-0.075176, -0.0269606}, 1}, {"ImpactPointRelative", {-0.06928, -0.0394161}, 1}, {"ImpactPointRelative", {-0.06128, -0.0506733}, 1}, {"ImpactPointRelative", {-0.051424, -0.0603854}, 1}, {"ImpactPointRelative", {-0.04, -0.0682686}, 1}, {"ImpactPointRelative", {-0.02736, -0.0740785}, 1}, {"ImpactPointRelative", {-0.013888, -0.0776339}, 1}, {"ImpactPointRelative", {0, -0.0788321}, 1}};
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
							pos[] = {"ImpactPointRelative", {-0.002, 0.11}, 1};
							right[] = {"ImpactPointRelative", {0.045, 0.11}, 1};
							down[] = {"ImpactPointRelative", {-0.002, 0.15}, 1};
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
							points[] = {{"PlaneOrientation", {0, -0.24635}, 1}, {"PlaneOrientation", {0.0434, -0.242606}, 1}, {"PlaneOrientation", {0.0855, -0.231495}, 1}, {"PlaneOrientation", {0.125, -0.213339}, 1}, {"PlaneOrientation", {0.1607, -0.188704}, 1}, {"PlaneOrientation", {0.1915, -0.158354}, 1}, {"PlaneOrientation", {0.2165, -0.123175}, 1}, {"PlaneOrientation", {0.234925, -0.0842518}, 1}, {"PlaneOrientation", {0.2462, -0.0427664}, 1}, {"PlaneOrientation", {0.25, 0}, 1}, {"PlaneOrientation", {0.2462, 0.0427664}, 1}, {"PlaneOrientation", {0.234925, 0.0842518}, 1}, {"PlaneOrientation", {0.2165, 0.123175}, 1}, {"PlaneOrientation", {0.1915, 0.158354}, 1}, {"PlaneOrientation", {0.1607, 0.188704}, 1}, {"PlaneOrientation", {0.125, 0.213339}, 1}, {"PlaneOrientation", {0.0855, 0.231495}, 1}, {"PlaneOrientation", {0.0434, 0.242606}, 1}, {"PlaneOrientation", {0, 0.24635}, 1}, {"PlaneOrientation", {-0.0434, 0.242606}, 1}, {"PlaneOrientation", {-0.0855, 0.231495}, 1}, {"PlaneOrientation", {-0.125, 0.213339}, 1}, {"PlaneOrientation", {-0.1607, 0.188704}, 1}, {"PlaneOrientation", {-0.1915, 0.158354}, 1}, {"PlaneOrientation", {-0.2165, 0.123175}, 1}, {"PlaneOrientation", {-0.234925, 0.0842518}, 1}, {"PlaneOrientation", {-0.2462, 0.0427664}, 1}, {"PlaneOrientation", {-0.25, 0}, 1}, {"PlaneOrientation", {-0.2462, -0.0427664}, 1}, {"PlaneOrientation", {-0.234925, -0.0842518}, 1}, {"PlaneOrientation", {-0.2165, -0.123175}, 1}, {"PlaneOrientation", {-0.1915, -0.158354}, 1}, {"PlaneOrientation", {-0.1607, -0.188704}, 1}, {"PlaneOrientation", {-0.125, -0.213339}, 1}, {"PlaneOrientation", {-0.0855, -0.231495}, 1}, {"PlaneOrientation", {-0.0434, -0.242606}, 1}, {"PlaneOrientation", {0, -0.24635}, 1}};
						};
						class Lines
						{
							type = "line";
							width = 4;
							points[] = {{{0.21, 0.55}, 1}, {{0.19, 0.55}, 1}, {{0.19, 0.71}, 1}, {{0.21, 0.71}, 1}, {}, {{0.21, 0.67}, 1}, {{0.19, 0.67}, 1}, {}, {{0.21, 0.63}, 1}, {{0.19, 0.63}, 1}, {}, {{0.21, 0.59}, 1}, {{0.19, 0.59}, 1}, {}, {"LarTargetDist", -0.16, {0.17, 0.73}, 1}, {"LarTargetDist", -0.16, {0.19, 0.71}, 1}, {"LarTargetDist", -0.16, {0.17, 0.69}, 1}, {}};
						};
						class Poly
						{
							type = "polygon";
							points[] = {{{"LarAmmoMin", -0.16, {0.191, 0.71}, 1}, {"LarAmmoMax", -0.16, {0.191, 0.71}, 1}, {"LarAmmoMax", -0.16, {0.208, 0.71}, 1}, {"LarAmmoMin", -0.16, {0.208, 0.71}, 1}}};
						};
						class TopText
						{
							type = "text";
							source = "LarTop";
							sourceScale = 0.001;
							scale = 1;
							pos[] = {{0.22, 0.53}, 1};
							right[] = {{0.26, 0.53}, 1};
							down[] = {{0.22, 0.57}, 1};
							align = "right";
						};
						class MiddleText : TopText
						{
							source = "LarTop";
							sourcePrecision = -1;
							sourceScale = 0.0005;
							pos[] = {{0.22, 0.61}, 1};
							right[] = {{0.26, 0.61}, 1};
							down[] = {{0.22, 0.65}, 1};
						};
						class SpeedText : TopText
						{
							source = "LarTargetSpeed";
							align = "left";
							sourceScale = 3.6;
							pos[] = {"LarTargetDist", -0.16, {0.16, 0.69}, 1};
							right[] = {"LarTargetDist", -0.16, {0.2, 0.69}, 1};
							down[] = {"LarTargetDist", -0.16, {0.16, 0.73}, 1};
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
							points[] = {{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15, -0.13}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15, 0.13}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15, -0.13}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15, 0.13}, 1}, {}, {"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.13, -0.15}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.13, 0.15}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.13, -0.15}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.13, 0.15}, 1}};
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
							points[] = {{"ImpactPoint", {0, -0.0394161}, 1}, {"ImpactPoint", {0, -0.019708}, 1}, {}, {"ImpactPoint", {0, 0.0394161}, 1}, {"ImpactPoint", {0, 0.019708}, 1}, {}, {"ImpactPoint", {-0.04, 0}, 1}, {"ImpactPoint", {-0.02, 0}, 1}, {}, {"ImpactPoint", {0.04, 0}, 1}, {"ImpactPoint", {0.02, 0}, 1}, {}, {"ImpactPoint", {0.01, -0.0394161}, 1}, {"ImpactPoint", {-0.01, -0.0394161}, 1}, {}, {"ImpactPoint", {0, -0.0019708}, 1}, {"ImpactPoint", {0, 0.0019708}, 1}, {}, {"ImpactPoint", {-0.002, 0}, 1}, {"ImpactPoint", {0.002, 0}, 1}, {}};
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
							pos[] = {"ImpactPoint", {-0.002, 0.07}, 1};
							right[] = {"ImpactPoint", {0.045, 0.07}, 1};
							down[] = {"ImpactPoint", {-0.002, 0.11}, 1};
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
							points[] = {{"ImpactPoint", {0, 0.0886861}, 1}, {"ImpactPoint", {0, 0.0788321}, 1}, {}, {"ImpactPoint", {-0.09, 0}, 1}, {"ImpactPoint", {-0.08, 0}, 1}, {}, {"ImpactPoint", {0.09, 0}, 1}, {"ImpactPoint", {0.08, 0}, 1}, {}, {"ImpactPoint", {0, -0.0019708}, 1}, {"ImpactPoint", {0, 0.0019708}, 1}, {}, {"ImpactPoint", {-0.002, 0}, 1}, {"ImpactPoint", {0.002, 0}, 1}, {}, {"ImpactPoint", {0, -0.0788321}, 1}, {"ImpactPoint", {0.013888, -0.0776339}, 1}, {"ImpactPoint", {0.02736, -0.0740785}, 1}, {"ImpactPoint", {0.04, -0.0682686}, 1}, {"ImpactPoint", {0.051424, -0.0603854}, 1}, {"ImpactPoint", {0.06128, -0.0506733}, 1}, {"ImpactPoint", {0.06928, -0.0394161}, 1}, {"ImpactPoint", {0.075176, -0.0269606}, 1}, {"ImpactPoint", {0.078784, -0.0136853}, 1}, {"ImpactPoint", {0.08, 0}, 1}, {"ImpactPoint", {0.078784, 0.0136853}, 1}, {"ImpactPoint", {0.075176, 0.0269606}, 1}, {"ImpactPoint", {0.06928, 0.0394161}, 1}, {"ImpactPoint", {0.06128, 0.0506733}, 1}, {"ImpactPoint", {0.051424, 0.0603854}, 1}, {"ImpactPoint", {0.04, 0.0682686}, 1}, {"ImpactPoint", {0.02736, 0.0740785}, 1}, {"ImpactPoint", {0.013888, 0.0776339}, 1}, {"ImpactPoint", {0, 0.0788321}, 1}, {"ImpactPoint", {-0.013888, 0.0776339}, 1}, {"ImpactPoint", {-0.02736, 0.0740785}, 1}, {"ImpactPoint", {-0.04, 0.0682686}, 1}, {"ImpactPoint", {-0.051424, 0.0603854}, 1}, {"ImpactPoint", {-0.06128, 0.0506733}, 1}, {"ImpactPoint", {-0.06928, 0.0394161}, 1}, {"ImpactPoint", {-0.075176, 0.0269606}, 1}, {"ImpactPoint", {-0.078784, 0.0136853}, 1}, {"ImpactPoint", {-0.08, 0}, 1}, {"ImpactPoint", {-0.078784, -0.0136853}, 1}, {"ImpactPoint", {-0.075176, -0.0269606}, 1}, {"ImpactPoint", {-0.06928, -0.0394161}, 1}, {"ImpactPoint", {-0.06128, -0.0506733}, 1}, {"ImpactPoint", {-0.051424, -0.0603854}, 1}, {"ImpactPoint", {-0.04, -0.0682686}, 1}, {"ImpactPoint", {-0.02736, -0.0740785}, 1}, {"ImpactPoint", {-0.013888, -0.0776339}, 1}, {"ImpactPoint", {0, -0.0788321}, 1}, {}, {}, {"ImpactPoint", -1, "Velocity", 1, "NormalizeBombCircle", 1, "ImpactPoint", 1, {0, 0}, 1}, {"Velocity", 1, "Limit0109", 1, {0, 0}, 1}};
						};
						class Circle
						{
							type = "line";
							width = 6;
							points[] = {{"ImpactPoint", {0, -0.0630657}, 1}, {"ImpactPoint", {0, -0.0788321}, 1}, {"MissileFlightTimeRot1", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot2", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot3", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot4", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot5", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot6", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot7", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot8", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot9", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot10", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot11", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot12", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot13", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot14", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot15", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot16", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot17", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot18", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot19", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot20", {0, 0.08}, 1, "ImpactPoint", 1}, {"MissileFlightTimeRot20", {0, 0.064}, 1, "ImpactPoint", 1}};
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
							pos[] = {"ImpactPoint", {-0.002, 0.11}, 1};
							right[] = {"ImpactPoint", {0.045, 0.11}, 1};
							down[] = {"ImpactPoint", {-0.002, 0.15}, 1};
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
							pos[] = {{0.032, 0.84}, 1};
							right[] = {{0.087, 0.84}, 1};
							down[] = {{0.032, 0.885}, 1};
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
							pos[] = {{0.032, 0.84}, 1};
							right[] = {{0.087, 0.84}, 1};
							down[] = {{0.032, 0.885}, 1};
						};
					};
					class AmmoText
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.032, 0.88}, 1};
						right[] = {{0.087, 0.88}, 1};
						down[] = {{0.032, 0.925}, 1};
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
							pos[] = {{0.932, 0.8}, 1};
							right[] = {{0.987, 0.8}, 1};
							down[] = {{0.932, 0.845}, 1};
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
							pos[] = {{0.932, 0.92}, 1};
							right[] = {{0.987, 0.92}, 1};
							down[] = {{0.932, 0.965}, 1};
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
							pos[] = {{0.932, 0.84}, 1};
							right[] = {{0.987, 0.84}, 1};
							down[] = {{0.932, 0.885}, 1};
						};
						class Glideslope
						{
							clipTL[] = {0, 0};
							clipBR[] = {1, 1};
							class airport
							{
								type = "line";
								points[] = {{"airport1", 1}, {"airport2", 1}, {"airport4", 1}, {"airport3", 1}, {"airport1", 1}};
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
						pos[] = {{0.932, 0.71}, 1};
						right[] = {{"0.932+.05", 0.71}, 1};
						down[] = {{0.932, "0.71+.08"}, 1};
					};
					class CollectiveText
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{0.952, 0.71}, 1};
						right[] = {{"0.952+.05", 0.71}, 1};
						down[] = {{0.952, "0.71+.08"}, 1};
					};
					class TargetLocking
					{
						condition = "missilelocking";
						blinkingPattern[] = {0.2, 0.2};
						blinkingStartsOn = 1;
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target", 1, "Limit0109", 1, {0, -0.029562}, 1}, {"Target", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, 0.029562}, 1}, {"Target", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, -0.029562}, 1}};
						};
					};
					class TargetLocked
					{
						condition = "missilelocked";
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target", 1, "Limit0109", 1, {0, -0.029562}, 1}, {"Target", 1, "Limit0109", 1, {0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, 0.029562}, 1}, {"Target", 1, "Limit0109", 1, {-0.03, 0}, 1}, {"Target", 1, "Limit0109", 1, {0, -0.029562}, 1}};
						};
					};
					class IncomingMissile
					{
						condition = "incomingmissile";
						blinkingPattern[] = {0.3, 0.3};
						blinkingStartsOn = 1;
						class Text
						{
							type = "text";
							source = "static";
							text = "!INCOMING MISSILE!";
							align = "center";
							scale = 1;
							pos[] = {{0.485, 0.216788}, 1};
							right[] = {{0.545, 0.216788}, 1};
							down[] = {{0.485, 0.266058}, 1};
						};
					};
					class StallGroup
					{
						type = "group";
						condition = "stall";
						color[] = {1, 0, 0};
						blinkingPattern[] = {0.2, 0.2};
						blinkingStartsOn = 1;
						class StallText
						{
							type = "text";
							source = "static";
							text = "STALL";
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.25}, 1};
							right[] = {{0.54, 0.25}, 1};
							down[] = {{0.5, 0.29}, 1};
						};
					};
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodDir", 1, {0.0208056, 0.00407807}, 1}, {"TargetingPodDir", 1, {0.0208056, -0.00407807}, 1}, {}, {"TargetingPodDir", 1, {0.0176381, -0.0116134}, 1}, {"TargetingPodDir", 1, {0.0117854, -0.0173806}, 1}, {}, {"TargetingPodDir", 1, {0.00413849, -0.0205019}, 1}, {"TargetingPodDir", 1, {-0.00413849, -0.0205019}, 1}, {}, {"TargetingPodDir", 1, {-0.0117854, -0.0173806}, 1}, {"TargetingPodDir", 1, {-0.0176381, -0.0116134}, 1}, {}, {"TargetingPodDir", 1, {-0.0208056, -0.00407807}, 1}, {"TargetingPodDir", 1, {-0.0208056, 0.00407808}, 1}, {}, {"TargetingPodDir", 1, {-0.0176381, 0.0116134}, 1}, {"TargetingPodDir", 1, {-0.0117854, 0.0173806}, 1}, {}, {"TargetingPodDir", 1, {-0.00413849, 0.0205019}, 1}, {"TargetingPodDir", 1, {0.00413849, 0.0205019}, 1}, {}, {"TargetingPodDir", 1, {0.0117854, 0.0173806}, 1}, {"TargetingPodDir", 1, {0.0176381, 0.0116134}, 1}, {}, {"TargetingPodDir", 1, {0.0208056, 0.00407807}, 1}, {"TargetingPodDir", 1, {0.0208056, -0.00407808}, 1}, {}, {"TargetingPodDir", 1, {0.0176381, -0.0116134}, 1}, {"TargetingPodDir", 1, {0.0117854, -0.0173807}, 1}, {}, {"TargetingPodDir", 1, {0.00413849, -0.0205019}, 1}, {"TargetingPodDir", 1, {-0.0041385, -0.0205019}, 1}, {}, {"TargetingPodDir", 1, {-0.0117854, -0.0173806}, 1}, {"TargetingPodDir", 1, {-0.0176381, -0.0116134}, 1}, {}, {}};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type = "line";
							width = 3;
							points[] = {{"TargetingPodTarget", 1, "Limit0109", 1, {0.0208056, 0.00407807}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0208056, -0.00407807}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0176381, -0.0116134}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0117854, -0.0173806}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.00413849, -0.0205019}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.00413849, -0.0205019}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0117854, -0.0173806}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0176381, -0.0116134}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0208056, -0.00407807}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0208056, 0.00407808}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0176381, 0.0116134}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0117854, 0.0173806}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.00413849, 0.0205019}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.00413849, 0.0205019}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0117854, 0.0173806}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0176381, 0.0116134}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0208056, 0.00407807}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0208056, -0.00407808}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0176381, -0.0116134}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.0117854, -0.0173807}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {0.00413849, -0.0205019}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0041385, -0.0205019}, 1}, {}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0117854, -0.0173806}, 1}, {"TargetingPodTarget", 1, "Limit0109", 1, {-0.0176381, -0.0116134}, 1}, {}, {}};
						};
					};
					class MainCenterLine1
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW", {-0.49, "0 + 0.025"}, 1}, {"PlaneW", {-0.49, 0}, 1}, {"PlaneW", {-0.45, 0}, 1}};
					};
					class MainCenterLine2
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW", {-0.33, 0}, 1}, {"PlaneW", {-0.25, 0}, 1}};
					};
					class MainCenterLine3
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW", {0.49, "0 + 0.025"}, 1}, {"PlaneW", {0.49, 0}, 1}, {"PlaneW", {0.25, 0}, 1}};
					};
					class SpeedIndicatorBox
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW", {-0.49, -0.25}, 1}, {"PlaneW", {-0.49, -0.2}, 1}, {"PlaneW", {-0.3, -0.2}, 1}, {"PlaneW", {-0.3, -0.25}, 1}, {"PlaneW", {-0.49, -0.25}, 1}};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "center";
						scale = 1;
						pos[] = {"PlaneW", {-0.4, -0.25}, 1};
						right[] = {"PlaneW", {-0.3, -0.25}, 1};
						down[] = {"PlaneW", {-0.4, -0.2}, 1};
					};
					class AltitudeNumberASL
					{
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						sourceLength = 4;
						align = "center";
						scale = 1;
						pos[] = {"PlaneW", {0.4, -0.25}, 1};
						right[] = {"PlaneW", {0.48, -0.25}, 1};
						down[] = {"PlaneW", {0.4, -0.2}, 1};
					};
					class AltitudeNumberAGL : AltitudeNumberASL
					{
						source = "altitudeAGL";
						pos[] = {"PlaneW", {0.4, -0.2}, 1};
						right[] = {"PlaneW", {0.48, -0.2}, 1};
						down[] = {"PlaneW", {0.4, -0.15}, 1};
					};
					class AltitudeRadarTextASL
					{
						type = "text";
						source = "static";
						text = "ASL:";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"PlaneW", {0.32, -0.25}, 1};
						right[] = {"PlaneW", {"+0.32 + 0.04", -0.25}, 1};
						down[] = {"PlaneW", {0.32, "-0.25 + 0.05"}, 1};
					};
					class AltitudeRadarTextAGL
					{
						type = "text";
						source = "static";
						text = "AGL:";
						align = "left";
						scale = 1;
						sourceScale = 1;
						pos[] = {"PlaneW", {0.32, -0.192}, 1};
						right[] = {"PlaneW", {"+0.32 + 0.04", -0.192}, 1};
						down[] = {"PlaneW", {0.32, "-0.192 + 0.041"}, 1};
					};
					class PitchNumber
					{
						type = "text";
						source = "horizonDive";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {"PlaneW", {-0.39, -0.076}, 1};
						right[] = {"PlaneW", {"-0.39 + 0.05", -0.076}, 1};
						down[] = {"PlaneW", {-0.39, "-0.076 + 0.05"}, 1};
					};
					class PitchText
					{
						type = "text";
						source = "static";
						text = "P:";
						align = "left";
						scale = 1;
						pos[] = {"PlaneW", {-0.41, -0.076}, 1};
						right[] = {"PlaneW", {"-0.41 + 0.04", -0.076}, 1};
						down[] = {"PlaneW", {-0.41, "-0.076 + 0.05"}, 1};
					};
					class RollNumber
					{
						type = "text";
						source = "horizonBank";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {"PlaneW", {-0.39, -0.025}, 1};
						right[] = {"PlaneW", {"-0.39 + 0.05", -0.025}, 1};
						down[] = {"PlaneW", {-0.39, "-0.025 + 0.05"}, 1};
					};
					class RollText
					{
						type = "text";
						source = "static";
						text = "R:";
						align = "left";
						scale = 1;
						pos[] = {"PlaneW", {-0.41, -0.025}, 1};
						right[] = {"PlaneW", {"-0.41 + 0.04", -0.025}, 1};
						down[] = {"PlaneW", {-0.41, "-0.025 + 0.05"}, 1};
					};
					class ClimbNumber
					{
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {"PlaneW", {-0.39, 0.026}, 1};
						right[] = {"PlaneW", {"-0.39 + 0.05", 0.026}, 1};
						down[] = {"PlaneW", {-0.39, "+0.026 + 0.05"}, 1};
					};
					class ClimbText
					{
						type = "text";
						source = "static";
						text = "C:";
						align = "left";
						scale = 1;
						pos[] = {"PlaneW", {-0.41, 0.026}, 1};
						right[] = {"PlaneW", {"-0.41 + 0.04", 0.026}, 1};
						down[] = {"PlaneW", {-0.41, "+0.026 + 0.05"}, 1};
					};
					class fuelNumber
					{
						type = "text";
						source = "fuel";
						sourceScale = 100;
						align = "right";
						scale = 1;
						pos[] = {"PlaneW", {-0.4, 0.1}, 1};
						right[] = {"PlaneW", {"-0.40 + 0.04", 0.1}, 1};
						down[] = {"PlaneW", {-0.4, "0.10 + 0.05"}, 1};
					};
					class fuelPercent
					{
						type = "text";
						source = "static";
						text = "%";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {"PlaneW", {-0.35, 0.1}, 1};
						right[] = {"PlaneW", {"-0.35 + 0.04", 0.1}, 1};
						down[] = {"PlaneW", {-0.35, "0.10 + 0.05"}, 1};
					};
					class fuelText
					{
						type = "text";
						source = "static";
						text = "F:";
						align = "left";
						scale = 1;
						pos[] = {"PlaneW", {-0.41, 0.1}, 1};
						right[] = {"PlaneW", {"-0.41 + 0.04", 0.1}, 1};
						down[] = {"PlaneW", {-0.41, "0.1 + 0.05"}, 1};
					};
					class HeadingArrow
					{
						type = "line";
						width = 3;
						points[] = {{"WPPoint", 1, "LimitWaypoint", 1, {-0.02, 0.042}, 1}, {"WPPoint", 1, "LimitWaypoint", 1, {0, 0.022}, 1}, {"WPPoint", 1, "LimitWaypoint", 1, {0.02, 0.042}, 1}};
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
							pos[] = {{0.924, 0.505018}, 1};
							down[] = {{0.924, 0.542464}, 1};
							right[] = {{0.964, 0.505018}, 1};
						};
						class WPIndex
						{
							type = "text";
							source = "wpIndex";
							sourceScale = 1;
							sourceLength = 2;
							align = "right";
							scale = 1;
							pos[] = {{0.877, 0.505018}, 1};
							right[] = {{0.917, 0.505018}, 1};
							down[] = {{0.877, 0.542464}, 1};
						};
						class WPstatic
						{
							type = "text";
							source = "static";
							text = "WP";
							scale = 1;
							sourceScale = 1;
							align = "right";
							pos[] = {{"0.825+0.01", 0.5065}, 1};
							right[] = {{0.875, 0.5065}, 1};
							down[] = {{"0.825+0.01", 0.5415}, 1};
						};
						class WPKM
						{
							type = "text";
							source = "static";
							text = ":";
							scale = 1;
							sourceScale = 1;
							align = "left";
							pos[] = {{"0.825+0.09", 0.5065}, 1};
							right[] = {{0.955, 0.5065}, 1};
							down[] = {{"0.825+0.09", 0.5415}, 1};
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
							pos[] = {{"0.80-0.302", "0.082+0.065"}, 1};
							right[] = {{"0.83-0.302", "0.082+0.065"}, 1};
							down[] = {{"0.80-0.302", "0.113+0.065"}, 1};
						};
						class HeadingArrow
						{
							type = "line";
							width = 3;
							points[] = {{{0.488, 0.141}, 1}, {{0.512, 0.141}, 1}, {{0.542, 0.161}, 1}, {{0.512, 0.181}, 1}, {{0.488, 0.181}, 1}, {{0.458, 0.161}, 1}, {{0.488, 0.141}, 1}, {}};
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
						pos[] = {0.096, 0.0546};
						right[] = {0.143, 0.0546};
						down[] = {0.096, 0.093};
					};
					class HeadingIndicatorBox
					{
						type = "line";
						width = 3;
						points[] = {{"PlaneW", {-0.035, -0.455}, 1}, {"PlaneW", {-0.035, -0.5}, 1}, {"PlaneW", {0.035, -0.5}, 1}, {"PlaneW", {0.035, -0.455}, 1}, {"PlaneW", {-0.035, -0.455}, 1}};
					};
					class HeadingIndicatorArrow
					{
						type = "polygon";
						points[] = {{{"PlaneW", {-0.015, -0.455}, 1}, {"PlaneW", {0, -0.445}, 1}, {"PlaneW", {0.015, -0.455}, 1}}};
					};
					class HeadingNumber
					{
						type = "text";
						source = "heading";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {"PlaneW", {0, "(-0.5   )"}, 1};
						right[] = {"PlaneW", {0.03, "(-0.5   )"}, 1};
						down[] = {"PlaneW", {0, "(-0.5 + 0.045 )"}, 1};
					};
					class HorizonBankRot
					{
						type = "line";
						width = 2;
						points[] = {{"HorizonBankRot", {0, "0.39421001-0.109"}, 1}, {"HorizonBankRot", {0.01, "0.41673699-0.109"}, 1}, {"HorizonBankRot", {-0.01, "0.41673699-0.109"}, 1}, {"HorizonBankRot", {0, "0.39421001-0.109"}, 1}};
					};
					class HorizonBankRotLines
					{
						type = "line";
						width = 3;
						points[] = {{{0.619959, 0.712986}, 1}, {{0.631439, 0.744203}, 1}, {}, {{0.58291, 0.739019}, 1}, {{0.588087, 0.760778}, 1}, {}, {{0.540574, 0.748504}, 1}, {{0.543184, 0.770838}, 1}, {}, {{0.4975, 0.740421}, 1}, {{0.4975, 0.77421}, 1}, {}, {{0.454426, 0.748504}, 1}, {{0.451816, 0.770838}, 1}, {}, {{0.41209, 0.739019}, 1}, {{0.406913, 0.760778}, 1}, {}, {{0.375041, 0.712986}, 1}, {{0.363561, 0.744203}, 1}};
					};
					class Horizont
					{
						clipTL[] = {0.2, 0.2};
						clipBR[] = {0.8, 0.8};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								width = 3;
								points[] = {{"Level0", {0.75, 0}, 1}, {"Level0", {0.065, 0}, 1}, {}, {"Level0", {-0.065, 0}, 1}, {"Level0", {-0.75, 0}, 1}};
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
								class LevelM5 : Level0
								{
									type = "line";
									points[] = {{"LevelM5", {-0.235, -0.02}, 1}, {"LevelM5", {-0.235, 0}, 1}, {}, {"LevelM5", {-0.22, 0}, 1}, {"LevelM5", {-0.205, 0}, 1}, {}, {"LevelM5", {-0.19, 0}, 1}, {"LevelM5", {-0.175, 0}, 1}, {}, {"LevelM5", {-0.16, 0}, 1}, {"LevelM5", {-0.145, 0}, 1}, {}, {"LevelM5", {-0.13, 0}, 1}, {"LevelM5", {-0.115, 0}, 1}, {}, {"LevelM5", {-0.1, 0}, 1}, {"LevelM5", {-0.085, 0}, 1}, {}, {"LevelM5", {-0.07, 0}, 1}, {"LevelM5", {-0.055, 0}, 1}, {}, {}, {"LevelM5", {0.235, -0.02}, 1}, {"LevelM5", {0.235, 0}, 1}, {}, {"LevelM5", {0.22, 0}, 1}, {"LevelM5", {0.205, 0}, 1}, {}, {"LevelM5", {0.19, 0}, 1}, {"LevelM5", {0.175, 0}, 1}, {}, {"LevelM5", {0.16, 0}, 1}, {"LevelM5", {0.145, 0}, 1}, {}, {"LevelM5", {0.13, 0}, 1}, {"LevelM5", {0.115, 0}, 1}, {}, {"LevelM5", {0.1, 0}, 1}, {"LevelM5", {0.085, 0}, 1}, {}, {"LevelM5", {0.07, 0}, 1}, {"LevelM5", {0.055, 0}, 1}, {}};
								};
								class VALM_1_5
								{
									type = "text";
									source = "static";
									text = -5;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM5", {-0.26, -0.032}, 1};
									right[] = {"LevelM5", {-0.2, -0.032}, 1};
									down[] = {"LevelM5", {-0.26, 0.018}, 1};
								};
								class VALM_1_5_R
								{
									type = "text";
									source = "static";
									text = -5;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM5", {0.26, -0.032}, 1};
									right[] = {"LevelM5", {0.32, -0.032}, 1};
									down[] = {"LevelM5", {0.26, 0.018}, 1};
								};
								class LevelP5 : Level0
								{
									type = "line";
									points[] = {{"LevelP5", {"-0.22-0.015", 0.02}, 1}, {"LevelP5", {"-0.22-0.015", 0}, 1}, {"LevelP5", {-0.06, 0}, 1}, {}, {"LevelP5", {0.06, 0}, 1}, {"LevelP5", {"+0.22+0.015", 0}, 1}, {"LevelP5", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_5
								{
									type = "text";
									source = "static";
									text = "5";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP5", {-0.26, -0.017}, 1};
									right[] = {"LevelP5", {-0.2, -0.017}, 1};
									down[] = {"LevelP5", {-0.26, 0.033}, 1};
								};
								class VALP_1_5_R
								{
									type = "text";
									source = "static";
									text = "5";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP5", {0.26, -0.017}, 1};
									right[] = {"LevelP5", {0.32, -0.017}, 1};
									down[] = {"LevelP5", {0.26, 0.033}, 1};
								};
								class LevelM10 : Level0
								{
									type = "line";
									points[] = {{"LevelM10", {-0.235, -0.02}, 1}, {"LevelM10", {-0.235, 0}, 1}, {}, {"LevelM10", {-0.22, 0}, 1}, {"LevelM10", {-0.205, 0}, 1}, {}, {"LevelM10", {-0.19, 0}, 1}, {"LevelM10", {-0.175, 0}, 1}, {}, {"LevelM10", {-0.16, 0}, 1}, {"LevelM10", {-0.145, 0}, 1}, {}, {"LevelM10", {-0.13, 0}, 1}, {"LevelM10", {-0.115, 0}, 1}, {}, {"LevelM10", {-0.1, 0}, 1}, {"LevelM10", {-0.085, 0}, 1}, {}, {"LevelM10", {-0.07, 0}, 1}, {"LevelM10", {-0.055, 0}, 1}, {}, {}, {"LevelM10", {0.235, -0.02}, 1}, {"LevelM10", {0.235, 0}, 1}, {}, {"LevelM10", {0.22, 0}, 1}, {"LevelM10", {0.205, 0}, 1}, {}, {"LevelM10", {0.19, 0}, 1}, {"LevelM10", {0.175, 0}, 1}, {}, {"LevelM10", {0.16, 0}, 1}, {"LevelM10", {0.145, 0}, 1}, {}, {"LevelM10", {0.13, 0}, 1}, {"LevelM10", {0.115, 0}, 1}, {}, {"LevelM10", {0.1, 0}, 1}, {"LevelM10", {0.085, 0}, 1}, {}, {"LevelM10", {0.07, 0}, 1}, {"LevelM10", {0.055, 0}, 1}, {}};
								};
								class VALM_1_10
								{
									type = "text";
									source = "static";
									text = -10;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM10", {-0.26, -0.032}, 1};
									right[] = {"LevelM10", {-0.2, -0.032}, 1};
									down[] = {"LevelM10", {-0.26, 0.018}, 1};
								};
								class VALM_1_10_R
								{
									type = "text";
									source = "static";
									text = -10;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM10", {0.26, -0.032}, 1};
									right[] = {"LevelM10", {0.32, -0.032}, 1};
									down[] = {"LevelM10", {0.26, 0.018}, 1};
								};
								class LevelP10 : Level0
								{
									type = "line";
									points[] = {{"LevelP10", {"-0.22-0.015", 0.02}, 1}, {"LevelP10", {"-0.22-0.015", 0}, 1}, {"LevelP10", {-0.06, 0}, 1}, {}, {"LevelP10", {0.06, 0}, 1}, {"LevelP10", {"+0.22+0.015", 0}, 1}, {"LevelP10", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_10
								{
									type = "text";
									source = "static";
									text = "10";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10", {-0.26, -0.017}, 1};
									right[] = {"LevelP10", {-0.2, -0.017}, 1};
									down[] = {"LevelP10", {-0.26, 0.033}, 1};
								};
								class VALP_1_10_R
								{
									type = "text";
									source = "static";
									text = "10";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP10", {0.26, -0.017}, 1};
									right[] = {"LevelP10", {0.32, -0.017}, 1};
									down[] = {"LevelP10", {0.26, 0.033}, 1};
								};
								class LevelM15 : Level0
								{
									type = "line";
									points[] = {{"LevelM15", {-0.235, -0.02}, 1}, {"LevelM15", {-0.235, 0}, 1}, {}, {"LevelM15", {-0.22, 0}, 1}, {"LevelM15", {-0.205, 0}, 1}, {}, {"LevelM15", {-0.19, 0}, 1}, {"LevelM15", {-0.175, 0}, 1}, {}, {"LevelM15", {-0.16, 0}, 1}, {"LevelM15", {-0.145, 0}, 1}, {}, {"LevelM15", {-0.13, 0}, 1}, {"LevelM15", {-0.115, 0}, 1}, {}, {"LevelM15", {-0.1, 0}, 1}, {"LevelM15", {-0.085, 0}, 1}, {}, {"LevelM15", {-0.07, 0}, 1}, {"LevelM15", {-0.055, 0}, 1}, {}, {}, {"LevelM15", {0.235, -0.02}, 1}, {"LevelM15", {0.235, 0}, 1}, {}, {"LevelM15", {0.22, 0}, 1}, {"LevelM15", {0.205, 0}, 1}, {}, {"LevelM15", {0.19, 0}, 1}, {"LevelM15", {0.175, 0}, 1}, {}, {"LevelM15", {0.16, 0}, 1}, {"LevelM15", {0.145, 0}, 1}, {}, {"LevelM15", {0.13, 0}, 1}, {"LevelM15", {0.115, 0}, 1}, {}, {"LevelM15", {0.1, 0}, 1}, {"LevelM15", {0.085, 0}, 1}, {}, {"LevelM15", {0.07, 0}, 1}, {"LevelM15", {0.055, 0}, 1}, {}};
								};
								class VALM_1_15
								{
									type = "text";
									source = "static";
									text = -15;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM15", {-0.26, -0.032}, 1};
									right[] = {"LevelM15", {-0.2, -0.032}, 1};
									down[] = {"LevelM15", {-0.26, 0.018}, 1};
								};
								class VALM_1_15_R
								{
									type = "text";
									source = "static";
									text = -15;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM15", {0.26, -0.032}, 1};
									right[] = {"LevelM15", {0.32, -0.032}, 1};
									down[] = {"LevelM15", {0.26, 0.018}, 1};
								};
								class LevelP15 : Level0
								{
									type = "line";
									points[] = {{"LevelP15", {"-0.22-0.015", 0.02}, 1}, {"LevelP15", {"-0.22-0.015", 0}, 1}, {"LevelP15", {-0.06, 0}, 1}, {}, {"LevelP15", {0.06, 0}, 1}, {"LevelP15", {"+0.22+0.015", 0}, 1}, {"LevelP15", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_15
								{
									type = "text";
									source = "static";
									text = "15";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP15", {-0.26, -0.017}, 1};
									right[] = {"LevelP15", {-0.2, -0.017}, 1};
									down[] = {"LevelP15", {-0.26, 0.033}, 1};
								};
								class VALP_1_15_R
								{
									type = "text";
									source = "static";
									text = "15";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP15", {0.26, -0.017}, 1};
									right[] = {"LevelP15", {0.32, -0.017}, 1};
									down[] = {"LevelP15", {0.26, 0.033}, 1};
								};
								class LevelM20 : Level0
								{
									type = "line";
									points[] = {{"LevelM20", {-0.235, -0.02}, 1}, {"LevelM20", {-0.235, 0}, 1}, {}, {"LevelM20", {-0.22, 0}, 1}, {"LevelM20", {-0.205, 0}, 1}, {}, {"LevelM20", {-0.19, 0}, 1}, {"LevelM20", {-0.175, 0}, 1}, {}, {"LevelM20", {-0.16, 0}, 1}, {"LevelM20", {-0.145, 0}, 1}, {}, {"LevelM20", {-0.13, 0}, 1}, {"LevelM20", {-0.115, 0}, 1}, {}, {"LevelM20", {-0.1, 0}, 1}, {"LevelM20", {-0.085, 0}, 1}, {}, {"LevelM20", {-0.07, 0}, 1}, {"LevelM20", {-0.055, 0}, 1}, {}, {}, {"LevelM20", {0.235, -0.02}, 1}, {"LevelM20", {0.235, 0}, 1}, {}, {"LevelM20", {0.22, 0}, 1}, {"LevelM20", {0.205, 0}, 1}, {}, {"LevelM20", {0.19, 0}, 1}, {"LevelM20", {0.175, 0}, 1}, {}, {"LevelM20", {0.16, 0}, 1}, {"LevelM20", {0.145, 0}, 1}, {}, {"LevelM20", {0.13, 0}, 1}, {"LevelM20", {0.115, 0}, 1}, {}, {"LevelM20", {0.1, 0}, 1}, {"LevelM20", {0.085, 0}, 1}, {}, {"LevelM20", {0.07, 0}, 1}, {"LevelM20", {0.055, 0}, 1}, {}};
								};
								class VALM_1_20
								{
									type = "text";
									source = "static";
									text = -20;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM20", {-0.26, -0.032}, 1};
									right[] = {"LevelM20", {-0.2, -0.032}, 1};
									down[] = {"LevelM20", {-0.26, 0.018}, 1};
								};
								class VALM_1_20_R
								{
									type = "text";
									source = "static";
									text = -20;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM20", {0.26, -0.032}, 1};
									right[] = {"LevelM20", {0.32, -0.032}, 1};
									down[] = {"LevelM20", {0.26, 0.018}, 1};
								};
								class LevelP20 : Level0
								{
									type = "line";
									points[] = {{"LevelP20", {"-0.22-0.015", 0.02}, 1}, {"LevelP20", {"-0.22-0.015", 0}, 1}, {"LevelP20", {-0.06, 0}, 1}, {}, {"LevelP20", {0.06, 0}, 1}, {"LevelP20", {"+0.22+0.015", 0}, 1}, {"LevelP20", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_20
								{
									type = "text";
									source = "static";
									text = "20";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20", {-0.26, -0.017}, 1};
									right[] = {"LevelP20", {-0.2, -0.017}, 1};
									down[] = {"LevelP20", {-0.26, 0.033}, 1};
								};
								class VALP_1_20_R
								{
									type = "text";
									source = "static";
									text = "20";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP20", {0.26, -0.017}, 1};
									right[] = {"LevelP20", {0.32, -0.017}, 1};
									down[] = {"LevelP20", {0.26, 0.033}, 1};
								};
								class LevelM25 : Level0
								{
									type = "line";
									points[] = {{"LevelM25", {-0.235, -0.02}, 1}, {"LevelM25", {-0.235, 0}, 1}, {}, {"LevelM25", {-0.22, 0}, 1}, {"LevelM25", {-0.205, 0}, 1}, {}, {"LevelM25", {-0.19, 0}, 1}, {"LevelM25", {-0.175, 0}, 1}, {}, {"LevelM25", {-0.16, 0}, 1}, {"LevelM25", {-0.145, 0}, 1}, {}, {"LevelM25", {-0.13, 0}, 1}, {"LevelM25", {-0.115, 0}, 1}, {}, {"LevelM25", {-0.1, 0}, 1}, {"LevelM25", {-0.085, 0}, 1}, {}, {"LevelM25", {-0.07, 0}, 1}, {"LevelM25", {-0.055, 0}, 1}, {}, {}, {"LevelM25", {0.235, -0.02}, 1}, {"LevelM25", {0.235, 0}, 1}, {}, {"LevelM25", {0.22, 0}, 1}, {"LevelM25", {0.205, 0}, 1}, {}, {"LevelM25", {0.19, 0}, 1}, {"LevelM25", {0.175, 0}, 1}, {}, {"LevelM25", {0.16, 0}, 1}, {"LevelM25", {0.145, 0}, 1}, {}, {"LevelM25", {0.13, 0}, 1}, {"LevelM25", {0.115, 0}, 1}, {}, {"LevelM25", {0.1, 0}, 1}, {"LevelM25", {0.085, 0}, 1}, {}, {"LevelM25", {0.07, 0}, 1}, {"LevelM25", {0.055, 0}, 1}, {}};
								};
								class VALM_1_25
								{
									type = "text";
									source = "static";
									text = -25;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM25", {-0.26, -0.032}, 1};
									right[] = {"LevelM25", {-0.2, -0.032}, 1};
									down[] = {"LevelM25", {-0.26, 0.018}, 1};
								};
								class VALM_1_25_R
								{
									type = "text";
									source = "static";
									text = -25;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM25", {0.26, -0.032}, 1};
									right[] = {"LevelM25", {0.32, -0.032}, 1};
									down[] = {"LevelM25", {0.26, 0.018}, 1};
								};
								class LevelP25 : Level0
								{
									type = "line";
									points[] = {{"LevelP25", {"-0.22-0.015", 0.02}, 1}, {"LevelP25", {"-0.22-0.015", 0}, 1}, {"LevelP25", {-0.06, 0}, 1}, {}, {"LevelP25", {0.06, 0}, 1}, {"LevelP25", {"+0.22+0.015", 0}, 1}, {"LevelP25", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_25
								{
									type = "text";
									source = "static";
									text = "25";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP25", {-0.26, -0.017}, 1};
									right[] = {"LevelP25", {-0.2, -0.017}, 1};
									down[] = {"LevelP25", {-0.26, 0.033}, 1};
								};
								class VALP_1_25_R
								{
									type = "text";
									source = "static";
									text = "25";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP25", {0.26, -0.017}, 1};
									right[] = {"LevelP25", {0.32, -0.017}, 1};
									down[] = {"LevelP25", {0.26, 0.033}, 1};
								};
								class LevelM30 : Level0
								{
									type = "line";
									points[] = {{"LevelM30", {-0.235, -0.02}, 1}, {"LevelM30", {-0.235, 0}, 1}, {}, {"LevelM30", {-0.22, 0}, 1}, {"LevelM30", {-0.205, 0}, 1}, {}, {"LevelM30", {-0.19, 0}, 1}, {"LevelM30", {-0.175, 0}, 1}, {}, {"LevelM30", {-0.16, 0}, 1}, {"LevelM30", {-0.145, 0}, 1}, {}, {"LevelM30", {-0.13, 0}, 1}, {"LevelM30", {-0.115, 0}, 1}, {}, {"LevelM30", {-0.1, 0}, 1}, {"LevelM30", {-0.085, 0}, 1}, {}, {"LevelM30", {-0.07, 0}, 1}, {"LevelM30", {-0.055, 0}, 1}, {}, {}, {"LevelM30", {0.235, -0.02}, 1}, {"LevelM30", {0.235, 0}, 1}, {}, {"LevelM30", {0.22, 0}, 1}, {"LevelM30", {0.205, 0}, 1}, {}, {"LevelM30", {0.19, 0}, 1}, {"LevelM30", {0.175, 0}, 1}, {}, {"LevelM30", {0.16, 0}, 1}, {"LevelM30", {0.145, 0}, 1}, {}, {"LevelM30", {0.13, 0}, 1}, {"LevelM30", {0.115, 0}, 1}, {}, {"LevelM30", {0.1, 0}, 1}, {"LevelM30", {0.085, 0}, 1}, {}, {"LevelM30", {0.07, 0}, 1}, {"LevelM30", {0.055, 0}, 1}, {}};
								};
								class VALM_1_30
								{
									type = "text";
									source = "static";
									text = -30;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM30", {-0.26, -0.032}, 1};
									right[] = {"LevelM30", {-0.2, -0.032}, 1};
									down[] = {"LevelM30", {-0.26, 0.018}, 1};
								};
								class VALM_1_30_R
								{
									type = "text";
									source = "static";
									text = -30;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM30", {0.26, -0.032}, 1};
									right[] = {"LevelM30", {0.32, -0.032}, 1};
									down[] = {"LevelM30", {0.26, 0.018}, 1};
								};
								class LevelP30 : Level0
								{
									type = "line";
									points[] = {{"LevelP30", {"-0.22-0.015", 0.02}, 1}, {"LevelP30", {"-0.22-0.015", 0}, 1}, {"LevelP30", {-0.06, 0}, 1}, {}, {"LevelP30", {0.06, 0}, 1}, {"LevelP30", {"+0.22+0.015", 0}, 1}, {"LevelP30", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_30
								{
									type = "text";
									source = "static";
									text = "30";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30", {-0.26, -0.017}, 1};
									right[] = {"LevelP30", {-0.2, -0.017}, 1};
									down[] = {"LevelP30", {-0.26, 0.033}, 1};
								};
								class VALP_1_30_R
								{
									type = "text";
									source = "static";
									text = "30";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP30", {0.26, -0.017}, 1};
									right[] = {"LevelP30", {0.32, -0.017}, 1};
									down[] = {"LevelP30", {0.26, 0.033}, 1};
								};
								class LevelM35 : Level0
								{
									type = "line";
									points[] = {{"LevelM35", {-0.235, -0.02}, 1}, {"LevelM35", {-0.235, 0}, 1}, {}, {"LevelM35", {-0.22, 0}, 1}, {"LevelM35", {-0.205, 0}, 1}, {}, {"LevelM35", {-0.19, 0}, 1}, {"LevelM35", {-0.175, 0}, 1}, {}, {"LevelM35", {-0.16, 0}, 1}, {"LevelM35", {-0.145, 0}, 1}, {}, {"LevelM35", {-0.13, 0}, 1}, {"LevelM35", {-0.115, 0}, 1}, {}, {"LevelM35", {-0.1, 0}, 1}, {"LevelM35", {-0.085, 0}, 1}, {}, {"LevelM35", {-0.07, 0}, 1}, {"LevelM35", {-0.055, 0}, 1}, {}, {}, {"LevelM35", {0.235, -0.02}, 1}, {"LevelM35", {0.235, 0}, 1}, {}, {"LevelM35", {0.22, 0}, 1}, {"LevelM35", {0.205, 0}, 1}, {}, {"LevelM35", {0.19, 0}, 1}, {"LevelM35", {0.175, 0}, 1}, {}, {"LevelM35", {0.16, 0}, 1}, {"LevelM35", {0.145, 0}, 1}, {}, {"LevelM35", {0.13, 0}, 1}, {"LevelM35", {0.115, 0}, 1}, {}, {"LevelM35", {0.1, 0}, 1}, {"LevelM35", {0.085, 0}, 1}, {}, {"LevelM35", {0.07, 0}, 1}, {"LevelM35", {0.055, 0}, 1}, {}};
								};
								class VALM_1_35
								{
									type = "text";
									source = "static";
									text = -35;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM35", {-0.26, -0.032}, 1};
									right[] = {"LevelM35", {-0.2, -0.032}, 1};
									down[] = {"LevelM35", {-0.26, 0.018}, 1};
								};
								class VALM_1_35_R
								{
									type = "text";
									source = "static";
									text = -35;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM35", {0.26, -0.032}, 1};
									right[] = {"LevelM35", {0.32, -0.032}, 1};
									down[] = {"LevelM35", {0.26, 0.018}, 1};
								};
								class LevelP35 : Level0
								{
									type = "line";
									points[] = {{"LevelP35", {"-0.22-0.015", 0.02}, 1}, {"LevelP35", {"-0.22-0.015", 0}, 1}, {"LevelP35", {-0.06, 0}, 1}, {}, {"LevelP35", {0.06, 0}, 1}, {"LevelP35", {"+0.22+0.015", 0}, 1}, {"LevelP35", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_35
								{
									type = "text";
									source = "static";
									text = "35";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP35", {-0.26, -0.017}, 1};
									right[] = {"LevelP35", {-0.2, -0.017}, 1};
									down[] = {"LevelP35", {-0.26, 0.033}, 1};
								};
								class VALP_1_35_R
								{
									type = "text";
									source = "static";
									text = "35";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP35", {0.26, -0.017}, 1};
									right[] = {"LevelP35", {0.32, -0.017}, 1};
									down[] = {"LevelP35", {0.26, 0.033}, 1};
								};
								class LevelM40 : Level0
								{
									type = "line";
									points[] = {{"LevelM40", {-0.235, -0.02}, 1}, {"LevelM40", {-0.235, 0}, 1}, {}, {"LevelM40", {-0.22, 0}, 1}, {"LevelM40", {-0.205, 0}, 1}, {}, {"LevelM40", {-0.19, 0}, 1}, {"LevelM40", {-0.175, 0}, 1}, {}, {"LevelM40", {-0.16, 0}, 1}, {"LevelM40", {-0.145, 0}, 1}, {}, {"LevelM40", {-0.13, 0}, 1}, {"LevelM40", {-0.115, 0}, 1}, {}, {"LevelM40", {-0.1, 0}, 1}, {"LevelM40", {-0.085, 0}, 1}, {}, {"LevelM40", {-0.07, 0}, 1}, {"LevelM40", {-0.055, 0}, 1}, {}, {}, {"LevelM40", {0.235, -0.02}, 1}, {"LevelM40", {0.235, 0}, 1}, {}, {"LevelM40", {0.22, 0}, 1}, {"LevelM40", {0.205, 0}, 1}, {}, {"LevelM40", {0.19, 0}, 1}, {"LevelM40", {0.175, 0}, 1}, {}, {"LevelM40", {0.16, 0}, 1}, {"LevelM40", {0.145, 0}, 1}, {}, {"LevelM40", {0.13, 0}, 1}, {"LevelM40", {0.115, 0}, 1}, {}, {"LevelM40", {0.1, 0}, 1}, {"LevelM40", {0.085, 0}, 1}, {}, {"LevelM40", {0.07, 0}, 1}, {"LevelM40", {0.055, 0}, 1}, {}};
								};
								class VALM_1_40
								{
									type = "text";
									source = "static";
									text = -40;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM40", {-0.26, -0.032}, 1};
									right[] = {"LevelM40", {-0.2, -0.032}, 1};
									down[] = {"LevelM40", {-0.26, 0.018}, 1};
								};
								class VALM_1_40_R
								{
									type = "text";
									source = "static";
									text = -40;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM40", {0.26, -0.032}, 1};
									right[] = {"LevelM40", {0.32, -0.032}, 1};
									down[] = {"LevelM40", {0.26, 0.018}, 1};
								};
								class LevelP40 : Level0
								{
									type = "line";
									points[] = {{"LevelP40", {"-0.22-0.015", 0.02}, 1}, {"LevelP40", {"-0.22-0.015", 0}, 1}, {"LevelP40", {-0.06, 0}, 1}, {}, {"LevelP40", {0.06, 0}, 1}, {"LevelP40", {"+0.22+0.015", 0}, 1}, {"LevelP40", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_40
								{
									type = "text";
									source = "static";
									text = "40";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40", {-0.26, -0.017}, 1};
									right[] = {"LevelP40", {-0.2, -0.017}, 1};
									down[] = {"LevelP40", {-0.26, 0.033}, 1};
								};
								class VALP_1_40_R
								{
									type = "text";
									source = "static";
									text = "40";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP40", {0.26, -0.017}, 1};
									right[] = {"LevelP40", {0.32, -0.017}, 1};
									down[] = {"LevelP40", {0.26, 0.033}, 1};
								};
								class LevelM45 : Level0
								{
									type = "line";
									points[] = {{"LevelM45", {-0.235, -0.02}, 1}, {"LevelM45", {-0.235, 0}, 1}, {}, {"LevelM45", {-0.22, 0}, 1}, {"LevelM45", {-0.205, 0}, 1}, {}, {"LevelM45", {-0.19, 0}, 1}, {"LevelM45", {-0.175, 0}, 1}, {}, {"LevelM45", {-0.16, 0}, 1}, {"LevelM45", {-0.145, 0}, 1}, {}, {"LevelM45", {-0.13, 0}, 1}, {"LevelM45", {-0.115, 0}, 1}, {}, {"LevelM45", {-0.1, 0}, 1}, {"LevelM45", {-0.085, 0}, 1}, {}, {"LevelM45", {-0.07, 0}, 1}, {"LevelM45", {-0.055, 0}, 1}, {}, {}, {"LevelM45", {0.235, -0.02}, 1}, {"LevelM45", {0.235, 0}, 1}, {}, {"LevelM45", {0.22, 0}, 1}, {"LevelM45", {0.205, 0}, 1}, {}, {"LevelM45", {0.19, 0}, 1}, {"LevelM45", {0.175, 0}, 1}, {}, {"LevelM45", {0.16, 0}, 1}, {"LevelM45", {0.145, 0}, 1}, {}, {"LevelM45", {0.13, 0}, 1}, {"LevelM45", {0.115, 0}, 1}, {}, {"LevelM45", {0.1, 0}, 1}, {"LevelM45", {0.085, 0}, 1}, {}, {"LevelM45", {0.07, 0}, 1}, {"LevelM45", {0.055, 0}, 1}, {}};
								};
								class VALM_1_45
								{
									type = "text";
									source = "static";
									text = -45;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM45", {-0.26, -0.032}, 1};
									right[] = {"LevelM45", {-0.2, -0.032}, 1};
									down[] = {"LevelM45", {-0.26, 0.018}, 1};
								};
								class VALM_1_45_R
								{
									type = "text";
									source = "static";
									text = -45;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM45", {0.26, -0.032}, 1};
									right[] = {"LevelM45", {0.32, -0.032}, 1};
									down[] = {"LevelM45", {0.26, 0.018}, 1};
								};
								class LevelP45 : Level0
								{
									type = "line";
									points[] = {{"LevelP45", {"-0.22-0.015", 0.02}, 1}, {"LevelP45", {"-0.22-0.015", 0}, 1}, {"LevelP45", {-0.06, 0}, 1}, {}, {"LevelP45", {0.06, 0}, 1}, {"LevelP45", {"+0.22+0.015", 0}, 1}, {"LevelP45", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_45
								{
									type = "text";
									source = "static";
									text = "45";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP45", {-0.26, -0.017}, 1};
									right[] = {"LevelP45", {-0.2, -0.017}, 1};
									down[] = {"LevelP45", {-0.26, 0.033}, 1};
								};
								class VALP_1_45_R
								{
									type = "text";
									source = "static";
									text = "45";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP45", {0.26, -0.017}, 1};
									right[] = {"LevelP45", {0.32, -0.017}, 1};
									down[] = {"LevelP45", {0.26, 0.033}, 1};
								};
								class LevelM50 : Level0
								{
									type = "line";
									points[] = {{"LevelM50", {-0.235, -0.02}, 1}, {"LevelM50", {-0.235, 0}, 1}, {}, {"LevelM50", {-0.22, 0}, 1}, {"LevelM50", {-0.205, 0}, 1}, {}, {"LevelM50", {-0.19, 0}, 1}, {"LevelM50", {-0.175, 0}, 1}, {}, {"LevelM50", {-0.16, 0}, 1}, {"LevelM50", {-0.145, 0}, 1}, {}, {"LevelM50", {-0.13, 0}, 1}, {"LevelM50", {-0.115, 0}, 1}, {}, {"LevelM50", {-0.1, 0}, 1}, {"LevelM50", {-0.085, 0}, 1}, {}, {"LevelM50", {-0.07, 0}, 1}, {"LevelM50", {-0.055, 0}, 1}, {}, {}, {"LevelM50", {0.235, -0.02}, 1}, {"LevelM50", {0.235, 0}, 1}, {}, {"LevelM50", {0.22, 0}, 1}, {"LevelM50", {0.205, 0}, 1}, {}, {"LevelM50", {0.19, 0}, 1}, {"LevelM50", {0.175, 0}, 1}, {}, {"LevelM50", {0.16, 0}, 1}, {"LevelM50", {0.145, 0}, 1}, {}, {"LevelM50", {0.13, 0}, 1}, {"LevelM50", {0.115, 0}, 1}, {}, {"LevelM50", {0.1, 0}, 1}, {"LevelM50", {0.085, 0}, 1}, {}, {"LevelM50", {0.07, 0}, 1}, {"LevelM50", {0.055, 0}, 1}, {}};
								};
								class VALM_1_50
								{
									type = "text";
									source = "static";
									text = -50;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM50", {-0.26, -0.032}, 1};
									right[] = {"LevelM50", {-0.2, -0.032}, 1};
									down[] = {"LevelM50", {-0.26, 0.018}, 1};
								};
								class VALM_1_50_R
								{
									type = "text";
									source = "static";
									text = -50;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM50", {0.26, -0.032}, 1};
									right[] = {"LevelM50", {0.32, -0.032}, 1};
									down[] = {"LevelM50", {0.26, 0.018}, 1};
								};
								class LevelP50 : Level0
								{
									type = "line";
									points[] = {{"LevelP50", {"-0.22-0.015", 0.02}, 1}, {"LevelP50", {"-0.22-0.015", 0}, 1}, {"LevelP50", {-0.06, 0}, 1}, {}, {"LevelP50", {0.06, 0}, 1}, {"LevelP50", {"+0.22+0.015", 0}, 1}, {"LevelP50", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_50
								{
									type = "text";
									source = "static";
									text = "50";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50", {-0.26, -0.017}, 1};
									right[] = {"LevelP50", {-0.2, -0.017}, 1};
									down[] = {"LevelP50", {-0.26, 0.033}, 1};
								};
								class VALP_1_50_R
								{
									type = "text";
									source = "static";
									text = "50";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP50", {0.26, -0.017}, 1};
									right[] = {"LevelP50", {0.32, -0.017}, 1};
									down[] = {"LevelP50", {0.26, 0.033}, 1};
								};
								class LevelM60 : Level0
								{
									type = "line";
									points[] = {{"LevelM60", {-0.235, -0.02}, 1}, {"LevelM60", {-0.235, 0}, 1}, {}, {"LevelM60", {-0.22, 0}, 1}, {"LevelM60", {-0.205, 0}, 1}, {}, {"LevelM60", {-0.19, 0}, 1}, {"LevelM60", {-0.175, 0}, 1}, {}, {"LevelM60", {-0.16, 0}, 1}, {"LevelM60", {-0.145, 0}, 1}, {}, {"LevelM60", {-0.13, 0}, 1}, {"LevelM60", {-0.115, 0}, 1}, {}, {"LevelM60", {-0.1, 0}, 1}, {"LevelM60", {-0.085, 0}, 1}, {}, {"LevelM60", {-0.07, 0}, 1}, {"LevelM60", {-0.055, 0}, 1}, {}, {}, {"LevelM60", {0.235, -0.02}, 1}, {"LevelM60", {0.235, 0}, 1}, {}, {"LevelM60", {0.22, 0}, 1}, {"LevelM60", {0.205, 0}, 1}, {}, {"LevelM60", {0.19, 0}, 1}, {"LevelM60", {0.175, 0}, 1}, {}, {"LevelM60", {0.16, 0}, 1}, {"LevelM60", {0.145, 0}, 1}, {}, {"LevelM60", {0.13, 0}, 1}, {"LevelM60", {0.115, 0}, 1}, {}, {"LevelM60", {0.1, 0}, 1}, {"LevelM60", {0.085, 0}, 1}, {}, {"LevelM60", {0.07, 0}, 1}, {"LevelM60", {0.055, 0}, 1}, {}};
								};
								class VALM_1_60
								{
									type = "text";
									source = "static";
									text = -60;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM60", {-0.26, -0.032}, 1};
									right[] = {"LevelM60", {-0.2, -0.032}, 1};
									down[] = {"LevelM60", {-0.26, 0.018}, 1};
								};
								class VALM_1_60_R
								{
									type = "text";
									source = "static";
									text = -60;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM60", {0.26, -0.032}, 1};
									right[] = {"LevelM60", {0.32, -0.032}, 1};
									down[] = {"LevelM60", {0.26, 0.018}, 1};
								};
								class LevelP60 : Level0
								{
									type = "line";
									points[] = {{"LevelP60", {"-0.22-0.015", 0.02}, 1}, {"LevelP60", {"-0.22-0.015", 0}, 1}, {"LevelP60", {-0.06, 0}, 1}, {}, {"LevelP60", {0.06, 0}, 1}, {"LevelP60", {"+0.22+0.015", 0}, 1}, {"LevelP60", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_60
								{
									type = "text";
									source = "static";
									text = "60";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60", {-0.26, -0.017}, 1};
									right[] = {"LevelP60", {-0.2, -0.017}, 1};
									down[] = {"LevelP60", {-0.26, 0.033}, 1};
								};
								class VALP_1_60_R
								{
									type = "text";
									source = "static";
									text = "60";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP60", {0.26, -0.017}, 1};
									right[] = {"LevelP60", {0.32, -0.017}, 1};
									down[] = {"LevelP60", {0.26, 0.033}, 1};
								};
								class LevelM70 : Level0
								{
									type = "line";
									points[] = {{"LevelM70", {-0.235, -0.02}, 1}, {"LevelM70", {-0.235, 0}, 1}, {}, {"LevelM70", {-0.22, 0}, 1}, {"LevelM70", {-0.205, 0}, 1}, {}, {"LevelM70", {-0.19, 0}, 1}, {"LevelM70", {-0.175, 0}, 1}, {}, {"LevelM70", {-0.16, 0}, 1}, {"LevelM70", {-0.145, 0}, 1}, {}, {"LevelM70", {-0.13, 0}, 1}, {"LevelM70", {-0.115, 0}, 1}, {}, {"LevelM70", {-0.1, 0}, 1}, {"LevelM70", {-0.085, 0}, 1}, {}, {"LevelM70", {-0.07, 0}, 1}, {"LevelM70", {-0.055, 0}, 1}, {}, {}, {"LevelM70", {0.235, -0.02}, 1}, {"LevelM70", {0.235, 0}, 1}, {}, {"LevelM70", {0.22, 0}, 1}, {"LevelM70", {0.205, 0}, 1}, {}, {"LevelM70", {0.19, 0}, 1}, {"LevelM70", {0.175, 0}, 1}, {}, {"LevelM70", {0.16, 0}, 1}, {"LevelM70", {0.145, 0}, 1}, {}, {"LevelM70", {0.13, 0}, 1}, {"LevelM70", {0.115, 0}, 1}, {}, {"LevelM70", {0.1, 0}, 1}, {"LevelM70", {0.085, 0}, 1}, {}, {"LevelM70", {0.07, 0}, 1}, {"LevelM70", {0.055, 0}, 1}, {}};
								};
								class VALM_1_70
								{
									type = "text";
									source = "static";
									text = -70;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM70", {-0.26, -0.032}, 1};
									right[] = {"LevelM70", {-0.2, -0.032}, 1};
									down[] = {"LevelM70", {-0.26, 0.018}, 1};
								};
								class VALM_1_70_R
								{
									type = "text";
									source = "static";
									text = -70;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM70", {0.26, -0.032}, 1};
									right[] = {"LevelM70", {0.32, -0.032}, 1};
									down[] = {"LevelM70", {0.26, 0.018}, 1};
								};
								class LevelP70 : Level0
								{
									type = "line";
									points[] = {{"LevelP70", {"-0.22-0.015", 0.02}, 1}, {"LevelP70", {"-0.22-0.015", 0}, 1}, {"LevelP70", {-0.06, 0}, 1}, {}, {"LevelP70", {0.06, 0}, 1}, {"LevelP70", {"+0.22+0.015", 0}, 1}, {"LevelP70", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_70
								{
									type = "text";
									source = "static";
									text = "70";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70", {-0.26, -0.017}, 1};
									right[] = {"LevelP70", {-0.2, -0.017}, 1};
									down[] = {"LevelP70", {-0.26, 0.033}, 1};
								};
								class VALP_1_70_R
								{
									type = "text";
									source = "static";
									text = "70";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP70", {0.26, -0.017}, 1};
									right[] = {"LevelP70", {0.32, -0.017}, 1};
									down[] = {"LevelP70", {0.26, 0.033}, 1};
								};
								class LevelM80 : Level0
								{
									type = "line";
									points[] = {{"LevelM80", {-0.235, -0.02}, 1}, {"LevelM80", {-0.235, 0}, 1}, {}, {"LevelM80", {-0.22, 0}, 1}, {"LevelM80", {-0.205, 0}, 1}, {}, {"LevelM80", {-0.19, 0}, 1}, {"LevelM80", {-0.175, 0}, 1}, {}, {"LevelM80", {-0.16, 0}, 1}, {"LevelM80", {-0.145, 0}, 1}, {}, {"LevelM80", {-0.13, 0}, 1}, {"LevelM80", {-0.115, 0}, 1}, {}, {"LevelM80", {-0.1, 0}, 1}, {"LevelM80", {-0.085, 0}, 1}, {}, {"LevelM80", {-0.07, 0}, 1}, {"LevelM80", {-0.055, 0}, 1}, {}, {}, {"LevelM80", {0.235, -0.02}, 1}, {"LevelM80", {0.235, 0}, 1}, {}, {"LevelM80", {0.22, 0}, 1}, {"LevelM80", {0.205, 0}, 1}, {}, {"LevelM80", {0.19, 0}, 1}, {"LevelM80", {0.175, 0}, 1}, {}, {"LevelM80", {0.16, 0}, 1}, {"LevelM80", {0.145, 0}, 1}, {}, {"LevelM80", {0.13, 0}, 1}, {"LevelM80", {0.115, 0}, 1}, {}, {"LevelM80", {0.1, 0}, 1}, {"LevelM80", {0.085, 0}, 1}, {}, {"LevelM80", {0.07, 0}, 1}, {"LevelM80", {0.055, 0}, 1}, {}};
								};
								class VALM_1_80
								{
									type = "text";
									source = "static";
									text = -80;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM80", {-0.26, -0.032}, 1};
									right[] = {"LevelM80", {-0.2, -0.032}, 1};
									down[] = {"LevelM80", {-0.26, 0.018}, 1};
								};
								class VALM_1_80_R
								{
									type = "text";
									source = "static";
									text = -80;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM80", {0.26, -0.032}, 1};
									right[] = {"LevelM80", {0.32, -0.032}, 1};
									down[] = {"LevelM80", {0.26, 0.018}, 1};
								};
								class LevelP80 : Level0
								{
									type = "line";
									points[] = {{"LevelP80", {"-0.22-0.015", 0.02}, 1}, {"LevelP80", {"-0.22-0.015", 0}, 1}, {"LevelP80", {-0.06, 0}, 1}, {}, {"LevelP80", {0.06, 0}, 1}, {"LevelP80", {"+0.22+0.015", 0}, 1}, {"LevelP80", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_80
								{
									type = "text";
									source = "static";
									text = "80";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80", {-0.26, -0.017}, 1};
									right[] = {"LevelP80", {-0.2, -0.017}, 1};
									down[] = {"LevelP80", {-0.26, 0.033}, 1};
								};
								class VALP_1_80_R
								{
									type = "text";
									source = "static";
									text = "80";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP80", {0.26, -0.017}, 1};
									right[] = {"LevelP80", {0.32, -0.017}, 1};
									down[] = {"LevelP80", {0.26, 0.033}, 1};
								};
								class LevelM90 : Level0
								{
									type = "line";
									points[] = {{"LevelM90", {-0.235, -0.02}, 1}, {"LevelM90", {-0.235, 0}, 1}, {}, {"LevelM90", {-0.22, 0}, 1}, {"LevelM90", {-0.205, 0}, 1}, {}, {"LevelM90", {-0.19, 0}, 1}, {"LevelM90", {-0.175, 0}, 1}, {}, {"LevelM90", {-0.16, 0}, 1}, {"LevelM90", {-0.145, 0}, 1}, {}, {"LevelM90", {-0.13, 0}, 1}, {"LevelM90", {-0.115, 0}, 1}, {}, {"LevelM90", {-0.1, 0}, 1}, {"LevelM90", {-0.085, 0}, 1}, {}, {"LevelM90", {-0.07, 0}, 1}, {"LevelM90", {-0.055, 0}, 1}, {}, {}, {"LevelM90", {0.235, -0.02}, 1}, {"LevelM90", {0.235, 0}, 1}, {}, {"LevelM90", {0.22, 0}, 1}, {"LevelM90", {0.205, 0}, 1}, {}, {"LevelM90", {0.19, 0}, 1}, {"LevelM90", {0.175, 0}, 1}, {}, {"LevelM90", {0.16, 0}, 1}, {"LevelM90", {0.145, 0}, 1}, {}, {"LevelM90", {0.13, 0}, 1}, {"LevelM90", {0.115, 0}, 1}, {}, {"LevelM90", {0.1, 0}, 1}, {"LevelM90", {0.085, 0}, 1}, {}, {"LevelM90", {0.07, 0}, 1}, {"LevelM90", {0.055, 0}, 1}, {}};
								};
								class VALM_1_90
								{
									type = "text";
									source = "static";
									text = -90;
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM90", {-0.26, -0.032}, 1};
									right[] = {"LevelM90", {-0.2, -0.032}, 1};
									down[] = {"LevelM90", {-0.26, 0.018}, 1};
								};
								class VALM_1_90_R
								{
									type = "text";
									source = "static";
									text = -90;
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelM90", {0.26, -0.032}, 1};
									right[] = {"LevelM90", {0.32, -0.032}, 1};
									down[] = {"LevelM90", {0.26, 0.018}, 1};
								};
								class LevelP90 : Level0
								{
									type = "line";
									points[] = {{"LevelP90", {"-0.22-0.015", 0.02}, 1}, {"LevelP90", {"-0.22-0.015", 0}, 1}, {"LevelP90", {-0.06, 0}, 1}, {}, {"LevelP90", {0.06, 0}, 1}, {"LevelP90", {"+0.22+0.015", 0}, 1}, {"LevelP90", {"+0.22+0.015", 0.02}, 1}};
								};
								class VALP_1_90
								{
									type = "text";
									source = "static";
									text = "90";
									align = "left";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP90", {-0.26, -0.017}, 1};
									right[] = {"LevelP90", {-0.2, -0.017}, 1};
									down[] = {"LevelP90", {-0.26, 0.033}, 1};
								};
								class VALP_1_90_R
								{
									type = "text";
									source = "static";
									text = "90";
									align = "right";
									scale = 1;
									sourceScale = 1;
									pos[] = {"LevelP90", {0.26, -0.017}, 1};
									right[] = {"LevelP90", {0.32, -0.017}, 1};
									down[] = {"LevelP90", {0.26, 0.033}, 1};
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
								points[] = {{"PlaneW", {-0.02, 0}, 1}, {"PlaneW", {-0.04, 0}, 1}, {}, {"PlaneW", {0.02, 0}, 1}, {"PlaneW", {0.04, 0}, 1}, {}, {"PlaneW", {0, -0.019708}, 1}, {"PlaneW", {0, -0.0394161}, 1}, {}, {"PlaneW", {0, 0.019708}, 1}, {"PlaneW", {0, 0.0394161}, 1}, {}};
							};
						};
					};
					class RadarBoxes
					{
						type = "radartoview";
						pos0[] = {0.5, 0.5};
						pos10[] = {0.773, 0.773};
						width = 4;
						points[] = {{{-0.002, -0.002}, 1}, {{0.002, -0.002}, 1}, {{0.002, 0.002}, 1}, {{-0.002, 0.002}, 1}, {{-0.002, -0.002}, 1}};
					};
					class TargetDiamond
					{
						class shape
						{
							type = "line";
							width = 4;
							points[] = {{"Target", 1, "Limit0109", 1, {0.02, 0.02}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, 0.02}, 1}, {"Target", 1, "Limit0109", 1, {-0.02, -0.02}, 1}, {"Target", 1, "Limit0109", 1, {0.02, -0.02}, 1}, {"Target", 1, "Limit0109", 1, {0.02, 0.02}, 1}};
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
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\Z95Init.sqf';";
		};
		class UserActions
		{
			class Aircraft_MFD_Open_N
			{
				// displayName = "Open I-TGT System";
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
				UIPicture = "3as\3as_z95\data\plane_z95_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"B_MISSILE_PYLON", "B_BOMB_PYLON", "B_AMRAAM_D", "B_AMRAAM_D_RAIL"};
						attachment = "PylonRack_Missile_BIM9X_x1";
						priority = 10;
						maxweight = 50000;
						UIposition[] = {0.6, 0.45};
					};
					class pylons2 : pylons1
					{
						UIposition[] = {0.05, 0.45};
						mirroredMissilePos = 1;
					};
					class pylons3 : pylons1
					{
						priority = 9;
						UIposition[] = {0.55, 0.35};
					};
					class pylons4 : pylons3
					{
						priority = 13;
						UIposition[] = {0.1, 0.35};
						mirroredMissilePos = 3;
					};
					class pylons5 : pylons1
					{
						priority = 7;
						UIposition[] = {0.5, 0.25};
					};
					class pylons6 : pylons5
					{
						priority = 12;
						UIposition[] = {0.15, 0.25};
						mirroredMissilePos = 5;
					};
					class Pylons7
					{
						hardpoints[] = {"z95_CANON_PYLON"};
						priority = 5;
						attachment = "3as_PylonWeapon_Z95_240Rnd_Heavy_Shells";
						maxweight = 50000;
						UIposition[] = {0.325, 0.15};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
	};
	class 3AS_ARC_170_Republic;
	class UserActions;
	class JA_104th_3AS_Reaper_ARC_170_Blue : 3AS_ARC_170_Republic{
		Author = "212th + 3AS + Echo";
		displayName = "104th ARC-170 Blue";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "ls_clone_phase2_pilot";
		hiddenselections[] = {"camo1","camo2","guns"};
		hiddenselectionstextures[] = {"3as\3AS_ARC170\Data\units\501st_Main_Frame_CO.paa","3as\3AS_ARC170\Data\units\501st_Wings_Engines_CO.paa","3as\3AS_ARC170\Data\units\501st_Guns_CO.paa"};
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\Z95Init.sqf';";
		};
		class UserActions : UserActions
		{
			class Aircraft_MFD_Open_N
			{
				// displayName = "Open I-TGT System";
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
				UIPicture = "3as\3as_z95\data\plane_z95_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"B_MISSILE_PYLON", "B_BOMB_PYLON", "B_AMRAAM_D", "B_AMRAAM_D_RAIL"};
						attachment = "PylonRack_Missile_BIM9X_x1";
						priority = 10;
						maxweight = 50000;
						UIposition[] = {0.6, 0.45};
					};
					class pylons2 : pylons1
					{
						UIposition[] = {0.05, 0.45};
						mirroredMissilePos = 1;
					};
					class pylons3 : pylons1
					{
						priority = 9;
						UIposition[] = {0.55, 0.35};
					};
					class pylons4 : pylons3
					{
						priority = 13;
						UIposition[] = {0.1, 0.35};
						mirroredMissilePos = 3;
					};
					class pylons5 : pylons1
					{
						priority = 7;
						UIposition[] = {0.5, 0.25};
					};
					class pylons6 : pylons5
					{
						priority = 12;
						UIposition[] = {0.15, 0.25};
						mirroredMissilePos = 5;
					};
					class Pylons7
					{
						hardpoints[] = {"z95_CANON_PYLON"};
						priority = 5;
						attachment = "3as_PylonWeapon_Z95_240Rnd_Heavy_Shells";
						maxweight = 50000;
						UIposition[] = {0.325, 0.15};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
	};

	class 3as_Vwing_base;
	class JA_104th_VWing : 3as_Vwing_base{
		Author = "212th + 3AS + Echo";
		displayName = "V-Wing Fighter";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		hiddenselections[] = {"camo1","camo4","camo5"};
		hiddenselectionstextures[] = {"3AS\3AS_Vwing\data\vwing_main_co.paa","3AS\3AS_Vwing\data\Vwing_AstromechDroid_co.paa","3AS\3AS_Vwing\data\vwing_wings_co.paa"};
		weapons[] = {"RD501_Republic_Aircraft_Laser_AA", "CMFlareLauncher"};
		magazines[] = {"RD501_Republic_Aircraft_Laser_AA_Mag_600", "RD501_Republic_Aircraft_Laser_AA_Mag_600", "RD501_Republic_Aircraft_Laser_AA_Mag_600", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine"};
		crew = "ls_clone_phase2_pilot";

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
				UIPicture = "JangosVehicles\data\textures\plane_vwing_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"B_MISSILE_PYLON", "B_AMRAAM_D", "B_AMRAAM_D_RAIL"};
						attachment = "PylonRack_Missile_BIM9X_x1";
						priority = 10;
						maxweight = 5000;
						UIposition[] = {0.6, 0.45};
					};
					class pylons2 : pylons1
					{
						UIposition[] = {0.05, 0.45};
						mirroredMissilePos = 1;
					};
					class pylons3 : pylons1
					{
						priority = 9;
						UIposition[] = {0.55, 0.35};
					};
					class pylons4 : pylons3
					{
						priority = 13;
						UIposition[] = {0.1, 0.35};
						mirroredMissilePos = 3;
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};

		class EventHandlers : DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\MedAirInit.sqf';";
		};
	};
	class 3as_V19_base{
		class ACE_SelfActions;
	};
	class JA_104th_V19_Torrent : 3as_V19_base{
		Author = "212th + 3AS + Echo";
		displayName = "V-19 Torrent Heavy Interceptor";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "ls_clone_phase2_pilot";
		hiddenselectionstextures[] = {
			"3as\3as_v19\textures\wings_co.paa",
			"3as\3as_v19\textures\wing plates_co.paa",
			"3as\3as_v19\textures\hull_co.paa",
			"3as\3as_v19\textures\gun gear_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"3as\3as_v19\textures\pizzlepit_co.paa"
		};
		weapons[] = {"RD501_Republic_Aircraft_Laser_AA","3as_V19_Medium_Cannon","3as_ARC_Missile_AA","weapon_AMRAAMLauncher","CMFlareLauncher"};
		magazines[] = {"RD501_Republic_Aircraft_Laser_AA_Mag_600", "RD501_Republic_Aircraft_Laser_AA_Mag_600","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","3as_PylonMissile_ARC_2Rnd_Missile_AA","PylonRack_Missile_AMRAAM_C_x2","PylonRack_Missile_AMRAAM_C_x2","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells","3as_V19_800Rnd_Medium_shells"};
		class TextureSources
		{
			class ME
			{
				displayName = "Malevolence";
				author = "Dak";
				textures[] = {
					"3as\3as_v19\textures\wings_co.paa",
					"3as\3as_v19\textures\wing plates_co.paa",
					"3as\3as_v19\textures\hull_co.paa",
					"3as\3as_v19\textures\gun gear_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"3as\3as_v19\textures\pizzlepit_co.paa"
				};
				factions[] = {"104th_Guys"};
			};
			class Blue: ME
			{
				displayName = "Blue";
				textures[] = {
					"JangosVehicles\data\textures\wings_CO_104.paa", 
					"JangosVehicles\data\textures\wing_plates_CO_104.paa", 
					"JangosVehicles\data\textures\Hull_CO_104.paa", 
					"3as\3as_v19\textures\gun gear_co.paa",
					"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
					"3as\3as_v19\textures\pizzlepit_co.paa"
				};
			};
		};
		textureList[] = {"ME", 1, "Blue", 1};
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
					displayName = "104th";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = "_target setObjectTextureGlobal [0,'3as\3as_v19\textures\wings_co.paa']; _target setObjectTextureGlobal [1,'3as\3as_v19\textures\wing plates_co.paa']; _target setObjectTextureGlobal [2,'3as\3as_v19\textures\hull_co.paa']; _target setObjectTextureGlobal [3,'3as\3as_v19\textures\gun gear_co.paa']; _target setObjectTextureGlobal [4,'a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa']; _target setObjectTextureGlobal [5,'3as\3as_v19\textures\pizzlepit_co.paa'];";
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class JA_104th_Skins
				{
					displayname = "104th Skins";
					class 104th_Blue : DefaultSkin
					{
						displayName = "104th Blue";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\wings_CO_104.paa']; _target setObjectTextureGlobal [1,'JangosVehicles\data\textures\wing_plates_CO_104.paa']; _target setObjectTextureGlobal [2,'JangosVehicles\data\textures\Hull_CO_104.paa']; _target setObjectTextureGlobal [3,'3as\3as_v19\textures\gun gear_co.paa']; _target setObjectTextureGlobal [4,'a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa']; _target setObjectTextureGlobal [5,'3as\3as_v19\textures\pizzlepit_co.paa'];";
					};
				};
				class Custom_Skins
				{
					displayname = "Custom Skins";
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
				UIPicture = "JangosVehicles\data\textures\plane_vwing_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"B_MISSILE_PYLON", "B_AMRAAM_D", "B_AMRAAM_D_RAIL"};
						attachment = "PylonRack_Missile_BIM9X_x1";
						priority = 10;
						maxweight = 5000;
						UIposition[] = {0.6, 0.45};
					};
					class pylons2 : pylons1
					{
						UIposition[] = {0.05, 0.45};
						mirroredMissilePos = 1;
					};
					class pylons3 : pylons1
					{
						priority = 9;
						UIposition[] = {0.55, 0.35};
					};
					class pylons4 : pylons3
					{
						priority = 13;
						UIposition[] = {0.1, 0.35};
						mirroredMissilePos = 3;
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
	};

	class JA_104th_Base_Falcon_Armed : OPTRE_UNSC_falcon
	{
		author = "Dak";
		displayName = "Falcon Armed"; // Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		visionMode[] = {"Normal", "NVG", "Ti"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		memoryPointDriverOptics = "gunner1";
		unitInfoType = "RscOptics_CAS_Pilot";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		weapons[] = {"OPTRE_M638", "CMFlareLauncher", "Laserdesignator_pilotCamera"};
		magazines[] = {"OPTRE_2000Rnd_20mm_HE", "OPTRE_2000Rnd_20mm_HE", "168Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "Laserbatteries"};
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
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR", "B_AGM65_RAIL", "B_MISSILE_PYLON"};
						attachment = "PylonRack_12Rnd_PG_missiles";
						bay = -1;
						priority = 3;
						UIposition[] = {0.35, 0.1};
						turret[] = {};
					};
					class WingPylonLeft1 : WingPylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35, 0.467};
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
	class JA_104th_Base_Pelican_Unarmed : OPTRE_Pelican_unarmed
	{
		author = "Dak";
		displayName = "Pelican Unarmed"; // Name shown for vehicle in Editor/Zeus/Map/Scroll menu
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
			class RampClose : RampOpen
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
	class JA_104th_Base_Pelican_Armed : OPTRE_Pelican_armed
	{
		author = "Dak";
		displayName = "Pelican Armed"; // Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		weapons[] = {"CMFlareLauncher", "OPTRE_missiles_Anvil1", "Laserdesignator_pilotCamera"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "Laserbatteries"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
			class RampClose : RampOpen
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

	class JA_104th_3AS_Reaper_Y_Wing : Aux212_3AS_Reaper_Y_Wing
	{
		Author = "212th + 3AS + Echo";
		displayName = "104th Reaper BTL-B Y-Wing";
		crew = "ls_clone_phase2_pilot";
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		radarTargetSize = 1; // No idea who in 3AS thought it's a good idea to make the Y-Wing more stealthy than the stealth fighters, so I'm changing it.
		irTargetSize = 1;
		VTOLPitchInfluence = 12;
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		stallSpeed = 0;

		armor = 550;
		weapons[] = {"Laserdesignator_pilotCamera", "CMFlareLauncher", "212th_YWing_Voltic_Cannon", "RD501_Republic_Aircraft_Laser_AA", "212th_A2A_MissileSystem", "212th_WGM_MissileSystem", "212th_Gizka_Bomb_ReleaseSystem"};
		magazines[] = {"Laserbatteries", "300Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "RD501_Republic_Aircraft_Laser_AA_Mag_600", "RD501_Republic_Aircraft_Laser_AA_Mag_600", "RD501_Republic_Aircraft_Laser_AA_Mag_600", "RD501_Republic_Aircraft_Laser_AA_Mag_600", "212th_Drexl_4Rnd_A2A_mag", "212th_Drexl_4Rnd_A2A_mag", "212th_Drexl_4Rnd_A2A_mag", "212th_Basilisk_4Rnd_WGM_mag", "212th_Basilisk_4Rnd_WGM_mag", "212th_Basilisk_4Rnd_WGM_mag", "212th_Basilisk_4Rnd_WGM_mag", "212th_Gizka_Bomb_mag", "212th_Gizka_Bomb_mag", "212th_Gizka_Bomb_mag", "212th_Gizka_Bomb_mag"};
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

		class ACE_SelfActions
		{
			class LAAT_HUD_Changer
			{
				displayName = "Change HUD Color";
				exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				showDisabled = 0;
				priority = 2.5;
				icon = "212th\Other\212th_Func\textures\vic_hud\colorWheel.paa";
				class Red_HUD
				{
					displayName = "Red HUD Color";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = "[1,0,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					showDisabled = 0;
					runOnHover = 1;
					priority = 2.5;
					icon = "212th\Other\212th_Func\textures\vic_hud\red.paa";
				};
				class Orange_HUD : Red_HUD
				{
					displayName = "Orange HUD Color";
					statement = "[1,.05,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\orange.paa";
				};
				class Yellow_HUD : Red_HUD
				{
					displayName = "Yellow HUD Color";
					statement = "[1,1,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\yellow.paa";
				};
				class Green_HUD : Red_HUD
				{
					displayName = "Green HUD Color";
					statement = "[0,1,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\green.paa";
				};
				class Cyan_HUD : Red_HUD
				{
					displayName = "Cyan HUD Color";
					statement = "[0,1,1,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\cyan.paa";
				};
				class Blue_HUD : Red_HUD
				{
					displayName = "Blue HUD Color";
					statement = "[0,0,1,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\blue.paa";
				};
				class Purple_HUD : Red_HUD
				{
					displayName = "Purple HUD Color";
					statement = "[.5,0,.5,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\purple.paa";
				};
				class White_HUD : Red_HUD
				{
					displayName = "White HUD Color";
					statement = "[1,1,1,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\white.paa";
				};
				class Black_HUD : Red_HUD
				{
					displayName = "Black HUD Color";
					statement = "[0,0,0,1,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\black.paa";
				};
				class Clear_HUD : Red_HUD
				{
					displayName = "No HUD Color";
					statement = "[1,1,1,0,vehicle player] spawn Aux212_fnc_hud_color_change;";
					icon = "212th\Other\212th_Func\textures\vic_hud\noHud.paa";
				};
			};
		};
		class EventHandlers : DefaultEventhandlers
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
				UIPicture = "JangosVehicles\data\textures\plane_ywing_pylon_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "B_AMRAAM_D", "B_AMRAAM_D_RAIL", "DAR", "DAGR", "B_GBU12", "B_AGM65_RAIL", "20MM_TWIN_CANNON", "B_MISSILE_PYLON", "B_BOMB_PYLON"};
						attachment = "PylonRack_Missile_AMRAAM_D_x1";
						priority = 10;
						maxweight = 8000;
						UIposition[] = {0.5, 0.25};
					};
					class pylons2 : pylons1
					{
						UIposition[] = {0.15, 0.25};
						mirroredMissilePos = 1;
					};
					class pylons3 : pylons1
					{
						priority = 9;
						UIposition[] = {0.55, 0.35};
					};
					class pylons4 : pylons3
					{
						UIposition[] = {0.1, 0.35};
						mirroredMissilePos = 3;
					};
					class pylons5 : pylons1
					{
						priority = 7;
						UIposition[] = {0.6, 0.45};
					};
					class pylons6 : pylons5
					{
						UIposition[] = {0.05, 0.45};
						mirroredMissilePos = 5;
					};
					class pylons7 : pylons1
					{
						priority = 9;
						UIposition[] = {0.45, 0.4};
					};
					class pylons8 : pylons3
					{
						UIposition[] = {0.2, 0.4};
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
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F", "PylonMissile_1Rnd_Bomb_04_F", "PylonRack_Missile_AMRAAM_D_x2", "PylonRack_Missile_AMRAAM_D_x2", "PylonRack_Missile_BIM9X_x1", "PylonRack_Missile_BIM9X_x1", "PylonMissile_1Rnd_Bomb_04_F", "PylonMissile_1Rnd_Bomb_04_F"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonMissile_1Rnd_Bomb_04_F", "PylonMissile_1Rnd_Bomb_04_F", "PylonMissile_1Rnd_Bomb_04_F", "PylonMissile_1Rnd_Bomb_04_F", "PylonRack_Missile_AGM_02_x2", "PylonRack_Missile_AGM_02_x2", "PylonMissile_1Rnd_Bomb_04_F", "PylonMissile_1Rnd_Bomb_04_F"};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};
	};

	class JA_104th_3AS_Reaper_Y_Wing_Blue : JA_104th_3AS_Reaper_Y_Wing
	{
		displayName = "104th Reaper BTL-B Y-Wing Blue";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\YWing_Body_Blue.paa", "3as\3as_btlb\data\detail_co.paa", "3as\3as_btlb\data\interior_co.paa"};
		class TextureSources
		{
			class Blue
			{
				displayName = "Blue Leader";
				author = "$STR_3as_Studio";
				textures[] = {"JangosVehicles\data\textures\YWing_Body_Blue.paa", "3as\3as_btlb\data\detail_co.paa", "3as\3as_btlb\data\interior_co.paa"};
				factions[] = {"104th_Guys"};
			};
		};
	};

	class JA_104th_3AS_Reaper_Y_Wing_BlueLeader : JA_104th_3AS_Reaper_Y_Wing
	{
		displayName = "104th Reaper BTL-B Y-Wing Blue Leader";
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\YWing_Body_BlueLeader.paa", "3as\3as_btlb\data\detail_co.paa", "3as\3as_btlb\data\interior_co.paa"};
		class TextureSources
		{
			class BlueLeader
			{
				displayName = "Blue Leader";
				author = "Dak";
				textures[] = {
					"JangosVehicles\data\textures\YWing_Body_BlueLeader.paa", 
					"3as\3as_btlb\data\detail_co.paa", 
					"3as\3as_btlb\data\interior_co.paa"
				};
				factions[] = {"104th_Guys"};
			};
			class Blue: BlueLeader
			{
				displayName = "Blue";
				textures[] = {
					"JangosVehicles\data\textures\YWing_Body_Blue.paa", 
					"3as\3as_btlb\data\detail_co.paa", 
					"3as\3as_btlb\data\interior_co.paa"
				};
			};
		};
		textureList[] = {"BlueLeader", 1, "Blue", 1};
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
					displayName = "104th";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\YWing_Body_BlueLeader.paa']; _target setObjectTextureGlobal [1,'3as\3as_btlb\data\detail_co.paa']; _target setObjectTextureGlobal [2,'3as\3as_btlb\data\interior_co.paa'];";
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class JA_104th_Skins
				{
					displayname = "104th Skins";
					class 104th_Blue : DefaultSkin
					{
						displayName = "104th Blue";
						statement = "_target setObjectTextureGlobal [0,'JangosVehicles\data\textures\YWing_Body_Blue.paa']; _target setObjectTextureGlobal [1,'3as\3as_btlb\data\detail_co.paa']; _target setObjectTextureGlobal [2,'3as\3as_btlb\data\interior_co.paa'];";
					};
				};
				class Custom_Skins
				{
					displayname = "Custom Skins";
				};
			};
		};
	};

	class JA_104th_vulture_dynamicLoadout_base : 3AS_Vulture_Base_F{
		irTargetSize = 1;
		radarTargetSize = 1;
		armor = 50;
		displayName = "Swarm-Vulture Droid";
	};

	class JA_104th_Vulture_dynamicLoadout : 3AS_CIS_Vulture_CAS_F{
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

	class JA_104th_Vulture_dynamicLoadout_AA : 3AS_CIS_Vulture_AA_F{
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
					class IRSensorComponent : SensorTemplateIR
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
						color[] = {1, 0, 0, 1};
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
					class VisualSensorComponent : SensorTemplateVisual
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
						color[] = {1, 1, 0.5, 0.8};
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
					class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
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
						color[] = {0.5, 1, 0.5, 0.5};
						minTrackableSpeed = -1e+10;
						maxTrackableSpeed = 1e+10;
						minTrackableATL = -1e+10;
						maxTrackableATL = 1e+10;
						allowsMarking = 0;
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
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
						color[] = {0, 1, 1, 1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableSpeed = -1e+10;
						maxTrackableSpeed = 1e+10;
						minTrackableATL = -1e+10;
						maxTrackableATL = 1e+10;
					};
					class LaserSensorComponent : SensorTemplateLaser
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
						color[] = {1, 1, 1, 0};
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
					class NVSensorComponent : SensorTemplateNV
					{
						componentType = "NVSensorComponent";
						color[] = {1, 1, 1, 0};
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
						hardpoints[] = {"vulture_AA", "B_BIM9X_RAIL", "B_BIM9X_DUAL_RAIL"};
						attachment = "3as_PylonMissle_Vulture_2Rnd_Missile_AA";
						priority = 5;
						maxweight = 1200;
						UIposition[] = {0.35, 0.15};
					};
					class Pylons2 : Pylons1
					{
						maxweight = 1200;
						UIposition[] = {0.35, -0.15};
					};
					class Pylons3 : Pylons1
					{
						UIposition[] = {0.35, 0.3};
						mirroredMissilePos = 2;
					};
					class Pylons4 : Pylons2
					{
						UIposition[] = {0.35, -0.3};
						mirroredMissilePos = 1;
					};
					class Pylons7 : Pylons1
					{
						priority = 10;
						attachment = "3as_PylonWeapon_100Rnd_Vulture_Heavy_shells";
						maxweight = 1200;
						UIposition[] = {0.1, 0.27};
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
						attachment[] = {"3as_PylonMissle_Vulture_2Rnd_Missile_AA", "3as_PylonMissle_Vulture_2Rnd_Missile_AA", "3as_PylonWeapon_100Rnd_Vulture_Heavy_shells"};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeft
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
						range[] = {8000, 2000, 4000, 16000, 30000};
						resource = "RscCustomInfoSensors";
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
						range[] = {8000, 2000, 4000, 16000, 30000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	};

	class JA_104th_Vulture_dynamicLoadout_Bare : 3AS_CIS_Vulture_F{
		irTargetSize = 1;
		radarTargetSize = 1;
		armor = 50;
		Displayname = "Swarm-Vulture Droid (Guns Only)";
	};

	// Split

	class JA_104th_Base_TX130 : SWLG_tanks_tx130
	{
		author = "Dak";
		displayName = "TX-130";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\TX130Init.sqf';";
		};
	};

	class JA_104th_BARC : ls_vehicle_barc
	{
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		displayName = "BARC Speeder 104th";
		author = "Legion Studios + Echo";
		maxSpeed = 280;
		hiddenSelectionsTextures[] = {"JangosVehiclesGround\data\textures\Body_104_CO.paa", "JangosVehiclesGround\data\textures\Weapons_104_CO.paa", "JangosVehiclesGround\data\textures\Dashboard_104_CO.paa"};
		class HitPoints : HitPoints
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
			class HitBody : HitBody
			{
				name = "body";
				visual = "camo1";
				passThrough = 1;
			};
			class HitGlass1 : HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2 : HitGlass2
			{
				armor = 0.25;
			};
			class HitGlass3 : HitGlass3
			{
				armor = 0.25;
			};
			class HitGlass4 : HitGlass4
			{
				armor = 0.25;
			};
		};
		class TextureSources
		{
			class barc_base
			{
				displayName = "104th";
				author = "Dak";
				textures[] = {
					"JangosVehiclesGround\data\textures\Body_104_CO.paa", 
					"JangosVehiclesGround\data\textures\Weapons_104_CO.paa", 
					"JangosVehiclesGround\data\textures\Dashboard_104_CO.paa",
				};
				factions[] = {"104th_Guys"};
			};
			class barc_WP: barc_base
			{
				displayName = "104th WolfPack Logo";
				textures[] = {
					"JangosVehiclesGround\data\textures\Body_104_wp_CO.paa", 
					"JangosVehiclesGround\data\textures\Weapons_104_CO.paa", 
					"JangosVehiclesGround\data\textures\Dashboard_104_CO.paa",
				};
			};
			class barc_Talon: barc_base
			{
				displayName = "104th Talon Logo";
				textures[] = {
					"JangosVehiclesGround\data\textures\Body_104_talon_CO.paa", 
					"JangosVehiclesGround\data\textures\Weapons_104_CO.paa", 
					"JangosVehiclesGround\data\textures\Dashboard_104_CO.paa",
				};
			};
		};
		textureList[] = {"barc_base", 1, "barc_WP", 1, "barc_Talon", 1};
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
					displayName = "104th";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement = "_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\Body_104_CO.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\Weapons_104_CO.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Dashboard_104_CO.paa'];";
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class JA_104th_Skins
				{
					displayname = "104th Skins";
					class 104th_Logo : DefaultSkin
					{
						displayName = "104th Logo";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\Body_104_wp_CO.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\Weapons_104_CO.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Dashboard_104_CO.paa'];";
					};
					class 104th_Talon : DefaultSkin
					{
						displayName = "104th Talon";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\Body_104_talon_CO.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\Weapons_104_CO.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Dashboard_104_CO.paa'];";
					};
					class 104th_Sniper : DefaultSkin
					{
						displayName = "104th Sniper";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\Body_104_sniper_CO.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\Weapons_104_CO.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Dashboard_104_CO.paa'];";
					};
					class 104th_Medic : DefaultSkin
					{
						displayName = "104th Medic";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\Body_104_medic_CO.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\Weapons_104_CO.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Dashboard_104_CO.paa'];";
					};
					class 104th_EOD : DefaultSkin
					{
						displayName = "104th EOD";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\Body_104_eod_CO.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\Weapons_104_CO.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Dashboard_104_CO.paa'];";
					};
				};
				class Custom_Skins
				{
					displayname = "Custom Skins";
					class 104th_Beans : DefaultSkin
					{
						displayName = "Beans";
						statement = "_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\Body_104_beans_CO.paa']; _target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\Weapons_104_CO.paa']; _target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Dashboard_104_CO.paa'];";
					};
				};
			};
		};
	};

	// class 3as_nuclass_f;
	class 3AS_Nuclass;
	/*
	class 3AS_Nuclass: 3as_nuclass_f
	{
		class ACE_SelfActions;
	};
	*/
	class JA_104th_NU : 3AS_Nuclass{
		displayName = "104th Nu-Class Shuttle";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		armor = 600;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		visionMode[] = {"Normal", "NVG", "Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\nu\exterior_104_CO.paa", "JangosVehicles\data\textures\nu\wings_104_CO.paa", "JangosVehicles\data\textures\nu\interior_104_co.paa", "JangosVehicles\data\textures\nu\cockpit_doors_104_co.paa"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
			class rampClose : rampOpen
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
			class frontrampClose : frontrampOpen
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
		class EventHandlers : DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\NuInit.sqf';";
		};
	};

	// Xi'an for Star Wars
	// Xian Infantry

	class VTOL_02_infantry_dynamicLoadout_base_F;
	class O_T_VTOL_02_infantry_dynamicLoadout_F : VTOL_02_infantry_dynamicLoadout_base_F{
		class NewTurret;
		class CargoTurret;
	};
	class JA_104th_Xian_Infantry : O_T_VTOL_02_infantry_dynamicLoadout_F
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
		visionMode[] = {"Normal", "NVG", "Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		weapons[] = {"CMFlareLauncher", "Laserdesignator_pilotCamera"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "Laserbatteries"};
		airBrakeFrictionCoef = 75;

		class Turrets
		{
			class GunnerTurret : NewTurret
			{
				animationSourceBody = "Gunner_rotH_source";
				animationSourceGun = "Gunner_rotV_source";
				body = "Cannon_turret_rot";
				castGunnerShadow = 1;
				commanding = -1;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
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
				magazines[] = {"212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "Laserbatteries"};
				weapons[] = {"212th_YWing_Voltic_Cannon", "Laserdesignator_mounted"};
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
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
					};
					class Medium : Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
						opticsDisplayName = "M";
					};
					class Narrow : Wide
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
						visionMode[] = {"Normal", "NVG"};
					};
				};
				class Components
				{
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
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
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
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class CargoTurret_01 : CargoTurret
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
					limitsArrayTop[] = {{10.6151, -94.8295}, {9.1304, -73.6575}, {-11.9946, -56.092}};
					limitsArrayBottom[] = {{-30.122, -94.8727}, {-26.9148, -75.6837}, {-26.8921, -56.0434}};
				};
				class TurnIn : TurnOut
				{
				};
			};
			class CargoTurret_02 : CargoTurret_01
			{
				memoryPointsGetInGunner = "GetIn_cargo_ffv_right_pos";
				memoryPointsGetInGunnerDir = "GetIn_cargo_ffv_right_dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				proxyIndex = 8;
				class TurnOut
				{
					limitsArrayTop[] = {{-2.025, 25.5708}, {15.6257, 39.3879}, {18.1105, 67.7249}};
					limitsArrayBottom[] = {{-19.7491, 25.1857}, {-19.2213, 45.1216}, {-20.604, 66.8477}};
				};
				class TurnIn : TurnOut
				{
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
						range[] = {8000, 2000, 4000, 16000, 30000};
						resource = "RscCustomInfoSensors";
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
						range[] = {8000, 2000, 4000, 16000, 30000};
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
						hardpoints[] = {"20MM_TWIN_CANNON", "B_MISSILE_PYLON", "B_BOMB_PYLON", "O_MISSILE_PYLON", "O_BOMB_PYLON", "UNI_SCALPEL"};
						turret[] = {0};
						UIposition[] = {0.35, 0.16};
					};
					class PylonRight2 : PylonRight1
					{
						attachment = "PylonRack_19Rnd_Rocket_Skyfire";
						priority = 4;
						hardpoints[] = {"20MM_TWIN_CANNON", "B_MISSILE_PYLON", "B_BOMB_PYLON", "O_MISSILE_PYLON", "O_BOMB_PYLON", "UNI_SCALPEL"};
						UIposition[] = {0.33, 0.21};
					};
					class PylonLeft2 : PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.33, 0.34};
					};
					class PylonLeft1 : PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35, 0.39};
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
						attachment[] = {"PylonRack_4Rnd_LG_scalpel", "PylonRack_19Rnd_Rocket_Skyfire", "PylonRack_19Rnd_Rocket_Skyfire", "PylonRack_4Rnd_LG_scalpel"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel", "PylonRack_4Rnd_LG_scalpel", "PylonRack_4Rnd_LG_scalpel", "PylonRack_4Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonRack_19Rnd_Rocket_Skyfire", "PylonMissile_1Rnd_Bomb_03_F", "PylonMissile_1Rnd_Bomb_03_F", "PylonRack_19Rnd_Rocket_Skyfire"};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel", "PylonRack_1Rnd_Missile_AGM_01_F", "PylonRack_1Rnd_Missile_AGM_01_F", "PylonRack_4Rnd_LG_scalpel"};
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
				textures[] = {"JangosVehicles\data\textures\xian\xian_ext01_CO.paa", "JangosVehicles\data\textures\xian\xian_ext02_CO.paa", "JangosVehicles\data\textures\xian\xian_ext03_L_CO.paa", "JangosVehicles\data\textures\xian\xian_ext03_R_CO.paa"};
			};
		};
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\xian\xian_ext01_CO.paa", "JangosVehicles\data\textures\xian\xian_ext02_CO.paa", "JangosVehicles\data\textures\xian\xian_ext03_L_CO.paa", "JangosVehicles\data\textures\xian\xian_ext03_R_CO.paa"};

		class EventHandlers : DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\MedAirInit.sqf';";
		};
	};

	// Xian Vehicle
	class VTOL_02_vehicle_dynamicLoadout_base_F;
	class O_T_VTOL_02_vehicle_dynamicLoadout_F : VTOL_02_vehicle_dynamicLoadout_base_F{
		class NewTurret;
	};
	class JA_104th_Xian_Vehicle : O_T_VTOL_02_vehicle_dynamicLoadout_F{
		displayName = "104th Xian Vehicle";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JLTS_Clone_P2_DC15S";
		typicalcargo[] = {"JLTS_Clone_P2_DC15S"};
		visionMode[] = {"Normal", "NVG", "Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		weapons[] = {"CMFlareLauncher", "Laserdesignator_pilotCamera"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "Laserbatteries"};
		airBrakeFrictionCoef = 75;
		class Turrets
		{
			class GunnerTurret : NewTurret
			{
				animationSourceBody = "Gunner_rotH_source";
				animationSourceGun = "Gunner_rotV_source";
				body = "Cannon_turret_rot";
				castGunnerShadow = 1;
				commanding = -1;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
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
				magazines[] = {"212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "212th_Voltic_Cannon_Magazine", "Laserbatteries"};
				weapons[] = {"212th_YWing_Voltic_Cannon", "Laserdesignator_mounted"};
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
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
					};
					class Medium : Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
						opticsDisplayName = "M";
					};
					class Narrow : Wide
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
						visionMode[] = {"Normal", "NVG"};
					};
				};
				class Components
				{
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
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
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
								range[] = {4000, 2000, 16000, 8000};
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
						range[] = {8000, 2000, 4000, 16000, 30000};
						resource = "RscCustomInfoSensors";
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
						range[] = {8000, 2000, 4000, 16000, 30000};
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
						hardpoints[] = {"20MM_TWIN_CANNON", "B_MISSILE_PYLON", "B_BOMB_PYLON", "O_MISSILE_PYLON", "O_BOMB_PYLON", "UNI_SCALPEL"};
						turret[] = {0};
						UIposition[] = {0.35, 0.16};
					};
					class PylonRight2 : PylonRight1
					{
						attachment = "PylonRack_19Rnd_Rocket_Skyfire";
						priority = 4;
						hardpoints[] = {"20MM_TWIN_CANNON", "B_MISSILE_PYLON", "B_BOMB_PYLON", "O_MISSILE_PYLON", "O_BOMB_PYLON", "UNI_SCALPEL"};
						UIposition[] = {0.33, 0.21};
					};
					class PylonLeft2 : PylonRight2
					{
						mirroredMissilePos = 2;
						UIposition[] = {0.33, 0.34};
					};
					class PylonLeft1 : PylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35, 0.39};
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
						attachment[] = {"PylonRack_4Rnd_LG_scalpel", "PylonRack_19Rnd_Rocket_Skyfire", "PylonRack_19Rnd_Rocket_Skyfire", "PylonRack_4Rnd_LG_scalpel"};
					};
					class AT
					{
						displayName = "$STR_A3_cfgmagazines_titan_at_dns";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel", "PylonRack_4Rnd_LG_scalpel", "PylonRack_4Rnd_LG_scalpel", "PylonRack_4Rnd_LG_scalpel"};
					};
					class CAS
					{
						displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[] = {"PylonRack_19Rnd_Rocket_Skyfire", "PylonMissile_1Rnd_Bomb_03_F", "PylonMissile_1Rnd_Bomb_03_F", "PylonRack_19Rnd_Rocket_Skyfire"};
					};
					class HAT
					{
						displayName = "$STR_A3_Heavy_AT_preset_displayName";
						attachment[] = {"PylonRack_4Rnd_LG_scalpel", "PylonRack_1Rnd_Missile_AGM_01_F", "PylonRack_1Rnd_Missile_AGM_01_F", "PylonRack_4Rnd_LG_scalpel"};
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
				textures[] = {"JangosVehicles\data\textures\xian\xian_ext01_CO.paa", "JangosVehicles\data\textures\xian\xian_ext02_CO.paa", "JangosVehicles\data\textures\xian\xian_ext03_L_CO.paa", "JangosVehicles\data\textures\xian\xian_ext03_R_CO.paa"};
			};
		};
		hiddenSelectionsTextures[] = {"JangosVehicles\data\textures\xian\xian_ext01_CO.paa", "JangosVehicles\data\textures\xian\xian_ext02_CO.paa", "JangosVehicles\data\textures\xian\xian_ext03_L_CO.paa", "JangosVehicles\data\textures\xian\xian_ext03_R_CO.paa"};

		class EventHandlers : DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\MedAirInit.sqf';";
		};
	};

	// Republic Transport
	class 3AS_Republic_Transport_01;
	class JA_104th_Republic_Transport : 3AS_Republic_Transport_01{
		displayName = "104th Republic Transport";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JLTS_Clone_P2_DC15S";
		typicalcargo[] = {"JLTS_Clone_P2_DC15S"};
		visionMode[] = {"Normal", "NVG", "Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		armor = 600;
		irTargetSize = 1;	 // Again, raising this value to not make it a Stealth ship.
		radarTargetSize = 1; // Again, raising this value to not make it a Stealth ship.
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		class EventHandlers : DefaultEventhandlers
		{
			Init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\RTInit.sqf';";
		};
		hiddenselectionstextures[] = {"JangosVehicles\data\textures\104_hs_ext_co.paa", "3as\3as_starships\data\hs_int_co.paa", "a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"};
	};

	class JMSLLTE_UwingHeli_Reb_F;
	class JA_104th_Uwing : JMSLLTE_UwingHeli_Reb_F
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
		visionMode[] = {"Normal", "NVG", "Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		armor = 200;
		cargoAction[] = {"passenger_generic01_foldhands"};
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		textureList[] = {"Tex_Uwing_blue", 1, "Tex_Uwing_white", 1, "Tex_Uwing_rogue", 1, "Tex_Uwing_anvil", 1, "Tex_Uwing_NRearly", 1, "Tex_Uwing_CavernAngels", 1};
		weapons[] = {"ls_weapon_laati_turret_50mm_he", "ls_weapon_laati_turret_50mm_ap", "Laserdesignator_pilotCamera", "FC_Dropcrate_PW1", "CMFlareLauncher"};
		magazines[] = {"ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "Laserbatteries", "Pylon_FC_Dropcrate_P_1rnd", "Pylon_FC_Dropcrate_P_1rnd", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		class EventHandlers : DefaultEventhandlers
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
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR", "B_AGM65_RAIL", "B_MISSILE_PYLON"};
						attachment = "PylonRack_12Rnd_PG_missiles";
						bay = -1;
						priority = 3;
						UIposition[] = {0.35, 0.1};
						turret[] = {};
					};
					class WingPylonLeft1 : WingPylonRight1
					{
						mirroredMissilePos = 1;
						UIposition[] = {0.35, 0.467};
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
			class CloseRightDoor : OpenRightDoor
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
			class SfoilsClose : SfoilsOpen
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
	class JA_104th_N1 : JMSLLTE_N1fighter_naboo_F
	{
		displayName = "104th N-1 Starfighter";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JLTS_Clone_P2_DC15S";
		visionMode[] = {"Normal", "NVG", "Ti"};
		LockDetectionSystem = "2+4+8+16";
		incomingMissileDetectionSystem = "2+4+8+16";
		hiddenSelectionsTextures[] = {"\JMSLLTE_vehicles_air\N1\data\n1_base_co.paa", "\JMSLLTE_vehicles_air\Xwing\data\droid_dark_co.paa"};
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
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
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
		class EventHandlers : DefaultEventhandlers
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
						UIposition[] = {0.2, 0.3};
						turret[] = {};
					};
					class pylons2 : pylons1
					{
						UIposition[] = {0.4, 0.3};
						mirroredMissilePos = 1;
					};
					class pylons3
					{
						maxweight = 500;
						hardpoints[] = {"JMSLLTE_MG7A_10RND_PROTON_PYLON"};
						attachment = "PylonRack_JMSLLTE_10Rnd_MG7_proton_missiles";
						priority = 1;
						UIposition[] = {0.3, 0.2};
						turret[] = {};
					};
					class pylons4
					{
						maxweight = 1200;
						hardpoints[] = {"SCALPEL_1RND", "B_ASRAAM", "DAR", "DAGR", "B_AGM65_RAIL", "B_MISSILE_PYLON"};
						attachment = "PylonRack_12Rnd_PG_missiles";
						bay = -1;
						priority = 3;
						UIposition[] = {0.1, 0.1};
						turret[] = {};
					};
					class pylons5 : pylons4
					{
						mirroredMissilePos = 4;
						UIposition[] = {0.5, 0.1};
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
						attachment[] = {"PylonRack_JMSLLTE_1000Rnd_N1_N1_mag", "PylonRack_JMSLLTE_1000Rnd_N1_N1_mag", "PylonRack_JMSLLTE_10Rnd_MG7_proton_missiles"};
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
		};
	};

	class 212th_B_APC_Wheeled_02_cannon_F;
	class JA_104th_APC_Light_Bantha : 212th_B_APC_Wheeled_02_cannon_F{
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
						range[] = {4000, 2000, 1000};
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
						range[] = {4000, 2000, 1000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};

		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\JangosVehicles\Script\OryxCrew\BanthaCrew.sqf';";
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
		};
	};

	class O_T_LSV_02_armed_F;
	class JA_104th_LSV : O_T_LSV_02_armed_F
	{
		displayName = "104th Light Strike Vehicle";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		crew = "ls_clone_phase2_pilot";

		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\JangosVehicles\Script\OryxCrew\LSVGun.sqf';";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
		};
	};

	class House_F;
	class B_UAV_01_F;
	class B_UGV_01_F;
	class shieldtest : House_F
	{

		displayname = "shieldspheretest";
		model = "JangosVehicles\data\models\ShieldSphereTest.p3d";
		hiddenSelections[] = {};
		scope = 2;
		class EventHandlers : DefaultEventhandlers
		{
			killed = "deleteVehicle (_this select 0)";
		};
	};
	class oryxshield : shieldtest
	{
		displayname = "Oryx shield bubble";
		model = "JangosVehicles\data\models\OryxShield.p3d";
		hiddenSelections[] = {};
	};
	class oryxshieldvo : oryxshield
	{

		displayname = "Oryx shield bubble Visual";
		model = "JangosVehicles\data\models\OryxShieldvo.p3d";
		hiddenSelections[] = {};
	};
	class oryxshieldred : oryxshield
	{

		displayname = "Oryx shield bubble Red";
		model = "JangosVehicles\data\models\OryxShieldRed.p3d";
		hiddenSelections[] = {};
	};
	class oryxshieldfb : oryxshield
	{

		displayname = "Oryx shield bubble Full Blue";
		model = "JangosVehicles\data\models\OryxShieldfb.p3d";
		hiddenSelections[] = {};
	};
	class oryxshieldhb : oryxshield
	{

		displayname = "Oryx shield bubble Half Blue";
		model = "JangosVehicles\data\models\OryxShieldhb.p3d";
		hiddenSelections[] = {};
	};
	class TX130shield : shieldtest
	{
		displayname = "TX130 shield bubble";
		model = "JangosVehicles\data\models\TX130Shield.p3d";
		hiddenSelections[] = {};
	};
	class TX130shieldvo : shieldtest
	{
		displayname = "TX130 shield bubble Visual";
		model = "JangosVehicles\data\models\TX130Shieldvo.p3d";
		hiddenSelections[] = {};
	};
	class TX130shieldfb : shieldtest
	{
		displayname = "TX130 shield bubble Full Blue";
		model = "JangosVehicles\data\models\TX130Shieldfb.p3d";
		hiddenSelections[] = {};
	};
	class TX130shieldhb : shieldtest
	{
		displayname = "TX130 shield bubble Half Blue";
		model = "JangosVehicles\data\models\TX130Shieldhn.p3d";
		hiddenSelections[] = {};
	};
	class TX130shieldred : shieldtest
	{

		displayname = "TX130 shield bubble Red";
		model = "JangosVehicles\data\models\TX130ShieldRed.p3d";
		hiddenSelections[] = {};
	};
	class ywingshield : shieldtest
	{
		displayname = "Y-Wing shield bubble";
		model = "JangosVehicles\data\models\YWingShield.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class ywingshieldvo : shieldtest
	{
		displayname = "Y-Wing shield bubble Visual";
		model = "JangosVehicles\data\models\YWingShieldvo.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class ywingshieldfb : shieldtest
	{
		displayname = "Y-Wing shield bubble Full Blue";
		model = "JangosVehicles\data\models\YWingShieldfb.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class ywingshieldhb : shieldtest
	{
		displayname = "Y-Wing shield bubble Half Blue";
		model = "JangosVehicles\data\models\YWingShieldhb.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class ywingshieldred : shieldtest
	{
		displayname = "Y-Wing shield bubble Red";
		model = "JangosVehicles\data\models\YWingShieldRed.p3d";
		hiddenSelections[] = {};
	};
	class z95shieldvo : shieldtest
	{
		displayname = "Z-95 shield bubble Visual";
		model = "JangosVehicles\data\models\Z95Shieldvo.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class z95shieldfb : shieldtest
	{
		displayname = "Z-95 shield bubble Full Blue";
		model = "JangosVehicles\data\models\Z95Shieldfb.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class z95shieldhb : shieldtest
	{
		displayname = "Z-95 shield bubble Half Blue";
		model = "JangosVehicles\data\models\Z95Shieldhb.p3d";
		hiddenSelections[] = {};
		scope = 2;
	};
	class z95shieldred : shieldtest
	{
		displayname = "Z-95 shield bubble Red";
		model = "JangosVehicles\data\models\Z95ShieldRed.p3d";
		hiddenSelections[] = {};
	};
	class droidekashieldvo : shieldtest
	{

		displayname = "Droideka shield bubble Visual";
		model = "JangosVehicles\data\models\Droidekavo.p3d";
		hiddenSelections[] = {};
	};
	class droidekashieldfb : shieldtest
	{

		displayname = "Droideka shield bubble Full Blue";
		model = "JangosVehicles\data\models\Droidekafb.p3d";
		hiddenSelections[] = {};
	};
	class droidekashieldhb : shieldtest
	{

		displayname = "Droideka shield bubble Half Blue";
		model = "JangosVehicles\data\models\Droidekahb.p3d";
		hiddenSelections[] = {};
	};
	class droidekashieldred : shieldtest
	{

		displayname = "Droideka shield bubble Red";
		model = "JangosVehicles\data\models\Droidekared.p3d";
		hiddenSelections[] = {};
	};
	
	class Land_HelipadEmpty_F;
	class 104th_EmptySoundPad : Land_HelipadEmpty_F{
		displayname = "Shield bubble Sound";
		hiddenSelections[] = {};
		scope = 2;
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\ShieldSound.sqf';";
		};
	};
	class 104th_GiantEmptySoundPad : Land_HelipadEmpty_F{
		displayname = "Giant Shield bubble Sound";
		hiddenSelections[] = {};
		scope = 2;
		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\JangosVehicles\Script\Shield\GiantShieldSound.sqf';";
		};
	};

	// Split

	class JA_104th_Box_Ammo : 3AS_Supply_Large_Ammo_Prop{
		author = "Dak";
		displayName = "Ammo Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "JA_104_EdCat_Objects";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		maximumLoad = 10000;
		class TransportWeapons
		{
			class _xx_3AS_RPS6_HP{
				count = 3;
				weapon = "JA_104th_RPS6_H";
			};
			class _xx_JA_104th_DC17SA{
				count = 6;
				weapon = "JA_104th_DC17SA";
			};
			class _xx_JA_104th_DC15A{
				count = 2;
				weapon = "JA_104th_DC15A";
			};
			class _xx_JA_104th_DC15S{
				count = 2;
				weapon = "JA_104th_DC15S";
			};
		};
		class TransportMagazines
		{
			class _xx_JA_104th_Weapons_Mags_100Mw1
			{
				count = 10;
				magazine = "JA_104th_Weapons_Mags_100Mw1";
			};
			class _xx_JA_104th_Weapons_Mags_10mw40
			{
				count = 50;
				magazine = "JA_104th_Weapons_Mags_10mw40";
			};
			class _xx_JA_104th_Weapons_Mags_20mw70
			{
				count = 25;
				magazine = "JA_104th_Weapons_Mags_20mw70";
			};
			class _xx_JA_104th_Weapons_Mags_20mw240
			{
				count = 25;
				magazine = "JA_104th_Weapons_Mags_20mw240";
			};
			class _xx_JA_104th_Weapons_Mags_30mw30
			{
				count = 25;
				magazine = "JA_104th_Weapons_Mags_30mw30";
			};
			class _xx_JA_104th_Weapons_Mags_10mw50
			{
				count = 25;
				magazine = "JA_104th_Weapons_Mags_10mw50";
			};
			class _xx_JA_104th_Weapons_Mags_40mw20
			{
				count = 25;
				magazine = "JA_104th_Weapons_Mags_40mw20";
			};
			class _xx_JA_104th_Weapons_Mags_20mw40
			{
				count = 25;
				magazine = "JA_104th_Weapons_Mags_20mw40";
			};
			class _xx_JA_104th_Weapons_Mags_10mw30
			{
				count = 25;
				magazine = "JA_104th_Weapons_Mags_10mw30";
			};
			class _xx_JA_104th_Weapons_Mags_10mw500
			{
				count = 25;
				magazine = "JA_104th_Weapons_Mags_10mw500";
			};
			class _xx_3AS_10Rnd_EC30_Pellets
			{
				count = 25;
				magazine = "3AS_10Rnd_EC30_Pellets";
			};
			class _xx_3AS_1Rnd_EC80_Flechette
			{
				count = 25;
				magazine = "3AS_1Rnd_EC80_Flechette";
			};
			class _xx_3AS_10Rnd_ESlug_Mag
			{
				count = 25;
				magazine = "3AS_10Rnd_ESlug_Mag";
			};
			class _xx_JLTS_stun_mag_long
			{
				count = 10;
				magazine = "JLTS_stun_mag_long";
			};
			class _xx_JLTS_stun_mag_short
			{
				count = 10;
				magazine = "JLTS_stun_mag_short";
			};
			class _xx_3AS_MK41_AT
			{
				count = 6;
				magazine = "3AS_MK41_AT";
			};
			class _xx_3AS_MK42_HE
			{
				count = 6;
				magazine = "3AS_MK42_HE";
			};
			class _xx_ls_magazine_plx1_at
			{
				count = 3;
				magazine = "ls_magazine_plx1_at";
			};
			class _xx_JA_104th_Weapons_Mags_GL_HE3
			{
				count = 4;
				magazine = "JA_104th_Weapons_Mags_GL_HE3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_HE2
			{
				count = 4;
				magazine = "JA_104th_Weapons_Mags_GL_HE2";
			};
			class _xx_JA_104th_Weapons_Mags_GL_AP2
			{
				count = 4;
				magazine = "JA_104th_Weapons_Mags_GL_AP2";
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				count = 12;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			class _xx_JA_104th_Weapons_Mags_GL_smoke_blue3
			{
				count = 4;
				magazine = "JA_104th_Weapons_Mags_GL_smoke_blue3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_smoke_purple3
			{
				count = 2;
				magazine = "JA_104th_Weapons_Mags_GL_smoke_purple3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_smoke_red3
			{
				count = 4;
				magazine = "JA_104th_Weapons_Mags_GL_smoke_red3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_smoke_white6
			{
				count = 6;
				magazine = "JA_104th_Weapons_Mags_GL_smoke_white6";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_Blue3
			{
				count = 4;
				magazine = "JA_104th_Weapons_Mags_GL_flare_Blue3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_Purple3
			{
				count = 2;
				magazine = "JA_104th_Weapons_Mags_GL_flare_Purple3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_Red3
			{
				count = 4;
				magazine = "JA_104th_Weapons_Mags_GL_flare_Red3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_White3
			{
				count = 6;
				magazine = "JA_104th_Weapons_Mags_GL_flare_White3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_Green3
			{
				count = 2;
				magazine = "JA_104th_Weapons_Mags_GL_flare_Green3";
			};
			class _xx_Aux501_Weapons_Mags_Thermal_Detonator
			{
				count = 40;
				magazine = "Aux501_Weapons_Mags_Thermal_Detonator";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_White
			{
				count = 40;
				magazine = "Aux501_Weapons_Mags_Smoke_White";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Red
			{
				count = 4;
				magazine = "Aux501_Weapons_Mags_Smoke_Red";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Blue
			{
				count = 4;
				magazine = "Aux501_Weapons_Mags_Smoke_Blue";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Purple
			{
				count = 2;
				magazine = "Aux501_Weapons_Mags_Smoke_Purple";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Orange
			{
				count = 2;
				magazine = "Aux501_Weapons_Mags_Smoke_Orange";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Green
			{
				count = 2;
				magazine = "Aux501_Weapons_Mags_Smoke_Green";
			};
			class _xx_ShieldGrenade_Mag
			{
				count = 1;
				magazine = "ShieldGrenade_Mag";
			};
			class _xx_BNA_KC_jetpacks_fuelCan_mag
			{
				count = 5;
				magazine = "BNA_KC_jetpacks_fuelCan_mag";
			};
			class _xx_Aux501_Weapons_Mags_Grenades_Shield_Personal
			{
				count = 8;
				magazine = "Aux501_Weapons_Mags_Grenades_Shield_Personal";
			};
		};
		class TransportItems
		{
			class _xx_JLTS_clone_comlink
			{
				count = 10;
				name = "JLTS_clone_comlink";
			};
		};
	};
	class JA_104th_Box_Explosives : 3AS_Supply_Large_Orange_Prop{
		author = "Dak";
		displayName = "Explosives Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "JA_104_EdCat_Objects";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		maximumLoad = 10000;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
			class _xx_C12_Remote_Mag
			{
				count = 10;
				magazine = "C12_Remote_Mag";
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				count = 15;
				magazine = "SatchelCharge_Remote_Mag";
			};
			class _xx_ATMine_Range_Mag
			{
				count = 10;
				magazine = "ATMine_Range_Mag";
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				count = 20;
				magazine = "SLAMDirectionalMine_Wire_Mag";
			};
			class _xx_APERSMine_Range_Mag
			{
				count = 25;
				magazine = "APERSMine_Range_Mag";
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				count = 25;
				magazine = "APERSBoundingMine_Range_Mag";
			};
			class _xx_tsp_breach_silhouette_mag
			{
				count = 2;
				magazine = "tsp_breach_silhouette_mag";
			};
			class _xx_tsp_breach_popper_auto_mag
			{
				count = 12;
				magazine = "tsp_breach_popper_auto_mag";
			};
			class _xx_tsp_breach_stick_mag
			{
				count = 2;
				magazine = "tsp_breach_stick_mag";
			};
			class _xx_tsp_breach_block_mag
			{
				count = 4;
				magazine = "tsp_breach_block_mag";
			};
			class _xx_tsp_breach_package_mag
			{
				count = 2;
				magazine = "tsp_breach_package_mag";
			};
			class _xx_LFP_type_A_Remote_Mag
			{
				count = 25;
				magazine = "LFP_type_A_Remote_Mag";
			};
			class _xx_LFP_type_B_Remote_Mag
			{
				count = 15;
				magazine = "LFP_type_B_Remote_Mag";
			};
		};
		class TransportItems
		{
			class _xx_ACE_DefusalKit{
				count = 5;
				name = "ACE_DefusalKit";
			};
			class _xx_ACE_M26_Clacker{
				count = 5;
				name = "ACE_M26_Clacker";
			};
			class _xx_MineDetector{
				count = 5;
				name = "MineDetector";
			};
		};
	};
	class JA_104th_Box_Engineer : 3AS_Supply_Large_Blue_Prop{
		author = "Dak";
		displayName = "Engineer Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "JA_104_EdCat_Objects";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		maximumLoad = 10000;
		class TransportWeapons
		{
			class _xx_Aux501_Weaps_MAR1_carry{
				count = 2;
				weapon = "Aux501_Weaps_MAR1_carry";
			};
			class _xx_Aux501_Weaps_AAP4_carry{
				count = 2;
				weapon = "Aux501_Weaps_AAP4_carry";
			};
		};
		class TransportMagazines
		{
			class _xx_Aux501_Weapons_Mags_mar1_csw
			{
				count = 60;
				magazine = "Aux501_Weapons_Mags_mar1_csw";
			};
			class _xx_Aux501_Weapons_Mags_AAP4_csw
			{
				count = 16;
				magazine = "Aux501_Weapons_Mags_AAP4_csw";
			};
			class _xx_Aux501_Weapons_Mags_Grenades_Trench_Shield
			{
				count = 8;
				magazine = "Aux501_Weapons_Mags_Grenades_Trench_Shield";
			};
			class _xx_APERSMineDispenser_Mag
			{
				count = 30;
				magazine = "APERSMineDispenser_Mag";
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				count = 30;
				magazine = "APERSTripMine_Wire_Mag";
			};
			class _xx_IEDUrbanSmall_Remote_Mag
			{
				count = 5;
				magazine = "IEDUrbanSmall_Remote_Mag";
			};
			class _xx_IEDLandSmall_Remote_Mag
			{
				count = 5;
				magazine = "IEDLandSmall_Remote_Mag";
			};
			class _xx_IEDUrbanBig_Remote_Mag
			{
				count = 5;
				magazine = "IEDUrbanBig_Remote_Mag";
			};
			class _xx_IEDLandBig_Remote_Mag
			{
				count = 5;
				magazine = "IEDLandBig_Remote_Mag";
			};
			class _xx_LFP_type_C_Remote_Mag
			{
				count = 2;
				magazine = "LFP_type_C_Remote_Mag";
			};
		};
		class TransportItems
		{
			class _xx_JLTS_clone_comlink{
				count = 5;
				name = "JLTS_clone_comlink";
			};
			class _xx_ACE_artilleryTable{
				count = 3;
				name = "ACE_artilleryTable";
			};
			class _xx_ACE_Fortify{
				count = 3;
				name = "ACE_Fortify";
			};
			class _xx_ACE_IR_Strobe_Item{
				count = 12;
				name = "ACE_IR_Strobe_Item";
			};
			class _xx_ACE_M26_Clacker{
				count = 3;
				name = "ACE_M26_Clacker";
			};
			class _xx_ACE_wirecutter{
				count = 3;
				name = "ACE_wirecutter";
			};
			class _xx_ACE_MapTools{
				count = 3;
				name = "ACE_MapTools";
			};
			class _xx_MineDetector{
				count = 3;
				name = "MineDetector";
			};
			class _xx_ItemcTabHCam{
				count = 3;
				name = "ItemcTabHCam";
			};
			class _xx_ToolKit{
				count = 2;
				name = "ToolKit";
			};
			class _xx_ACE_DefusalKit{
				count = 3;
				name = "ACE_DefusalKit";
			};
			class _xx_SCH_B_AR2e_Packed{
				count = 2;
				name = "SCH_B_AR2e_Packed";
			};
		};
		class TransportBackpacks
		{
			class _xx_JA_104th_Republic_HR_Bag
			{
				backpack = "JA_104th_Republic_HR_Bag";
				count = 3;
			};
			class _xx_3AS_Republic_Mortar_Bag
			{
				backpack = "3AS_Republic_Mortar_Bag";
				count = 3;
			};
		};
	};
	class JA_104th_Box_Medic : 3AS_Supply_Large_Medical_Prop{
		author = "Dak";
		displayName = "Medical Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "JA_104_EdCat_Objects";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		maximumLoad = 10000;
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
			class _xx_Aux501_Weapons_Mags_Grenades_Squad_Shield
			{
				count = 12;
				magazine = "Aux501_Weapons_Mags_Grenades_Squad_Shield";
			};
		};
		class TransportItems
		{
			class _xx_ACE_quikclot
			{
				count = 110;
				name = "ACE_quikclot";
			};
			class _xx_ACE_packingBandage
			{
				count = 110;
				name = "ACE_packingBandage";
			};
			class _xx_ACE_elasticBandage
			{
				count = 110;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_epinephrine
			{
				count = 50;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_morphine
			{
				count = 50;
				name = "ACE_morphine";
			};
			class _xx_ACE_adenosine
			{
				count = 50;
				name = "ACE_adenosine";
			};
			class _xx_RD501_Painkiller
			{
				count = 100;
				name = "RD501_Painkiller";
			};
			class _xx_ACE_plasmaIV
			{
				count = 10;
				name = "ACE_plasmaIV";
			};
			class _xx_ACE_plasmaIV_250
			{
				count = 10;
				name = "ACE_plasmaIV_250";
			};
			class _xx_ACE_plasmaIV_500
			{
				count = 10;
				name = "ACE_plasmaIV_500";
			};
			class _xx_ACE_bloodIV_500
			{
				count = 10;
				name = "ACE_bloodIV_500";
			};
			class _xx_ACE_bloodIV_250
			{
				count = 10;
				name = "ACE_bloodIV_250";
			};
			class _xx_ACE_bloodIV
			{
				count = 10;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_salineIV_500
			{
				count = 10;
				name = "ACE_salineIV_500";
			};
			class _xx_ACE_salineIV_250
			{
				count = 10;
				name = "ACE_salineIV_250";
			};
			class _xx_ACE_salineIV
			{
				count = 10;
				name = "ACE_salineIV";
			};
			class _xx_ACE_tourniquet
			{
				count = 10;
				name = "ACE_tourniquet";
			};
		};
	};
	class JA_104th_Medical_Droid : Land_3AS_Medical_Droid
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Dak";
		displayName = "Medical Droid - 104th";
		side = 3;
		editorCategory = "JA_104_EdCat_Objects";
		editorSubcategory = "104th_Categ_Clones_Droid";
		editorPreview = "\ORA\BNA_KC\addons\medical\data\previews\BNA_KC_Deployable_MedicalDroid.jpg";
		simulation = "house";
		sound = "";
		BNA_KC_medical_areaHealMaxPatients = 4;
		BNA_KC_medical_areaHealRadius = 15;
		BNA_KC_medical_areaHealRate = 6;
		class EventHandlers : DefaultEventHandlers
		{
		};

		class DestructionEffects
		{
		};
	}
          
//   "JA_104th_LAAT_AB",
//   "JA_104th_Vwing",                    
//   "BNA_KC_Standard_laati",                 
//   "BNA_KC_Standard_laati_transport",                    
//   "JA_104th_N1",                  
//   "JA_104th_Uwing",                   
//   "JA_104th_LSV",                           
//   "JA_104th_BARC",                           
//   "JA_104th_APC_Light_Bantha",                 
//   "212th_B_APC_Wheeled_mg_F",                
//   "212th_B_APC_Wheeled_unarmed_F",   
//   "B_Truck_01_ammo_F",                  
//   "B_Truck_01_fuel_F",                     
//   "B_Truck_01_Repair_F",

	class 3AS_T_Screen;
	class JA_104th_Vehicle_spawner_Droid_Air : 3AS_T_Screen
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Dak";
		displayName = "Spawner Terminal - 104th Air frames";
		side = 3;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.5,0,0,0.25)"};
		editorCategory = "JA_104_EdCat_Objects";
		editorSubcategory = "104th_Categ_Clones_Terminals";
		class UserActions
		{
			// Choppers
			class Spawn_JA_104th_LAAT
			{
				displayName = "Spawn 104th LAAT";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_LAAT'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_JA_104th_LAAT_AB
			{
				displayName = "Spawn 104th LAAT Airborne";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_LAAT_AB'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_ls_vehicle_laatc
			{
				displayName = "Spawn LS LAAT/C";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'ls_vehicle_laatc'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_3AS_LAATC
			{
				displayName = "Spawn 3AS LAAT/C";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, '3AS_LAATC'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			// fixed wing
			class Spawn_JA_104th_212th_3AS_Reaper_Z95_Headhunter_Blue
			{
				displayName = "Spawn 104th Z-95 HeadHunter";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_212th_3AS_Reaper_Z95_Headhunter_Blue'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_JA_104th_3AS_Reaper_Y_Wing_BlueLeader
			{
				displayName = "Spawn 104th Y-Wing";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_3AS_Reaper_Y_Wing_BlueLeader'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_JA_104th_3AS_Reaper_ARC_170_Blue
			{
				displayName = "Spawn 104th ARC-170";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_3AS_Reaper_ARC_170_Blue'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_JA_104th_V19_Torrent
			{
				displayName = "Spawn 104th V-19 Torrent";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_V19_Torrent'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_JA_104th_VWing
			{
				displayName = "Spawn 104th V-Wing";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_VWing'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported = FALSE;
			};
		}
	};
	class JA_104th_Vehicle_spawner_Droid_Ground : 3AS_T_Screen
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Dak";
		displayName = "Spawner Terminal - 104th Ground Assets";
		side = 3;
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0.5,0.25)"};
		editorCategory = "JA_104_EdCat_Objects";
		editorSubcategory = "104th_Categ_Clones_Terminals";
		class UserActions
		{
			// Ground vehicles
			class Spawn_104th_MudHorn_tank_field
			{
				displayName = "Spawn 104th MudHorn Fast";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, '104th_MudHorn_tank_field'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_JA_104th_Oryx
			{
				displayName = "Spawn 104th Oryx Shielded";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_Oryx'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_JA_104th_OryxTS
			{
				displayName = "Spawn 104th Oryx Trophy System";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_OryxTS'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_104th_TX_130_Super_Saber
			{
				displayName = "Spawn 104 TX-130";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, '104th_TX_130_Super_Saber'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_Aux212_Bantha_C_IFV
			{
				displayName = "Spawn 212th Bantha IFV";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'Aux212_Bantha_C_IFV'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_Aux212_Bantha_T_Assault
			{
				displayName = "Spawn 212th Bantha Assault";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'Aux212_Bantha_T_Assault'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_Aux212_Bantha_T_Cargo
			{
				displayName = "Spawn 212th Bantha Cargo";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'Aux212_Bantha_T_Cargo'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_104th_ATTE
			{
				displayName = "Spawn 104 ATTE";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, '104th_ATTE'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_JA_104th_BARC
			{
				displayName = "Spawn 104th BARC Speeder";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, 'JA_104th_BARC'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
			class Spawn_104th_ATAP
			{
				displayName = "Spawn [104th] AT-AP";
				position = "pos cano";
				radius = 15;
				condition = "true";
				statement = "[this, '104th_ATAP'] execVM 'JangosVehicles\Script\spawner.sqf';";
				onlyforplayer = "false";
				hideOnUse = 0;
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported = FALSE;
			};
		}
	};
	class 3AS_Republic_HR_Bag;
	class JA_104th_Republic_HR_Bag : 3AS_Republic_HR_Bag{
		faction = "3AS_REP";
		author = "3AS + Ice";
		scope = 2;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_DismantledWeapons";
		displayName = "104th Heavy Repeater";
		hiddenSelections[] =
			{
				"camo1"};
		hiddenSelectionsTextures[] =
			{
				"JangosVehicles\data\textures\Backpack_E-Web_Greyscale.paa"};
		class assembleInfo
		{
			primary = 1;
			base = "";
			displayName = "104th Heavy Repeater";
			assembleTo = "JA_104th_HeavyRepeater_Unarmoured";
		};
	};

	class 3AS_HeavyRepeater_Unarmoured;
	class JA_104th_HeavyRepeater_Unarmoured : 3AS_HeavyRepeater_Unarmoured{
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
	class Plane_Fighter_03_base_F;
	class TKE_Ext_Corvette_BASE;
	
	class Turret_Left;
	class Turret_Left1;
	class Turret_Right;
	class Turret_Right1;
	class Turret_Low;
	class Turrets;
	class Components;
	class TKE_Ext_Gunship_OPF;
	class JA_104th_Impetus_Class_MAAG : TKE_Ext_Gunship_OPF{
		displayName = "[104th] Impetus Class MAAG";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "ls_clone_phase2_pilot";
		class Components: Components{
			class TransportPylonsComponent{
				UIPicture = "\TKE_Ext_Ships\data\ui\icon_gunship_pylons_ca.paa";
				class Pylons{
					class pylons1{
						attachment = "TKE_Ext_VLS10_Sparrow_AA";
						hardpoints[] = {"VLS3","VLS6","VLS10"};
						maxweight = 5000;
						priority = 10;
						UIposition[] = {0.1,0.15};
					};
					class pylons2{
						attachment = "JA_104th_Heavy_Assault_Ship_MAG_2500";
						hardpoints[] = {"Turret_PDC","Turret_MPTC"};
						maxweight = 5000;
						priority = 5;
						turret[] = {1};
						UIposition[] = {0.1,0.45};
					};
					class pylons3{
						attachment = "JA_104th_Heavy_Assault_Ship_MAG_2500";
						hardpoints[] = {"Turret_PDC","Turret_MPTC"};
						maxweight = 5000;
						mirroredMissilePos = 2;
						priority = 5;
						turret[] = {2};
						UIposition[] = {0.55,0.45};
					};
					class pylons4{
						attachment = "JA_104th_Heavy_Assault_Ship_MAG_400";
						hardpoints[] = {"Turret_PDC","Turret_MPTC"};
						maxweight = 5000;
						priority = 5;
						turret[] = {3};
						UIposition[] = {0.1,0.25};
					};
					class pylons5{
						attachment = "JA_104th_Heavy_Assault_Ship_MAG_400";
						hardpoints[] = {"Turret_PDC","Turret_MPTC"};
						maxweight = 5000;
						mirroredMissilePos = 4;
						priority = 5;
						turret[] = {4};
						UIposition[] = {0.55,0.25};
					};
					class pylons6{
						attachment = "JA_104th_Heavy_Assault_Ship_RailGun_MAG_75";
						hardpoints[] = {"Turret_Light"};
						maxweight = 5000;
						priority = 10;
						turret[] = {0};
						UIposition[] = {0.55,0.15};
					};
				};
			};
		};
		class Turrets: Turrets{
			class Turret_Low: Turret_Low{
				weapons[] = {"JA_104th_Heavy_Assault_Ship_Siegecannon_10","Laserdesignator_mounted"};
				magazines[] = {"JA_104th_Heavy_Assault_Ship_Siegecannon_MAG_10","JA_104th_Heavy_Assault_Ship_Siegecannon_MAG_10","JA_104th_Heavy_Assault_Ship_Siegecannon_MAG_10","Laserbatteries"};
				gunnerUsesPilotView = 1;
			};
			class Turret_Left: Turret_Left{
				weapons[] = {"Laserdesignator_mounted","JA_104th_Heavy_Assault_AA_Ship_2500"};
				magazines[] = {"Laserbatteries","JA_104th_Heavy_Assault_AA_Ship_MAG_2500"};
				gunnerUsesPilotView = 1;
			};
			class Turret_Right: Turret_Right{
				weapons[] = {"Laserdesignator_mounted","JA_104th_Heavy_Assault_AA_Ship_2500"};
				magazines[] = {"Laserbatteries","JA_104th_Heavy_Assault_AA_Ship_MAG_2500"};
				gunnerUsesPilotView = 1;
			};
			class Turret_Left1:  Turret_Left1{
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				gunnerUsesPilotView = 1;
			};
			class Turret_Right1: Turret_Right1{
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				gunnerUsesPilotView = 1;
			};
		};
	};
};

class CfgAmmo
{
	class ls_50mm_laat_apfsds;
	class ls_50mm_laat_apfsds_104th : ls_50mm_laat_apfsds
	{
		hit = 400;
		indirectHit = 2;
	};

	class ls_127x99_red;
	class ls_127x99_blue_104th : ls_127x99_red
	{
		model = "ls_weapons_core\effects\laser_blue";
		effectfly = "ls_plasma_blue";
	};
	class Bo_GBU12_LGB;
	class JA_104th_guided_resupply_ammo : Bo_GBU12_LGB
	{
		hit = 0;
		indirectHit = 0;
		explosive = 0;
		whistleOnFire = 1;
		aiAmmoUsageFlags = 0;
		model = "kobra\442_misc\box\box10.p3d";
	};

	class SWLW_ammo_chaingun_blue;
	class JA_104th_T9_green : SWLW_ammo_chaingun_blue
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

	class ls_magazine_50mm_200Rnd_APFSDS_green;
	class ls_magazine_50mm_200Rnd_APFSDS_green_104th : ls_magazine_50mm_200Rnd_APFSDS_green
	{
		ammo = "ls_50mm_laat_apfsds_104th";
	};

	class ls_500Rnd_127x99_mag_red;
	class ls_500Rnd_127x99_mag_blue_104th : ls_500Rnd_127x99_mag_red
	{
		displayname = "12.7x99mm 500Rnd plasma cell (Blue)";
		ammo = "ls_127x99_blue_104th";
	};
	class 2Rnd_GBU12_LGB;
	class JA_104th_Guided_Resupply_Magazine : 2Rnd_GBU12_LGB
	{
		author = "Dak";
		ammo = "JA_104th_guided_resupply_ammo";
		displayName = "Supply Pod";
		displayNameShort = "Supply Pod";
		descriptionShort = "Supply Pod";
	};
};

class CfgRecoils
{
	class recoil_default;
	class 104th_Z7_recoil : recoil_default{
		kickBack[] = {0.045, 0.08};
		muzzleOuter[] = {0.3, 0.3, 0.3, 0.2};
		permanent = 0.03;
		temporary = 0.02;
	};
	class JA_104th_ShoulderCannon_recoil : recoil_default{
		kickBack[] = {0.045, 0.08};
		muzzleOuter[] = {0.3, 0.3, 0.3, 0.2};
		permanent = 0.03;
		temporary = 0.02;
	};
};

class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F : Launcher{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class ls_weapon_laati_turret_50mm_ap;
	class ls_laat_gun_2_104th : ls_weapon_laati_turret_50mm_ap{
		magazines[] = {"ls_magazine_50mm_200Rnd_APFSDS_green_104th"};
	};
	class ls_aat_127;
	class ls_127_blue_104th : ls_aat_127{

		magazines[] = {"ls_500Rnd_127x99_mag_blue_104th"};
	};
	class ls_gar_engineerNCO_vest;
	class JA_104th_Engineer_EWEB_Vest : ls_gar_engineerNCO_vest{

		Displayname = "Clone Engineer E-Web Vest";

		class ItemInfo
		{
			vestType = "Rebreather";
			_generalMacro = "VestItem";
			author = "Bohemia Interactive";
			containerClass = "Supply450";
			hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6"};
			mass = 80;
			overlaySelectionsInfo[] = {"Ghillie_hide"};
			scope = 0;
			showHolsteredPistol = 0;
			type = 701;
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\engineer\ls_gar_engineerNCO_vest.p3d";
			uniformType = "Default";
			class HitpointsProtectionInfo
			{
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 8;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 8;
					passThrough = 0.3;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15;
					passThrough = 0.3;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 10;
					passThrough = 0.3;
				};
			};
		};
	};
	class GBU12BombLauncher;
	class JA_104th_guided_resupply_pod_launcher : GBU12BombLauncher{
		displayName = "Supply Pod";
		descriptionShort = "Guided Resupply Pod Launcher";
		magazines[] = {"JA_104th_Guided_Resupply_Magazine"};
		class EventHandlers
		{
			// fired = "hint 'Fired eventhandler called'";
			fired = "_this spawn JA_104th_fnc_GURE_grplFired";
		};
	};
};

class CfgFunctions{
	class JA_104th{
		tag = "JA_104th";
		class guidedResupply{
			file = "JangosVehicles\Script\501Resupply";
			class GURE_spawnResupply{
				file = "JangosVehicles\Script\501Resupply\spawn_resupply.sqf";
			};
			class GURE_grplFired{
				file = "JangosVehicles\Script\501Resupply\grpl_fired.sqf";
			};
		};
	};
};

class cfgSounds
{

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