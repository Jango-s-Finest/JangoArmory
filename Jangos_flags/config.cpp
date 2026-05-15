class CfgPatches
{
	class Jangos_Flags
	{
		units[] = {
			"",
		}; // All the new vehicles/units you've created in cfgVehicles
		weapons[] = {
			"",
		};
		requiredVersion = 0.1;
		requiredAddons[] = {};
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

class CfgWeapons
{
	class ace_flags_white;
	class JA_Flag_WolfPack : ace_flags_white
	{
		ace_flags_carrier = "JA_Flag_Carrier_WolfPack";
		ace_flags_texture = "Jangos_flags\data\textures\flag_wolfpack_co.paa";
		author = "Dak";
		displayName = "Flag (WolfPack)";
	};
	class JA_Flag_Lancer : ace_flags_white
	{
		ace_flags_carrier = "JA_Flag_Carrier_Lancer";
		ace_flags_texture = "Jangos_flags\data\textures\Lancer_Flag.paa";
		author = "Dak";
		displayName = "Flag (Lancer)";
	};
	class JA_Flag_Cerberus_1_1: ace_flags_white
	{
		ace_flags_carrier = "JA_Flag_Carrier_Cerberus_1_1";
		ace_flags_texture = "Jangos_flags\data\textures\Cerberus_1-1_Flag.paa";
		author = "Dak";
		displayName = "Flag (Cerberus 1-1)";
	};
	class JA_Flag_Cerberus_1_4 : ace_flags_white
	{
		ace_flags_carrier = "JA_Flag_Carrier_Cerberus_1_4";
		ace_flags_texture = "Jangos_flags\data\textures\Cerberus_1-4_Flag.paa";
		author = "Dak";
		displayName = "Flag (Cerberus 1-4)";
	};
	class JA_Flag_Talon : ace_flags_white
	{
		ace_flags_carrier = "JA_Flag_Carrier_Talon";
		ace_flags_texture = "Jangos_flags\data\textures\Talon_Flag.paa";
		author = "Dak";
		displayName = "Flag (Talon)";
	};
	class JA_Flag_Cerberus_1_3 : ace_flags_white
	{
		ace_flags_carrier = "JA_Flag_Carrier_Cerberus_1_3";
		ace_flags_texture = "Jangos_flags\data\textures\Cerberus_1-3.paa";
		author = "Dak";
		displayName = "Flag (Cerberus 1-3)";
	};
	class JA_Flag_Warhawk_2_1 : ace_flags_white
	{
		ace_flags_carrier = "JA_Flag_Carrier_Warhawk_2_1";
		ace_flags_texture = "Jangos_flags\data\textures\Warhawk_2-1.paa";
		author = "Dak";
		displayName = "Flag (Warhawk 2-1)";
	};
	class JA_Flag_Warhawk_2_2 : ace_flags_white
	{
		ace_flags_carrier = "JA_Flag_Carrier_Warhawk_2_2";
		ace_flags_texture = "Jangos_flags\data\textures\Warhawk_2-2.paa";
		author = "Dak";
		displayName = "Flag (Warhawk 2-2)";
	};
};
class cfgVehicles
{
	class ace_flags_carrier_white;
	class JA_Flag_Carrier_WolfPack : ace_flags_carrier_white
	{
		author = "Dak";
		displayName = "Flag (WolfPack)";
	};
	class JA_Flag_Carrier_Lancer : ace_flags_carrier_white
	{
		author = "Dak";
		displayName = "Flag (Lancer)";
	};
	class JA_Flag_Carrier_Cerberus_1_1 : ace_flags_carrier_white
	{
		author = "Dak";
		displayName = "Flag (Cerberus 1-1)";
	};
	class JA_Flag_Carrier_Cerberus_1_4 : ace_flags_carrier_white
	{
		author = "Dak";
		displayName = "Flag (Cerberus 1-4)";
	};
	class JA_Flag_Carrier_Talon : ace_flags_carrier_white
	{
		author = "Dak";
		displayName = "Flag (Talon)";
	};
	class JA_Flag_Carrier_Cerberus_1_3 : ace_flags_carrier_white
	{
		author = "Dak";
		displayName = "Flag (Cerberus 1-3)";
	};
	class JA_Flag_Carrier_Warhawk_2_1 : ace_flags_carrier_white
	{
		author = "Dak";
		displayName = "Flag (Warhawk 2-1)";
	};
	class JA_Flag_Carrier_Warhawk_2_2 : ace_flags_carrier_white
	{
		author = "Dak";
		displayName = "Flag (Warhawk 2-2)";
	};
};
