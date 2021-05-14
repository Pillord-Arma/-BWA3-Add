class CfgPatches
{
	class bw_bo105
	{
		units[]=
		{
			"bw_bo105_pah1",
			"bw_bo105_p1m"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Weapons_F",
			"sfp_bo105",
			"bw_nh90",
			"bwa3_navipad"
		};
	};
};
class CfgVehicles
{
	class sfp_bo105_hmp;
	class sfp_bo105_pah1;
	class bw_bo105_pah1: sfp_bo105_pah1
	{
		displayname="BO 105P (HOT-1)";
		faction="BWA3_Faction_Fleck";
		side=1;
		crew="bw_pilot";
		ace_cargo_space=3;
		editorPreview="\bw_bo105\editorPreview\bw_bo105_pah1.jpg";
		tf_RadioType="BWA3_SEM90";
		forceInGarage=1;
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
					}
				};
				numLimitedPositions=3;
				masterPositions[]=
				{
					
					{
						"cargo",
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
				count=5;
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
				count=5;
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
		class AnimationSources
		{
			class rb55hide_user
			{
				displayname="Hide Launchers";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class sighthide_user
			{
				displayname="Hide Sight";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class mounthide_user
			{
				displayname="Hide Mount";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class gunpodhide_user
			{
				displayname="Hide Gunpod";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class rocketpodhide_user
			{
				displayname="Hide Rocketpod";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class Rockets_revolving
			{
				source="revolving";
				weapon="sfp_hydraPod";
			};
			class cannonhide_user
			{
				displayname="Hide GSH";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class hot1hide_user
			{
				displayname="Hide HOT-1";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="sfp_hot1_launcher";
			};
			class benchhide_user
			{
				displayname="Hide Bench";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class cargo_doorshide_user
			{
				displayname="Hide Doors";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class door_pilot
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class door_gunner
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class door_cargo_left
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class door_cargo_right
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class getin_pilot
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class getin_gunner
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class getin_cargo_left
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class getin_cargo_right
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
	};
	class bw_bo105_p1m: sfp_bo105_hmp
	{
		displayname="BO 105M (Transport)";
		faction="BWA3_Faction_Fleck";
		side=1;
		crew="bw_pilot";
		ace_cargo_space=3;
		editorPreview="\bw_bo105\editorPreview\bw_bo105_p1m.jpg";
		tf_RadioType="BWA3_SEM90";
		forceInGarage=1;
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
				numLimitedPositions=5;
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
				count=7;
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
				count=7;
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
		hiddenSelectionsTextures[]=
		{
			"\sfp_bo105\data\exterior_2_co.paa"
		};
		class AnimationSources
		{
			class rb55hide_user
			{
				displayname="Hide Launchers";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class sighthide_user
			{
				displayname="Hide Sight";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class mounthide_user
			{
				displayname="Hide Mount";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class gunpodhide_user
			{
				displayname="Hide Gunpod";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class rocketpodhide_user
			{
				displayname="Hide Rocketpod";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class Rockets_revolving
			{
				source="revolving";
				weapon="sfp_hydraPod";
			};
			class cannonhide_user
			{
				displayname="Hide GSH";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class hot1hide_user
			{
				displayname="Hide HOT-1";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="sfp_hot1_launcher";
			};
			class benchhide_user
			{
				displayname="Hide Bench";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class cargo_doorshide_user
			{
				displayname="Hide Doors";
				author="Swedish Forces Pack (Tjockjocke)";
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class door_pilot
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class door_gunner
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class door_cargo_left
			{
				source="user";
				animPeriod=2;
				initPhase=1;
			};
			class door_cargo_right
			{
				source="user";
				animPeriod=2;
				initPhase=1;
			};
			class getin_pilot
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class getin_gunner
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class getin_cargo_left
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class getin_cargo_right
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
		};
	};
};
