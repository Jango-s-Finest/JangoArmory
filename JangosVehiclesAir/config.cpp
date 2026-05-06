class CfgPatches
{
	class Jangos_Armory_Vehicles_Air
	{
		units[] = {
			"JA_104th_Nu_class",
			"JA_104th_Rho_class",
			}; // All the new vehicles/units you've created in cfgVehicles
		weapons[] = {
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
	class 3AS_Nu_REP_F;
	class 3AS_Rho_REP_F;
	class JA_104th_Nu_class : 3AS_Nu_REP_F{
		Author = "3AS + Dak";
		displayName = "[104th] Nu Class";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys"; 
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JA_104th_P2_1C_Engineer";
	};
	class JA_104th_Rho_class : 3AS_Rho_REP_F{
		Author = "3AS + Dak";
		displayName = "[104th] Rho Class";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 1;
		faction = "104th_Guys";
		editorSubcategory = "104th_Categ_Clones_Vehicles_Air";
		crew = "JA_104th_P2_1C_Engineer";
	};
};