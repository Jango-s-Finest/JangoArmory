#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_Armory_Dire
	{
		author = "Jango's Finest";
		units[] = {
			"JA_104th_Base_P2_Dire_Zivi",
			"JA_104th_Base_P2_Dire_ARF",
			"JA_104th_Base_P2_Dire",
			"JA_104th_Base_P2_Dire_Medic",
			"JA_104th_Base_Blue_Dire_Zivi",
			"JA_104th_Base_Blue_Dire_ARF",
			"JA_104th_Base_Blue_Dire",
			"JA_104th_Base_Blue_Dire_Medic",
			"JA_104th_Base_ME_Dire_Zivi",
			"JA_104th_Base_ME_Dire_ARF",
			"JA_104th_Base_ME_Dire",
			"JA_104th_Base_ME_Dire_Medic"};
		weapons[] = {
			"JA_Dire_P2_Base_Zivi_Helmet",
			"JA_Dire_P2_Base_Zivi_Uniform",
			"JA_Dire_P2_Base_ARF_Helmet",
			"JA_Dire_P2_Base_ARF_Uniform",
			"JA_Dire_P2_Base_Helmet",
			"JA_Dire_P2_Base_Uniform",
			"JA_Dire_P2_Base_Medic_Helmet",
			"JA_Dire_P2_Base_Medic_Uniform",
			"JA_Dire_Blue_Base_Zivi_Helmet",
			"JA_Dire_Blue_Base_Zivi_Uniform",
			"JA_Dire_Blue_Base_ARF_Helmet",
			"JA_Dire_Blue_Base_ARF_Uniform",
			"JA_Dire_Blue_Base_Helmet",
			"JA_Dire_Blue_Base_Uniform",
			"JA_Dire_Blue_Base_Medic_Helmet",
			"JA_Dire_Blue_Base_Medic_Uniform",
			"JA_Dire_Base_ME_Zivi_Helmet",
			"JA_Dire_Base_ME_Zivi_Uniform",
			"JA_Dire_Base_ME_ARF_Helmet",
			"JA_Dire_Base_ME_ARF_Uniform",
			"JA_Dire_Base_ME_Helmet",
			"JA_Dire_Base_ME_Uniform",
			"JA_Dire_Base_ME_Medic_Helmet",
			"JA_Dire_Base_ME_Medic_Uniform"};
	};
};

class CfgFactionClasses
{
	class 104th_Guys
	{
		displayname = "Jango's Finest";
		priority = 1; // Position in list.
		side = 1;	  // Opfor = 0, Blufor = 1, Indep = 2.
	};
};
class cfgEditorSubcategories
{
	class 104th_Categ_Clones_dire
	{
		displayname = "104th - Dire Company";
	};
};

