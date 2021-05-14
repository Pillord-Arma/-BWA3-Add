class CfgPatches
{
	class Dsk_lucie_config
	{
		units[]=
		{
			"dsk_Item_nsv"
		};
		weapons[]=
		{
			"dsk_nsv"
		};
		requiredVersion=0.0099999998;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class CfgVehicles
{
	class Item_NVGoggles;
	class dsk_Item_nsv: Item_NVGoggles
	{
		scope=2;
		scopeCurator=2;
		displayName="BiV Lucie GEN III";
		vehicleClass="Items";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_InventoryItems";
		class TransportItems
		{
			class _xx_dsk_nsv
			{
				name="dsk_nsv";
				count=1;
			};
		};
	};
};
class cfgWeapons
{
	class Binocular;
	class NVGoggles: Binocular
	{
	};
	class dsk_nsv: NVGoggles
	{
		scope=2;
		displayName="BiV Lucie GEN III";
		picture="\luciea3\data\UI\lucie_ca.paa";
		model="luciea3\lucie_On.p3d";
		simulation="NVGoggles";
		author="[DSK]Red";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		modelOptics="\A3\Weapons_f\reticle\optics_night";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="luciea3\lucie_On.p3d";
			modelOff="luciea3\lucie_Off.p3d";
			mass=4;
		};
		ACE_NightVision_grain=0.75;
		ACE_NightVision_blur=0.055;
		ACE_NightVision_radBlur=0.001;
	};
};
