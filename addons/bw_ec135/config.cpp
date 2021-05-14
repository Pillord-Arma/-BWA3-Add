class CfgPatches
{
	class bw_ec135
	{
		units[]=
		{
			"bw_ec135_transport",
			"bw_ec135_fz_raketen",
			"bw_ec135_pars"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Weapons_F",
			"HAFM_EC635_Config",
			"bw_nh90",
			"bwa3_backpacks",
			"bwa3_common",
			"bwa3_g36",
			"bwa3_handgrenades"
		};
	};
};
class CfgVehicles
{
	class EC635_Unarmed_BW;
	class EC635_BW;
	class EC635_AT_BW;
	class bw_pilot;
	class bw_ec135_transport: EC635_Unarmed_BW
	{
		ace_fastroping_enabled=2;
		ace_fastroping_friesType="ACE_friesGantryEc135";
		ace_fastroping_friesAttachmentPoint[]={0.99000001,1.73,-0.55000001};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_ropeOrigins[]=
		{
			"ropeOriginLeft",
			"ropeOriginRight"
		};
		ace_cargo_space=2;
		forceInGarage=1;
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property="ace_fastroping_equipFRIES";
				control="Checkbox";
				displayName="$STR_ace_fastroping_Eden_equipFRIES";
				tooltip="$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression="[_this] call ace_fastroping_fnc_equipFRIES";
				typeName="BOOL";
				condition="objectVehicle";
				defaultValue=0;
			};
		};
		displayName="H 135M (Transport)";
		faction="BWA3_Faction_Fleck";
		editorPreview="\bw_ec135\editorPreview\bw_ec135_transport.jpg";
		crew="bw_pilot";
		tf_RadioType="BWA3_SEM90";
		class AcreRacks
		{
			class Rack_1
			{
				displayName="$STR_ACRE_sys_rack_dash";
				shortName="$STR_ACRE_sys_rack_dashShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
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
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				numLimitedPositions=6;
				masterPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				connectedByDefault=1;
			};
			class Intercom_2: Intercom_1
			{
				displayName="$STR_ACRE_sys_intercom_passengerIntercom";
				shortName="$STR_ACRE_sys_intercom_shortPassengerIntercom";
				allowedPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				limitedPositions[]=
				{
					"crew"
				};
				numLimitedPositions=2;
				masterPositions[]={};
				connectedByDefault=0;
			};
		};
		acre_hasInfantryPhone=0;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=2;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=0;
			};
			class _xx_ItemGPS
			{
				name="BWA3_ItemNaviPad";
				count=8;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				count=10;
				magazine="BWA3_30Rnd_556x45_G36";
			};
			class _xx_BWA3_200Rnd_556x45
			{
				count=5;
				magazine="BWA3_200Rnd_556x45";
			};
			class _xx_BWA3_DM51A1
			{
				count=5;
				magazine="BWA3_DM51A1";
			};
			class _xx_BWA3_DM32_Orange
			{
				count=5;
				magazine="BWA3_DM32_Orange";
			};
			class _xx_1rnd_HE_Grenade_shell
			{
				count=5;
				magazine="1rnd_HE_Grenade_shell";
			};
			class _xx_BWA3_10Rnd_762x51_G28
			{
				count=5;
				magazine="BWA3_10Rnd_762x51_G28";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count=2;
				magazine="DemoCharge_Remote_Mag";
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=0;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=0;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=0;
			};
		};
	};
	class bw_ec135_fz_raketen: EC635_BW
	{
		ace_fastroping_enabled=2;
		ace_fastroping_friesType="ACE_friesGantryEc135";
		ace_fastroping_friesAttachmentPoint[]={0.99000001,1.73,-0.55000001};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_ropeOrigins[]=
		{
			"ropeOriginLeft",
			"ropeOriginRight"
		};
		ace_cargo_space=2;
		forceInGarage=1;
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property="ace_fastroping_equipFRIES";
				control="Checkbox";
				displayName="$STR_ace_fastroping_Eden_equipFRIES";
				tooltip="$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression="[_this] call ace_fastroping_fnc_equipFRIES";
				typeName="BOOL";
				condition="objectVehicle";
				defaultValue=0;
			};
		};
		displayName="H 135M Gunpod (DAR)";
		faction="BWA3_Faction_Fleck";
		editorPreview="\bw_ec135\editorPreview\bw_ec135_fz_raketen.jpg";
		crew="bw_pilot";
		tf_RadioType="BWA3_SEM90";
		class AcreRacks
		{
			class Rack_1
			{
				displayName="$STR_ACRE_sys_rack_dash";
				shortName="$STR_ACRE_sys_rack_dashShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
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
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				numLimitedPositions=6;
				masterPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				connectedByDefault=1;
			};
			class Intercom_2: Intercom_1
			{
				displayName="$STR_ACRE_sys_intercom_passengerIntercom";
				shortName="$STR_ACRE_sys_intercom_shortPassengerIntercom";
				allowedPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				limitedPositions[]=
				{
					"crew"
				};
				numLimitedPositions=2;
				masterPositions[]={};
				connectedByDefault=0;
			};
		};
		acre_hasInfantryPhone=0;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=2;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=0;
			};
			class _xx_ItemGPS
			{
				name="BWA3_ItemNaviPad";
				count=8;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				count=10;
				magazine="BWA3_30Rnd_556x45_G36";
			};
			class _xx_BWA3_200Rnd_556x45
			{
				count=5;
				magazine="BWA3_200Rnd_556x45";
			};
			class _xx_BWA3_DM51A1
			{
				count=5;
				magazine="BWA3_DM51A1";
			};
			class _xx_BWA3_DM32_Orange
			{
				count=5;
				magazine="BWA3_DM32_Orange";
			};
			class _xx_1rnd_HE_Grenade_shell
			{
				count=5;
				magazine="1rnd_HE_Grenade_shell";
			};
			class _xx_BWA3_10Rnd_762x51_G28
			{
				count=5;
				magazine="BWA3_10Rnd_762x51_G28";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count=2;
				magazine="DemoCharge_Remote_Mag";
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=0;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=0;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=0;
			};
		};
	};
	class bw_ec135_pars: EC635_AT_BW
	{
		ace_fastroping_enabled=2;
		ace_fastroping_friesType="ACE_friesGantryEc135";
		ace_fastroping_friesAttachmentPoint[]={0.99000001,1.73,-0.55000001};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_ropeOrigins[]=
		{
			"ropeOriginLeft",
			"ropeOriginRight"
		};
		ace_cargo_space=2;
		forceInGarage=1;
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property="ace_fastroping_equipFRIES";
				control="Checkbox";
				displayName="$STR_ace_fastroping_Eden_equipFRIES";
				tooltip="$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression="[_this] call ace_fastroping_fnc_equipFRIES";
				typeName="BOOL";
				condition="objectVehicle";
				defaultValue=0;
			};
		};
		displayName="H 135M Gunpod (Spike-Mini)";
		faction="BWA3_Faction_Fleck";
		editorPreview="\bw_ec135\editorPreview\bw_ec135_pars.jpg";
		crew="bw_pilot";
		tf_RadioType="BWA3_SEM90";
		class AcreRacks
		{
			class Rack_1
			{
				displayName="$STR_ACRE_sys_rack_dash";
				shortName="$STR_ACRE_sys_rack_dashShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
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
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				numLimitedPositions=6;
				masterPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				connectedByDefault=1;
			};
			class Intercom_2: Intercom_1
			{
				displayName="$STR_ACRE_sys_intercom_passengerIntercom";
				shortName="$STR_ACRE_sys_intercom_shortPassengerIntercom";
				allowedPositions[]=
				{
					
					{
						"cargo",
						"all"
					},
					
					{
						"ffv",
						"all"
					}
				};
				limitedPositions[]=
				{
					"crew"
				};
				numLimitedPositions=2;
				masterPositions[]={};
				connectedByDefault=0;
			};
		};
		acre_hasInfantryPhone=0;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=2;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=2;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=0;
			};
			class _xx_ItemGPS
			{
				name="BWA3_ItemNaviPad";
				count=8;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				count=10;
				magazine="BWA3_30Rnd_556x45_G36";
			};
			class _xx_BWA3_200Rnd_556x45
			{
				count=5;
				magazine="BWA3_200Rnd_556x45";
			};
			class _xx_BWA3_DM51A1
			{
				count=5;
				magazine="BWA3_DM51A1";
			};
			class _xx_BWA3_DM32_Orange
			{
				count=5;
				magazine="BWA3_DM32_Orange";
			};
			class _xx_1rnd_HE_Grenade_shell
			{
				count=5;
				magazine="1rnd_HE_Grenade_shell";
			};
			class _xx_BWA3_10Rnd_762x51_G28
			{
				count=5;
				magazine="BWA3_10Rnd_762x51_G28";
			};
			class _xx_DemoCharge_Remote_Mag
			{
				count=2;
				magazine="DemoCharge_Remote_Mag";
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=0;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=0;
			};
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=0;
			};
		};
	};
	class Helicopter_Base_F;
	class ACE_friesBase: Helicopter_Base_F
	{
		destrType="";
		class Turrets
		{
		};
	};
	class ACE_friesGantry: ACE_friesBase
	{
		author="jokoho48";
		scope=1;
		model="\z\ace\addons\fastroping\data\friesGantry.p3d";
		animated=1;
		class AnimationSources
		{
			class adjustWidth
			{
				source="user";
				initPhase=0.211;
				animPeriod=0;
			};
			class rotateGantryLeft
			{
				source="user";
				initPhase=0;
				animPeriod=0;
			};
			class rotateGantryRight
			{
				source="user";
				initPhase=0;
				animPeriod=0;
			};
			class hideGantryLeft
			{
				source="user";
				initPhase=0;
				animPeriod=0;
			};
			class hideGantryRight
			{
				source="user";
				initPhase=0;
				animPeriod=0;
			};
		};
	};
	class ACE_friesGantryEc135: ACE_friesGantry
	{
		class AnimationSources: AnimationSources
		{
			class adjustWidth
			{
				source="user";
				initPhase=0.185;
				animPeriod=0;
			};
			class rotateGantryLeft
			{
				source="user";
				initPhase=0;
				animPeriod=0;
			};
			class rotateGantryRight
			{
				source="user";
				initPhase=0;
				animPeriod=0;
			};
		};
	};
};
class cfgMods
{
	author="76561198065582097";
	timepacked="1459446172";
};