class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_phase2_uniform;
	class ls_gar_marshalCommander_uniform;
	class ls_gar_arc_vest;
	class ls_gar_officer_vest;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p1Rangefinder_nvg;
	class ls_gar_commander_vest;
	class ls_gar_barc_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_phase1_helmet;
	class ls_gar_rex_helmet;
	class ls_gar_phase2_helmet;
	class lsd_gar_standart_nvg;
	class lsd_gar_rangefinder_nvg;
	class lsd_gar_p2MarshalCommander_nvg;
	class ls_gar_clone_vest;
	class ls_gar_airborneNCO_vest;
	class UniformItem;

	class JA_Dire_P2_Base_Zivi_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P2 Helmet (Captain Zivi)";										  // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Captain_Zivi_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};

	class JA_Dire_P2_Base_Zivi_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Captain Zivi)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_Captain_Zivi_Upper.paa",
				"104thDireCompany\data\Textures\Base_Captain_Zivi_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Dire_Zivi";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Dire_P2_Base_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (Dire P2)";										  // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_ARF_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};

	class JA_Dire_P2_Base_ARF_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Dire P2)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_Dire_ARF_Upper.paa",
				"104thDireCompany\data\Textures\Base_Dire_ARF_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Dire_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Dire_P2_Base_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P2 Helmet (Dire P2)";									  // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};

	class JA_Dire_P2_Base_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Dire P2)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_Dire_Upper.paa",
				"104thDireCompany\data\Textures\Base_Dire_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Dire";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Dire_P2_Base_Medic_Helmet : ls_gar_phase2_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P2 medic Helmet (Dire P2)";									// the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_Medic_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"}; // the file path to the texture
	};

	class JA_Dire_P2_Base_Medic_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper medic armor (Dire P2)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_Dire_Medic_Upper.paa",
				"104thDireCompany\data\Textures\Base_Dire_Medic_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_P2_Dire_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Dire_Blue_Base_Zivi_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P1 Helmet (Captain Zivi - Blue)";									   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Captain_Zivi_Helmet_Blue.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_Dire_Blue_Base_Zivi_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Captain Zivi - Blue)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_Captain_Zivi_Upper_Blue.paa",
				"104thDireCompany\data\Textures\Base_Captain_Zivi_Lower_Blue.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Blue_Dire_Zivi";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Dire_Blue_Base_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (Dire Blue)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_ARF_Helmet_Blue.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};

	class JA_Dire_Blue_Base_ARF_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Dire Blue)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_Dire_ARF_Upper_Blue.paa",
				"104thDireCompany\data\Textures\Base_Dire_ARF_Lower_Blue.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Blue_Dire_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Dire_Blue_Base_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P1 Helmet (Dire Blue)";									   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_Helmet_Blue.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_Dire_Blue_Base_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Dire Blue)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_Dire_Upper_Blue.paa",
				"104thDireCompany\data\Textures\Base_Dire_Lower_Blue.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Blue_Dire";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Dire_Blue_Base_Medic_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper P1 medic Helmet (Dire Blue)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_Medic_Helmet_Blue.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_Dire_Blue_Base_Medic_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper medic armor (Dire Blue)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_Dire_Medic_Upper_Blue.paa",
				"104thDireCompany\data\Textures\Base_Dire_Medic_Lower_Blue.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_Blue_Dire_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Dire_Base_ME_Zivi_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Helmet (Captain Zivi - ME)";										 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_ME_Captain_Zivi_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_Dire_Base_ME_Zivi_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Captain Zivi - ME)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_ME_Captain_Zivi_Upper.paa",
				"104thDireCompany\data\Textures\Base_ME_Captain_Zivi_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Dire_Zivi";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Dire_Base_ME_ARF_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper ARF Helmet (Dire ME)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_ME_Dire_ARF_Helmet.paa","","\ls\core\addons\characters_clone_legacy\helmets\arf\data\helmet_co.paa"}; // the file path to the texture
	};

	class JA_Dire_Base_ME_ARF_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper ARF armor (Dire ME)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_ME_Dire_ARF_Upper.paa",
				"104thDireCompany\data\Textures\Base_ME_Dire_ARF_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Dire_ARF";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
	class JA_Dire_Base_ME_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper Helmet (Dire ME)";											 // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_ME_Dire_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_Dire_Base_ME_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper armor (Dire ME)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_ME_Dire_Upper.paa",
				"104thDireCompany\data\Textures\Base_ME_Dire_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Dire";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};

	class JA_Dire_Base_ME_Medic_Helmet : ls_gar_phase1_helmet
	{
		author = "Dak";
		scopeArsenal = 2;
		side = 1;
		grad_slingHelmet_allow = true;

		displayname = "Clone Trooper medic Helmet (Dire ME)";										   // the name it will be in game
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_ME_Dire_Medic_Helmet.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa","\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa"}; // the file path to the texture
	};

	class JA_Dire_Base_ME_Medic_Uniform : ls_gar_phase2_uniform
	{
		author = "Dak";
		scope = 2;
		allowedSlots[] = {BACKPACK_SLOT};
		displayName = "Clone Trooper medic armor (Dire ME)";
		hiddenSelections[] =
			{
				"camo1",
				"camo2"};
		hiddenSelectionsTextures[] =
			{
				"104thDireCompany\data\Textures\Base_ME_Dire_Medic_Upper.paa",
				"104thDireCompany\data\Textures\Base_ME_Dire_Medic_Lower.paa"};
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "JA_104th_Base_ME_Dire_Medic";
			containerClass = "Supply150";
			mass = 40;
			uniformType = "Neopren";
		};
	};
};

