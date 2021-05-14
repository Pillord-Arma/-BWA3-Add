class BIS_AddonInfo
{
	author="Tobi";
	timepacked="1547758181";
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class TBW_U_Kampfanzug_Schnee: Uniform_Base
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		side=1;
		displayName="$STR_UniformSchneeName";
		picture="\TBW_Ausruestung\UI\TBW_Kampfanzug_Schnee_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Kampfanzug_Schnee_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBW_Schtz_Schnee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_Wetsuit;
	class TBW_U_Taucher: U_B_Wetsuit
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_UniformCombatDiverName";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\Data\TBW_Taucher_co.paa",
			"\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType="Neopren";
			uniformClass="TBW_Taucher_Fleck";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_GEN_Commander_F;
	class TBW_U_Marine_Pullover: U_B_GEN_Commander_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		side=1;
		displayName="Pullover Marine";
		picture="\TBW_Ausruestung\UI\TBW_Marine_Pullover_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Pullover_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBW_Marine_Besatzung";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_IG_Guerilla2_1;
	class TBW_U_Marine_Hemd_blau: U_IG_Guerilla2_1
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		side=1;
		displayName="$STR_UniformShirtName";
		picture="\TBW_Ausruestung\UI\TBW_Marine_Hemd_blau_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Hemd_blau_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBW_Marine_Besatzung_Hemd_blau";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TBW_U_Marine_Hemd_tropen: TBW_U_Marine_Hemd_blau
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_UniformShirtBrownName";
		picture="\TBW_Ausruestung\UI\TBW_Marine_Hemd_Tropen_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Hemd_blau_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBW_Marine_Besatzung_Hemd_tropen";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_survival_uniform;
	class TBW_U_Kampfschwimmer_Fleck: U_B_survival_uniform
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Personnel_SpecialForces";
		displayName="$STR_UniformCombatFleckName";
		picture="\TBW_Ausruestung\UI\TBW_Kampfschwimmer_Fleck_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\Data\TBW_Kampfschwimmer_Fleck_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType="Neopren";
			uniformClass="TBW_Kampfschwimmer_Fleck";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TBW_U_Kampfschwimmer_Multi: TBW_U_Kampfschwimmer_Fleck
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		editorSubcategory="EdSubcat_Personnel_SpecialForces";
		displayName="$STR_UniformCombatMultiName";
		picture="\TBW_Ausruestung\UI\TBW_Kampfschwimmer_Multi_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\Data\TBW_Kampfschwimmer_Multi_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformType="Neopren";
			uniformClass="TBW_Kampfschwimmer_Multi";
			containerClass="Supply40";
			mass=40;
		};
	};
	class TBW_U_Retter: Uniform_Base
	{
		author="TobiB";
		side=1;
		scope=2;
		scopeCurator=2;
		displayName="$STR_b_medic_f0";
		picture="\TBW_Ausruestung\UI\TBW_Retter_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\Data\TBW_Retter_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="TBW_Retter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class H_HelmetIA;
	class TBW_Helm_Multi: H_HelmetIA
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_HelmetMultiName";
		picture="\TBW_Ausruestung\UI\TBW_Helm_Multi_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Helm_Multi_co.paa"
		};
	};
	class H_HelmetB_Light;
	class TBW_Helm2_Multi: H_HelmetB_Light
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_HelmetMultiLightName";
		picture="\TBW_Ausruestung\UI\TBW_Helm_Multi_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Helm2.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Helm2_Multi_co.paa"
		};
	};
	class TBW_Helm_Schnee: H_HelmetIA
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_HelmetSchneeName";
		picture="\TBW_Ausruestung\UI\TBW_Helm_Schnee_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Helm_Schnee_co.paa"
		};
	};
	class TBW_Helm2_Schnee: TBW_Helm2_Multi
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_HelmetSchneeLightName";
		picture="\TBW_Ausruestung\UI\TBW_Helm_Schnee_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Helm2_Schnee_co.paa"
		};
	};
	class H_Beret_Colonel;
	class TBW_Barett_San: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretSanName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_San_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_San.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_San_co.paa"
		};
	};
	class TBW_Barett_Pio: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretPioName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_Pio_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Pio.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Pio_co.paa"
		};
	};
	class TBW_Barett_MSich: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretMarineName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_MSich_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_MSich.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_MSich_co.paa"
		};
	};
	class TBW_Barett_LWSich: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretLuftName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_LWSich_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_LWSich.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_LWSich_co.paa"
		};
	};
	class TBW_Barett_Log: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretLogiName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_Log_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Log.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Log_co.paa"
		};
	};
	class TBW_Barett_KSK: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretKSKName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_KSK_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_KSK.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_KSK_co.paa"
		};
	};
	class TBW_Barett_KpfSchwim: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretKSName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_KpfSchwim_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_KpfSchwim.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_KpfSchwim_co.paa"
		};
	};
	class TBW_Barett_Inst: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretInsName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_Inst_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Inst.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Inst_co.paa"
		};
	};
	class TBW_Barett_HAufK: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretHeeresAufklName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_HAufK_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_HAufK.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_HAufK_co.paa"
		};
	};
	class TBW_Barett_Fjg: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretFeldJaegerName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_Fjg_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Fjg.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Fjg_co.paa"
		};
	};
	class TBW_Barett_FernSp: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretFernSpaeherName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_FernSp_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_FernSp.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_FernSp_co.paa"
		};
	};
	class TBW_Barett_FernM: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretFernMelderName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_FernM_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_FernM.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_FernM_co.paa"
		};
	};
	class TBW_Barett_EuCorp: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretEuCorpName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_EuCorp_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_EuCorp.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_EuCorp_co.paa"
		};
	};
	class TBW_Barett_DeFranzB: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretDeuFrBrigName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_DeFranzB_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_DeFranzB.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_DeFranzB_co.paa"
		};
	};
	class TBW_Barett_Art: H_Beret_Colonel
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BeretArtiName";
		picture="\TBW_Ausruestung\UI\TBW_Barett_Art_UI.paa";
		hiddenSelectionsMaterials[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Art.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Barett_Art_co.paa"
		};
	};
	class H_Booniehat_khk_hs;
	class H_Booniehat_khk;
	class TBW_booniehat_Fleck: H_Booniehat_khk
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BooniehatFleckName";
		picture="\TBW_Ausruestung\UI\TBW_booniehat_Fleck_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Fleck_co.paa"
		};
	};
	class TBW_booniehat_hs_Fleck: H_Booniehat_khk_hs
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BooniehatHeadsetFleckName";
		picture="\TBW_Ausruestung\UI\TBW_booniehat_Fleck_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Fleck_co.paa"
		};
	};
	class TBW_booniehat_Multi: H_Booniehat_khk
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BooniehatMultiName";
		picture="\TBW_Ausruestung\UI\TBW_booniehat_Multi_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Multi_co.paa"
		};
	};
	class TBW_booniehat_hs_Multi: H_Booniehat_khk_hs
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BooniehatHeadsetMultiName";
		picture="\TBW_Ausruestung\UI\TBW_booniehat_Multi_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Multi_co.paa"
		};
	};
	class TBW_booniehat_Tropen: H_Booniehat_khk
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BooniehatTropenName";
		picture="\TBW_Ausruestung\UI\TBW_booniehat_Tropen_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Tropen_co.paa"
		};
	};
	class TBW_booniehat_hs_Tropen: H_Booniehat_khk_hs
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BooniehatHeadsetTropenName";
		picture="\TBW_Ausruestung\UI\TBW_booniehat_Tropen_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Tropen_co.paa"
		};
	};
	class H_Cap_blk;
	class TBW_Marine_cap: H_Cap_blk
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_CapName";
		picture="\TBW_Ausruestung\UI\TBW_Marine_Cap_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Marine_Cap_co.paa"
		};
	};
	class V_PlateCarrier1_blk;
	class TBW_Weste_Multi: V_PlateCarrier1_blk
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_VestName";
		picture="\TBW_Ausruestung\UI\TBW_Weste_Multi_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Weste_Multi_co.paa"
		};
	};
	class V_TacVest_oli;
	class TBW_TacVest_Multi: V_TacVest_oli
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_Vest2Name";
		picture="\TBW_Ausruestung\UI\TBW_TacVest_Multi_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_TacVest_Multi_co.paa"
		};
	};
	class TBW_Weste_schnee: V_PlateCarrier1_blk
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_VestSchneeName";
		picture="\TBW_Ausruestung\UI\TBW_Weste_schnee_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_Weste_schnee_co.paa"
		};
	};
	class TBW_TacVest_schnee: V_TacVest_oli
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		displayName="$STR_VestSchnee2Name";
		picture="\TBW_Ausruestung\UI\TBW_TacVest_schnee_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\data\TBW_TacVest_schnee_co.paa"
		};
	};
};
class CfgVehicles
{
	class B_AssaultPack_rgr;
	class TBW_AssaultPack_Fleck: B_AssaultPack_rgr
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_Assault_Fleck";
		picture="\TBW_Ausruestung\UI\TBW_AssaultPack_Fleck_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"TBW_Ausruestung\Data\TBW_AssaultPack_Fleck_co.paa"
		};
	};
	class TBW_AssaultPack_Multi: B_AssaultPack_rgr
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_Assault_Multi";
		picture="\TBW_Ausruestung\UI\TBW_AssaultPack_Multi_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"TBW_Ausruestung\data\TBW_AssaultPack_Multi_co.paa"
		};
	};
	class TBW_AssaultPack_Tropen: B_AssaultPack_rgr
	{
		Author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_Assault_Tropen";
		picture="\TBW_Ausruestung\UI\TBW_AssaultPack_Tropen_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"TBW_Ausruestung\data\TBW_AssaultPack_Tropen_co.paa"
		};
	};
	class TBW_AssaultPack_Schnee: B_AssaultPack_rgr
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		Author="TobiB";
		displayName="$STR_Assault_Schnee";
		picture="\TBW_Ausruestung\UI\TBW_AssaultPack_Schnee_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"TBW_Ausruestung\data\TBW_AssaultPack_Schnee_co.paa"
		};
	};
	class B_AssaultPack_Base;
	class TBW_Notfallrucksack: B_AssaultPack_Base
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		model="\A3\weapons_f\ammoboxes\bags\Backpack_Compact";
		displayName="$STR_Assault_Emerge";
		picture="\TBW_Ausruestung\UI\TBW_Notfallrucksack_UI.paa";
		hiddenSelectionsTextures[]=
		{
			"\TBW_Ausruestung\Data\TBW_Notfallrucksack_CO.paa"
		};
		maximumLoad=160;
		mass=20;
	};
	class Item_Base_F;
	class TBW_Item_U_Kampfanzug_Schnee: Item_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_UniformSchneeName";
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
	class TBW_Item_U_Taucher: Item_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_UniformCombatDiverName";
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
	class TBW_Item_U_Marine_Pullover: Item_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Pullover Marine";
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
	class TBW_Item_U_Marine_Hemd_blau: Item_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_UniformShirtName";
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
	class TBW_Item_U_Marine_Hemd_tropen: Item_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_UniformShirtBrownName";
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
	class TBW_Item_U_Kampfschwimmer_Fleck: Item_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_UniformCombatFleckName";
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
	class TBW_Item_U_Kampfschwimmer_Multi: Item_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_UniformCombatMultiName";
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
	class TBW_Item_U_Retter: Item_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_UniformSanName";
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
	class Headgear_Base_F;
	class TBW_Item_Helm_Multi: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_HelmetMultiName";
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
	class TBW_Item_Helm2_Multi: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_HelmetMultiLightName";
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
	class TBW_Item_Helm_Schnee: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_HelmetSchneeName";
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
	class TBW_Item_Helm2_Schnee: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_HelmetSchneeLightName";
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
	class TBW_Item_Barett_San: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretSanName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_San
			{
				name="TBW_Barett_San";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_Pio: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretPioName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Pio
			{
				name="TBW_Barett_Pio";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_MSich: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretMarineName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_MSich
			{
				name="TBW_Barett_MSich";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_LWSich: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretLuftName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_LWSich
			{
				name="TBW_Barett_LWSich";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_Log: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretLogiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Log
			{
				name="TBW_Barett_Log";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_KSK: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretKSKName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_KSK
			{
				name="TBW_Barett_KSK";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_KpfSchwim: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretKSName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_KpfSchwim
			{
				name="TBW_Barett_KpfSchwim";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_Inst: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretInsName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Inst
			{
				name="TBW_Barett_Inst";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_HAufK: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretHeeresAufklName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_HAufK
			{
				name="TBW_Barett_HAufK";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_Fjg: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretFeldJaegerName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Fjg
			{
				name="TBW_Barett_Fjg";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_FernSp: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretFernSpaeherName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_FernSp
			{
				name="TBW_Barett_FernSp";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_FernM: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretFernMelderName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_FernM
			{
				name="TBW_Barett_FernM";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_EuCorp: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretEuCorpName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_EuCorp
			{
				name="TBW_Barett_EuCorp";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_DeFranzB: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretDeuFrBrigName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_DeFranzB
			{
				name="TBW_Barett_DeFranzB";
				count=1;
			};
		};
	};
	class TBW_Item_Barett_Art: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BeretArtiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Barett_Art
			{
				name="TBW_Barett_Art";
				count=1;
			};
		};
	};
	class TBW_Item_booniehat_Fleck: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BooniehatFleckName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_Fleck
			{
				name="TBW_booniehat_Fleck";
				count=1;
			};
		};
	};
	class TBW_Item_booniehat_hs_Fleck: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BooniehatHeadsetFleckName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_hs_Fleck
			{
				name="TBW_booniehat_hs_Fleck";
				count=1;
			};
		};
	};
	class TBW_Item_booniehat_Multi: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BooniehatMultiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_Multi
			{
				name="TBW_booniehat_Multi";
				count=1;
			};
		};
	};
	class TBW_Item_booniehat_hs_Multi: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BooniehatHeadsetMultiName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_hs_Multi
			{
				name="TBW_booniehat_hs_Multi";
				count=1;
			};
		};
	};
	class TBW_Item_booniehat_Tropen: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BooniehatTropenName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_Tropen
			{
				name="TBW_booniehat_Tropen";
				count=1;
			};
		};
	};
	class TBW_Item_booniehat_hs_Tropen: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_BooniehatHeadsetTropenName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_booniehat_hs_Tropen
			{
				name="TBW_booniehat_hs_Tropen";
				count=1;
			};
		};
	};
	class TBW_Item_Marine_cap: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_CapName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Hats";
		class TransportItems
		{
			class _xx_TBW_Marine_cap
			{
				name="TBW_Marine_cap";
				count=1;
			};
		};
	};
	class TBW_Item_Weste_Multi: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_VestName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Vests";
		class TransportItems
		{
			class _xx_TBW_Weste_Multi
			{
				name="TBW_Weste_Multi";
				count=1;
			};
		};
	};
	class TBW_Item_TacVest_Multi: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_Vest2Name";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Vests";
		class TransportItems
		{
			class _xx_TBW_TacVest_Multi
			{
				name="TBW_TacVest_Multi";
				count=1;
			};
		};
	};
	class TBW_Item_Weste_schnee: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_VestSchneeName";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Vests";
		class TransportItems
		{
			class _xx_TBW_Weste_schnee
			{
				name="TBW_Weste_schnee";
				count=1;
			};
		};
	};
	class TBW_Item_TacVest_schnee: Headgear_Base_F
	{
		author="TobiB";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="$STR_VestSchnee2Name";
		vehicleClass="ItemsHeadgear";
		editorSubcategory="EdSubcat_Vests";
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
class CfgPatches
{
	class TBW_Ausruestung
	{
		units[]=
		{
			"TBW_Item_Helm_Multi",
			"TBW_Item_Helm_Schnee",
			"TBW_Item_Helm2_Multi",
			"TBW_Item_Helm2_Schnee",
			"TBW_Item_Barett_San",
			"TBW_Item_Barett_Pio",
			"TBW_Item_Barett_MSich",
			"TBW_Item_Barett_LWSich",
			"TBW_Item_Barett_Log",
			"TBW_Item_Barett_KSK",
			"TBW_Item_Barett_KpfSchwim",
			"TBW_Item_Barett_Inst",
			"TBW_Item_Barett_HAufK",
			"TBW_Item_Barett_Fjg",
			"TBW_Item_Barett_FernSp",
			"TBW_Item_Barett_FernM",
			"TBW_Item_Barett_EuCorp",
			"TBW_Item_Barett_DeFranzB",
			"TBW_Item_Barett_Art",
			"TBW_Item_booniehat_Fleck",
			"TBW_Item_booniehat_hs_Fleck",
			"TBW_Item_booniehat_Multi",
			"TBW_Item_booniehat_hs_Multi",
			"TBW_Item_booniehat_Tropen",
			"TBW_Item_booniehat_hs_Tropen",
			"TBW_Item_Marine_cap",
			"TBW_Item_Weste_Multi",
			"TBW_Item_TacVest_Multi",
			"TBW_Item_Weste_schnee",
			"TBW_Item_TacVest_schnee",
			"TBW_Item_U_Kampfanzug_Schnee",
			"TBW_Item_U_Taucher",
			"TBW_Item_U_Marine_Pullover",
			"TBW_Item_U_Marine_Hemd_blau",
			"TBW_Item_U_Marine_Hemd_tropen",
			"TBW_Item_U_Kampfschwimmer_Fleck",
			"TBW_Item_U_Kampfschwimmer_Multi",
			"TBW_Item_U_Retter"
		};
		weapons[]=
		{
			"TBW_U_Kampfanzug_Schnee",
			"TBW_U_Taucher",
			"TBW_U_Marine_Pullover",
			"TBW_U_Marine_Hemd_blau",
			"TBW_U_Marine_Hemd_tropen",
			"TBW_U_Kampfschwimmer_Fleck",
			"TBW_U_Kampfschwimmer_Multi",
			"TBW_U_Retter",
			"TBW_Helm_Multi",
			"TBW_Helm2_Multi",
			"TBW_Helm_Schnee",
			"TBW_Helm2_Schnee",
			"TBW_Barett_San",
			"TBW_Barett_Pio",
			"TBW_Barett_MSich",
			"TBW_Barett_LWSich",
			"TBW_Barett_Log",
			"TBW_Barett_KSK",
			"TBW_Barett_KpfSchwim",
			"TBW_Barett_Inst",
			"TBW_Barett_HAufK",
			"TBW_Barett_Fjg",
			"TBW_Barett_FernSp",
			"TBW_Barett_FernM",
			"TBW_Barett_EuCorp",
			"TBW_Barett_DeFranzB",
			"TBW_Barett_Art",
			"TBW_booniehat_Fleck",
			"TBW_booniehat_hs_Fleck",
			"TBW_booniehat_Multi",
			"TBW_booniehat_hs_Multi",
			"TBW_booniehat_Tropen",
			"TBW_booniehat_hs_Tropen",
			"TBW_Marine_cap",
			"TBW_Weste_Multi",
			"TBW_TacVest_Multi",
			"TBW_Weste_schnee",
			"TBW_TacVest_schnee"
		};
		requiredVersion=0.1;
		version=1;
		requiredAddons[]={};
	};
};
