#include "BIS_AddonInfo.hpp"
#include "cfgammo.hpp"
#include "cfgmagazines.hpp"
#include "cfgweapons.hpp"
//#include "cfgvehicles.hpp"
#include "cfgeventhandlers.hpp"

class CfgPatches
{
	class FSN_Freestyle_Nuke
	{
		name="Freestyles Nuke";
		author="Freestyle_Build";
		units[]={};
		weapons[]=
		{
			"FSN_B83_Nuclear_W",
			"FSN_B61_Nuclear_W",
			"FSN_Nuclear_Missile_W",
			"FSN_Nuclear_Cruise_Missile_W",
			"FSN_Diamondback_Missile_W"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Props_F_EXP",
			"A3_Weapons_F",
			"A3_Weapons_F_EPC",
			"A3_Weapons_F_Jets",
			"A3_Sounds_F",
			"A3_Sounds_F_EPC",
			"CBA_MAIN"
		};
	};
};
class cfgMods
{
	author="Freestyle_Build";
	timepacked="1525432931";
};
