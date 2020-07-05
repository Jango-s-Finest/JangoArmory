class CfgPatches
{
	class Jangos_Armory_Vehicles
	{
		units[] = {
			"JA_104th_Base_LAAT",
			"JA_104th_Base_LAAT_AB",
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
	class 104th_Categ_Clones_Vehicles
	{
		displayname = "104th - Vehicles";
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
	
	class ls_laat;
	class ls_laat_ab;  //Tells the game to fetch the ls_laat class, as we plan to use most of what's already written.
	class Box_212_Supply_F;

	class JA_104th_Base_LAAT: ls_laat //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Echo";
		displayName = "LAAT - 104th"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles";
		
		armor = 500;
		armorStructural = 2;
		
		DriverCanEject = 1;
		
		irScanRangeMax = 10000;
		irScanRangeMin = 100;
		irScanToEyeFactor = 4;
		laserScanner = 1;
		
		
		weapons[] = {"Laserdesignator_pilotCamera","ls_laat_gun","ls_laat_gun_2","OPTRE_M9109","missiles_DAR","CMFlareLauncher","SmokeLauncher"};
		magazines[] = {"Laserbatteries","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","OPTRE_2500Rnd_50mm_HE","12rnd_missiles","12rnd_missiles","12rnd_missiles","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","SmokeLauncherMag","SmokeLauncherMag"};
		
		
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
					thermalMode[] = {0,1,2,3,4,5};
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
		};
	};
	class JA_104th_Base_LAAT_AB: ls_laat_ab //The : Tells your new class to inherit everything from the ls_laat class.
	{
		author = "Echo";
		displayName = "LAAT AB - 104th"; //Name shown for vehicle in Editor/Zeus/Map/Scroll menu
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles";
		
		armor = 500;
		armorStructural = 2;
		
		DriverCanEject = 1;
		
		irScanRangeMax = 10000;
		irScanRangeMin = 100;
		irScanToEyeFactor = 4;
		laserScanner = 1;
		
		
		weapons[] = {"Laserdesignator_pilotCamera","ls_laat_gun","ls_laat_gun_2","OPTRE_M9109","missiles_DAR","CMFlareLauncher","SmokeLauncher"};
		magazines[] = {"Laserbatteries","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","OPTRE_2500Rnd_50mm_HE","12rnd_missiles","12rnd_missiles","12rnd_missiles","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","SmokeLauncherMag","SmokeLauncherMag"};
		
		
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
					thermalMode[] = {0,1,2,3,4,5};
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
		};
	};
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