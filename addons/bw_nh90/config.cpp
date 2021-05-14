class CfgPatches
{
	class bw_nh90
	{
		units[]=
		{
			"bw_nh90",
			"bw_nh90_armed",
			"bw_nh90_marine",
			"bw_pilot"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Weapons_F",
			"HAFM_NH90_Config",
			"bwa3_backpacks",
			"bwa3_common",
			"bwa3_g36",
			"bwa3_mg4",
			"bwa3_handgrenades",
			"TBW_Multi"
		};
	};
};
class CfgVehicles
{
	class NH90;
	class bw_nh90: NH90
	{
		displayName="NH 90 (Transport)";
		editorPreview="\bw_nh90\editorPreview\bw_nh90.jpg";
		forceInGarage=1;
		faction="BWA3_Faction_Fleck";
		crew="bw_pilot";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,9,-1.6};
		LESH_WheelOffset[]={0,-3};
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
					"driver",
					"copilot"
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
				numLimitedPositions=14;
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
				connectedByDefault=1;
			};
		};
		acre_hasInfantryPhone=0;
		ace_fastroping_enabled=2;
		ace_fastroping_friesType="ACE_friesAnchorBar";
		ace_fastroping_friesAttachmentPoint[]={0.02,1.38,-0.37};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_ropeOrigins[]=
		{
			"ropeOriginLeft",
			"ropeOriginRight"
		};
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
		hiddenSelectionsTextures[]=
		{
			"bw_nh90\data\hull.paa",
			"bw_nh90\data\tail.paa",
			"bw_nh90\data\misc.paa",
			"bw_nh90\data\doors.paa"
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=14;
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
		};
	};
	class NH90Armed;
	class bw_nh90_armed: NH90Armed
	{
		displayName="NH 90 (M134)";
		editorPreview="\bw_nh90\editorPreview\bw_nh90_armed.jpg";
		forceInGarage=1;
		faction="BWA3_Faction_Fleck";
		crew="bw_pilot";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,9,-1.6};
		LESH_WheelOffset[]={0,-3};
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
					"driver",
					"copilot"
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
				numLimitedPositions=8;
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
				numLimitedPositions=4;
				masterPositions[]={};
				connectedByDefault=1;
			};
		};
		acre_hasInfantryPhone=0;
		ace_fastroping_enabled=2;
		ace_fastroping_friesType="ACE_friesAnchorBar";
		ace_fastroping_friesAttachmentPoint[]={0.02,1.38,-0.37};
		ace_fastroping_onCut="ace_fastroping_fnc_onCutCommon";
		ace_fastroping_onPrepare="ace_fastroping_fnc_onPrepareCommon";
		ace_fastroping_ropeOrigins[]=
		{
			"ropeOriginLeft",
			"ropeOriginRight"
		};
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
		hiddenSelectionsTextures[]=
		{
			"bw_nh90\data\hull.paa",
			"bw_nh90\data\tail.paa",
			"bw_nh90\data\misc.paa",
			"bw_nh90\data\doors.paa"
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=14;
			};
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=4;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=4;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				count=20;
				magazine="BWA3_30Rnd_556x45_G36";
			};
			class _xx_BWA3_200Rnd_556x45
			{
				count=5;
				magazine="BWA3_200Rnd_556x45";
			};
			class _xx_BWA3_DM51A1
			{
				count=10;
				magazine="BWA3_DM51A1";
			};
			class _xx_BWA3_DM32_Orange
			{
				count=10;
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
		};
	};
	class NH90Marine;
	class bw_nh90_marine: NH90Marine
	{
		displayName="$STR_BWadd_HeliName";
		editorPreview="\bw_nh90\editorPreview\bw_nh90_marine.jpg";
		forceInGarage=1;
		faction="BWadd_Faction_Marine";
		crew="bw_pilot";
		LESH_canBeTowed=1;
		LESH_towFromFront=1;
		LESH_AxisOffsetTarget[]={0,9,-1.6};
		LESH_WheelOffset[]={0,-3};
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
					"driver",
					"copilot"
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
				numLimitedPositions=14;
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
				connectedByDefault=1;
			};
		};
		acre_hasInfantryPhone=0;
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]=
		{
			{1.47,1.8099999,-0.017999999}
		};
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
		hiddenSelectionsTextures[]=
		{
			"bw_nh90\data\MouterHaul.paa",
			"bw_nh90\data\MupperTail.paa",
			"bw_nh90\data\Mmisc.paa",
			"bw_nh90\data\Mdoors.paa",
			"bw_nh90\data\Mblack.paa",
			"bw_nh90\data\MInnerHaul.paa",
			"bw_nh90\data\MParts.paa",
			"bw_nh90\data\MPartsFront.paa"
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=14;
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
		};
	};
	class BWA3_Helipilot;
	class bw_pilot: BWA3_Helipilot
	{
		displayName="$STR_BWadd_PilotName";
		forceInGarage=1;
		editorPreview="\bw_nh90\editorPreview\bw_pilot.jpg";
		linkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};
class cfgMods
{
	author="76561198073398545";
	timepacked="1425337166";
};
