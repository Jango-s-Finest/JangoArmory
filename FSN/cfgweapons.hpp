class CfgWeapons
{
	
	class Mk82BombLauncher;
	class FSN_B61_Nuclear_W : Mk82BombLauncher
	{
		scope = 2;
		autofire=0;
		CanLock = 2;
		displayName = "B61-12 Nuclear Bomb";
		displayNameMagazine = "B61-12 Nuclear Bomb";
		shortNameMagazine = "Nuclear";
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "bomb";
		magazines[] = {"FSN_B61_Nuclear_M"};
		modes[] = {"A", "B", "C", "D"};
		burst = 0;
		salvo=1;
		reloadTime = 0.5;
		magazineReloadTime = 1;
		initSpeed=10;
		
		weaponLockDelay = 1;
		
		
		aiRateOfFire=8;
		aiRateOfFireDistance=1000;
		
		class A : Mk82BombLauncher 
		{
			displayName = "B61 0.3 kT";
			displayNameMagazine = "B61 0.3 kT";
			shortNameMagazine = "0.3 kT";
			textureType="semi";
		};
		
		class B : Mk82BombLauncher 
		{
			displayName = "B61 1.5 kT";
			displayNameMagazine = "B61 1.5 kT";
			shortNameMagazine = "1.5 kT";
			textureType="burst";
		};
		
		class C : Mk82BombLauncher 
		{
			displayName = "B61 10 kT";
			displayNameMagazine = "B61 10 kT";
			shortNameMagazine = "10 kT";
			textureType="fullAuto";
		};
		
		class D : Mk82BombLauncher 
		{
			displayName = "B61 50 kT";
			displayNameMagazine = "B61 50 kT";
			shortNameMagazine = "50 kT";
			textureType="fastAuto";
		};
		
		
		minRange = 500;
		minRangeProbab = 0.15;
		midRange = 700;
		midRangeProbab = 0.6;
		maxRange = 1000;
		maxRangeProbab = 0.25;
		
	};
	
	
	class FSN_B83_Nuclear_W : FSN_B61_Nuclear_W
	{
		displayName = "B83 Nuclear Bomb";
		displayNameMagazine = "B83 Nuclear Bomb";
		magazines[] = {"FSN_B83_Nuclear_M"};
		modes[] = {"U", "V", "W", "X"};
		burst = 0;
		salvo=1;
		reloadTime = 0.5;
		magazineReloadTime = 1;
		initSpeed=10;
		
		weaponLockDelay = 1;
		
		
		aiRateOfFire=8;
		aiRateOfFireDistance=1000;
		
		class U : Mk82BombLauncher 
		{
			displayName = "B83 50 kT";
			displayNameMagazine = "B83 50 kT";
			shortNameMagazine = "50 kT";
			textureType="semi";
		};
		
		class V : Mk82BombLauncher 
		{
			displayName = "B83 150 kT";
			displayNameMagazine = "B83 150 kT";
			shortNameMagazine = "150 kT";
			textureType="burst";
		};
		
		class W : Mk82BombLauncher 
		{
			displayName = "B83 350 kT";
			displayNameMagazine = "B83 350 kT";
			shortNameMagazine = "350 kT";
			textureType="fullAuto";
		};
		
		class X : Mk82BombLauncher 
		{
			displayName = "B83 1.2 MT";
			displayNameMagazine = "B83 1.2 MT";
			shortNameMagazine = "1.2 MT";
			textureType="fastAuto";
		};
	};
	
	
	class MissileLauncher;
	class FSN_Nuclear_Missile_W : MissileLauncher
	{
		scope = 2;
		initspeed=0;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		weaponLockDelay=0;
		cmImmunity=1;
	
		canLock = 2;
		
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,4};
		
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 500;
		
		minRange = 500;
		minRangeProbab = 0.15;
		midRange = 700;
		midRangeProbab = 0.6;
		maxRange = 10000;
		maxRangeProbab = 0.25;

		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_1",1.77828,1,3500};
			soundBegin[] = { "begin1", 1 };
		};
		
		
		displayName="NX-01 Nuclear Missile";
		displayNameMagazine = "NX-01 Nuclear Missile";
		shortNameMagazine = "Nuclear";
		magazines[]=
		{
			"FSN_Nuclear_Missile_M"
		};
		
		modes[] = {"E", "F", "G", "H"};
		
		
		class E : MissileLauncher
		{
			displayName = "NX-01 1 kT";
			displayNameMagazine = "NX-01 1 kT";
			shortNameMagazine = "1 kT";
			textureType="semi";
		};
		
		class F : MissileLauncher 
		{
			displayName = "NX-01 5 kT";
			displayNameMagazine = "NX-01 5 kT";
			shortNameMagazine = "5 kT";
			textureType="burst";
		};
		
		class G : MissileLauncher
		{
			displayName = "NX-01 15 kT";
			displayNameMagazine = "NX-01 15 kT";
			shortNameMagazine = "15 kT";
			textureType="fullAuto";
		};
		
		class H : MissileLauncher
		{
			displayName = "NX-01 25 kT";
			displayNameMagazine = "NX-01 25 kT";
			shortNameMagazine = "25 kT";
			textureType="fastAuto";
		}
	};
	
	
	class FSN_Nuclear_Cruise_Missile_W : MissileLauncher
	{
		scope = 2;
		initspeed= -10;
		magazineReloadTime=0.5;
		reloadTime=0.5;
		weaponLockDelay=0;
		cmImmunity=1;
		
		cursor="EmptyCursor";
		cursorAim="missile";
		
		weaponLockSystem=0;
		canLock = 2;
		
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,4};
		
		aiRateOfFire = 4.0;
		aiRateOfFireDistance = 500;
		
		minRange = 500;
		minRangeProbab = 0.15;
		midRange = 1000;
		midRangeProbab = 0.6;
		maxRange = 32000;
		maxRangeProbab = 0.25;

		sounds[] = { "StandardSound" };
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_1",1.77828,1,3500};
			soundBegin[] = { "begin1", 1 };
		};
		
		
		displayName="NX-02 ALCM";
		displayNameMagazine = "NX-02 ALCM";
		shortNameMagazine = "Nuclear";
		magazines[]=
		{
			"FSN_Nuclear_Cruise_Missile_M"
		};
		
		modes[] = {"Cruise"};
		
		
		class Cruise : MissileLauncher
		{
			displayName = "NX-02 ALCM 100 kT";
			displayNameMagazine = "NX-02 ALCM";
			shortNameMagazine = "100 kT";
			textureType = "terrain";
		};
	};
	
	
	class weapon_AMRAAMLauncher;
	class FSN_Diamondback_Missile_W : weapon_AMRAAMLauncher
	{
		scope = 2;
		displayName="Diamondback AA (Nuclear)";
		displayNameMagazine = "Diamondback";
		shortNameMagazine = "Nuclear AA";
		minRange=8000;
		minRangeProbab=0.5;
		midRange=24000;
		midRangeProbab=0.94999999;
		maxRange=32000;
		maxRangeProbab=1;
		
		weaponLockDelay=2;
		reloadTime=10;
		
		magazines[]=
		{
			"FSN_Diamondback_Missile_M";
		};
	};
	
};