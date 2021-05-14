class CfgPatches
{
	class bw_a3_dingo
	{
		units[]=
		{
			"BW_Dingo_Wdl",
			"BW_Dingo_Des",
			"BW_Dingo_GL_Wdl",
			"BW_Dingo_GL_Des",
			"BW_Dingo_Win",
			"BW_Dingo_GL_Win"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F",
			"bwa3_common",
			"BW_Schnee_Units"
		};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgWeapons
{
	class LMG_coax;
	class BW_Dingo_MG3_Turret: LMG_coax
	{
		displayname="MG3 7.62mm";
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class MRAP_01_base_F: Car_F
	{
	};
	class BW_Dingo_Base: MRAP_01_base_F
	{
		expansion=3;
		scope=0;
		side=1;
		accuracy=0.30000001;
		faction="BWA3_Faction_Fleck";
		model="\bw_a3_dingo\AMT_Dingo2a2_MG.p3d";
		Picture="\bw_a3_dingo\data\Picture_Dingo2MG_CA.paa";
		Icon="\bw_a3_dingo\data\icon_dingo2_ca.paa";
		mapSize=5;
		displayName="$STR_BW_a3_DingoMG3FleckName";
		crew="BWA3_Rifleman_Fleck";
		tf_RadioType="BWA3_SEM90";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.69999999;
		class AcreRacks
		{
			class Rack_1
			{
				displayName="$STR_ACRE_sys_rack_dashUpper";
				shortName="$STR_ACRE_sys_rack_dashUpperShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"inside"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="";
				isRadioRemovable=1;
				intercom[]={};
			};
			class Rack_2
			{
				displayName="$STR_ACRE_sys_rack_dashLower";
				shortName="$STR_ACRE_sys_rack_dashLowerShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"inside"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_SEM70";
				isRadioRemovable=0;
				intercom[]={};
			};
		};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="$STR_ACRE_sys_intercom_crewIntercom";
				shortName="$STR_ACRE_sys_intercom_shortCrewIntercom";
				allowedPositions[]=
				{
					"inside"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		typicalCargo[]=
		{
			"BWA3_Rifleman_Fleck",
			"BWA3_Rifleman_Fleck",
			"BWA3_Rifleman_Fleck"
		};
		armor=150;
		armorStructural=4;
		enableGPS=1;
		cost=100000;
		transportSoldier=5;
		transportMaxBackpacks=6;
		driverAction="Driver_High01";
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_low01",
			"passenger_low01",
			"passenger_VAN_codriver02"
		};
		cargoIsCoDriver[]={1,0};
		castDriverShadow=0;
		radarType=8;
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		unitInfoType="RscUnitInfoTank";
		threat[]={1,0.40000001,0.60000002};
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		dustFrontLeftPos="stopa PLL";
		dustFrontRightPos="stopa PPP";
		dustBackLeftPos="stopa ZLL";
		dustBackRightPos="stopa ZPP";
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="L svetlo";
				direction="Konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="P svetlo";
				direction="Konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Right2: Right
			{
				position="P svetlo";
				useFlare=1;
			};
			class Left2: Left
			{
				position="L svetlo";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left2",
				"Right2"
			}
		};
		turnCoef=3;
		terrainCoef=1.5;
		simulation="carx";
		dampersBumpCoef=6;
		precision=15;
		brakeDistance=8.5;
		maxSpeed=109;
		fuelCapacity=94;
		wheelCircumference=3.924;
		brakeIdleSpeed=1.78;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.1819999,
				"N",
				0,
				"D1",
				4.1820002,
				"D2",
				2.3180001,
				"D3",
				1.85,
				"D4",
				1.65,
				"D5",
				1.45
			};
			TransmissionRatios[]=
			{
				"High",
				5.539
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.31;
		latency=1;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=20;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.178,0.5},
			{0.25,0.85000002},
			{0.40000001,0.89999998},
			{0.5,1},
			{0.72500002,0.94999999},
			{0.85000002,0.60000002},
			{1,0.30000001}
		};
		maxOmega=471;
		enginePower=276;
		peakTorque=1253;
		idleRpm=800;
		redRpm=4500;
		thrustDelay=0.1;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=150;
				MOI=40;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=22500;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=2066;
				springStrength=201234;
				springDamperRate=20600.6;
				longitudinalStiffnessPerUnitGravity=5000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=275000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=275000;
			};
		};
		class RenderTargets
		{
			class LeveZrcadko
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
			class PraveZrcadko
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
			class LeveZrcadkoPredek
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
			class PraveZrcadkoPredek
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
			};
			class Gunner_display
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderVisionMode=2;
					renderQuality=2;
					fov=0.69999999;
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gun="mainGun";
				body="mainTurret";
				weapons[]=
				{
					"BW_Dingo_MG3_Turret"
				};
				magazines[]=
				{
					"200Rnd_762x51_Belt_T_Red",
					"200Rnd_762x51_Belt_T_Red",
					"200Rnd_762x51_Belt_T_Red",
					"200Rnd_762x51_Belt_T_Red",
					"200Rnd_762x51_Belt_T_Red",
					"200Rnd_762x51_Belt_T_Red"
				};
				minElev=-25;
				maxElev="+60";
				gunnerAction="gunner_MRAP_01";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				turretInfoType="RscOptics_crows";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerForceOptics=0;
				usePip=1;
				memoryPointGunnerOptics="PIP4_dir";
				class ViewOptics: RCWSOptics
				{
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
				soundServo[]=
				{
					"\bw_a3_dingo\Sounds\turret-1.wss",
					"db-40",
					1,
					10
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor=0.80000001;
				material=-1;
				name="engine";
				visual="";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.44999999;
			};
			class HitGlass1: HitGlass1
			{
				armor=2;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=2;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=2;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=2;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass5: HitGlass4
			{
				armor=2;
				explosionShielding=3;
				radius=0.25;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.25;
			};
			class HitLBWheel: HitLF2Wheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.25;
			};
			class HitRBWheel: HitRF2Wheel
			{
				armor=1;
				explosionShielding=4;
				radius=0.25;
			};
			class HitFuel
			{
				armor=0.60000002;
				material=-1;
				name="fueltank";
				visual="";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.25;
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"bw_a3_dingo\data\karrosse.rvmat",
				"bw_a3_dingo\data\karrosse_dam.rvmat",
				"bw_a3_dingo\data\karrosse_des.rvmat",
				"bw_a3_dingo\data\karrosse_innen.rvmat",
				"bw_a3_dingo\data\karrosse_innen.rvmat",
				"bw_a3_dingo\data\karrosse_innen_des.rvmat",
				"bw_a3_dingo\data\teile.rvmat",
				"bw_a3_dingo\data\teile_dam.rvmat",
				"bw_a3_dingo\data\teile_des.rvmat",
				"bw_a3_dingo\data\teile_innen.rvmat",
				"bw_a3_dingo\data\teile_innen.rvmat",
				"bw_a3_dingo\data\teile_innen_des.rvmat",
				"bw_a3_dingo\data\FLW200.rvmat",
				"bw_a3_dingo\data\FLW200_dam.rvmat",
				"bw_a3_dingo\data\FLW200_des.rvmat",
				"bw_a3_dingo\data\plane.rvmat",
				"bw_a3_dingo\data\plane_dam.rvmat",
				"bw_a3_dingo\data\FLW200_des.rvmat",
				"bw_a3_dingo\data\alpha_glass.rvmat",
				"bw_a3_dingo\data\alpha_glass_dam.rvmat",
				"bw_a3_dingo\data\alpha_glass_des.rvmat"
			};
		};
		HiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo5",
			"camo6"
		};
		HiddenSelectionsTextures[]=
		{
			"\bw_a3_dingo\data\acr_karosse_wdl_co.paa",
			"\bw_a3_dingo\data\a_teile_co.paa",
			"\bw_a3_dingo\data\FLW100_co.paa",
			"\bw_a3_dingo\data\FLW200_co.paa"
		};
		SoundGetIn[]=
		{
			"bw_a3_dingo\Sounds\door.wss",
			"db-5",
			1
		};
		SoundGetOut[]=
		{
			"bw_a3_dingo\Sounds\door.wss",
			"db-5",
			1,
			40
		};
		soundEngineOnInt[]=
		{
			"bw_a3_dingo\Sounds\Dingo_int_start.wss",
			"db-5",
			1
		};
		soundEngineOnExt[]=
		{
			"bw_a3_dingo\Sounds\Dingo_ext_start.wss",
			"db-5",
			1,
			250
		};
		soundEngineOffInt[]=
		{
			"bw_a3_dingo\Sounds\Dingo_int_stop.wss",
			"db-5",
			1
		};
		soundEngineOffExt[]=
		{
			"bw_a3_dingo\Sounds\Dingo_ext_stop.wss",
			"db-5",
			1,
			250
		};
		buildCrash0[]=
		{
			"bw_a3_dingo\Sounds\crash_building_01.wss",
			"db-3",
			1,
			200
		};
		buildCrash1[]=
		{
			"bw_a3_dingo\Sounds\crash_building_02.wss",
			"db-3",
			1,
			200
		};
		buildCrash2[]=
		{
			"bw_a3_dingo\Sounds\crash_building_03.wss",
			"db-3",
			1,
			200
		};
		buildCrash3[]=
		{
			"bw_a3_dingo\Sounds\crash_building_04.wss",
			"db-3",
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"bw_a3_dingo\Sounds\crash_mix_wood_01.wss",
			"db-3",
			1,
			200
		};
		WoodCrash1[]=
		{
			"bw_a3_dingo\Sounds\crash_mix_wood_02.wss",
			"db-3",
			1,
			200
		};
		WoodCrash2[]=
		{
			"bw_a3_dingo\Sounds\crash_mix_wood_03.wss",
			"db-3",
			1,
			200
		};
		WoodCrash3[]=
		{
			"bw_a3_dingo\Sounds\crash_mix_wood_04.wss",
			"db-3",
			1,
			200
		};
		WoodCrash4[]=
		{
			"bw_a3_dingo\Sounds\crash_mix_wood_05.wss",
			"db-3",
			1,
			200
		};
		WoodCrash5[]=
		{
			"bw_a3_dingo\Sounds\crash_mix_wood_06.wss",
			"db-3",
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"bw_a3_dingo\Sounds\crash_vehicle_01.wss",
			"db-3",
			1,
			200
		};
		ArmorCrash1[]=
		{
			"bw_a3_dingo\Sounds\crash_vehicle_02.wss",
			"db-3",
			1,
			200
		};
		ArmorCrash2[]=
		{
			"bw_a3_dingo\Sounds\crash_vehicle_03.wss",
			"db-3",
			1,
			200
		};
		ArmorCrash3[]=
		{
			"bw_a3_dingo\Sounds\crash_vehicle_04.wss",
			"db-3",
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",
					0.39810717,
					1,
					150
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",
					0.44668359,
					1,
					250
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",
					0.56234133,
					1,
					300
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",
					0.70794576,
					1,
					350
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",
					1,
					1,
					400
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*camPos*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",
					0.56234133,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",
					0.70794576,
					1,
					350
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",
					0.89125091,
					1,
					400
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",
					1.1220185,
					1,
					425
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",
					1.2589254,
					1,
					450
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",
					0.25118864,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",
					0.31622776,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",
					0.39810717,
					1
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",
					0.50118721,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",
					0.63095737,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",
					0.35481337,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",
					0.44668359,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",
					0.56234133,
					1
				};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",
					0.70794576,
					1
				};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",
					0.79432821,
					1
				};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1.4125376,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1.2589254,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1.1220185,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1.2589254,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1.1220185,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					1.1220185,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.56234133,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.63095737,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		maximumLoad=4000;
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=4;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				count=2;
				weapon="BWA3_MG4_ZO4x30_pointer";
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				count=4;
				weapon="BWA3_PzF3_Tandem_Loaded";
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				count=24;
				magazine="BWA3_30Rnd_556x45_G36";
			};
			class _xx_BWA3_100Rnd_556x45
			{
				count=6;
				magazine="BWA3_200Rnd_556x45";
			};
		};
	};
	class BW_Dingo_Wdl: BW_Dingo_Base
	{
		scope=2;
		side=1;
		editorPreview="\bw_a3_dingo\editorPreview\BW_Dingo_Wdl.jpg";
		vehicleClass="BWA3_VehClass_Wheeled";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="HMG_127";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="HMG_127";
			};
			class Revolving
			{
				source="revolving";
				weapon="HMG_127";
			};
		};
	};
	class BW_Dingo_Des: BW_Dingo_Wdl
	{
		faction="BWA3_Faction_Tropen";
		displayName="$STR_BW_a3_DingoMG3FleckName";
		editorPreview="\bw_a3_dingo\editorPreview\BW_Dingo_Des.jpg";
		vehicleClass="BWA3_VehClass_Wheeled";
		HiddenSelectionsTextures[]=
		{
			"\bw_a3_dingo\data\ACR_karosse_des_co.paa",
			"\bw_a3_dingo\data\ACR_DES_a_teile_co.paa",
			"\bw_a3_dingo\data\FLW100_DES_co.paa",
			"\bw_a3_dingo\data\FLW200_DES_co.paa"
		};
		crew="BWA3_Rifleman_Tropen";
		typicalCargo[]=
		{
			"BWA3_Rifleman_Tropen",
			"BWA3_Rifleman_Tropen",
			"BWA3_Rifleman_Tropen"
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=4;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				count=2;
				weapon="BWA3_MG4_ZO4x30_pointer";
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				count=4;
				weapon="BWA3_PzF3_Tandem_Loaded";
			};
		};
	};
	class BW_Dingo_GL_Wdl: BW_Dingo_Base
	{
		scope=2;
		side=1;
		vehicleClass="BWA3_VehClass_Wheeled";
		displayName="$STR_BW_a3_DingoGMGFleckName";
		editorPreview="\bw_a3_dingo\editorPreview\BW_Dingo_GL_Wdl.jpg";
		model="\bw_a3_dingo\AMT_Dingo2a2.p3d";
		Picture="\bw_a3_dingo\data\Picture_Dingo2_CA.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gun="mainGun";
				body="mainTurret";
				weapons[]=
				{
					"GMG_40mm"
				};
				magazines[]=
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt"
				};
				minElev=-25;
				maxElev="+60";
				gunnerAction="gunner_MRAP_01";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				turretInfoType="RscOptics_crows";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=5;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerForceOptics=0;
				usePip=1;
				memoryPointGunnerOptics="PIP4_dir";
				class ViewOptics: RCWSOptics
				{
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
				soundServo[]=
				{
					"\bw_a3_dingo\Sounds\turret-1.wss",
					"db-40",
					1,
					10
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source="reload";
				weapon="GMG_40mm";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="GMG_40mm";
			};
			class Revolving
			{
				source="revolving";
				weapon="GMG_40mm";
			};
		};
	};
	class BW_Dingo_GL_Des: BW_Dingo_GL_Wdl
	{
		vehicleClass="BWA3_VehClass_Wheeled";
		faction="BWA3_Faction_Tropen";
		displayName="$STR_BW_a3_DingoGMGFleckName";
		editorPreview="\bw_a3_dingo\editorPreview\BW_Dingo_GL_Des.jpg";
		HiddenSelectionsTextures[]=
		{
			"\bw_a3_dingo\data\ACR_karosse_des_co.paa",
			"\bw_a3_dingo\data\ACR_DES_a_teile_co.paa",
			"\bw_a3_dingo\data\FLW100_DES_co.paa",
			"\bw_a3_dingo\data\FLW200_DES_co.paa"
		};
		crew="BWA3_Rifleman_Tropen";
		typicalCargo[]=
		{
			"BWA3_Rifleman_Tropen",
			"BWA3_Rifleman_Tropen",
			"BWA3_Rifleman_Tropen"
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=4;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				count=2;
				weapon="BWA3_MG4_ZO4x30_pointer";
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				count=4;
				weapon="BWA3_PzF3_Tandem_Loaded";
			};
		};
	};
	class BW_Dingo_Win: BW_Dingo_Wdl
	{
		vehicleClass="BWA3_VehClass_Wheeled";
		faction="BWadd_Faction_Schnee";
		displayName="$STR_BW_a3_DingoMG3FleckName";
		editorPreview="\bw_a3_dingo\editorPreview\BW_Dingo_Win.jpg";
		HiddenSelectionsTextures[]=
		{
			"\bw_a3_dingo\data\ACR_karosse_win_co.paa",
			"\bw_a3_dingo\data\ACR_WIN_a_teile_co.paa",
			"\bw_a3_dingo\data\FLW100_WIN_co.paa",
			"\bw_a3_dingo\data\FLW200_WIN_co.paa"
		};
		crew="PzBrig17_Rifleman_Snow";
		typicalCargo[]=
		{
			"PzBrig17_Rifleman_Snow",
			"PzBrig17_Rifleman_Snow",
			"PzBrig17_Rifleman_Snow"
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=4;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				count=2;
				weapon="BWA3_MG4_ZO4x30_pointer";
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				count=4;
				weapon="BWA3_PzF3_Tandem_Loaded";
			};
		};
	};
	class BW_Dingo_GL_Win: BW_Dingo_GL_Wdl
	{
		vehicleClass="BWA3_VehClass_Wheeled";
		faction="BWadd_Faction_Schnee";
		displayName="$STR_BW_a3_DingoGMGFleckName";
		editorPreview="\bw_a3_dingo\editorPreview\BW_Dingo_GL_Win.jpg";
		HiddenSelectionsTextures[]=
		{
			"\bw_a3_dingo\data\ACR_karosse_win_co.paa",
			"\bw_a3_dingo\data\ACR_WIN_a_teile_co.paa",
			"\bw_a3_dingo\data\FLW100_WIN_co.paa",
			"\bw_a3_dingo\data\FLW200_WIN_co.paa"
		};
		crew="PzBrig17_Rifleman_Snow";
		typicalCargo[]=
		{
			"PzBrig17_Rifleman_Snow",
			"PzBrig17_Rifleman_Snow",
			"PzBrig17_Rifleman_Snow"
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=4;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				count=2;
				weapon="BWA3_MG4_ZO4x30_pointer";
			};
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				count=4;
				weapon="BWA3_PzF3_Tandem_Loaded";
			};
		};
	};
};
class CfgGroups
{
	class West
	{
		class BWadd_Faction_Schnee
		{
			class Motorized
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class Dingo_Gruppe_Schnee
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_Team0";
					side=1;
					faction="BWadd_Faction_Schnee";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="BW_Dingo_GL_Win";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="PzBrig17_Autorifleman_Snow";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="PzBrig17_RiflemanAT_RGW90_Snow";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
				class Dingo_GruppeAT_Schnee
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AT0";
					side=1;
					faction="BWadd_Faction_Schnee";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="BW_Dingo_Win";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="PzBrig17_RiflemanAT_PzF3_Snow";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="PzBrig17_RiflemanAT_PzF3_Snow";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
				class Dingo_GruppeAA_Schnee
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Motorized_BUS_MotInf_AA0";
					side=1;
					faction="BWadd_Faction_Schnee";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="BW_Dingo_Win";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="PzBrig17_RiflemanAA_Fliegerfaust_Snow";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="PzBrig17_RiflemanAA_Fliegerfaust_Snow";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
			};
		};
	};
};
