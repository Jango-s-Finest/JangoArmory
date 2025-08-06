class CfgPatches
{
	class IMS_AdditionalWeapons
	{
		units[]={};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"WBK_MeleeMechanics"
		};
	};
};

///////Define custom sounds for your melee weapons
class CfgSounds
{
    sounds[] = {};
    class Beskad_Hit_1 //// Classname that will be used in weapon config
    {
    name = "Beskad_Hit_1"; ///// Name
    sound[] = {"Jangos_Armory_Melee\data\Sounds\Strike_bescar_2.ogg", db+10, 1}; /// Path, volume, sound acceleration
    titles[]={};
	};
	class Beskad_Hit_2
    {
    name = "Beskad_Hit_2";
    sound[] = {"Jangos_Armory_Melee\data\Sounds\Strike_bescar_3.ogg", db+10, 1};
    titles[]={};
	};
	
	class Beskad_Swing_1
    {
    name = "Beskad_Swing_1";
    sound[] = {"\WebKnight_StarWars_Sounds\sounds\new\melee_swing_equipment_1.wav", db+10, 1};
    titles[]={};
	};
	class Beskad_Swing_2
    {
    name = "Beskad_Swing_2";
    sound[] = {"\WebKnight_StarWars_Sounds\sounds\new\melee_swing_equipment_2.wav", db+10, 1};
    titles[]={};
	};
	class Beskad_Block_1
    {
    name = "Beskad_Block_1";
    sound[] = {"Jangos_Armory_Melee\data\Sounds\Block_bescar_1.ogg", db+10, 1};
    titles[]={};
	};
	class Beskad_Block_2
    {
    name = "Beskad_Block_2";
    sound[] = {"Jangos_Armory_Melee\data\Sounds\Block_bescar_2.ogg", db+10, 1};
    titles[]={};
	};
	class Beskad_Block_3
    {
    name = "Beskad_Block_3";
    sound[] = {"Jangos_Armory_Melee\data\Sounds\Block_bescar_3.ogg", db+10, 1};
    titles[]={};
	};
	class Beskad_Block_4
    {
    name = "Beskad_Block_4";
    sound[] = {"Jangos_Armory_Melee\data\Sounds\Block_bescar_4", db+10, 1};
    titles[]={};
	};
	class Beskad_Unsheath_1
    {
    name = "Beskad_Unsheath_1";
    sound[] = {"Jangos_Armory_Melee\data\Sounds\Unsheath_bescar_1.ogg", db+10, 1};
    titles[]={};
	};
	


};

class CfgWeapons
{
	class WBK_pipeStyledSword; //// Default melee weapon class that you are inhereting from
	class IMS_NewCoolMeleeWeapon: WBK_pipeStyledSword
	{
		displayName="Mandoade Beskad"; //// Name of the weapon
		model="Jangos_Armory_Melee\Beskad.p3d"; //// Path to your model
		IMS_Melee_Param_Damage = 0.3; //// Your melee weapon damage (Notice that this param is multiplied by engine in a way that 0.2 will become 40. So this weapon deals 40 hp damage. 0.25 will deal 50 damage.
		
		IMS_Melee_Param_Sounds = ["Beskad_Swing_1","Beskad_Swing_2"]; // sounds that weapon will play on swings. The sounds must be defined through cfgSounds.
		IMS_Melee_Param_SoundsOnHit = ["Beskad_Hit_1","Beskad_Hit_2"];
		IMS_Melee_Param_SoundsOnBlock = ["Beskad_Block_1","Beskad_Block_2","Beskad_Block_3","Beskad_Block_4"];
		
		
		IMS_Melee_Param_SoundOnDraw = "Beskad_Unsheath_1";
		IMS_Melee_Param_SoundOnHide = "generic_out"; 
		//// Those params define what kind of sounds weapon will use upon drawing or hiding a weapon.
		
		 		
		
		IMS_WeaponType = "OneHanded"; //// that's what define which moveset your weapon will use.
		//// Available weapon types: 
		//// "OneHanded","TwoHanded","Poleax","Heavy","Rapier","BrassKnuckless"
		//// "MaceType","LightSaber_TwoBlades","LightSaber","Knife","Energy_Sword","Katana","GreatSwordAlike"
		//// "SpaceMarine_OneHanded","SpaceMarine_TwoHanded","SpaceMarine_Fists","SpaceMarine_Heavy"
		
		
		
		////This param initialy was created only for Lightsabers, but now work with any IMS weapon! You can make your weapon glow in a dark, if you want to.
		IMS_LightsaberColor = [0, 0.15, 0.9];
        /*
		Existing colors that you can use:
		[0.9, 0, 0.6] - purple
		[0.9, 0.5, 0] - yellow
		[0, 0.9, 0.15] - green
		[0, 0.15, 0.9] - blue
		[1, 0, 0] - red
		[1, 1, 1] - white
		*/
		
		IMS_ExecutionType = "Knife"; //// Execution type of a weapon. Notice that this param can be overriten by weapon type. Aka you want to use blunt execution, but your weapon type is a greatsword. In that case greatsword execution will be played.
		///// Available Execution Types
		//// None, Axe, Knife, ReversedKnife, Blunt
		IMS_CanWeaponBeStuck = "NO";
		///////Defines if weapon can be *stuck* inside of your enemy therfore stun player a little bit if he is too close to enemy.
		

		////////Custom weapon IMS event handlers!
		
		IMS_WeaponEventHandler_Special = "_this spawn {hint 'Custom script work!';};";
		////This one will execute given code when player press *Use custom weapon skill* key
		IMS_SecondMeleeObjectSpawnArray = [["WBK_BrassKnuckles_LEFTHAND","LeftHand",[0,0.014,0.02],[0,0,-50]]];
		////This param spawn additional objects on your character when you take out melee. Good for weapons that require second object like brass knuckles.
		////1) Classname of CfgVehicles object
		////2) Part of the body
		////3) Position (X,Y,Z) relative to the part of the body.
		////4) Rotation (X,Y,Z)
	};
};
