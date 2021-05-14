class CfgPatches
{
	class bw_snow_rifles
	{
		author="gandre82/madpat3";
		name="Snowrifles";
		units[]=
		{
			"BWAdd_Weapon_G36A1",
			"BWAdd_Weapon_G36KA1",
			"BWAdd_Weapon_G36A1_AG40",
			"BWAdd_Weapon_G36A2",
			"BWAdd_Weapon_G36KA2",
			"BWAdd_Weapon_G36A2_AG40",
			"BWAdd_Weapon_G36",
			"BWAdd_Weapon_G36K",
			"BWAdd_Weapon_G36_AG",
			"BWAdd_Weapon_G36K_AG",
			"BWAdd_Weapon_G36KA0",
			"BWAdd_Weapon_G36KA4",
			"BWAdd_Weapon_G38",
			"BWAdd_Weapon_G38_AG",
			"BWAdd_Weapon_G38K",
			"BWAdd_Weapon_G38K_AG",
			"BWAdd_Weapon_G38C",
			"BWAdd_Weapon_G27",
			"BWAdd_Weapon_G27_AG",
			"BWAdd_Weapon_MG3",
			"BWAdd_Weapon_MG3_bipod",
			"BWAdd_Weapon_MG3_MicroT2_pointer_bipod",
			"BWAdd_Weapon_MG4",
			"BWAdd_Weapon_MG5",
			"BWAdd_Weapon_G82"
		};
		weapons[]=
		{
			"BWAdd_G36A1",
			"BWAdd_G36KA1",
			"BWAdd_G36A1_AG40",
			"BWAdd_G36A2",
			"BWAdd_G36A2_RSAS_pointer",
			"BWAdd_G36A2_EOTech552_pointer",
			"BWAdd_G36KA2",
			"BWAdd_G36KA2_RSAS_pointer",
			"BWAdd_G36KA2_EOTech552_pointer",
			"BWAdd_G36A2_AG40",
			"BWAdd_G36A2_AG40_RSAS_pointer",
			"BWAdd_G36A2_AG40_EOTech552_pointer",
			"BWAdd_G36",
			"BWAdd_G36_equipped",
			"BWAdd_G36_cqb_equipped",
			"BWAdd_G36_EOTech552_pointer",
			"BWAdd_G36K",
			"BWAdd_G36K_equipped",
			"BWAdd_G36K_cqb_equipped",
			"BWAdd_G36K_EOTech552_pointer",
			"BWAdd_G36_AG",
			"BWAdd_G36_AG_equipped",
			"BWAdd_G36_AG_cqb_equipped",
			"BWAdd_G36_AG_EOTech552_pointer",
			"BWAdd_G36K_AG",
			"BWAdd_G36K_AG_equipped",
			"BWAdd_G36K_AG_cqb_equipped",
			"BWAdd_G38",
			"BWAdd_G38_equipped",
			"BWAdd_G38_silencer_equipped",
			"BWAdd_G38_AG",
			"BWAdd_G38_AG_equipped",
			"BWAdd_G38_AG_silencer_equipped",
			"BWAdd_G38K",
			"BWAdd_G38K_equipped",
			"BWAdd_G38K_silencer_equipped",
			"BWAdd_G38K_silencer_cqb_equipped",
			"BWAdd_G38K_AG",
			"BWAdd_G38K_AG_equipped",
			"BWAdd_G38K_AG_silencer_equipped",
			"BWAdd_G38K_AG_silencer_cqb_equipped",
			"BWAdd_G38C",
			"BWAdd_G38C_equipped",
			"BWAdd_G38C_silencer_equipped",
			"BWAdd_G27",
			"BWAdd_G27_equipped",
			"BWAdd_G27_cqb_equipped",
			"BWAdd_G27_AG",
			"BWAdd_G27_AG_equipped",
			"BWAdd_G27_AG_cqb_equipped",
			"BWAdd_MG3",
			"BWAdd_MG3_bipod",
			"BWAdd_MG3_MicroT2_pointer_bipod",
			"BWAdd_MG4",
			"BWAdd_MG4_equipped",
			"BWAdd_MG5",
			"BWAdd_MG5_equipped",
			"BWAdd_G82",
			"BWAdd_G82_equipped"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"bwa3_g38",
			"bwa3_g36",
			"bwa3_g28",
			"bwa3_mg4",
			"bwa3_mg5",
			"bwa3_g82"
		};
	};
};
class CfgVehicles
{
	class BWA3_Weapon_G36A1;
	class BWA3_Weapon_G36KA1;
	class BWA3_Weapon_G36A1_AG40;
	class BWA3_Weapon_G36A2;
	class BWA3_Weapon_G36KA2;
	class BWA3_Weapon_G36A2_AG40;
	class BWA3_Weapon_G36A3;
	class BWA3_Weapon_G36KA3;
	class BWA3_Weapon_G36A3_AG40;
	class BWA3_Weapon_G36KA0;
	class BWA3_Weapon_G36KA4;
	class BWA3_Weapon_G38;
	class BWA3_Weapon_G38_AG40;
	class BWA3_Weapon_G38K;
	class BWA3_Weapon_G38K_AG40;
	class BWA3_Weapon_G38C;
	class BWA3_Weapon_G27;
	class BWA3_Weapon_G27_AG40;
	class BWA3_Weapon_MG3;
	class BWA3_Weapon_MG4;
	class BWA3_Weapon_MG5;
	class BWA3_Weapon_G82;
	class BWAdd_Weapon_G36A1: BWA3_Weapon_G36A1
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G36A1SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36A1
			{
				weapon="BWAdd_G36A1";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36KA1: BWA3_Weapon_G36KA1
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G36KA1SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36KA1
			{
				weapon="BWAdd_G36KA1";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36A1_AG40: BWA3_Weapon_G36A1_AG40
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G36A1_AG40SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36A1_AG40
			{
				weapon="BWAdd_G36A1_AG40";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36A2: BWA3_Weapon_G36A2
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G36A2SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36A2
			{
				weapon="BWAdd_G36A2";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36KA2: BWA3_Weapon_G36KA2
	{
		author="gandre82/madpat3";
		displayName="$STR_BWadd_G36KA2SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36KA2
			{
				weapon="BWAdd_G36KA2";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36A2_AG40: BWA3_Weapon_G36A2_AG40
	{
		author="gandre82/madpat3";
		displayName="$STR_BWadd_G36A2AG40SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36A2_AG40
			{
				weapon="BWAdd_G36A2_AG40";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36: BWA3_Weapon_G36A3
	{
		author="gandre82/madpat3";
		displayName="$STR_BWadd_G36SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36
			{
				weapon="BWAdd_G36";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36K: BWA3_Weapon_G36KA3
	{
		author="gandre82/madpat3";
		displayName="$STR_BWadd_G36KSchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36K
			{
				weapon="BWAdd_G36K";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36_AG: BWA3_Weapon_G36A3_AG40
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G36AGSchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36_AG
			{
				weapon="BWAdd_G36_AG";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36KA0: BWA3_Weapon_G36KA0
	{
		author="gandre82/madpat3";
		displayName="$STR_BWadd_G36KA0SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36KA0
			{
				weapon="BWAdd_G36KA0";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G36KA4: BWA3_Weapon_G36KA4
	{
		author="gandre82/madpat3";
		displayName="$STR_BWadd_G36KA4SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G36KA4
			{
				weapon="BWAdd_G36KA4";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G38: BWA3_Weapon_G38
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G38SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G38
			{
				weapon="BWAdd_G38";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G38_AG: BWA3_Weapon_G38_AG40
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G38AGSchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G38_AG
			{
				weapon="BWAdd_G38_AG";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G38K: BWA3_Weapon_G38K
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G38KSchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G38K
			{
				weapon="BWAdd_G38K";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G38K_AG: BWA3_Weapon_G38K_AG40
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G38KAGSchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G38K_AG
			{
				weapon="BWAdd_G38K_AG";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G38C: BWA3_Weapon_G38C
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G38CSchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G38C
			{
				weapon="BWAdd_G38C";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G27: BWA3_Weapon_G27
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G27SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G27
			{
				weapon="BWAdd_G27";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G27_AG: BWA3_Weapon_G27_AG40
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G27AGSchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G27_AG40
			{
				weapon="BWAdd_G27_AG";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_MG3: BWA3_Weapon_MG3
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_MG3SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_MG3
			{
				weapon="BWAdd_MG3";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_MG4: BWA3_Weapon_MG4
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_MG4SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_MG4
			{
				weapon="BWAdd_MG4";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_MG5: BWA3_Weapon_MG5
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_MG5SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_MG5
			{
				weapon="BWAdd_MG5";
				count=1;
			};
		};
	};
	class BWAdd_Weapon_G82: BWA3_Weapon_G82
	{
		author="gandre82/madpat3";
		displayName="$STR_BWAdd_G82SchneeName";
		class TransportWeapons
		{
			class _xx_BWAdd_G82
			{
				weapon="BWAdd_G82";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class BWA3_G36A1;
	class BWA3_G36KA1;
	class BWA3_G36A1_AG40;
	class BWA3_G36KA0;
	class BWA3_G36KA4;
	class BWA3_G36A2;
	class BWA3_G36KA2;
	class BWA3_G36A2_AG40;
	class BWA3_G36A3;
	class BWA3_G36KA3;
	class BWA3_G36A3_AG40;
	class BWA3_G36KA3_AG40;
	class BWA3_G38;
	class BWA3_G38_AG40;
	class BWA3_G38K;
	class BWA3_G38K_AG40;
	class BWA3_G38C;
	class BWA3_G27;
	class BWA3_G27_AG40;
	class BWA3_MG3;
	class BWA3_MG3_bipod;
	class BWA3_MG3_MicroT2_pointer_bipod;
	class BWA3_MG4;
	class BWA3_MG5;
	class BWA3_G82;
	class BWAdd_G36A1: BWA3_G36A1
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36A1";
		displayName="$STR_BWAdd_G36A1SchneeName";
		BaseWeapon="BWAdd_G36A1";
		modelOptics="\bwa3_optics\bwa3_optics_pip_big.p3d";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa"
		};
	};
	class BWAdd_G36A1_pip: BWAdd_G36A1
	{
		author="madpat3";
		scope=1;
		modelOptics="\bwa3_optics\bwa3_optics_pip_big.p3d";
	};
	class BWAdd_G36KA1: BWA3_G36KA1
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36KA1";
		displayName="$STR_BWAdd_G36KA1SchneeName";
		BaseWeapon="BWAdd_G36KA1";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_idz_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa",
			"\bwa3_g36\data\bwa3_hk_frontgrip_co.paa"
		};
	};
	class BWAdd_G36KA1_pip: BWAdd_G36KA1
	{
		author="madpat3";
		scope=1;
		modelOptics="\bwa3_optics\bwa3_optics_pip_big.p3d";
	};
	class BWAdd_G36A1_AG40: BWA3_G36A1_AG40
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36A1_AG40";
		displayName="$STR_BWAdd_G36A1_AG40SchneeName";
		BaseWeapon="BWAdd_G36A1_AG40";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_ag40_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa"
		};
	};
	class BWAdd_G36A1_AG40_pip: BWAdd_G36A1_AG40
	{
		author="madpat3";
		scope=1;
		modelOptics="\bwa3_optics\bwa3_optics_pip_big.p3d";
	};
	class BWAdd_G36A2: BWA3_G36A2
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36A2";
		displayName="$STR_BWAdd_G36A2SchneeName";
		BaseWeapon="BWAdd_G36A2";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa"
		};
	};
	class BWAdd_G36A2_pip: BWAdd_G36A2
	{
		author="madpat3";
		scope=1;
		modelOptics="\bwa3_optics\bwa3_optics_pip_big.p3d";
	};
	class BWAdd_G36A2_RSAS_pointer: BWAdd_G36A2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_RSAS_G36A2";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G36A2_EOTech552_pointer: BWAdd_G36A2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech552_G36A2";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G36KA2: BWA3_G36KA2
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36KA2";
		displayName="$STR_BWAdd_G36KA2SchneeName";
		BaseWeapon="BWAdd_G36KA2";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa"
		};
	};
	class BWAdd_G36KA2_pip: BWAdd_G36KA2
	{
		author="madpat3";
		scope=1;
		modelOptics="\bwa3_optics\bwa3_optics_pip_big.p3d";
	};
	class BWAdd_G36KA2_RSAS_pointer: BWAdd_G36KA2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_RSAS_G36A2";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G36KA2_EOTech552_pointer: BWAdd_G36KA2
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech552_G36A2";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G36A2_AG40: BWA3_G36A2_AG40
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36A2_AG40";
		displayName="$STR_BWAdd_G36A2AG40SchneeName";
		BaseWeapon="BWAdd_G36A2_AG40";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_ag40_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa"
		};
	};
	class BWAdd_G36A2_AG40_pip: BWAdd_G36A2_AG40
	{
		author="madpat3";
		scope=1;
		modelOptics="\bwa3_optics\bwa3_optics_pip_big.p3d";
	};
	class BWAdd_G36A2_AG40_RSAS_pointer: BWAdd_G36A2_AG40
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_RSAS_G36A2";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G36A2_AG40_EOTech552_pointer: BWAdd_G36A2_AG40
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech552_G36A2";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G36: BWA3_G36A3
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36";
		displayName="$STR_BWAdd_G36SchneeName";
		BaseWeapon="BWAdd_G36";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_idz_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa",
			"\bwa3_g36\data\bwa3_hk_frontgrip_co.paa"
		};
	};
	class BWAdd_G36_equipped: BWAdd_G36
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36_cqb_equipped: BWAdd_G36
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36_EOTech552_pointer: BWAdd_G36
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech552";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36K: BWA3_G36KA3
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36K";
		displayName="$STR_BWAdd_G36KSchneeName";
		BaseWeapon="BWAdd_G36K";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_idz_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa",
			"\bwa3_g36\data\bwa3_hk_frontgrip_co.paa"
		};
	};
	class BWAdd_G36K_equipped: BWAdd_G36K
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36K_cqb_equipped: BWAdd_G36K
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36K_EOTech552_pointer: BWAdd_G36K
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech552";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36_AG: BWA3_G36A3_AG40
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36_AG";
		displayName="$STR_BWAdd_G36AGSchneeName";
		BaseWeapon="BWAdd_G36_AG";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_idz_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_ag40_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa",
			"\bwa3_g36\data\bwa3_hk_frontgrip_co.paa"
		};
	};
	class BWAdd_G36_AG_equipped: BWAdd_G36_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36_AG_cqb_equipped: BWAdd_G36_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36_AG_EOTech552_pointer: BWAdd_G36_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech552";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G36KA0: BWA3_G36KA0
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36KA0";
		displayName="$STR_BWAdd_G36KA0SchneeName";
		BaseWeapon="BWAdd_G36KA0";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa"
		};
	};
	class BWAdd_G36KA0_pip: BWAdd_G36KA0
	{
		author="madpat3";
		scope=1;
		modelOptics="\bwa3_optics\bwa3_optics_pip_big.p3d";
	};
	class BWAdd_G36KA4: BWA3_G36KA4
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G36KA4";
		displayName="$STR_BWAdd_G36KA4SchneeName";
		BaseWeapon="BWAdd_G36KA4";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g36_base_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_idz_co.paa",
			"\bw_snow_rifles\data\bwadd_g36_base_ca.paa",
			"\bwa3_g36\data\bwa3_hk_frontgrip_co.paa"
		};
	};
	class BWAdd_G38: BWA3_G38
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G38";
		displayName="$STR_BWAdd_G38SchneeName";
		BaseWeapon="BWAdd_G38";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g38_co.paa",
			"\bwa3_g38\data\bwa3_g38_ca.paa",
			"\bwa3_g38\data\bwa3_g38_flipsight_co.paa"
		};
	};
	class BWAdd_G38K: BWA3_G38K
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G38K";
		displayName="$STR_BWAdd_G38KSchneeName";
		BaseWeapon="BWAdd_G38K";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g38_co.paa",
			"\bwa3_g38\data\bwa3_g38_ca.paa",
			"\bwa3_g38\data\bwa3_g38_flipsight_co.paa"
		};
	};
	class BWAdd_G38C: BWA3_G38C
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G38C";
		displayName="$STR_BWAdd_G38CSchneeName";
		BaseWeapon="BWAdd_G38C";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g38_co.paa",
			"\bwa3_g38\data\bwa3_g38_ca.paa",
			"\bwa3_g38\data\bwa3_g38_flipsight_co.paa"
		};
	};
	class BWAdd_G38_AG: BWA3_G38_AG40
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G38_AG";
		displayName="$STR_BWAdd_G38AGSchneeName";
		BaseWeapon="BWAdd_G38_AG";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g38_co.paa",
			"\bwa3_g38\data\bwa3_g38_ca.paa",
			"\bwa3_g38\data\bwa3_g38_flipsight_co.paa"
		};
	};
	class BWAdd_G38K_AG: BWA3_G38K_AG40
	{
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G38K_AG";
		displayName="$STR_BWAdd_G38KAGSchneeName";
		BaseWeapon="BWAdd_G38K_AG";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g38_co.paa",
			"\bwa3_g38\data\bwa3_g38_ca.paa",
			"\bwa3_g38\data\bwa3_g38_flipsight_co.paa"
		};
	};
	class BWAdd_G38_equipped: BWAdd_G38
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G38_silencer_equipped: BWAdd_G38
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="BWA3_muzzle_snds_QDSS";
			};
		};
	};
	class BWAdd_G38_AG_equipped: BWAdd_G38_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G38_AG_silencer_equipped: BWAdd_G38_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="BWA3_muzzle_snds_QDSS";
			};
		};
	};
	class BWAdd_G38K_equipped: BWAdd_G38K
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser_underbarrel";
			};
		};
	};
	class BWAdd_G38K_silencer_equipped: BWAdd_G38K
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser_underbarrel";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="BWA3_muzzle_snds_QDSS";
			};
		};
	};
	class BWAdd_G38K_silencer_cqb_equipped: BWAdd_G38K
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser_underbarrel";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="BWA3_muzzle_snds_QDSS";
			};
		};
	};
	class BWAdd_G38K_AG_equipped: BWAdd_G38K_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G38K_AG_silencer_equipped: BWAdd_G38K_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="BWA3_muzzle_snds_QDSS";
			};
		};
	};
	class BWAdd_G38K_AG_silencer_cqb_equipped: BWAdd_G38K_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="BWA3_muzzle_snds_QDSS";
			};
		};
	};
	class BWAdd_G38C_equipped: BWAdd_G38C
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser_underbarrel";
			};
		};
	};
	class BWAdd_G38C_silencer_equipped: BWAdd_G38C
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser_underbarrel";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="BWA3_muzzle_snds_QDSS";
			};
		};
	};
	class BWAdd_G27: BWA3_G27
	{
		displayName="$STR_BWAdd_G27SchneeName";
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G27";
		BaseWeapon="BWAdd_G27";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g27_black_co.paa"
		};
	};
	class BWAdd_G27_equipped: BWAdd_G27
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30i_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G27_cqb_equipped: BWAdd_G27
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech552";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G27_AG: BWA3_G27_AG40
	{
		displayName="$STR_BWAdd_G27AGSchneeName";
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G27_AG";
		BaseWeapon="BWAdd_G27_AG";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g27_black_co.paa"
		};
	};
	class BWAdd_G27_AG_equipped: BWAdd_G27_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30i_RSAS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_G27_AG_cqb_equipped: BWAdd_G27_AG
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_EOTech552";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
		};
	};
	class BWAdd_MG3: BWA3_MG3
	{
		displayName="$STR_BWAdd_MG3SchneeName";
		author="gandre82/madpat3";
		_generalMacro="BWAdd_MG3";
		BaseWeapon="BWAdd_MG3";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_mg3_co.paa"
		};
	};
	class BWAdd_MG3_bipod: BWAdd_MG3
	{
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="BWA3_bipod_MG3";
			};
		};
	};
	class BWAdd_MG3_MicroT2_pointer_bipod: BWAdd_MG3
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_MicroT2";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_VarioRay_irlaser";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="BWA3_bipod_MG3";
			};
		};
	};
	class BWAdd_MG4: BWA3_MG4
	{
		displayName="$STR_BWAdd_MG4SchneeName";
		author="gandre82/madpat3";
		_generalMacro="BWAdd_MG4";
		BaseWeapon="BWAdd_MG4";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_mg4_co.paa",
			"\bwa3_mg4\data\bwa3_mg4_kimme_co.paa"
		};
	};
	class BWAdd_MG4_equipped: BWAdd_MG4
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_MG5: BWA3_MG5
	{
		displayName="$STR_BWAdd_MG5SchneeName";
		author="gandre82/madpat3";
		_generalMacro="BWAdd_MG5";
		BaseWeapon="BWAdd_MG5";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_mg5_co.paa"
		};
	};
	class BWAdd_MG5_equipped: BWAdd_MG5
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_ZO4x30i";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="BWA3_acc_LLM01_irlaser";
			};
		};
	};
	class BWAdd_G82: BWA3_G82
	{
		displayName="$STR_BWAdd_G82SchneeName";
		author="gandre82/madpat3";
		_generalMacro="BWAdd_G82";
		BaseWeapon="BWAdd_G82";
		hiddenSelectionsTextures[]=
		{
			"\bw_snow_rifles\data\bwadd_g82_co.paa"
		};
	};
	class BWAdd_G82_equipped: BWAdd_G82
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="BWA3_optic_Hensoldt";
			};
		};
	};
};
class BWA3_CfgPIPItems
{
	BWAdd_G36A1="BWAdd_G36A1_pip";
	BWAdd_G36KA1="BWAdd_G36KA1_pip";
	BWAdd_G36A1_AG40="BWAdd_G36A1_AG40_pip";
	BWAdd_G36A2="BWAdd_G36A2_pip";
	BWAdd_G36A2_RSAS_pointer="BWAdd_G36A2_pip";
	BWAdd_G36A2_EOTech552_pointer="BWAdd_G36A2_pip";
	BWAdd_G36KA2="BWAdd_G36KA2_pip";
	BWAdd_G36KA2_RSAS_pointer="BWAdd_G36KA2_pip";
	BWAdd_G36KA2_EOTech552_pointer="BWAdd_G36KA2_pip";
	BWAdd_G36A2_AG40="BWAdd_G36A2_AG40_pip";
	BWAdd_G36A2_AG40_RSAS_pointer="BWAdd_G36A2_AG40_pip";
	BWAdd_G36A2_AG40_EOTech552_pointer="BWAdd_G36A2_AG40_pip";
	BWAdd_G36KA0="BWAdd_G36KA0_pip";
};
