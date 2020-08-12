#include "basicDefines_A3.hpp"
class DefaultEventhandlers;
class UniformSlotInfo;
class CfgPatches
{
	class Jangos_CIS
	{
		author = "Jango's Finest";
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {
			"JA_CIS_B2"
		};
		weapons[] = {
			"JA_CIS_B2_Uniform"
		};
	};
};

class CfgFactionClasses
{
	class 104th_Guys_CIS
	{
		displayname = "Jango's Finest";
		priority = 1; // Position in list.scope = 2;
        side = 0;
		icon = "";
	};
};
class cfgEditorSubcategories
{
	class 104th_Categ_CIS
	{
		displayname = "CIS - INF";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 0;
	};
};

class CfgWeapons
{
	class RD501_opfor_uniform_B2_Armor;
	class UniformItem;
	class JA_CIS_B2_Uniform : RD501_opfor_uniform_B2_Armor{
		author = "Dak";
		scope = 2;
		allowedSlots[] = { BACKPACK_SLOT };
		displayName = "Droid B2";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"RD501_Units\textures\CIS\B2\rocket\Reskinb2_chest.paa","RD501_Units\textures\CIS\B2\rocket\ReskinB2_waist.paa","RD501_Units\textures\CIS\B2\rocket\ReskinB2_legs.paa"};
		class HitPoints
		{
			class HitArms{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms{
				armor = 11;
				depends = "HitArms";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftArm{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftLeg{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				visual = "injury_legs";
			};
			class HitFace{
				armor = 3;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
			};
			class HitNeck: HitFace{
				armor = 5;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
			};
			class HitHead: HitNeck{
				armor = 10;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.2;
				radius = 0.15;
			};
			class ACE_HDBracket:HitHead{
				armor = 1;
				depends = "HitHead";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "head";
				passThrough = 0;
				radius = 1;
				visual = "";
			};
			class HitPelvis{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitBody: HitChest{
				armor = 10;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitRightArm{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitRightLeg{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class Incapacitated{
				armor = 10;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.1;
				radius = 0;
				visual = "";
			};
		};
	};
};

class CfgVehicles
{
	class RD501_opfor_uniform_skin_B2_Armor;
	class JA_CIS_B2:RD501_opfor_uniform_skin_B2_Armor{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
		displayName = "CIS B2 Blaster";
		uniformClass = "JA_CIS_B2_Uniform";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"RD501_Units\textures\CIS\B2\rocket\Reskinb2_chest.paa","RD501_Units\textures\CIS\B2\rocket\ReskinB2_waist.paa","RD501_Units\textures\CIS\B2\rocket\ReskinB2_legs.paa"};
		linkeditems[] = {"SWOP_ImpNVChip","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"SWOP_B2gun_Mag","SWOP_B2gun_Mag","SWOP_B2gun_Mag","SWOP_B2gun_Mag","SWOP_B2gun_Mag","SWOP_B2gun_Mag","SWOP_B2gun_Mag","SWOP_B2rocket_Mag","SWOP_B2rocket_Mag"};
		weapons[] = {"SWOP_B2gun","Throw","Put"};
		class HitPoints
		{
			class HitArms{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms{
				armor = 11;
				depends = "HitArms";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hands";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftArm{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftLeg{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLegs{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				visual = "injury_legs";
			};
			class HitFace{
				armor = 3;
				explosionShielding = 0.1;
				material = -1;
				minimalHit = 0.01;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
			};
			class HitNeck: HitFace{
				armor = 5;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
			};
			class HitHead: HitNeck{
				armor = 10;
				depends = "HitFace max HitNeck";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "head";
				passThrough = 0.2;
				radius = 0.15;
			};
			class ACE_HDBracket:HitHead{
				armor = 1;
				depends = "HitHead";
				explosionShielding = 1;
				material = -1;
				minimalHit = 0;
				name = "head";
				passThrough = 0;
				radius = 1;
				visual = "";
			};
			class HitPelvis{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				visual = "injury_body";
			};
			class HitAbdomen: HitPelvis{
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitDiaphragm: HitAbdomen{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitBody: HitChest{
				armor = 10;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				visual = "injury_body";
			};
			class HitRightArm{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitRightLeg{
				armor = 1;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class Incapacitated{
				armor = 10;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "body";
				passThrough = 0.1;
				radius = 0;
				visual = "";
			};
		};
	};
};
