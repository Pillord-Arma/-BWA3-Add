class CfgPatches
{
	class bw_unimog
	{
		units[]=
		{
			"bw_unimog_cargo_covered",
			"bw_unimog_cargo"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"gm_demo_idap_mb_u1300l",
			"BWA3_Common",
			"BWA3_Units",
			"bwa3_g36",
			"bwa3_mg4",
			"bwa3_pzf3"
		};
	};
};
class CfgVehicles
{
	class gm_demo_idap_mb_u1300l_cargo;
	class BWA3_Rifleman_Fleck;
	class bw_unimog_cargo_covered: gm_demo_idap_mb_u1300l_cargo
	{
		author="Gandre / Patrick";
		side=1;
		forceInGarage=1;
		faction="BWA3_Faction_Fleck";
		crew="BWA3_Rifleman_Fleck";
		displayName="$STR_BWadd_Truck2TTransportCoveredFleckName";
		editorPreview="\bw_unimog\editorPreview\bw_unimog_cargo_covered.jpg";
		isgmDemoContent=0;
		ace_cargo_space=14;
		tf_isolatedAmount=0.34999999;
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
		typicalCargo[]=
		{
			"BWA3_Rifleman_Fleck",
			"BWA3_Rifleman_Fleck"
		};
		hiddenSelectionsTextures[]=
		{
			"\gm_demo\gm_demo_mb_u1300l\data\gm_demo_335_80_R_20_mil_01_co.paa",
			"\bw_unimog\data\1x3felgen.paa",
			"\bw_unimog\data\1x3felgen.paa",
			"\bw_unimog\data\1x3felgen.paa",
			"\bw_unimog\data\2vorne.paa",
			"\bw_unimog\data\3hinten.paa",
			"\bw_unimog\data\4pritsche.paa",
			"\bw_unimog\data\5plane.paa"
		};
	};
	class bw_unimog_cargo: bw_unimog_cargo_covered
	{
		displayName="$STR_BWadd_Truck2TTransportFleckName";
		editorPreview="\bw_unimog\editorPreview\bw_unimog_cargo.jpg";
		animationList[]=
		{
			"cover_hoops_hide",
			1
		};
	};
};
class CfgGroups
{
	class West
	{
		class BWA3_Faction_Fleck
		{
			class Motorized
			{
				name="$STR_A3_CfgGroups_West_BLU_F_Motorized0";
				class Unimog_Gruppe_abgedeckt
				{
					name="$STR_BWadd_GroupClassUniUnterGrAbFleckName";
					side=1;
					faction="BWA3_Faction_Fleck";
					icon="\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="bw_unimog_cargo_covered";
					};
					class Unit1: Unit0
					{
						position[]={5,0,0};
						rank="SERGEANT";
						vehicle="BWA3_SL_Fleck";
					};
					class Unit2: Unit1
					{
						position[]={5,-2,0};
						rank="PRIVATE";
						vehicle="BWA3_Rifleman_Fleck";
					};
					class Unit3: Unit2
					{
						position[]={5,-4,0};
						rank="CORPORAL";
						vehicle="BWA3_RiflemanAT_RGW90_Fleck";
					};
					class Unit4: Unit2
					{
						position[]={5,-6,0};
						vehicle="BWA3_Marksman_Fleck";
					};
					class Unit5: Unit2
					{
						rank="SERGEANT";
						position[]={5,-8,0};
						vehicle="BWA3_TL_Fleck";
					};
					class Unit6: Unit2
					{
						rank="CORPORAL";
						position[]={5,-10,0};
						vehicle="BWA3_MachineGunner_MG5_Fleck";
					};
					class Unit7
					{
						side=1;
						vehicle="BWA3_MachineGunner_MG4_Fleck";
						rank="PRIVATE";
						position[]={5,-12,0};
					};
					class Unit8
					{
						side=1;
						vehicle="BWA3_Medic_Fleck";
						rank="PRIVATE";
						position[]={5,-14,0};
					};
					class Unit9
					{
						side=1;
						vehicle="BWA3_SL_Fleck";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit10
					{
						side=1;
						vehicle="BWA3_Rifleman_Fleck";
						rank="PRIVATE";
						position[]={-5,-2,0};
					};
					class Unit11
					{
						side=1;
						vehicle="BWA3_RiflemanAT_Pzf3_Fleck";
						rank="CORPORAL";
						position[]={-5,-4,0};
					};
					class Unit12
					{
						side=1;
						vehicle="BWA3_Marksman_Fleck";
						rank="PRIVATE";
						position[]={-5,-6,0};
					};
				};
				class Unimog_Gruppe: Unimog_Gruppe_abgedeckt
				{
					name="$STR_BWadd_GroupClassUniUnterGrFleckName";
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="bw_unimog_cargo";
					};
					class Unit1: Unit0
					{
						position[]={5,0,0};
						rank="SERGEANT";
						vehicle="BWA3_SL_Fleck";
					};
					class Unit2: Unit1
					{
						position[]={5,-2,0};
						rank="PRIVATE";
						vehicle="BWA3_Rifleman_Fleck";
					};
					class Unit3: Unit2
					{
						position[]={5,-4,0};
						rank="CORPORAL";
						vehicle="BWA3_RiflemanAT_RGW90_Fleck";
					};
					class Unit4: Unit2
					{
						position[]={5,-6,0};
						vehicle="BWA3_Marksman_Fleck";
					};
					class Unit5: Unit2
					{
						rank="SERGEANT";
						position[]={5,-8,0};
						vehicle="BWA3_TL_Fleck";
					};
					class Unit6: Unit2
					{
						rank="CORPORAL";
						position[]={5,-10,0};
						vehicle="BWA3_MachineGunner_MG5_Fleck";
					};
					class Unit7
					{
						side=1;
						vehicle="BWA3_MachineGunner_MG4_Fleck";
						rank="PRIVATE";
						position[]={5,-12,0};
					};
					class Unit8
					{
						side=1;
						vehicle="BWA3_Medic_Fleck";
						rank="PRIVATE";
						position[]={5,-14,0};
					};
					class Unit9
					{
						side=1;
						vehicle="BWA3_SL_Fleck";
						rank="SERGEANT";
						position[]={-5,0,0};
					};
					class Unit10
					{
						side=1;
						vehicle="BWA3_Rifleman_Fleck";
						rank="PRIVATE";
						position[]={-5,-2,0};
					};
					class Unit11
					{
						side=1;
						vehicle="BWA3_RiflemanAT_Pzf3_Fleck";
						rank="CORPORAL";
						position[]={-5,-4,0};
					};
					class Unit12
					{
						side=1;
						vehicle="BWA3_Marksman_Fleck";
						rank="PRIVATE";
						position[]={-5,-6,0};
					};
				};
			};
		};
	};
};
