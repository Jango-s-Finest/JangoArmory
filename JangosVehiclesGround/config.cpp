class CfgPatches
{
	class Jangos_Armory_Vehicles_Ground
	{
		units[] = {
			"104th_MudHorn_tank_mobile",
			"104th_MudHorn_tank_field",
			"104th_ATTE",
			"104th_TX_130_Super_Saber",
			"104th_ATAP",
			"JA_104th_OryxNS",
			"JA_104th_Oryx",
			"JA_104th_OryxTS",
			"JA_104th_Repair_Droid",
			"JA_104th_Ulik",
			"JA_104th_OryxTS_Command",
		}; // All the new vehicles/units you've created in cfgVehicles
		weapons[] = {
			"JA_104th_guided_resupply_pod_launcher",
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"3AS_ATTE"};
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
class Extended_init_EventHandlers
{
	class 104th_MudHorn_tank_mobile{
		class adsd_tow
		{
			init = "[_this select 0] spawn RD501_fnc_warden_tow";
		};
	};
	class JA_104th_Medical_Droid{
		class areaSlowHealInit
		{
			init = "_this call BNA_KC_medical_fnc_areaHealerInit";
		};
		class loopSay3D_init
		{
			serverInit = "_this call BNA_KC_core_fnc_loopSay3D_init";
		};
	}
};
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
	class APC_Tracked_01_base_F;
	class B_APC_Tracked_01_base_F : APC_Tracked_01_base_F
	{
		class Turrets;
	};
	class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F
	{
		class ACE_SelfActions;
		class Turrets : Turrets
		{
			class MainTurret;
			class CommanderOptics;
		};
		class Components;
		class VehicleTransport
		{
			class Carrier;
		};
	};
	class 104th_MudHorn_tank_mobile : B_APC_Tracked_01_CRV_F{
		displayName = "104th MudHorn";
		ace_refuel_fuelCargo = 999999999999;
		ace_rearm_defaultSupply = 999999999999;
		ace_cargo_space = 20;
		ace_repair_canRepair = 1;
		ace_refuel_hooks[] =
			{
				{0.38, -3.1700001, -0.69999999},
				{-0.41, -3.1700001, -0.69999999}};
		transportSoldier = 8;
		LESH_canTow = 1;
		crew = "JA_104th_P2_1C_Engineer";
		LESH_AxisOffsetTower[] = {0, -6, 1};
		driverCanSee = 31;
		gunnerCanSee = 31;
		commanderCanSee = 31;
		canUseScanner = 1;
		tas_canBlift = 1;
		tas_liftVars = "[[[[0, -3, -4.5]]], [0.27], [-0.2]]";
		incomingMissileDetectionSystem = 16;
		weaponLockSystem = "2+4+8";
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		vehicleClass = "Armored";
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		fuelCapacity = 27.5;
		fuelConsumptionRate = 0.15;
		TFAR_hasIntercom = 1;
		tf_hasIntercom = 1;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 1;
		tf_range = 35000;
		class TransportItems
		{
			class _item_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 12;
			};
			class _item_ACE_splint
			{
				name = "ACE_splint";
				count = 8;
			};
			class _item_ACE_Needle
			{
				name = "kat_IV_16";
				count = 6;
			};
			class _item_ACE_plasmaIV_1000
			{
				name = "ACE_plasmaIV";
				count = 6;
			};
			class _item_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 30;
			};
			class _item_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 15;
			};
			class _item_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 15;
			};
			class _item_ACE_painkiller
			{
				name = "RD501_Painkiller";
				count = 4;
			};
			class _item_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 4;
			};
			class _item_Necro_Enzyme
			{
				name = "dev_enzymeCapsule";
				count = 4;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		author = "Dak";
		scope = 2;
		side = 1;
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"CamoNet"};
		hiddenSelectionsTextures[] = {
			"JangosVehiclesGround\data\textures\APC_Tracked_03_body_CRV_CO_Huge_104th.paa",
			"JangosVehiclesGround\data\textures\MBT_03_body_CO_104th.paa",
			"JangosVehiclesGround\data\textures\Turret_03_CO_104th.paa",
			"JangosVehiclesGround\data\textures\APC_Tracked_03_CRV_CO_104th.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
		forceInGarage = 1;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] =
					{
						"Laserdesignator_pilotCamera",
						"CMFlareLauncher",
						"JA_104th_AP_Lazer"};
				magazines[] =
					{
						"Laserbatteries",
						"300Rnd_CMFlare_Chaff_Magazine",
						"300Rnd_CMFlare_Chaff_Magazine",
						"JA_104th_AP_Lazer_MAG_250",
						"JA_104th_AP_Lazer_MAG_250",
						"JA_104th_AP_Lazer_MAG_250",
						"JA_104th_AP_Lazer_MAG_250"};
			};
			class CommanderOptics : CommanderOptics
			{
			};
		};
		class components : Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						typeRecognitionDistance = 1000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						maxFogSeeThrough = -1;
						nightRangeCoef = 1;
						class AirTarget
						{
							minRange = 0;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
							maxFogSeeThrough = -1;
							nightRangeCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
							maxFogSeeThrough = -1;
							nightRangeCoef = 1;
						};
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						typeRecognitionDistance = 750;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						typeRecognitionDistance = 750;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ManSensorComponent : SensorTemplateMan
					{
						typeRecognitionDistance = 300;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 300;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 300;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent : SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						componentType = "DataLinkSensorComponent";
						allowsMarking = 1;
						typeRecognitionDistance = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				right=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - (  (10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
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
						range[] = {32000, 16000, 8000, 4000, 2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				left=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
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
						range[] = {32000, 16000, 8000, 4000, 2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class EventHandlers : DefaultEventhandlers
		{
			class EventHandlers : DefaultEventhandlers
			{
				Init = "_this call BNA_KC_jetpacks_fnc_addRefuelAction;";
			};
		};
		class TextureSources
		{
			class base
			{
				displayName = "White";
				author = "Legion Studio + Echo";
				textures[] = {
					"JangosVehiclesGround\data\textures\APC_Tracked_02_body_CRV_CO_Huge.paa",
					"JangosVehiclesGround\data\textures\MBT_02_body_CO.paa",
					"JangosVehiclesGround\data\textures\Turret_02_CO.paa",
					"JangosVehiclesGround\data\textures\APC_Tracked_02_CRV_CO.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
				factions[] = {"104th_Guys"};
			};

			class blue_logo : base
			{
				displayName = "104th Logo grey";
				author = "Legion Studio + Echo";
				textures[] = {
					"JangosVehiclesGround\data\textures\APC_Tracked_03_body_CRV_CO_Huge_104th.paa",
					"JangosVehiclesGround\data\textures\MBT_03_body_CO_104th.paa",
					"JangosVehiclesGround\data\textures\Turret_03_CO_104th.paa",
					"JangosVehiclesGround\data\textures\APC_Tracked_03_CRV_CO_104th.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
				factions[] = {"104th_Guys"};
			};

			class logo_white : base
			{
				displayName = "104th Logo White";
				textures[] = {
					"JangosVehiclesGround\data\textures\APC_Tracked_02_Body_CRV_CO_Huge_104th.paa",
					"JangosVehiclesGround\data\textures\MBT_02_Body_CO_104th.paa",
					"JangosVehiclesGround\data\textures\Turret_02_CO.paa",
					"JangosVehiclesGround\data\textures\APC_Tracked_02_CRV_CO.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
			}

			class plobro : base
			{
				displayName = "104th PloBros";
				textures[] = {
					"JangosVehiclesGround\data\textures\APC_Tracked_02_body_CRV_CO_Huge_PloBros.paa",
					"JangosVehiclesGround\data\textures\MBT_02_body_CO.paa",
					"JangosVehiclesGround\data\textures\Turret_02_CO.paa",
					"JangosVehiclesGround\data\textures\APC_Tracked_02_CRV_CO.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
			};

			class medevac : base
			{
				displayName = "104th MedEvac";
				textures[] = {
					"JangosVehiclesGround\data\textures\APC_Tracked_02_body_CRV_CO_Huge.paa",
					"JangosVehiclesGround\data\textures\MBT_02_body_CO.paa",
					"JangosVehiclesGround\data\textures\Turret_02_CO.paa",
					"JangosVehiclesGround\data\textures\APC_Tracked_02_CRV_CO.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
			};
		};
		textureList[] = {"base", 1, "blue_logo", 1, "logo_white", 1, "plobro", 1, "medevac", 1};
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
					displayName = "White";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement =
						"_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\APC_Tracked_02_body_CRV_CO_Huge.paa'];_target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\MBT_02_body_CO.paa'];_target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Turret_02_CO.paa'];_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\APC_Tracked_02_CRV_CO.paa'];_target setObjectTextureGlobal [4,'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa']";
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class 104th_Skins
				{
					displayname = "104th Skins";
					class 104th_Blue_Logo : DefaultSkin
					{
						displayName = "104th Logo Grey";
						statement =
							"_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\APC_Tracked_03_body_CRV_CO_Huge_104th.paa'];_target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\MBT_03_body_CO_104th.paa'];_target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Turret_03_CO_104th.paa'];_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\APC_Tracked_03_CRV_CO_104th.paa'];_target setObjectTextureGlobal [4,'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa']";
					};
					class 104th_Logo_white : DefaultSkin
					{
						displayName = "104th Logo White";
						statement =
							"_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\APC_Tracked_02_Body_CRV_CO_Huge_104th.paa'];_target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\MBT_02_Body_CO_104th.paa'];_target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Turret_02_CO.paa'];_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\APC_Tracked_02_CRV_CO.paa'];_target setObjectTextureGlobal [4,'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa']";
					};
					class 104th_PloBro : DefaultSkin
					{
						displayName = "104th PloBro";
						statement =
							"_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\APC_Tracked_02_body_CRV_CO_Huge_PloBros.paa'];_target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\MBT_02_body_CO.paa'];_target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Turret_02_CO.paa'];_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\APC_Tracked_02_CRV_CO.paa'];_target setObjectTextureGlobal [4,'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa']";
					};
					class 104th_MedEvac : DefaultSkin
					{
						displayName = "104th MedEvac";
						statement =
							"_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\APC_Tracked_02_body_CRV_CO_Huge.paa'];_target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\MBT_02_body_CO.paa'];_target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Turret_02_CO.paa'];_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\APC_Tracked_02_CRV_CO.paa'];_target setObjectTextureGlobal [4,'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa']";
					};
				};
			};
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
		class VehicleTransport : VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = TRUE;
			};
		}
		class ace_cargo {
            class cargo {
				class cargo_JA_104th_Box_Ammo {
					type = "JA_104th_Box_Ammo";
                    amount = 1;
				};
				class cargo_JA_104th_Box_Explosives {
					type = "JA_104th_Box_Explosives";
                    amount = 1;
				};
				class cargo_JA_104th_Box_Engineer {
					type = "JA_104th_Box_Engineer";
                    amount = 1;
				};
				class cargo_JA_104th_Box_Medic {
					type = "JA_104th_Box_Medic";
                    amount = 1;
				};
				class cargo_ACE_Track {
					type = "ACE_Track";
                    amount = 4;
				};
			};
		};
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	class 104th_MudHorn_tank_field : 104th_MudHorn_tank_mobile{
		displayName = "104th MudHorn Fast";
		enginePower = 2400;
		gearBox[] = {-7, 0, 11, 8, 5.6999998, 4.1999998};
		maxSpeed = 100;
		maxOmega = 500;
		peakTorque = 7400;
		fuelConsumptionRate = 0.2;
		torqueCurve[] =
			{
				"[0.291667",
				"0.540541]",
				"[0.416667",
				"0.675676]",
				"[0.583333",
				"0.810811]",
				"[0.666667",
				"0.891892]",
				"[0.75",
				"0.972973]",
				"[0.833333",
				"1.02703]",
				"[0.916667",
				"1]",
				"[1",
				"0.945946]"};
		engineMOI = 1;
		armor = 500;
		weapons[] =
			{
				"SmokeLauncher"};
		magazines[] =
			{
				"SmokeLauncherMag"};
		hiddenSelections[] =
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"CamoNet"};
		hiddenSelectionsTextures[] = {
			"JangosVehiclesGround\data\textures\APC_Tracked_03_body_CRV_CO_Huge_104th.paa",
			"JangosVehiclesGround\data\textures\MBT_03_body_CO_104th.paa",
			"JangosVehiclesGround\data\textures\Turret_03_CO_104th.paa",
			"JangosVehiclesGround\data\textures\APC_Tracked_03_CRV_CO_104th.paa",
			"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
	};
	
	
	class MainTurretBack;
	class MainTurret;
	class MainTurretTop;
	class MainTurretFront;
	class MainTurret1;
	class MainTurretBottom;
	
	class 3AS_ATTE_Base;
	class 3AS_ATTE_TCW: 3AS_ATTE_Base{
		class Turrets;
		class ACE_SelfActions;
		class TextureSources;
	};
	class 104th_ATTE : 3AS_ATTE_TCW{
		displayname = "[104th] AT-TE";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		TFAR_hasIntercom = 1;
		tf_hasIntercom = 1;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 1;
		tf_range = 35000;
		author = "Dak";
		scope = 2;
		side = 1;
		forceInGarage = 1;
		armor = 500;
		weapons[] = {"SmokeLauncher","CMFlareLauncher"};
		magazines[] = {"SmokeLauncherMag","300Rnd_CMFlare_Chaff_Magazine","SmokeLauncherMag","300Rnd_CMFlare_Chaff_Magazine"};
		hiddenselectionstextures[] = {
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_TCW_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
			"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
		};
		class TextureSources : TextureSources
		{
			class 104_base
			{
				displayName = "Republic";
				author = "Legion Studio + Echo";
				textures[] = {
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_TCW_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[] = {"104th_Guys"};
			};
			class 104_Freyr
			{
				displayName = "Freyr";
				author = "Legion Studio + Echo";
				textures[] = {
					"JangosVehiclesGround\data\textures\3AS_ATTE_Shell_Freyr_2D_View.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"JangosVehiclesGround\data\textures\3AS_ATTE_Legs_2D_View.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[] = {"104th_Guys"};
			};
			class 104_Surtr
			{
				displayName = "Surtr";
				author = "Legion Studio + Echo";
				textures[] = {
					"JangosVehiclesGround\data\textures\3AS_ATTE_Shell_Surtr_2D_View.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"JangosVehiclesGround\data\textures\3AS_ATTE_Legs_2D_View.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[] = {"104th_Guys"};
			};
			class 104_Talos
			{
				displayName = "Talos";
				author = "Legion Studio + Echo";
				textures[] = {
					"JangosVehiclesGround\data\textures\3AS_ATTE_Shell_Talos_2D_View.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"JangosVehiclesGround\data\textures\3AS_ATTE_Legs_2D_View.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[] = {"104th_Guys"};
			};
		};
		textureList[] = {"104_base", 1, "104_Freyr", 1, "104_Surtr", 1, "104_Talos", 1};
		class Turrets : Turrets
		{
			class MainTurretTop: MainTurretTop
			{
				weapons[] = {"JA_ATTE_Maingun_Cannon"};
				magazines[] = {"JA_ATTE_Maingun_Normal_Mag","JA_ATTE_Maingun_Normal_Mag","JA_ATTE_Maingun_Normal_Mag","JA_ATTE_Maingun_Normal_Mag","JA_ATTE_Maingun_HE_Mag","JA_ATTE_Maingun_HE_Mag"};
			};
			class MainTurretBack: MainTurretBack{
				weapons[] = {"3AS_ATTE_Turret"};
				magazines[] = {"3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells"};
			};
			class MainTurretFront: MainTurretFront{
				weapons[] = {"3AS_ATTE_Turret"};
				magazines[] = {"3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells"};
			};
		};
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
					statement = "\
						_target setObjectTextureGlobal [0,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_TCW_co.paa'];\
						_target setObjectTextureGlobal [1,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa'];\
						_target setObjectTextureGlobal [2,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa'];\
						_target setObjectTextureGlobal [3,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa'];\
						_target setObjectTextureGlobal [4,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa'];\
						_target setObjectTextureGlobal [5,'3as\3as_atte\data\textures\3as_atte_armor_co.paa'];\
					";
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class 104th_Skins
				{
					displayname = "104th Skins";
					class 104_Freyr
					{
						displayName = "Freyr";
						exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
						condition = "!(isNull objectParent player)";
						statement = "\
							_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\3AS_ATTE_Shell_Freyr_2D_View.paa'];\
							_target setObjectTextureGlobal [1,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa'];\
							_target setObjectTextureGlobal [2,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa'];\
							_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\3AS_ATTE_Legs_2D_View.paa'];\
							_target setObjectTextureGlobal [4,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa'];\
							_target setObjectTextureGlobal [5,'3as\3as_atte\data\textures\3as_atte_armor_co.paa'];\
						";
						showDisabled = 0;
						runOnHover = 0;
						priority = 2.5;
					};
					class 104_Surtr
					{
						displayName = "Surtr";
						exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
						condition = "!(isNull objectParent player)";
						statement = "\
							_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\3AS_ATTE_Shell_Surtr_2D_View.paa'];\
							_target setObjectTextureGlobal [1,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa'];\
							_target setObjectTextureGlobal [2,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa'];\
							_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\3AS_ATTE_Legs_2D_View.paa'];\
							_target setObjectTextureGlobal [4,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa'];\
							_target setObjectTextureGlobal [5,'3as\3as_atte\data\textures\3as_atte_armor_co.paa'];\
						";
						showDisabled = 0;
						runOnHover = 0;
						priority = 2.5;
					};
					class 104_Talos
					{
						displayName = "Talos";
						exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
						condition = "!(isNull objectParent player)";
						statement = "\
							_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\3AS_ATTE_Shell_Talos_2D_View.paa'];\
							_target setObjectTextureGlobal [1,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa'];\
							_target setObjectTextureGlobal [2,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa'];\
							_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\3AS_ATTE_Legs_2D_View.paa'];\
							_target setObjectTextureGlobal [4,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa'];\
							_target setObjectTextureGlobal [5,'3as\3as_atte\data\textures\3as_atte_armor_co.paa'];\
						";
						showDisabled = 0;
						runOnHover = 0;
						priority = 2.5;
					};
				};
			};
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
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	
	class 3AS_Saber_Super;
	class 104th_TX_130_Super_Saber : 3AS_Saber_Super{
		displayname = "[104th] TX-130 Super Saber";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		TFAR_hasIntercom = 1;
		tf_hasIntercom = 1;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 1;
		tf_range = 35000;
		author = "Dak";
		scope = 2;
		side = 1;
		forceInGarage = 1;
		scopeArsenal = 2;
		scopeCurator = 2;
	};
	
	class APC_Wheeled_01_base_F;
	class 3AS_ATAP_Base:APC_Wheeled_01_base_F{
		class Turrets;
	};
	class 104th_ATAP : 3AS_ATAP_Base{
		displayname = "[104th] AT-AP";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		TFAR_hasIntercom = 1;
		tf_hasIntercom = 1;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 1;
		tf_range = 35000;
		author = "Dak";
		scope = 2;
		side = 1;
		forceInGarage = 1;
		scopeArsenal = 2;
		scopeCurator = 2;
		armor = 500;
		armorStructural = 10;
		class Turrets : Turrets
		{
			class MainTurretTop: MainTurretTop
			{
				weapons[] = {"JA_ATTE_Maingun_Cannon","SmokeLauncher"};
				magazines[] = {"JA_ATTE_Maingun_Normal_Mag","JA_ATTE_Maingun_Normal_Mag","JA_ATTE_Maingun_Normal_Mag","JA_ATTE_Maingun_HE_Mag","SmokeLauncherMag"};
			};
			class MainTurretBottom: MainTurretBottom{
			};
			class MainTurret1: MainTurret1{
			};
		};
	};

	class LandVehicle;
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
	class JA_104th_OryxNS : OPTRE_M494
	{

		displayName = "[104th] Oryx IFV Unshielded";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		crew = "JA_104th_P2_1C_Engineer";
		scope = 2;
		scopeCurator = 2;
		side = 1;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						stabilizedInAxes = 3;
						minElev = -12;
						maxElev = 60; // Original 45
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {"3AS_Sabre_MG", "Laserdesignator_mounted"};
						magazines[] = {"3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "Laserbatteries"};
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
						discreteDistanceInitIndex = 2;
						memoryPointGunnerOptics = "commanderview";
						memoryPointGunnerOutOptics = "commanderview";
						gunnerForceOptics = 0;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerHasFlares = 1;
						class ViewOptics : ViewOptics
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
							visionMode[] = {"Normal", "TI"};
							thermalMode[] = {0, 1};
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
				weapons[] = {"ls_weapon_laati_turret_50mm_he", "ls_weapon_laati_turret_50mm_ap", "3AS_Sabre_MG", "OPTRE_M670_ATGM_Launcher", "SmokeLauncher", "Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
				minElev = -12;
				maxElev = 60; // Original 35
				initElev = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", "db-40", 1.0, 50};
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
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				class OpticsIn
				{
					class Wide : ViewOptics
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
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {2, 3};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[] = {};
					};
					class Medium : Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow : Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
					class Zoom1 : Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.014;
						minFov = 0.014;
						maxFov = 0.014;
					};
					class Zoom2 : Wide
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

		class EventHandlers : DefaultEventhandlers
		{
			init = "[_this select 0] execVM '\JangosVehicles\Script\OryxCrew\OryxCrew.sqf';";
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};

		class textureSources
		{
			class colorclone
			{
				displayName = "Clone 104th";
				author = "Article 2 Studios";
				textures[] = {"JangosVehiclesGround\data\textures\oryx\oryx_armor_clone_co.paa", "JangosVehicles\data\textures\oryx\oryx_main_clone_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "JangosVehicles\data\textures\oryx\oryx_turret_clone_co.paa", "JangosVehicles\data\textures\oryx\scorp_mg_clone_co.paa", "\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colorcloneblue
			{
				displayName = "Clone Blue";
				author = "Article 2 Studios";
				textures[] = {"JangosVehiclesGround\data\textures\oryx\oryx_armor_clone_blue_co.paa", "JangosVehicles\data\textures\oryx\oryx_main_clone_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "JangosVehicles\data\textures\oryx\oryx_turret_clone_co.paa", "JangosVehicles\data\textures\oryx\scorpion_mg_clone_co.paa", "\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colorclonewhite
			{
				displayName = "Clone White";
				author = "Article 2 Studios";
				textures[] = {"JangosVehiclesGround\data\textures\oryx\oryx_armor_clone_white_co.paa", "JangosVehicles\data\textures\oryx\oryx_main_clone_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "JangosVehicles\data\textures\oryx\oryx_turret_clone_co.paa", "JangosVehicles\data\textures\oryx\scorp_mg_clone_co.paa", "\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colorstand
			{
				displayName = "Standard";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\Oryx\data\texture\oryx_armor_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\oryx_main_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\oryx_turret_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\scorpion_mg_co.paa", "\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colordes
			{
				displayName = "Tan";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_desert_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_desert_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_desert_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_desert_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_desert_co.paa", "\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
			class colortund
			{
				displayName = "White Digital";
				author = "Article 2 Studios";
				textures[] = {"\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_armor_tundra_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_main_tundra_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_turret_tundra_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\Scorp_mg_tundra_co.paa", "\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};
			};
		};
		hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6", "camo7", "camo8"};
		hiddenSelectionsTextures[] = {"JangosVehiclesGround\data\textures\oryx\oryx_armor_clone_co.paa", "JangosVehiclesGround\data\textures\oryx\oryx_main_clone_co.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "\OPTRE_Vehicles\Oryx\data\texture\camo\oryx_net_tundra_ca.paa", "JangosVehiclesGround\data\textures\oryx\oryx_turret_clone_co.paa", "JangosVehiclesGround\data\textures\oryx\scorp_mg_clone_co.paa", "\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal__ca.paa"};

		class ACE_SelfActions : ACE_SelfActions
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
		class HitPoints: HitPoints{
			class HitHull{
				armor = 5;
				armorComponent = "hit_hull";
				explosionShielding = 0.8;
				material = -1;
				minimalHit = 0.2;
				name = "telo";
				passThrough = 1;
				radius = 0.3;
				visual = "hull";
			};
		}
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.56234133, 1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.56234133, 1, 20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.7782794, 1, 20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.7782794, 1, 20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.7782794, 1, 20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out", 1.7782794, 1, 20};
		soundDammage[] = {"", 0.56234133, 1};
		soundEngineOnInt[] = {"212th\Vehicles\212th_APC02\data\sounds\engine_start_int", 0.39810717, 1};
		soundEngineOnExt[] = {"212th\Vehicles\212th_APC02\data\sounds\engine_star_ext", 0.56234133, 1, 200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop", 0.39810717, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop", 0.56234133, 1, 200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 0.17782794, 1, 100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 0.17782794, 1, 100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 0.17782794, 1, 100};
		soundBushCrash[] = {"soundBushCollision1", 0.33, "soundBushCollision2", 0.33, "soundBushCollision3", 0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1", 1, 1, 100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2", 1, 1, 100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3", 1, 1, 100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4", 1, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.25, "soundGeneralCollision2", 0.25, "soundGeneralCollision3", 0.25, "soundGeneralCollision4", 0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1", 1, 1, 200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2", 1, 1, 200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3", 1, 1, 200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext", 0.3548134, 1, 200};
				frequency = "0.95 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext", 0.39810717, 1, 200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext", 0.4466836, 1, 200};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext", 0.5011872, 1, 250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext", 0.56234133, 1, 300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext", 0.63095737, 1, 300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_ext", 0.70794576, 1, 300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext", 0.56234133, 1, 200};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext", 0.63095737, 1, 200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext", 0.63095737, 1, 230};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext", 0.70794576, 1, 250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext", 0.70794576, 1, 350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext", 1, 1, 350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_ext", 1.1220185, 1, 400};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class Idle_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int", 0.31622776, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int", 0.3548134, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int", 0.39810717, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int", 0.4466836, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int", 0.5011872, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int", 0.56234133, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\Engine_int", 0.63095737, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int", 0.3548134, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int", 0.39810717, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int", 0.4466836, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int", 0.4466836, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int", 0.5011872, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int", 0.56234133, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"212th\Vehicles\212th_APC02\data\sounds\exhaust_int", 0.63095737, 1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.5011872, 1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 0.63095737, 1, 150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", 1, 1, 60};
				frequency = "1";
				volume = "camPos*rock*(Speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", 1, 1, 60};
				frequency = "1";
				volume = "camPos*sand*(Speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", 1, 1, 60};
				frequency = "1";
				volume = "camPos*grass*(Speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", 1, 1, 60};
				frequency = "1";
				volume = "camPos*mud*(Speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", 1, 1, 60};
				frequency = "1";
				volume = "camPos*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", 1, 1, 60};
				frequency = "1";
				volume = "camPos*asphalt*(Speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 1.5848932, 1, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(Speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", 0.70794576, 1};
				frequency = "1";
				volume = "(1-camPos)*rock*(Speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", 0.70794576, 1};
				frequency = "1";
				volume = "(1-camPos)*sand*(Speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", 0.70794576, 1};
				frequency = "1";
				volume = "(1-camPos)*grass*(Speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", 0.70794576, 1};
				frequency = "1";
				volume = "(1-camPos)*mud*(Speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", 0.70794576, 1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", 0.70794576, 1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(Speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.5011872, 1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(Speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 1, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", 1, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", 1, 1, 100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 1, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", 1, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", 1, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		tas_canBlift = 1;
		tas_liftVars = "[[[[0.1, -3, -5.3]]], [0.27], [-0.2]]";
		class VehicleTransport : VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = TRUE;
			};
		}
	};
	class JA_104th_Oryx : JA_104th_OryxNS
	{

		displayName = "[104th] Oryx IFV Shielded";
		armorStructural = 10;
		BNA_KC_shields_hasShield = 1;
		BNA_KC_shields_health = 1;
		BNA_KC_shields_regenAmount = 1;
		BNA_KC_shields_regenDelay = 20;
		class ACE_SelfActions : ACE_SelfActions{
			class shields_toggle {
				condition = "true";
				displayName = "Shield Health: %1";
				modifierFunction = "call BNA_KC_shields_fnc_modifyInteraction";
				statement = "";
				class Activate{
					condition = "ace_player call BNA_KC_shields_fnc_canActivate";
					displayName = "Activate Shield";
					statement = "call BNA_KC_shields_fnc_activate";
				};
				class Deactivate{
					condition = "ace_player call BNA_KC_shields_fnc_canDeactivate";
					displayName = "Deactivate Shield";
					statement = "call BNA_KC_shields_fnc_deactivate";
				};
			};
		};
	};
	class JA_104th_OryxTS : JA_104th_OryxNS
	{

		displayName = "[104th] Oryx IFV Trophy System";

		class EventHandlers : DefaultEventhandlers
		{
            Init = "[_this select 0, 150] execVM '\JangosVehiclesGround\DefenceSystem.sqf';";
		};
	};
	class JA_104th_OryxTS_Command : JA_104th_OryxNS
	{

		displayName = "[104th] Oryx IFV Command Trophy System";
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
		armor = 1200;
		armorStructural = 8;
		explosionShielding = 2;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						stabilizedInAxes = 3;
						minElev = -12;
						maxElev = 60; // Original 45
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {"3AS_Sabre_MG", "Laserdesignator_mounted"};
						magazines[] = {"3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "Laserbatteries"};
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
						discreteDistanceInitIndex = 2;
						memoryPointGunnerOptics = "commanderview";
						memoryPointGunnerOutOptics = "commanderview";
						gunnerForceOptics = 0;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerHasFlares = 1;
						class ViewOptics : ViewOptics
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
							visionMode[] = {"Normal", "TI"};
							thermalMode[] = {0, 1};
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
				weapons[] = {"ls_weapon_laati_turret_50mm_he", "ls_weapon_laati_turret_50mm_ap", "3AS_Sabre_MG", "OPTRE_M670_ATGM_Launcher", "CMFlareLauncher", "Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "ls_magazine_50mm_200Rnd_HE_green", "ls_magazine_50mm_200Rnd_APFSDS_green", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "3AS_300Rnd_SabreMG_Mag", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "OPTRE_2Rnd_GAT_missiles", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine"};
				minElev = -12;
				maxElev = 60; // Original 35
				initElev = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best", "db-40", 1.0, 50};
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
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				class OpticsIn
				{
					class Wide : ViewOptics
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
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {2, 3};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[] = {};
					};
					class Medium : Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow : Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
					class Zoom1 : Wide
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						initFov = 0.014;
						minFov = 0.014;
						maxFov = 0.014;
					};
					class Zoom2 : Wide
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

		class EventHandlers : DefaultEventhandlers
		{
            Init = "[_this select 0, 200] execVM '\JangosVehiclesGround\DefenceSystem.sqf';";
		};
	};
	
	class 3AS_Repair_Facility;
	class ACE_Actions;
	class ACE_MainActions;
	class HitPoints;
	class HitHull;
	class HitLBWheel;
	class HitLF2Wheel;
	class HitLFWheel;
	class HitLMWheel;
	class HitRBWheel;
	class HitRF2Wheel;
	class HitRFWheel;
	class HitRMWheel;
	class JA_104th_Repair_Droid: 3AS_Repair_Facility{
		author = "Dak";
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 20;
		ace_cookoff_canHaveFireJet = 1;
		ace_cookoff_cookoffSelections[] = {"poklop_gunner","poklop_commander"};
		ace_rearm_defaultSupply = 1e+12;
		ace_refuel_canReceive = 1;
		ace_refuel_flowRate = 4;
		ace_refuel_fuelCapacity = 1400;
		ace_refuel_fuelCargo = 1e+12;
		ace_refuel_hooks[] = {{0.38,-3.17,-0.7},{-0.41,-3.17,-0.7}};
		ace_repair_canRepair = 1;
		ace_tagging_canTag = 1;
		ace_vehicle_damage_canHaveFireRing = 0;
		ace_vehicle_damage_detonationDuringFireProb = 0.5;
		ace_vehicle_damage_engineDetonationProb = 0.1;
		ace_vehicle_damage_engineFireProb = 0.8;
		ace_vehicle_damage_hullDetonationProb = 0.3;
		ace_vehicle_damage_hullFireProb = 0.8;
		ace_vehicle_damage_turretDetonationProb = 0;
		ace_vehicle_damage_turretFireProb = 0;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[104th] Repair Droid";
		side = 3;
		editorCategory = "JA_104_EdCat_Objects";
		editorSubcategory = "104th_Categ_Clones_Droid";
		class EventHandlers : DefaultEventhandlers
		{
            Init = "[_this select 0, 50] execVM '\JangosVehiclesGround\RepairSystem.sqf';";
		};
		class ACE_Actions : ACE_Actions{
			class ACE_MainActions : ACE_MainActions{
				condition = "true";
				displayName = "Interactions";
				distance = 4;
				selection = "";
				class ace_repair_Repair{
					displayName = "Repair";
					distance = 4;
					exceptions[] = {"isNotSwimming","isNotOnLadder"};
					icon = "\A3\ui_f\data\igui\cfg\actions\repair_ca.paa";
				};
				class ace_rearm_Rearm{
					condition = "call ace_rearm_fnc_canRearm";
					displayName = "Rearm";
					distance = 9;
					exceptions[] = {"isNotInside"};
					icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
					statement = "call ace_rearm_fnc_rearm";
				};
				class ace_attach_AttachVehicle{
					condition = "call ace_attach_fnc_canAttach";
					displayName = "Attach item";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\attach\UI\attach_ca.paa";
					insertChildren = "call ace_attach_fnc_getChildrenActions";
					showDisabled = 0;
				};
				class ace_attach_DetachVehicle{
					condition = "call ace_attach_fnc_canDetach";
					displayName = "Detach item";
					exceptions[] = {"isNotSwimming"};
					icon = "\z\ace\addons\attach\UI\detach_ca.paa";
					showDisabled = 0;
					statement = "call ace_attach_fnc_detach";
				};
			};
		};
	};
	
	class Turrets;
	class CommanderOptics;
	class ViewOptics;
	class Components;
	class ACE_SelfActions;
	class O_APC_Wheeled_02_rcws_v2_F;
	class JA_104th_Ulik : O_APC_Wheeled_02_rcws_v2_F{
		crew = "JA_104th_P2_1C_Engineer";
		displayname = "[104th] Ulik";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
		TFAR_hasIntercom = 1;
		tf_hasIntercom = 1;
		tf_hasLRradio = 1;
		tf_isolatedAmount = 1;
		tf_range = 35000;
		enginePower = 1000;
		gearBox[] = {-7, 0, 11, 8, 5.6999998, 4.1999998};
		maxOmega = 500;
		peakTorque = 7400;
		torqueCurve[] =
			{
				"[0.291667",
				"0.540541]",
				"[0.416667",
				"0.675676]",
				"[0.583333",
				"0.810811]",
				"[0.666667",
				"0.891892]",
				"[0.75",
				"0.972973]",
				"[0.833333",
				"1.02703]",
				"[0.916667",
				"1]",
				"[1",
				"0.945946]"};
		author = "Dak";
		scope = 2;
		side = 1;
		forceInGarage = 1;
		scopeArsenal = 2;
		scopeCurator = 2;
		armor = 500;
		armorStructural = 10;
		explosionShielding = 1.5;
		weapons[] = {"SmokeLauncher"};
		magazines[] = {"SmokeLauncherMag", "SmokeLauncherMag"};
		hiddenSelections[] = {"camo1","camo2","camo3","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {
			"JangosVehiclesGround\data\textures\Ulik_APC_Wheeled_02_ext_01_CO.paa",
			"JangosVehiclesGround\data\textures\Ulik_APC_Wheeled_02_ext_02_CO.paa",
			"JangosVehiclesGround\data\textures\Ulik_Turret_CO.paa",
			"JangosVehiclesGround\data\textures\Ulik_camonet_Desert_CO.paa",
			"A3\armor_f\data\cage_csat_co.paa"
		};
		class TextureSources
		{
			class base
			{
				displayName = "White";
				author = "Legion Studio + Echo";
				textures[] = {
					"JangosVehiclesGround\data\textures\Ulik_APC_Wheeled_02_ext_01_CO.paa",
					"JangosVehiclesGround\data\textures\Ulik_APC_Wheeled_02_ext_02_CO.paa",
					"JangosVehiclesGround\data\textures\Ulik_Turret_CO.paa",
					"JangosVehiclesGround\data\textures\Ulik_camonet_Desert_CO.paa",
					"A3\armor_f\data\cage_csat_co.paa"
				};
				factions[] = {"104th_Guys"};
			};
		};
		textureList[] = {"base", 1};
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
					displayName = "Base";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					condition = "!(isNull objectParent player)";
					statement =
						"_target setObjectTextureGlobal [0,'JangosVehiclesGround\data\textures\Ulik_APC_Wheeled_02_ext_01_CO.paa'];_target setObjectTextureGlobal [1,'JangosVehiclesGround\data\textures\Ulik_APC_Wheeled_02_ext_02_CO.paa'];_target setObjectTextureGlobal [2,'JangosVehiclesGround\data\textures\Ulik_Turret_CO.paa'];_target setObjectTextureGlobal [3,'JangosVehiclesGround\data\textures\Ulik_camonet_Desert_CO.paa'];_target setObjectTextureGlobal [4,'A3\armor_f\data\cage_csat_co.paa']";
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class 104th_Skins
				{
					displayname = "104th Skins";
				};
			};
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
		class TransportWeapons
		{
			class _xx_ls_weapon_rps6{
				count = 2;
				weapon = "ls_weapon_rps6";
			};
			class _xx_ls_weapon_rps6_loaded{
				count = 4;
				weapon = "ls_weapon_rps6_loaded";
			};
			class _xx_JA_104th_DC17SA{
				count = 2;
				weapon = "JA_104th_DC17SA";
			};
			class _xx_JA_104th_DC15S{
				count = 2;
				weapon = "JA_104th_DC15S";
			};
		};
		class TransportMagazines
		{
			class _xx_Aux501_Weapons_Mags_Grenades_Squad_Shield
			{
				count = 2;
				magazine = "Aux501_Weapons_Mags_Grenades_Squad_Shield";
			};
			class _xx_JA_104th_Weapons_Mags_20mw240
			{
				count = 40;
				magazine = "JA_104th_Weapons_Mags_20mw240";
			};
			class _xx_JA_104th_Weapons_Mags_30mw30
			{
				count = 10;
				magazine = "JA_104th_Weapons_Mags_30mw30";
			};
			class _xx_JA_104th_Weapons_Mags_10mw50
			{
				count = 150;
				magazine = "JA_104th_Weapons_Mags_10mw50";
			};
			class _xx_JA_104th_Weapons_Mags_40mw20
			{
				count = 10;
				magazine = "JA_104th_Weapons_Mags_40mw20";
			};
			class _xx_JA_104th_Weapons_Mags_20mw40
			{
				count = 150;
				magazine = "JA_104th_Weapons_Mags_20mw40";
			};
			class _xx_JA_104th_Weapons_Mags_10mw30
			{
				count = 35;
				magazine = "JA_104th_Weapons_Mags_10mw30";
			};
			class _xx_JA_104th_Weapons_Mags_10mw500
			{
				count = 10;
				magazine = "JA_104th_Weapons_Mags_10mw500";
			};
			class _xx_3AS_10Rnd_EC30_Pellets
			{
				count = 60;
				magazine = "3AS_10Rnd_EC30_Pellets";
			};
			class _xx_3AS_10Rnd_ESlug_Mag
			{
				count = 60;
				magazine = "3AS_10Rnd_ESlug_Mag";
			};
			class _xx_JLTS_stun_mag_long
			{
				count = 8;
				magazine = "JLTS_stun_mag_long";
			};
			class _xx_JLTS_stun_mag_short
			{
				count = 8;
				magazine = "JLTS_stun_mag_short";
			};
			class _xx_ls_magazine_rps6_heat
			{
				count = 8;
				magazine = "ls_magazine_rps6_heat";
			};
			class _xx_ls_magazine_plx1_at
			{
				count = 6;
				magazine = "ls_magazine_plx1_at";
			};
			class _xx_JA_104th_Weapons_Mags_GL_HE3
			{
				count = 20;
				magazine = "JA_104th_Weapons_Mags_GL_HE3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_HE2
			{
				count = 20;
				magazine = "JA_104th_Weapons_Mags_GL_HE2";
			};
			class _xx_JA_104th_Weapons_Mags_GL_smoke_blue3
			{
				count = 6;
				magazine = "JA_104th_Weapons_Mags_GL_smoke_blue3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_smoke_purple3
			{
				count = 6;
				magazine = "JA_104th_Weapons_Mags_GL_smoke_purple3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_smoke_red3
			{
				count = 6;
				magazine = "JA_104th_Weapons_Mags_GL_smoke_red3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_smoke_white6
			{
				count = 12;
				magazine = "JA_104th_Weapons_Mags_GL_smoke_white6";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_Blue3
			{
				count = 3;
				magazine = "JA_104th_Weapons_Mags_GL_flare_Blue3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_Purple3
			{
				count = 6;
				magazine = "JA_104th_Weapons_Mags_GL_flare_Purple3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_Red3
			{
				count = 6;
				magazine = "JA_104th_Weapons_Mags_GL_flare_Red3";
			};
			class _xx_JA_104th_Weapons_Mags_GL_flare_White3
			{
				count = 6;
				magazine = "JA_104th_Weapons_Mags_GL_flare_White3";
			};
			class _xx_Aux501_Weapons_Mags_Thermal_Detonator
			{
				count =30;
				magazine = "Aux501_Weapons_Mags_Thermal_Detonator";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_White
			{
				count = 40;
				magazine = "Aux501_Weapons_Mags_Smoke_White";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Red
			{
				count = 6;
				magazine = "Aux501_Weapons_Mags_Smoke_Red";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Blue
			{
				count = 6;
				magazine = "Aux501_Weapons_Mags_Smoke_Blue";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Purple
			{
				count = 6;
				magazine = "Aux501_Weapons_Mags_Smoke_Purple";
			};
			class _xx_Aux501_Weapons_Mags_Smoke_Green
			{
				count = 6;
				magazine = "Aux501_Weapons_Mags_Smoke_Green";
			};
			class _xx_Laserbatteries
			{
				count = 10;
				magazine = "Laserbatteries";
			};
			class _xx_BNA_KC_Grenade_EMP
			{
				count = 6;
				magazine = "BNA_KC_Grenade_EMP";
			};
			class _xx_Aux501_Weapons_Mags_Grenades_Shield_Personal
			{
				count = 8;
				magazine = "Aux501_Weapons_Mags_Grenades_Shield_Personal";
			};
		};
		class TransportItems
		{
			class _xx_ACE_quikclot
			{
				count = 50;
				name = "ACE_quikclot";
			};
			class _xx_ACE_packingBandage
			{
				count = 100;
				name = "ACE_packingBandage";
			};
			class _xx_ACE_elasticBandage
			{
				count = 300;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_epinephrine
			{
				count = 40;
				name = "ACE_epinephrine";
			};
			class _xx_ACE_morphine
			{
				count = 40;
				name = "ACE_morphine";
			};
			class _xx_ACE_adenosine
			{
				count = 20;
				name = "ACE_adenosine";
			};
			class _xx_RD501_Painkiller
			{
				count = 60;
				name = "RD501_Painkiller";
			};
			class _xx_ACE_plasmaIV
			{
				count = 10;
				name = "ACE_plasmaIV";
			};
			class _xx_ACE_plasmaIV_500
			{
				count = 5;
				name = "ACE_plasmaIV_500";
			};
			class _xx_ACE_bloodIV_500
			{
				count = 5;
				name = "ACE_bloodIV_500";
			};
			class _xx_ACE_bloodIV
			{
				count = 10;
				name = "ACE_bloodIV";
			};
			class _xx_ACE_salineIV_500
			{
				count = 5;
				name = "ACE_salineIV_500";
			};
			class _xx_ACE_salineIV
			{
				count = 10;
				name = "ACE_salineIV";
			};
			class _xx_ACE_tourniquet
			{
				count = 25;
				name = "ACE_tourniquet";
			};
			class _xx_Aux501_Carbonate
			{
				count = 25;
				name = "Aux501_Carbonate";
			};
			class _xx_JLTS_clone_comlink{
				count = 5;
				name = "JLTS_clone_comlink";
			};
		};
		class Turrets : Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"JA_104th_Z6_weaker","JA_104th_HE_Lazer_Ulik", "CMFlareLauncher", "Laserdesignator_mounted"};
				magazines[] = {"JA_104th_Weapons_Mags_10mw500", "JA_104th_Weapons_Mags_10mw500", "JA_104th_Weapons_Mags_10mw500", "JA_104th_Weapons_Mags_10mw500", "JA_104th_Weapons_Mags_10mw500", "JA_104th_Weapons_Mags_10mw500", "JA_104th_Weapons_Mags_10mw500","JA_104th_HE_Lazer_MAG_250", "JA_104th_HE_Lazer_MAG_250", "JA_104th_HE_Lazer_MAG_250", "240Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "Laserbatteries"};
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						class ViewOptics : ViewOptics
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
							visionMode[] = {"Normal", "TI"};
							thermalMode[] = {0, 1};
						};
					};
				};
			};
		};
		class components : Components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class IRSensorComponent : SensorTemplateIR
					{
						typeRecognitionDistance = 1000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						maxFogSeeThrough = -1;
						nightRangeCoef = 1;
						class AirTarget
						{
							minRange = 0;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
							maxFogSeeThrough = -1;
							nightRangeCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 2000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
							maxFogSeeThrough = -1;
							nightRangeCoef = 1;
						};
					};
					class ActiveRadarSensorComponent : SensorTemplateActiveRadar
					{
						typeRecognitionDistance = 750;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class VisualSensorComponent : SensorTemplateVisual
					{
						typeRecognitionDistance = 750;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 1000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class ManSensorComponent : SensorTemplateMan
					{
						typeRecognitionDistance = 300;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = 1600;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 2000;
						class AirTarget
						{
							minRange = 0;
							maxRange = 300;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 300;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent : SensorTemplateDataLink
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 16000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						componentType = "DataLinkSensorComponent";
						allowsMarking = 1;
						typeRecognitionDistance = 0;
						color[] = {1, 1, 1, 0};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				right=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - (  (10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
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
						range[] = {8000, 4000, 2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				left=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
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
						range[] = {8000, 4000, 2000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		class HitPoints: HitPoints{
			class HitHull : HitHull{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
			class HitLBWheel : HitLBWheel{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
			class HitLF2Wheel : HitLF2Wheel{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
			class HitLFWheel : HitLFWheel{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
			class HitLMWheel : HitLMWheel{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
			class HitRBWheel : HitRBWheel{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
			class HitRF2Wheel : HitRF2Wheel{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
			class HitRFWheel : HitRFWheel{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
			class HitRMWheel : HitRMWheel{
				armor = 8;
				passThrough = 1;
				explosionShielding = 1.5;
			};
		};
	};
	
};


class CfgDigVehicles
{
	class 104th_MudHorn_tank_mobile
	{
		type = "animate";
		animation = "moveplow";
		selection = "plow";
		plowRaised = 0;
		plowLowered = 0.89999998;
		distanceToTrench = 3.3499999;
	};
	class 104th_MudHorn_tank_field
	{
		type = "animate";
		animation = "moveplow";
		selection = "plow";
		plowRaised = 0;
		plowLowered = 0.89999998;
		distanceToTrench = 3.3499999;
	};
};