class CfgVehicles
{

// Rucksäcke Fleck

	class B_AssaultPack_rgr;
	class TBW_AssaultPack_Fleck : B_AssaultPack_rgr
	{
		Author="TobiB";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "$STR_Assault_Fleck";
		picture = "\TBW_Ausruestung\UI\TBW_AssaultPack_Fleck_UI.paa";		
		hiddenSelectionsTextures[]=
		{
			"TBW_Ausruestung\Data\TBW_AssaultPack_Fleck_co.paa"
		};
	};
	
//Rucksäcke	Multi

	class TBW_AssaultPack_Multi : B_AssaultPack_rgr
	{
		Author="TobiB";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "$STR_Assault_Multi";
		picture = "\TBW_Ausruestung\UI\TBW_AssaultPack_Multi_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"TBW_Ausruestung\data\TBW_AssaultPack_Multi_co.paa"
		};
	};
	
//Rucksäcke	Tropen

	class TBW_AssaultPack_Tropen : B_AssaultPack_rgr
	{
		Author="TobiB";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "$STR_Assault_Tropen";
		picture = "\TBW_Ausruestung\UI\TBW_AssaultPack_Tropen_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"TBW_Ausruestung\data\TBW_AssaultPack_Tropen_co.paa"
		};
	};
	
//Rucksäcke	Schnee

	class TBW_AssaultPack_Schnee : B_AssaultPack_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		Author="TobiB";
		displayName = "$STR_Assault_Schnee";
		picture = "\TBW_Ausruestung\UI\TBW_AssaultPack_Schnee_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"TBW_Ausruestung\data\TBW_AssaultPack_Schnee_co.paa"
		};
	};

// Notfallrucksack
	
	class B_AssaultPack_Base;
	class TBW_Notfallrucksack: B_AssaultPack_Base
    {
        author = "TobiB";
        scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
        model = "\A3\weapons_f\ammoboxes\bags\Backpack_Compact";
        displayName = "$STR_Assault_Emerge";
        picture = "\TBW_Ausruestung\UI\TBW_Notfallrucksack_UI.paa";
        hiddenSelectionsTextures[]={"\TBW_Ausruestung\Data\TBW_Notfallrucksack_CO.paa"};
        maximumLoad = 160;
        mass = 20;
    };

//Uniformen Schnee

    class Item_Base_F;
	class TBW_Item_U_Kampfanzug_Schnee : Item_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_UniformSchneeName";
		vehicleClass="ItemsUniforms";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		class TransportItems
		{
			class _xx_TBW_U_Kampfanzug_Schnee
			{
				name="TBW_U_Kampfanzug_Schnee";
				count=1;
			};
		};
    };

//Uniformen Taucher

	class TBW_Item_U_Taucher : Item_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_UniformCombatDiverName";
		vehicleClass="ItemsUniforms";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		class TransportItems
		{
			class _xx_TBW_U_Taucher
			{
				name="TBW_U_Taucher";
				count=1;
			};
		};
    };

//Uniformen Marine
	
	class TBW_Item_U_Marine_Pullover : Item_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "Pullover Marine";
		vehicleClass="ItemsUniforms";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		class TransportItems
		{
			class _xx_TBW_U_Marine_Pullover
			{
				name="TBW_U_Marine_Pullover";
				count=1;
			};
		};
    };
	class TBW_Item_U_Marine_Hemd_blau : Item_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_UniformShirtName";
		vehicleClass="ItemsUniforms";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		class TransportItems
		{
			class _xx_TBW_U_Marine_Hemd_blau
			{
				name="TBW_U_Marine_Hemd_blau";
				count=1;
			};
		};
    };
	class TBW_Item_U_Marine_Hemd_tropen : Item_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_UniformShirtBrownName";
		vehicleClass="ItemsUniforms";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		class TransportItems
		{
			class _xx_TBW_U_Marine_Hemd_tropen
			{
				name="TBW_U_Marine_Hemd_tropen";
				count=1;
			};
		};
    };
	
//Uniformen Kampfschwimmer

	class TBW_Item_U_Kampfschwimmer_Fleck : Item_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_UniformCombatFleckName";
		vehicleClass="ItemsUniforms";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		class TransportItems
		{
			class _xx_TBW_U_Kampfschwimmer_Fleck
			{
				name="TBW_U_Kampfschwimmer_Fleck";
				count=1;
			};
		};
    };
	class TBW_Item_U_Kampfschwimmer_Multi : Item_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_UniformCombatMultiName";
		vehicleClass="ItemsUniforms";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		class TransportItems
		{
			class _xx_TBW_U_Kampfschwimmer_Multi
			{
				name="TBW_U_Kampfschwimmer_Multi";
				count=1;
			};
		};
    };
	
//Uniformen Rettungsdient	
	
	class TBW_Item_U_Retter : Item_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_UniformSanName";
		vehicleClass="ItemsUniforms";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		class TransportItems
		{
			class _xx_TBW_U_Retter
			{
				name="TBW_U_Retter";
				count=1;
			};
		};
    };
	
