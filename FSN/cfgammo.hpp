class CfgAmmo
{
	class LaserBombCore;
	class FSN_B61_Nuclear : LaserBombCore
	{
		scope=2;
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 10;
		cost = 1;
		model = "FSN\data\b61";
		proxyShape = "FSN\data\b61";
		soundHit1[] = { "\A3\Sounds_F\weapons\Explosion\expl_big_1", 2.5118864, 1, 2400};
		supersonicCrackNear[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_close", 0.316228, 1, 50};
		supersonicCrackFar[] = {"A3\Sounds_F\weapons\Explosion\supersonic_crack_50meters", 0.223872, 1, 75};
		
		autoSeekTarget = 1;
		
		flightProfiles[] = {"LoalAltitude"};
	
		class LoalAltitude
		{
			lockSeekAltitude = 400.0;
		};
		
				
		aiAmmoUsageFlags = "64 + 128 + 512";
			
		maneuvrability = 16;
		sideAirFriction=1;
		
		minRange = 1000;
		minRangeProbab = 0.15;
		midRange = 3000;
		midRangeProbab = 0.6;
		maxRange = 10000;
		maxRangeProbab = 0.25;
		
		
		class components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class LaserSensorComponent
					{
						componenttype = "LaserSensorComponent";
						
						class AirTarget      // ranges for targets with ground background
						{                                            
							minRange = 5000;         // -1 if undef; in meters 
							maxRange = 15000;       // -1 if undef; in meters                    
							
							viewDistanceLimitCoef = -1;      // -1 if undef; coefficient, multiplies current view distance as set in player's options. -1 means view distance is not used to limit sensor range.
							objectDistanceLimitCoef = -1;    // -1 if undef; coefficient, multiplies current object view distance as set in player's options. -1 means object view distance is not used to limit sensor range.             
						};
						
						class GroundTarget      // ranges for targets with ground background
						{                                            
							minRange = 5000;         // -1 if undef; in meters 
							maxRange = 15000;       // -1 if undef; in meters                    
							
							viewDistanceLimitCoef = -1;      // -1 if undef; coefficient, multiplies current view distance as set in player's options. -1 means view distance is not used to limit sensor range.
							objectDistanceLimitCoef = -1;    // -1 if undef; coefficient, multiplies current object view distance as set in player's options. -1 means object view distance is not used to limit sensor range.             
						};
						
						typeRecognitionDistance = 0; // distance how far the target type gets recognized                                          
						angleRangeHorizontal 	= 90;     // sensor azimuth coverage in degrees         
						angleRangeVertical 		= 90;       // sensor elevation coverage in degrees       
						groundNoiseDistanceCoef = 0.5;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance 	= 250;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold 		= 0;        // target speed in m/s above which the target will start to become visible           
						maxSpeedThreshold 		= 100;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold   
					};
				};
			};
		};
		
		

	};
	
	
	class FSN_B83_Nuclear : FSN_B61_Nuclear 
	{
		
	};
	
	class Missile_AGM_01_F;
	class FSN_Nuclear_Missile : Missile_AGM_01_F
	{
		scope = 2;
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 10;
		cost = 1;
		model="\a3\weapons_f_sams\ammo\missile_ar_02_f_fly";
		proxyShape="\a3\weapons_f_sams\ammo\missile_ar_02_f";

		initTime = 1;
		thrust=100;
		thrustTime=60;
		maxSpeed=1000;
		mass=250;
		
		cameraViewAvailable=1;
		
		aiAmmoUsageFlags = "64 + 128 + 512";
			
		maneuvrability = 32;
		sideAirFriction=1;
		
		minRange = 1000;
		minRangeProbab = 0.15;
		midRange = 3000;
		midRangeProbab = 0.6;
		maxRange = 10000;
		maxRangeProbab = 0.25;
		
		missileLockMaxDistance 	= 15000; 
		missileLockMinDistance 	= 100;
		missileLockMaxSpeed 	= 100;
		missileLockCone			= 180;
		
		
		cmImmunity=1;
		
		flightProfiles[] = { "Cruise" };
		
		class Cruise
		{
			preferredFlightAltitude = 50.0;
		};
		
		class components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class LaserSensorComponent
					{
						componenttype = "LaserSensorComponent";
						
						class AirTarget      // ranges for targets with ground background
						{                                            
							minRange = 5000;         // -1 if undef; in meters 
							maxRange = 15000;       // -1 if undef; in meters                    
							
							viewDistanceLimitCoef = -1;      // -1 if undef; coefficient, multiplies current view distance as set in player's options. -1 means view distance is not used to limit sensor range.
							objectDistanceLimitCoef = -1;    // -1 if undef; coefficient, multiplies current object view distance as set in player's options. -1 means object view distance is not used to limit sensor range.             
						};
						
						class GroundTarget      // ranges for targets with ground background
						{                                            
							minRange = 5000;         // -1 if undef; in meters 
							maxRange = 15000;       // -1 if undef; in meters                    
							
							viewDistanceLimitCoef = -1;      // -1 if undef; coefficient, multiplies current view distance as set in player's options. -1 means view distance is not used to limit sensor range.
							objectDistanceLimitCoef = -1;    // -1 if undef; coefficient, multiplies current object view distance as set in player's options. -1 means object view distance is not used to limit sensor range.             
						};
						
						typeRecognitionDistance = 15000; // distance how far the target type gets recognized                                          
						angleRangeHorizontal 	= 90;     // sensor azimuth coverage in degrees         
						angleRangeVertical 		= 90;       // sensor elevation coverage in degrees       
						groundNoiseDistanceCoef = 0.5;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance 	= 250;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold 		= 0;        // target speed in m/s above which the target will start to become visible           
						maxSpeedThreshold 		= 100;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold   
					};
				};
			};
		};
	};
	
	
	
	class ammo_Missile_CruiseBase;
	class FSN_Nuclear_Cruise_Missile : ammo_Missile_CruiseBase
	{
		scope = 2;
		hit = 300;
		indirectHit = 100;
		indirectHitRange = 10;
		cost = 1;
		model="\a3\weapons_f_destroyer\ammo\missile_cruise_01_fly_f";
		proxyShape="\a3\weapons_f_destroyer\ammo\missile_cruise_01_f";
	
		cameraViewAvailable=1;
		
		initTime = 3;
		thrust=30;
		thrustTime=60;
		maxSpeed=200;
		mass=500;
		
		aiAmmoUsageFlags = "64 + 128 + 512";
	
		maneuvrability = 16;
		sideAirFriction=1;
		
		minRange = 3000;
		minRangeProbab = 0.15;
		midRange = 5000;
		midRangeProbab = 0.6;
		maxRange = 32000;
		maxRangeProbab = 0.25;
		
		missileLockMaxDistance 	= 32000; 
		missileLockMinDistance 	= 16000;
		missileLockMaxSpeed 	= 20000;
		missileLockCone			= 360;
		
		
		cmImmunity=1;
		
		flightProfiles[] = { "Cruise" };
		
		class Cruise
		{
			preferredFlightAltitude = 100.0;
		};
		
		class components
		{
			class SensorsManagerComponent
			{
				class components
				{
					class LaserSensorComponent
					{
						componenttype = "LaserSensorComponent";
						
						class AirTarget      // ranges for targets with ground background
						{                                            
							minRange = 16000;         // -1 if undef; in meters 
							maxRange = 32000;       // -1 if undef; in meters                    
							
							viewDistanceLimitCoef = -1;      // -1 if undef; coefficient, multiplies current view distance as set in player's options. -1 means view distance is not used to limit sensor range.
							objectDistanceLimitCoef = -1;    // -1 if undef; coefficient, multiplies current object view distance as set in player's options. -1 means object view distance is not used to limit sensor range.             
						};
						
						class GroundTarget      // ranges for targets with ground background
						{                                            
							minRange = 16000;         // -1 if undef; in meters 
							maxRange = 32000;       // -1 if undef; in meters                    
							
							viewDistanceLimitCoef = -1;      // -1 if undef; coefficient, multiplies current view distance as set in player's options. -1 means view distance is not used to limit sensor range.
							objectDistanceLimitCoef = -1;    // -1 if undef; coefficient, multiplies current object view distance as set in player's options. -1 means object view distance is not used to limit sensor range.             
						};
						
						typeRecognitionDistance = 32000; // distance how far the target type gets recognized                                          
						angleRangeHorizontal 	= 360;     // sensor azimuth coverage in degrees         
						angleRangeVertical 		= 360;       // sensor elevation coverage in degrees       
						groundNoiseDistanceCoef = 0.5;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance 	= 0;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold 		= 0;        // target speed in m/s above which the target will start to become visible           
						maxSpeedThreshold 		= 0;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold   
					};
					
					
					class DataLinkSensorComponent
					{
						componenttype = "DataLinkSensorComponent";
						
						class AirTarget      // ranges for targets with ground background
						{                                            
							minRange = 16000;         // -1 if undef; in meters 
							maxRange = 32000;       // -1 if undef; in meters                    
							
							viewDistanceLimitCoef = -1;      // -1 if undef; coefficient, multiplies current view distance as set in player's options. -1 means view distance is not used to limit sensor range.
							objectDistanceLimitCoef = -1;    // -1 if undef; coefficient, multiplies current object view distance as set in player's options. -1 means object view distance is not used to limit sensor range.             
						};
						
						class GroundTarget      // ranges for targets with ground background
						{                                            
							minRange = 16000;         // -1 if undef; in meters 
							maxRange = 32000;       // -1 if undef; in meters                    
							
							viewDistanceLimitCoef = -1;      // -1 if undef; coefficient, multiplies current view distance as set in player's options. -1 means view distance is not used to limit sensor range.
							objectDistanceLimitCoef = -1;    // -1 if undef; coefficient, multiplies current object view distance as set in player's options. -1 means object view distance is not used to limit sensor range.             
						};
						
						typeRecognitionDistance = 32000; // distance how far the target type gets recognized                                          
						angleRangeHorizontal 	= 360;     // sensor azimuth coverage in degrees         
						angleRangeVertical 		= 360;       // sensor elevation coverage in degrees       
						groundNoiseDistanceCoef = 0.5;  // portion of sensor-target-ground distance below which the targets become invisible to the sensor
						maxGroundNoiseDistance 	= 250;   // distance from the ground in meters, hard cap, above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold 		= 0;        // target speed in m/s above which the target will start to become visible           
						maxSpeedThreshold 		= 200;       // target speed above which the target becomes visible even if below groundNoiseDistanceCoef, linearly decreases to minSpeedThreshold   
					};
				};
			};
		};
	};

	class ammo_Missile_AMRAAM_D;
	class FSN_Diamondback_Missile : ammo_Missile_AMRAAM_D
	{
		scope = 2;
		
		proximityExplosionDistance=200;
		
		fuseDistance=1500;
		timeToLive=80;
		thrustTime=32;
		thrust=210;
		maxSpeed=1000;
		missileLockCone=140;
		missileKeepLockedCone=140;
		missileLockMaxDistance=32000;
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent
					{
						class AirTarget
						{
							minRange=24000;
							maxRange=32000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=100;
						angleRangeVertical=100;
					};
					class DataLinkSensorComponent: ActiveRadarSensorComponent
					{
						componentType="DataLinkSensorComponent";
					};
				};
			};
		};
	};
};