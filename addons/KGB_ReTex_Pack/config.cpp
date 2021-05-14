class CfgPatches
{
	class KGB_A3_Soft_F_MRAP_03
	{
		units[]=
		{
			"KGB_B_MRAP_03_F",
			"KGB_B_MRAP_03_gmg_F",
			"KGB_B_MRAP_03_hmg_F",
			"KGB_B_MRAP_03_F_DES",
			"KGB_B_MRAP_03_hmg_F_DES",
			"KGB_B_MRAP_03_gmg_F_DES",
			"KGB_B_MRAP_03_F_WIN",
			"KGB_B_MRAP_03_hmg_F_WIN",
			"KGB_B_MRAP_03_gmg_F_WIN"
		};
		weapons[]={};
		requiredVersion[]={"0.100000"};
		requiredAddons[]={};
	};
};
class CfgVehicles
{
	class MRAP_03_base_F;
	class MRAP_03_hmg_base_F;
	class MRAP_03_gmg_base_F;
	class KGB_B_MRAP_03_F: MRAP_03_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekCSFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_F.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_Base_ca.paa";
		crew="BWA3_Rifleman_Fleck";
		typicalCargo[]=
		{
			"BWA3_Rifleman_Fleck"
		};
		side=1;
		faction="BWA3_Faction_Fleck";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\mrap_03_ext_co.paa",
			"KGB_ReTex_Pack\data\turret_03_co.paa"
		};
		_generalMacro="BWA3_Fennek_WDL";
	};
	class KGB_B_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekHMGFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_hmg_F.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_HMG_ca.paa";
		crew="BWA3_Rifleman_Fleck";
		typicalCargo[]=
		{
			"BWA3_Rifleman_Fleck"
		};
		side=1;
		faction="BWA3_Faction_Fleck";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\mrap_03_ext_co.paa",
			"KGB_ReTex_Pack\data\turret_03_co.paa"
		};
		_generalMacro="BWA3_Fennek_HMG_WDL";
	};
	class KGB_B_MRAP_03_gmg_F: MRAP_03_gmg_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekGMGFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_gmg_F.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_HMG_ca.paa";
		crew="BWA3_Rifleman_Fleck";
		typicalCargo[]=
		{
			"BWA3_Rifleman_Fleck"
		};
		side=1;
		faction="BWA3_Faction_Fleck";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\mrap_03_ext_co.paa",
			"KGB_ReTex_Pack\data\turret_03_co.paa"
		};
		_generalMacro="BWA3_Fennek_GMG_WDL";
	};
	class KGB_B_MRAP_03_F_DES: MRAP_03_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekCSFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_F_DES.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_Base_ca.paa";
		crew="BWA3_Rifleman_Tropen";
		typicalCargo[]=
		{
			"BWA3_Rifleman_Tropen"
		};
		side=1;
		faction="BWA3_Faction_Tropen";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\mrap_02_ext_co.paa",
			"KGB_ReTex_Pack\data\turret_02_co.paa"
		};
		_generalMacro="BWA3_Fennek_DES";
	};
	class KGB_B_MRAP_03_hmg_F_DES: MRAP_03_hmg_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekHMGFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_hmg_F_DES.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_HMG_ca.paa";
		crew="BWA3_Rifleman_Tropen";
		typicalCargo[]=
		{
			"BWA3_Rifleman_Tropen"
		};
		side=1;
		faction="BWA3_Faction_Tropen";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\mrap_02_ext_co.paa",
			"KGB_ReTex_Pack\data\turret_02_co.paa"
		};
		_generalMacro="BWA3_Fennek_HMG_DES";
	};
	class KGB_B_MRAP_03_gmg_F_DES: MRAP_03_gmg_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekGMGFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_gmg_F_DES.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_HMG_ca.paa";
		crew="BWA3_Rifleman_Tropen";
		typicalCargo[]=
		{
			"BWA3_Rifleman_Tropen"
		};
		side=1;
		faction="BWA3_Faction_Tropen";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\mrap_02_ext_co.paa",
			"KGB_ReTex_Pack\data\turret_02_co.paa"
		};
		_generalMacro="BWA3_Fennek_GMG_DES";
	};
	class KGB_B_MRAP_03_F_WIN: MRAP_03_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekCSFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_F_DES.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_Base_ca.paa";
		crew="PzBrig17_Rifleman_Snow";
		typicalCargo[]=
		{
			"PzBrig17_Rifleman_Snow"
		};
		side=1;
		faction="BWadd_Faction_Schnee";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\TBW_Fennek_Schnee_co.paa",
			"KGB_ReTex_Pack\data\turret_03_co.paa"
		};
		_generalMacro="BWA3_Fennek_WIN";
	};
	class KGB_B_MRAP_03_hmg_F_WIN: MRAP_03_hmg_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekHMGFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_hmg_F_DES.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_HMG_ca.paa";
		crew="PzBrig17_Rifleman_Snow";
		typicalCargo[]=
		{
			"PzBrig17_Rifleman_Snow"
		};
		side=1;
		faction="BWadd_Faction_Schnee";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\TBW_Fennek_Schnee_co.paa",
			"KGB_ReTex_Pack\data\turret_03_co.paa"
		};
		_generalMacro="BWA3_Fennek_HMG_WIN";
	};
	class KGB_B_MRAP_03_gmg_F_WIN: MRAP_03_gmg_base_F
	{
		author="TobiB";
		scope=2;
		displayName="$STR_BW_a3_FennekGMGFleckName";
		editorPreview="\KGB_ReTex_Pack\editorPreview\KGB_B_MRAP_03_gmg_F_DES.jpg";
		picture="\A3\soft_f_beta\MRAP_03\Data\UI\MRAP_03_HMG_ca.paa";
		crew="PzBrig17_Rifleman_Snow";
		typicalCargo[]=
		{
			"PzBrig17_Rifleman_Snow"
		};
		side=1;
		faction="BWadd_Faction_Schnee";
		vehicleClass="Armored";
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
				disabledPositions[]=
				{
					"driver"
				};
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
				disabledPositions[]=
				{
					"driver"
				};
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
				masterPositions[]=
				{
					"driver"
				};
				connectedByDefault=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=16;
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=8;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=10;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=4;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=4;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=4;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"KGB_ReTex_Pack\data\TBW_Fennek_Schnee_co.paa",
			"KGB_ReTex_Pack\data\turret_03_co.paa"
		};
		_generalMacro="BWA3_Fennek_GMG_WIN";
	};
};