class CfgVehicles
{
	class lsd_gar_phase2_base;
	class lsd_gar_phase2_base;
	class ls_gar_marshalCommander_base;
	class ls_gar_standart_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_Radio_backpack;
	/////////P2
	class JA_104th_Base_P2_Dire_Zivi : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_P2_Base_Zivi_Uniform";
		displayName = "P2 - Captain Zivi";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Captain_Zivi_Upper.paa", "104thDireCompany\data\Textures\Base_Captain_Zivi_Lower.paa"};
		linkedItems[] = {JA_Dire_P2_Base_Zivi_Helmet, lsd_gar_rangefinder_nvg, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_P2_Base_Zivi_Helmet, lsd_gar_rangefinder_nvg, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Dire_ARF : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_P2_Base_ARF_Uniform";
		displayName = "P2 - ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_ARF_Upper.paa", "104thDireCompany\data\Textures\Base_Dire_ARF_Lower.paa"};
		linkedItems[] = {JA_Dire_P2_Base_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_P2_Base_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Dire : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_P2_Base_Uniform";
		displayName = "P2 - Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_Upper.paa", "104thDireCompany\data\Textures\Base_Dire_Lower.paa"};
		linkedItems[] = {JA_Dire_P2_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_P2_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_P2_Dire_Medic : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_P2_Base_Medic_Uniform";
		displayName = "P2 - Trooper Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_Medic_Upper.paa", "104thDireCompany\data\Textures\Base_Dire_Medic_Lower.paa"};
		linkedItems[] = {JA_Dire_P2_Base_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_P2_Base_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	/////////Blue
	class JA_104th_Base_Blue_Dire_Zivi : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_Blue_Base_Zivi_Uniform";
		displayName = "Blue - Captain Zivi";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Captain_Zivi_Upper_Blue.paa", "104thDireCompany\data\Textures\Base_Captain_Zivi_Lower_Blue.paa"};
		linkedItems[] = {JA_Dire_Blue_Base_Zivi_Helmet, lsd_gar_p1Rangefinder_nvg, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_Blue_Base_Zivi_Helmet, lsd_gar_p1Rangefinder_nvg, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_Blue_Dire_ARF : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_Blue_Base_ARF_Uniform";
		displayName = "Blue - ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_ARF_Upper_Blue.paa", "104thDireCompany\data\Textures\Base_Dire_ARF_Lower_Blue.paa"};
		linkedItems[] = {JA_Dire_Blue_Base_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_Blue_Base_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_Blue_Dire : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_Blue_Base_Uniform";
		displayName = "Blue - Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_Upper_Blue.paa", "104thDireCompany\data\Textures\Base_Dire_Lower_Blue.paa"};
		linkedItems[] = {JA_Dire_Blue_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_Blue_Base_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_Blue_Dire_Medic : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_Blue_Base_Medic_Uniform";
		displayName = "Blue - Trooper Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_Dire_Medic_Upper_Blue.paa", "104thDireCompany\data\Textures\Base_Dire_Medic_Lower_Blue.paa"};
		linkedItems[] = {JA_Dire_Blue_Base_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_Blue_Base_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	/////////ME
	class JA_104th_Base_ME_Dire_Zivi : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_Base_ME_Zivi_Uniform";
		displayName = "ME - Captain Zivi";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_ME_Captain_Zivi_Upper.paa", "104thDireCompany\data\Textures\Base_ME_Captain_Zivi_Lower.paa"};
		linkedItems[] = {JA_Dire_Base_ME_Zivi_Helmet, lsd_gar_p1Rangefinder_nvg, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_Base_ME_Zivi_Helmet, lsd_gar_p1Rangefinder_nvg, ls_gar_officer_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_ME_Dire_ARF : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_Base_ME_ARF_Uniform";
		displayName = "ME - ARF";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_ME_Dire_ARF_Upper.paa", "104thDireCompany\data\Textures\Base_ME_Dire_ARF_Lower.paa"};
		linkedItems[] = {JA_Dire_Base_ME_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_Base_ME_ARF_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_ME_Dire : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_Base_ME_Uniform";
		displayName = "ME - Trooper";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_ME_Dire_Upper.paa", "104thDireCompany\data\Textures\Base_ME_Dire_Lower.paa"};
		linkedItems[] = {JA_Dire_Base_ME_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		 // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_Base_ME_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
	class JA_104th_Base_ME_Dire_Medic : lsd_gar_phase2_base
	{
		author = "Dak";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		uniformClass = "JA_Dire_Base_ME_Medic_Uniform";
		displayName = "ME - Trooper Medic";
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_dire";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"104thDireCompany\data\Textures\Base_ME_Dire_Medic_Upper.paa", "104thDireCompany\data\Textures\Base_ME_Dire_Medic_Lower.paa"};
		linkedItems[] = {JA_Dire_Base_ME_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio};		   // all items that will be on unit
		respawnLinkedItems[] = {JA_Dire_Base_ME_Medic_Helmet, ls_gar_clone_vest, ItemMap, ItemCompass, ItemWatch, ItemGPS, ItemRadio}; // all items that will be on unit on respawn
	};
};

class CfgGroups
{
	class West
	{
		class JA_Bluefor
		{
			name = "Jango's Finest";
			class JA_Bluefor_P2_Troopers_Dire
			{
				name = "Dire - P2";
				class JA_Group_P2_Team_Dire
				{
					name = "P2 - Team";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_P2_Dire_Medic";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
				};
				class JA_Group_P2_Squad_Dire
				{
					name = "P2 - Squad";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_P2_Dire_Medic";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
					class Unit4
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
						side = 1;
					};
					class Unit5
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 1;
					};
				};
				class JA_Group_Zivi_P2_Squad_Dire
				{
					name = "P2 - Zivi Squad";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_P2_Dire_Zivi";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_P2_Dire_Medic";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
					class Unit4
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
						side = 1;
					};
					class Unit5
					{
						vehicle = "JA_104th_Base_P2_Dire";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 1;
					};
				};
				class JA_Group_ARF_Team_Dire
				{
					name = "ARF - Team";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_P2_Dire_ARF";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_P2_Dire_ARF";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_P2_Dire_ARF";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_P2_Dire_ARF";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
				};
			};
			class JA_Bluefor_Blue_Troopers_Dire
			{
				name = "Dire - Blue";
				class JA_Group_Blue_Team_Dire
				{
					name = "Blue - Team";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_Blue_Dire_Medic";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
				};
				class JA_Group_Blue_Squad_Dire
				{
					name = "Blue - Squad";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_Blue_Dire_Medic";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
					class Unit4
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
						side = 1;
					};
					class Unit5
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 1;
					};
				};
				class JA_Group_Zivi_Blue_Squad_Dire
				{
					name = "Blue - Zivi Squad";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_Blue_Dire_Zivi";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_Blue_Dire_Medic";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
					class Unit4
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
						side = 1;
					};
					class Unit5
					{
						vehicle = "JA_104th_Base_Blue_Dire";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 1;
					};
				};
				class JA_Group_ARF_Team_Dire
				{
					name = "ARF - Team";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_Blue_Dire_ARF";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_Blue_Dire_ARF";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_Blue_Dire_ARF";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_Blue_Dire_ARF";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
				};
			};
			class JA_Bluefor_ME_Troopers_Dire
			{
				name = "Dire - ME";
				class JA_Group_ME_Team_Dire
				{
					name = "ME - Team";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_ME_Dire_Medic";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
				};
				class JA_Group_ME_Squad_Dire
				{
					name = "ME - Squad";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_ME_Dire_Medic";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
					class Unit4
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
						side = 1;
					};
					class Unit5
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 1;
					};
				};
				class JA_Group_Zivi_ME_Squad_Dire
				{
					name = "ME - Zivi Squad";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_ME_Dire_Zivi";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_ME_Dire_Medic";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
					class Unit4
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "CORPORAL";
						position[] = {-10, -10, 0};
						side = 1;
					};
					class Unit5
					{
						vehicle = "JA_104th_Base_ME_Dire";
						rank = "PRIVATE";
						position[] = {-15, -15, 0};
						side = 1;
					};
				};
				class JA_Group_ARF_Team_Dire
				{
					name = "ARF - Team";
					side = 1;
					class Unit0
					{
						vehicle = "JA_104th_Base_ME_Dire_ARF";
						rank = "CORPORAL";
						position[] = {0, 0, 0};
						side = 1;
					};
					class Unit1
					{
						vehicle = "JA_104th_Base_ME_Dire_ARF";
						rank = "PRIVATE";
						position[] = {-5, -5, 0};
						side = 1;
					};
					class Unit2
					{
						vehicle = "JA_104th_Base_ME_Dire_ARF";
						rank = "PRIVATE";
						position[] = {5, -5, 0};
						side = 1;
					};
					class Unit3
					{
						vehicle = "JA_104th_Base_ME_Dire_ARF";
						rank = "PRIVATE";
						position[] = {10, -10, 0};
						side = 1;
					};
				};
			};
		};
	};
};