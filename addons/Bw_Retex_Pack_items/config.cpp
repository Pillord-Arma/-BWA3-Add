class DefaultEventhandlers;
class CfgPatches
{
	class BW_Items
	{
		units[]=
		{
			"BW_Backpack_Carryall_Flecktarn",
			"BW_Backpack_compact_Flecktarn",
			"BW_Kitbag_Flecktarn",
			"BW_Backpack_Flecktarn_Med",
			"BW_Backpack_Flecktarn",
			"BW_Backpack_Carryall_Tropentarn",
			"BW_Backpack_compact_Tropentarn",
			"BW_Kitbag_Tropentarn",
			"BW_Backpack_Tropentarn_Med",
			"BW_Backpack_Tropentarn"
		};
		weapons[]=
		{
			""
		};
		requiredVersion[]={"0.100000"};
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"bwa3_common"
		};
	};
};
class cfgVehicles
{
	class B_TacticalPack_base;
	class B_Kitbag_base;
	class B_AssaultPack_base;
	class B_Carryall_base;
	class B_supplyCrate_F;
	class BW_Backpack_Tropentarn: B_TacticalPack_base
	{
		displayName="$STR_BWA3_TacticalPack_Tropen";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\backpack_GER_Tropentarn.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Backpack_Tropentarn";
	};
	class BW_Backpack_Tropentarn_Med: B_TacticalPack_base
	{
		displayName="$STR_BWA3_TacticalPack_Tropen_Medic";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\backpack_GER_Tropentarn_Med.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Backpack_Tropentarn_Med";
	};
	class BW_Kitbag_Tropentarn: B_Kitbag_base
	{
		displayName="$STR_BWA3_Kitbag_Tropen";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\Kitbag_GER_Tropentarn.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Kitbag_Tropentarn";
	};
	class BW_Backpack_compact_Tropentarn: B_AssaultPack_base
	{
		displayName="$STR_BWA3_AssaultPack_Tropen";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\backpack_compact_GER_Tropentarn.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Backpack_compact_Tropentarn";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
	};
	class BW_Backpack_Carryall_Tropentarn: B_Carryall_base
	{
		displayName="$STR_BWA3_Carryall_Tropen";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\CarryAll_GER_Tropentarn.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Backpack_Carryall_Tropentarn";
	};
	class BW_Backpack_Flecktarn: B_TacticalPack_base
	{
		displayName="$STR_BWA3_TacticalPack_Fleck";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\backpack_GER_Flecktarn.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Backpack_Flecktarn";
	};
	class BW_Backpack_Flecktarn_Med: B_TacticalPack_base
	{
		displayName="$STR_BWA3_TacticalPack_Fleck_Medic";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\backpack_GER_Flecktarn_Med.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Backpack_Flecktarn_Med";
	};
	class BW_Kitbag_Flecktarn: B_Kitbag_base
	{
		displayName="$STR_BWA3_Kitbag_Fleck";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\Kitbag_GER_Flecktarn.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Kitbag_Flecktarn";
	};
	class BW_Backpack_compact_Flecktarn: B_AssaultPack_base
	{
		displayName="$STR_BWA3_AssaultPack_Fleck";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\backpack_compact_GER_Flecktarn.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Backpack_compact_Flecktarn";
		picture="\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
	};
	class BW_Backpack_Carryall_Flecktarn: B_Carryall_base
	{
		displayName="$STR_BWA3_Carryall_Fleck";
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_items\textures\CarryAll_GER_Flecktarn.paa"
		};
		scope=2;
		author="=ARC=,Croschi";
		_generalMacro="BW_Backpack_Carryall_Flecktarn";
	};
};
