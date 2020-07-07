class CfgPatches
{
	class Jangos_Armory_Vehicles
	{
		units[] = {
			"JA_104th_Base_LAAT",
			"JA_104th_Base_LAAT_AB",
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
			"JA_104th_Box_Ammo"
		};	//All the new vehicles/units you've created in cfgVehicles
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ls_core","A3_Air_F_EPB_Heli_Light_03"};
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

class cfgVehicles {
	
	class Helicopter_Base_F
	{
		class HitPoints;
	};
	
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class HitPoints: HitPoints
		{
			class HitFuel;
		};
	};
	
	class ls_laat_base: Helicopter_Base_H
	{
		class HitPoints
		{
			class HitFuel
			{
				passthrough = 0;
				minimalhit = 0;
				armor = 999;
			};
		};
	};
	
	class 212th_B_APC_Wheeled_01_cannon_F;
	class RD501_fast_infantry_transport_republic;
	class RD501_fast_infantry_transport_republic_medic;
	class RD501_light_infantry_transport_Rep_MkII;
	class SWLG_tanks_tx130;
	class rd501_sw_barc;

	class ls_laat;
	class ls_laat_ab; 
	class RD501_LAAT_cargo_Mk2;
	class RD501_LAAT_Mk3;
	class 212th_Reaper_V_Wing;
	class RD501__ARC_170_MKII;
	class 212th_Reaper_Y_Wing;
	class RD501_u_wing_MKII;
	class OPTRE_UNSC_falcon;
	class OPTRE_Pelican_unarmed;
	class OPTRE_Pelican_armed;

	class Box_212_Supply_F;

	class JA_104th_Base_LAAT: ls_laat //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Echo";
		displayName = "LAATe";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		
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
		crewCrashProtection = 0.01;
		
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","OPTRE_M9109","RD501_wynd_a2a","missiles_DAR","CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","OPTRE_2500Rnd_50mm_HE","RD501_a2a_x4_mag","RD501_a2a_x4_mag","12rnd_missiles","12rnd_missiles","12rnd_missiles","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};
		
	};
	class JA_104th_Base_LAAT_AB: ls_laat_ab //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Echo";
		displayName = "LAATe AB";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		
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
		crewCrashProtection = 0.01;
		
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","OPTRE_M9109","RD501_wynd_a2a","missiles_DAR","CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","OPTRE_2500Rnd_50mm_HE","RD501_a2a_x4_mag","RD501_a2a_x4_mag","12rnd_missiles","12rnd_missiles","12rnd_missiles","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine"};
		
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
	class JA_104th_Base_Vwing_Reaper: 212th_Reaper_V_Wing //The : Tells your new class to inherit everything from the ls_laat class.
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
	class JA_104th_Base_Arc170_Mk2: RD501__ARC_170_MKII //The : Tells your new class to inherit everything from the ls_laat class.
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
	class JA_104th_Base_Ywing_Reaper: 212th_Reaper_Y_Wing //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "Y-Wing Reaper"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
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

	class JA_104th_Base_Bantha: 212th_B_APC_Wheeled_01_cannon_F //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Dak";
		displayName = "Bantha IFV"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
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
	};
	class JA_104th_Base_Barc_Speeder: rd501_sw_barc 
	{
		author = "Dak";
		displayName = "Barc Speeder"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class JA_104th_Base_Pathfinder: RD501_fast_infantry_transport_republic
	{
		author = "Dak";
		displayName = "Pathfinder"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class JA_104th_Medical_Pathfinder: RD501_fast_infantry_transport_republic_medic
	{
		author = "Dak";
		displayName = "Pathfinder - Medical"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};
	class JA_104th_Base_Tempest: RD501_light_infantry_transport_Rep_MkII
	{
		author = "Dak";
		displayName = "Tempest"; 
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Land";
	};

	//Split

	class JA_104th_Box_Ammo: Box_212_Supply_F
	{
		author = "Dak";
		displayName = "Ammo Box - 104th";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		editorCategory = "104th_Guys_2";
		editorSubcategory = "104th_Categ_Clones_Boxes";
		class TransportMagazines
		{
			class _xx_212th_200Rnd_VALKEN38SAW_mag{
				count = 10;
				magazine = "212th_200Rnd_VALKEN38SAW_mag";
			};
			class _xx_212th_35Rnd_DC15A_mag{
				count = 30;
				magazine = "212th_35Rnd_DC15A_mag";
			};
			class _xx_212th_45Rnd_DC15S_mag{
				count = 30;
				magazine = "212th_45Rnd_DC15S_mag";
			};
			class _xx_212th_600Rnd_z6_mag{
				count = 10;
				magazine = "212th_600Rnd_z6_mag";
			};
			class _xx_SCI_200Rnd_VALKEN38SAW_mag{
				count = 10;
				magazine = "SCI_200Rnd_VALKEN38SAW_mag";
			};
			class _xx_SCI_35Rnd_DC15A_mag{
				count = 30;
				magazine = "SCI_35Rnd_DC15A_mag";
			};
			class _xx_SCI_45Rnd_DC15S_mag{
				count = 30;
				magazine = "SCI_45Rnd_DC15S_mag";
			};
			class _xx_SCI_5Rnd_VALKEN38SAW_mag{
				count = 30;
				magazine = "SCI_5Rnd_VALKEN38SAW_mag";
			};
			class _xx_SCI_600Rnd_z6_mag{
				count = 10;
				magazine = "SCI_600Rnd_z6_mag";
			};
			class _xx_300Rnd_BlasterLaser_Belt{
				count = 10;
				magazine = "RD501_z6_x400_mag";
			};
			class _xx_5Rnd_HE_Grenade_DC15A{
				count = 10;
				magazine = "RD501_HE_GL_x3_mag";
			};
			class _xx_ACE_HuntIR_M203{
				count = 10;
				magazine = "ACE_HuntIR_M203";
			};
			class _xx_C12_Remote_Mag{
				count = 10;
				magazine = "C12_Remote_Mag";
			};
			class _xx_DCStun_Mag{
				count = 10;
				magazine = "DCStun_Mag";
			};
			class _xx_RD501_DC15ABlasterRifleLE_Full_Mag{
				count = 10;
				magazine = "RD501_DC15a_LE_x15_mag";
			};
			class _xx_Rocket_AA_mags{
				count = 10;
				magazine = "RD501_RPS_AA_x1_mag";
			};
			class _xx_RocketHH15CloneHEATFF_Mag_RD501{
				count = 10;
				magazine = "RD501_AT_GL_x2_mag";
			};
			class _xx_SWOP_1Rnd_AT_Grenade_DC15A_Mag{
				count = 10;
				magazine = "RD501_DC15s_x60_mag";
			};
			class _xx_SWOP_DC15_Mag_Mag{
				count = 10;
				magazine = "RD501_DC15a_Low_x60_mag";
			};
			class _xx_SWOP_DC15ABlasterRifle_Low_Mag{
				count = 10;
				magazine = "RD501_DC15a_Med_x30_mag";
			};
			class _xx_SWOP_DC15ABlasterRifle_Mag{
				count = 10;
				magazine = "RD501_DC15a_box_mag_x240_mag";
			};
			class _xx_SWOP_SWOP_dc15xBlasterRifle_RD501_Mag_Mag{
				count = 10;
				magazine = "RD501_DC15x_x6_mag";
			};
			class _xx_SWOP_SWOP_DC17Pistol_Mag_Mag{
				count = 10;
				magazine = "RD501_DC17_x20_mag";
			};
			class _xx_SWOP_SWOP_WESTARM5_MAG{
				count = 10;
				magazine = "SWOP_WESTARM5_Mag";
			};
			class _xx_UGL_3Rnd_Smoke_Grenade_shell{
				count = 10;
				magazine = "3Rnd_Smoke_Grenade_shell";
			};
			class _xx_UGL_FlareWhite_F_3Rnd_RD501{
				count = 10;
				magazine = "UGL_FlareWhite_F_3Rnd_RD501";
			};
			class DC15_A_Rifle_full_mag{
				count = 20;
				magazine = "RD501_DC15a_High_x15_mag";
			};
			class _xx_SWLW_DC15A_mag{
				count = 50;
				magazine = "SWLW_DC15A_mag";
			};
			class _xx_SWLW_DC15S_mag{
				count = 50;
				magazine = "SWLW_DC15S_mag";
			};
			class _xx_SWLW_DC17_mag{
				count = 20;
				magazine = "SWLW_DC17_mag";
			};
			class _xx_SWLW_mag_40mm_10rnd{
				count = 10;
				magazine = "SWLW_mag_40mm_10rnd";
			};
			class _xx_SWLW_mag_40mm_3rnd{
				count = 10;
				magazine = "SWLW_mag_40mm_3rnd";
			};
			class _xx_SWLW_mag_40mm_3rnd_2{
				count = 10;
				magazine = "SWLW_mag_40mm_3rnd_2";
			};
			class _xx_SWLW_Z6_mag{
				count = 10;
				magazine = "SWLW_Z6_mag";
			};
			class _xx_SWLW_DC15X_mag{
				count = 20;
				magazine = "SWLW_DC15X_mag";
			};
			class _xx_SWLW_WestarM5_mag{
				count = 20;
				magazine = "SWLW_WestarM5_mag";
			};
			class _xx_SWLW_plx1_aa_mag{
				count = 10;
				magazine = "SWLW_plx1_aa_mag";
			};
			class _xx_SWLW_plx1_at_mag{
				count = 10;
				magazine = "SWLW_plx1_at_mag";
			};
			class _xx_SWLW_rps6_mag{
				count = 40;
				magazine = "SWLW_rps6_mag";
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
	};
};