// Helme Multi

	class Headgear_Base_F;
	class TBW_Item_Helm_Multi : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_HelmetMultiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_TBW_Helm_Multi
			{
				name="TBW_Helm_Multi";
				count=1;
			};
		};
    };
	class TBW_Item_Helm2_Multi : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_HelmetMultiLightName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_TBW_Helm2_Multi
			{
				name="TBW_Helm2_Multi";
				count=1;
			};
		};
    };
	
// Helme Schnee
	
	class TBW_Item_Helm_Schnee : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_HelmetSchneeName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_TBW_Helm_Schnee
			{
				name="TBW_Helm_Schnee";
				count=1;
			};
		};
    };
	class TBW_Item_Helm2_Schnee : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_HelmetSchneeLightName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Helmets";
		class TransportItems
		{
			class _xx_TBW_Helm2_Schnee
			{
				name="TBW_Helm2_Schnee";
				count=1;
			};
		};
    };
	
// Barett

	class TBW_Item_Barett_San : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretSanName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_San
			{
				name="TBW_Barett_San";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_Pio : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretPioName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Pio
			{
				name="TBW_Barett_Pio";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_MSich : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretMarineName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_MSich
			{
				name="TBW_Barett_MSich";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_LWSich : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretLuftName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_LWSich
			{
				name="TBW_Barett_LWSich";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_Log : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretLogiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Log
			{
				name="TBW_Barett_Log";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_KSK : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretKSKName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_KSK
			{
				name="TBW_Barett_KSK";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_KpfSchwim : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretKSName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_KpfSchwim
			{
				name="TBW_Barett_KpfSchwim";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_Inst : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretInsName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Inst
			{
				name="TBW_Barett_Inst";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_HAufK : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretHeeresAufklName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_HAufK
			{
				name="TBW_Barett_HAufK";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_Fjg : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretFeldJaegerName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Fjg
			{
				name="TBW_Barett_Fjg";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_FernSp : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretFernSpaeherName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_FernSp
			{
				name="TBW_Barett_FernSp";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_FernM : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretFernMelderName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_FernM
			{
				name="TBW_Barett_FernM";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_EuCorp : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretEuCorpName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_EuCorp
			{
				name="TBW_Barett_EuCorp";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_DeFranzB : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretDeuFrBrigName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_DeFranzB
			{
				name="TBW_Barett_DeFranzB";
				count=1;
			};
		};
    };
	class TBW_Item_Barett_Art : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BeretArtiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Art
			{
				name="TBW_Barett_Art";
				count=1;
			};
		};
    };

// Booniehat

	class TBW_Item_booniehat_Fleck : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BooniehatFleckName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_Fleck
			{
				name="TBW_booniehat_Fleck";
				count=1;
			};
		};
    };
	class TBW_Item_booniehat_hs_Fleck : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BooniehatHeadsetFleckName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_hs_Fleck
			{
				name="TBW_booniehat_hs_Fleck";
				count=1;
			};
		};
    };
	class TBW_Item_booniehat_Multi : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BooniehatMultiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_Multi
			{
				name="TBW_booniehat_Multi";
				count=1;
			};
		};
    };
	class TBW_Item_booniehat_hs_Multi : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BooniehatHeadsetMultiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_hs_Multi
			{
				name="TBW_booniehat_hs_Multi";
				count=1;
			};
		};
    };
	class TBW_Item_booniehat_Tropen : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BooniehatTropenName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_Tropen
			{
				name="TBW_booniehat_Tropen";
				count=1;
			};
		};
    };
	class TBW_Item_booniehat_hs_Tropen : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_BooniehatHeadsetTropenName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_hs_Tropen
			{
				name="TBW_booniehat_hs_Tropen";
				count=1;
			};
		};
    };
	
// Cap

	class TBW_Item_Marine_cap : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_CapName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Marine_cap
			{
				name="TBW_Marine_cap";
				count=1;
			};
		};
    };
	
//Westen Multi	
	
	class TBW_Item_Weste_Multi : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_VestName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Vests";
		class TransportItems
		{
			class _xx_TBW_Weste_Multi
			{
				name="TBW_Weste_Multi";
				count=1;
			};
		};
    };
	class TBW_Item_TacVest_Multi : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_Vest2Name";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Vests";
		class TransportItems
		{
			class _xx_TBW_TacVest_Multi
			{
				name="TBW_TacVest_Multi";
				count=1;
			};
		};
    };

//Westen Schnee

	class TBW_Item_Weste_schnee : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_VestSchneeName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Vests";
		class TransportItems
		{
			class _xx_TBW_Weste_schnee
			{
				name="TBW_Weste_schnee";
				count=1;
			};
		};
    };
	class TBW_Item_TacVest_schnee : Headgear_Base_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator=2;
		scopeArsenal = 2;
		displayName = "$STR_VestSchnee2Name";
		vehicleClass="ItemsHeadgear";
		editorSubcategory = "EdSubcat_Vests";
		class TransportItems
		{
			class _xx_TBW_TacVest_schnee
			{
				name="TBW_TacVest_schnee";
				count=1;
			};
		};
    };
};