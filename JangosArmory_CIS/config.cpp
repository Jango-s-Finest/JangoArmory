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
			"JA_CIS_BX_Assassin",
			"JA_CIS_BX_Commando",
			"JA_CIS_B1_Marksman",
			"JA_CIS_B1_AA",
			"JA_CIS_B1_Heavy",
			"JA_CIS_B1_Base",
			"JA_CIS_B2_Base"
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
	class ls_cis_b2Droid_uniform;
	class UniformItem;
	class JA_CIS_B2_Uniform : ls_cis_b2Droid_uniform{
		author = "Dak";
		scope = 2;
		displayName = "Droid B2";
	};
};

class CfgVehicles
{
	class ls_cis_b2Droid_base;
	class SWLB_b1_base;
	class ls_cis_b1Heavy_standard;
	class SWLB_b1_AA_base;
	class SWLB_b1_marksman_base;
	class SWLB_BX_Assassin;
	class SWLB_BX_Commando;
	class JA_CIS_BX_Assassin: SWLB_BX_Assassin{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_BX_Commando: SWLB_BX_Commando{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_Marksman: SWLB_b1_marksman_base{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_AA: SWLB_b1_AA_base{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_Heavy: ls_cis_b1Heavy_standard{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B1_Base: SWLB_b1_base{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
	};
	class JA_CIS_B2_Base: ls_cis_b2Droid_base{
		author = "Dak"
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
        side = 0;
		faction = "104th_Guys_CIS";
		editorSubcategory = "104th_Categ_CIS";
		displayName = "CIS B2 Blaster";
		uniformClass = "JA_CIS_B2_Uniform";
		hiddenSelections[] = {"arms","legs","torso"};
		hiddenSelectionsTextures[] = {"ls_armor_redfor\uniform\cis\b2\data\arms_co.paa","ls_armor_redfor\uniform\cis\b2\data\legs_co.paa","ls_armor_redfor\uniform\cis\b2\data\torso_co.paa"};
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
				armor = 10;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				visual = "injury_body";
			};
			class HitChest: HitDiaphragm{
				armor = 10;
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

class CfgGroups{
	class East{
		class JA_Opfor{
			name = "Jango's Finest";
			class JA_Opfor_Droid_Groups{
				name = "Droid infantry";
				class JA_Group_BX_Team{
					name = "BX - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_CIS_BX_Commando";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_CIS_BX_Commando";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_CIS_BX_Assassin";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
				};
				class JA_Group_BX_Group{
					name = "BX - Group";
					side = 1;
					class Unit0 {
						vehicle = "JA_CIS_BX_Commando";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_CIS_BX_Commando";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_CIS_BX_Assassin";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_CIS_BX_Commando";
						rank = "PRIVATE";
						position[] = {2,2,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_CIS_BX_Commando";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_CIS_BX_Assassin";
						rank = "PRIVATE";
						position[] = {2,-2,0};
						side = 1;
					};
				};
				class JA_Group_B1_Team{
					name = "B1 - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
				};
				class JA_Group_B1_Group{
					name = "B1 - Group";
					side = 1;
					class Unit0 {
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_CIS_B1_Marksman";
						rank = "PRIVATE";
						position[] = {2,2,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {2,-2,0};
						side = 1;
					};
				};
				class JA_Group_B2_B1_Team{
					name = "B1/B2 - Team";
					side = 1;
					class Unit0 {
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_CIS_B2_Base";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
				};
				class JA_Group_B2_B1_Group{
					name = "B1/B2 - Group";
					side = 1;
					class Unit0 {
						vehicle = "JA_CIS_B1_Base";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "JA_CIS_B1_Base";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {5,-5,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "JA_CIS_B1_Marksman";
						rank = "PRIVATE";
						position[] = {2,2,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "JA_CIS_B2_Base";
						rank = "PRIVATE";
						position[] = {-2,-2,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "JA_CIS_B1_Heavy";
						rank = "PRIVATE";
						position[] = {2,-2,0};
						side = 1;
					};
				};
			};
			class JA_Opfor_Air_Groups{
				name = "Droid Aviation";
				class JA_Group_Vulture_Group{
					name = "Vulture - Group";
					side = 1;
					class Unit0 {
						vehicle = "swop_vulture";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {15,-15,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {30,30,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {-30,-30,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {30,-30,0};
						side = 1;
					};
				};
				class JA_Group_Hyena_Group{
					name = "Hyena - Group";
					side = 1;
					class Unit0 {
						vehicle = "swop_hbomber";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {15,-15,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {30,30,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {-30,-30,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {30,-30,0};
						side = 1;
					};
				};
				class JA_Group_Gunship_Group{
					name = "Gunship - Group";
					side = 1;
					class Unit0 {
						vehicle = "ls_cis_hmp";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {15,-15,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {30,30,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {-30,-30,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {30,-30,0};
						side = 1;
					};
				};
				class JA_Group_Mix_Air_Group{
					name = "Mix Air - Group";
					side = 1;
					class Unit0 {
						vehicle = "ls_cis_hmp";
						rank = "CORPORAL";
						position[] = {0,0,0};
						side = 1;
					};
					class Unit1 {
						vehicle = "ls_cis_hmp";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
						side = 1;
					};
					class Unit2 {
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {15,-15,0};
						side = 1;
					};
					class Unit3 {
						vehicle = "swop_vulture";
						rank = "PRIVATE";
						position[] = {30,30,0};
						side = 1;
					};
					class Unit4 {
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {-30,-30,0};
						side = 1;
					};
					class Unit5 {
						vehicle = "swop_hbomber";
						rank = "PRIVATE";
						position[] = {30,-30,0};
						side = 1;
					};
				};
			};
		};
	};
};