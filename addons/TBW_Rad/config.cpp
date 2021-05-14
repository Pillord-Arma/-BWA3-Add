class BIS_AddonInfo
{
	author="Tobi";
	timepacked="1537735950";
};
class cfgWeapons
{
	class AmbulanceHorn;
	class TBW_Martinshorn: AmbulanceHorn
	{
		displayName="Martinshorn";
		drySound[]=
		{
			"\TBW_Rad\sounds\Horn.ogg",
			1,
			1,
			200
		};
	};
};
class CfgVehicles
{
	class C_Van_02_medevac_F;
	class TBW_RTW_BW: C_Van_02_medevac_F
	{
		displayName="$STR_TBW_Rad_Ambulance";
		forceInGarage=1;
		faction="BWadd_Faction_Rettung";
		crew="TBW_Retter";
		weapons[]=
		{
			"TBW_Martinshorn"
		};
		editorPreview="TBW_Rad\EditorPreview\TBW_RTW_BW.jpg";
		typicalCargo[]=
		{
			"TBW_Retter"
		};
		hiddenSelectionsTextures[]=
		{
			"TBW_Rad\data\TBW_RTW_BW_Body_co.paa",
			"TBW_Rad\data\TBW_RTW_BW_Rad_co.paa",
			"TBW_Rad\data\TBW_RTW_BW_Glass_ca.paa",
			"\a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
			"\a3\soft_f_orange\van_02\data\van_body_IdapAmbulance_CO.paa"
		};
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
					
					{
						"cargo",
						0
					}
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_SEM70";
				isRadioRemovable=0;
				intercom[]={};
			};
		};
		class textureSources
		{
			class TBW_RTW_BW_T
			{
				displayName="$STR_TBW_RTW";
				author="TobiB";
				textures[]=
				{
					"TBW_Rad\data\TBW_RTW_BW_Body_co.paa",
					"TBW_Rad\data\TBW_RTW_BW_Rad_co.paa",
					"TBW_Rad\data\TBW_RTW_BW_Glass_ca.paa",
					"\a3\soft_f_orange\van_02\data\van_ambulance_monitors_co.paa",
					"\a3\soft_f_orange\van_02\data\van_body_IdapAmbulance_CO.paa"
				};
				factions[]={};
			};
		};
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,1};
			plateFont="RobotoCondensedBold";
			plateFormat="Y-### ###";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
		class TransportBackpacks
		{
			class _xx_TBW_Notfallrucksack
			{
				count=2;
				backpack="TBW_Notfallrucksack";
			};
		};
	};
	class B_GEN_Van_02_transport_F;
	class TBW_VAN_Feldjaeger: B_GEN_Van_02_transport_F
	{
		displayName="$STR_Van_Feldjaeger";
		forceInGarage=1;
		faction="BWA3_Faction_Fleck";
		crew="TBW_Feldjaeger";
		weapons[]=
		{
			"TBW_Martinshorn"
		};
		editorPreview="TBW_Rad\EditorPreview\TBW_VAN_Feldjaeger.jpg";
		typicalCargo[]=
		{
			"TBW_Feldjaeger"
		};
		hiddenSelectionsTextures[]=
		{
			"TBW_Rad\data\TBW_Van_Feldjaeger_CO.paa",
			"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
			"\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
			"TBW_Rad\data\TBW_Van_Feldjaeger_CO.paa"
		};
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
					
					{
						"cargo",
						0
					}
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_SEM70";
				isRadioRemovable=0;
				intercom[]={};
			};
		};
		class textureSources
		{
			class TBW_VAN_Feldjaeger_T
			{
				displayName="Feldjaeger";
				author="TobiB";
				textures[]=
				{
					"TBW_Rad\data\TBW_Van_Feldjaeger_CO.paa",
					"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
					"\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
					"TBW_Rad\data\TBW_Van_Feldjaeger_CO.paa"
				};
				factions[]={};
			};
			class TBW_VAN_MP_T
			{
				displayName="Military Police";
				author="TobiB";
				textures[]=
				{
					"TBW_Rad\data\TBW_Van_MP_CO.paa",
					"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
					"\a3\soft_f_orange\van_02\data\van_glass_gen_CA.paa",
					"TBW_Rad\data\TBW_Van_MP_CO.paa"
				};
				factions[]={};
			};
		};
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,1};
			plateFont="RobotoCondensedBold";
			plateFormat="Y-### ###";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
	};
	class B_GEN_Offroad_01_gen_F;
	class TBW_Offroad_Feldjaeger: B_GEN_Offroad_01_gen_F
	{
		displayName="$STR_Offroad_Feldjaeger";
		forceInGarage=1;
		faction="BWA3_Faction_Fleck";
		crew="TBW_Feldjaeger";
		weapons[]=
		{
			"TBW_Martinshorn"
		};
		editorPreview="TBW_Rad\EditorPreview\TBW_Offroad_Feldjaeger.jpg";
		typicalCargo[]=
		{
			"TBW_Feldjaeger"
		};
		hiddenSelectionsTextures[]=
		{
			"TBW_Rad\data\TBW_Offroad_Feldjaeger_co.paa",
			"TBW_Rad\data\TBW_Offroad_Feldjaeger_co.paa"
		};
		disableRandomization[]={};
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
					
					{
						"cargo",
						0
					}
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_SEM70";
				isRadioRemovable=0;
				intercom[]={};
			};
		};
		class textureSources
		{
			class TBW_Offroad_Feldjaeger_T
			{
				displayName="Feldjaeger";
				author="TobiB";
				textures[]=
				{
					"TBW_Rad\data\TBW_Offroad_Feldjaeger_co.paa",
					"TBW_Rad\data\TBW_Offroad_Feldjaeger_co.paa"
				};
				factions[]={};
			};
			class TBW_Offroad_MilitaryPolice_T
			{
				displayName="Military Police";
				author="TobiB";
				textures[]=
				{
					"TBW_Rad\data\TBW_Offroad_MilitaryPolice_co.paa",
					"TBW_Rad\data\TBW_Offroad_MilitaryPolice_co.paa"
				};
				factions[]={};
			};
			class TBW_Offroad_Feldjaeger_weiss_T
			{
				displayName="$STR_Offroad_Feldjaeger_Weiss";
				author="TobiB";
				textures[]=
				{
					"TBW_Rad\data\TBW_Offroad_Feldjaeger_weiss_co.paa",
					"TBW_Rad\data\TBW_Offroad_Feldjaeger_weiss_co.paa"
				};
				factions[]={};
			};
		};
		animationList[]=
		{
			"HideBumper1",
			1,
			"HideBumper2",
			0,
			"HideConstruction",
			0,
			"HideDoor1",
			0,
			"HideDoor2",
			0,
			"HideGlass2",
			0,
			"HideBackpacks",
			1,
			"HideDoor3",
			0,
			"hidePolice",
			0,
			"HideServices",
			1,
			"BeaconsStart",
			0,
			"BeaconsServicesStart",
			0
		};
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,1};
			plateFont="RobotoCondensedBold";
			plateFormat="Y-### ###";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
	};
};

class CfgPatches
{
	class TBW_Rad
	{
		units[]=
		{
			"TBW_RTW_BW",
			"TBW_Offroad_Feldjaeger",
			"TBW_Van_Feldjaeger"
		};
		weapons[]=
		{
			"TBW_Martinshorn"
		};
		requiredVersion=0.1;
		version=1;
		requiredAddons[]=
		{
			"bwa3_common",
			"bwa3_units"
		};
	};
};
