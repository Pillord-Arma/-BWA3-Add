class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
//Uniformen Schnee

    class TBW_U_Kampfanzug_Schnee : Uniform_Base
    {
        author = "TobiB";
        scope = 2;
		scopeCurator = 2;
		side = 1;
        displayName = "$STR_UniformSchneeName";
		picture = "\TBW_Ausruestung\UI\TBW_Kampfanzug_Schnee_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Kampfanzug_Schnee_co.paa"
		}; 
		
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = TBW_Schtz_Schnee;
            containerClass = Supply40;
            mass = 40;
        };
    };

//Taucher

	class U_B_Wetsuit;
	class TBW_U_Taucher: U_B_Wetsuit
    {
        author = "TobiB";
        scope = 2;
		scopeCurator = 2;
		displayName = "$STR_UniformCombatDiverName";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = 
		{
			"Camo1",
			"Camo2",
			"insignia"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\Data\TBW_Taucher_co.paa",
			"\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"
		};
		
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
			uniformType = "Neopren";
            uniformClass = TBW_Taucher_Fleck;
            containerClass = Supply40;
            mass = 40;
        };
    };		
	
// Marine

	class U_B_GEN_Commander_F;
	class TBW_U_Marine_Pullover: U_B_GEN_Commander_F
    {
        author = "TobiB";
        scope = 2;
		scopeCurator = 2;
		side = 1;
        displayName = "Pullover Marine";
		picture = "\TBW_Ausruestung\UI\TBW_Marine_Pullover_UI.paa";				
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = 
		{
			"Camo",
			"insignia"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Pullover_co.paa",
		};
		
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = TBW_Marine_Besatzung;
            containerClass = Supply40;
            mass = 40;
        };
    };	

	class U_IG_Guerilla2_1;
	class TBW_U_Marine_Hemd_blau: U_IG_Guerilla2_1
    {
        author = "TobiB";
        scope = 2;
		scopeCurator = 2;
		side = 1;
        displayName = "$STR_UniformShirtName";
		picture = "\TBW_Ausruestung\UI\TBW_Marine_Hemd_blau_UI.paa";		
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = 
		{
			"Camo",
			"insignia"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Hemd_blau_co.paa"
		};
		
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = TBW_Marine_Besatzung_Hemd_blau;
            containerClass = Supply40;
            mass = 40;
        };
    };

	class TBW_U_Marine_Hemd_tropen: TBW_U_Marine_Hemd_blau
    {
        scope = 2;
		scopeCurator = 2;
		displayName = "$STR_UniformShirtBrownName";
		picture = "\TBW_Ausruestung\UI\TBW_Marine_Hemd_Tropen_UI.paa";			
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Hemd_blau_co.paa"
		};
		
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = TBW_Marine_Besatzung_Hemd_tropen;
            containerClass = Supply40;
            mass = 40;
        };
    };		

// Kampfschwimmer

	class U_B_survival_uniform;
	class TBW_U_Kampfschwimmer_Fleck: U_B_survival_uniform
    {
        author = "TobiB";
        scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		displayName = "$STR_UniformCombatFleckName";
		picture = "\TBW_Ausruestung\UI\TBW_Kampfschwimmer_Fleck_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\TBW_Ausruestung\Data\TBW_Kampfschwimmer_Fleck_co.paa"}; 
		
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
			uniformType = "Neopren";
            uniformClass = TBW_Kampfschwimmer_Fleck;
            containerClass = Supply40;
            mass = 40;
        };
    };	
	
	class TBW_U_Kampfschwimmer_Multi: TBW_U_Kampfschwimmer_Fleck
    {
        author = "TobiB";
        scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
        displayName = "$STR_UniformCombatMultiName";
		picture = "\TBW_Ausruestung\UI\TBW_Kampfschwimmer_Multi_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\TBW_Ausruestung\Data\TBW_Kampfschwimmer_Multi_co.paa"}; 
		
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
			uniformType = "Neopren";
            uniformClass = TBW_Kampfschwimmer_Multi;
            containerClass = Supply40;
            mass = 40;
        };
    };	
// Rettungsdienst

    class TBW_U_Retter: Uniform_Base
    {
        author = "TobiB";
		side = 1;
        scope = 2;
		scopeCurator = 2;
        displayName = "$STR_b_medic_f0";
		picture = "\TBW_Ausruestung\UI\TBW_Retter_UI.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\TBW_Ausruestung\Data\TBW_Retter_CO.paa"}; 
		
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = TBW_Retter;
            containerClass = Supply40;
            mass = 40;
        };
    };
	
// Helme Multi
	
	class H_HelmetIA;
	class TBW_Helm_Multi: H_HelmetIA
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_HelmetMultiName";
		picture = "\TBW_Ausruestung\UI\TBW_Helm_Multi_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Helm_Multi_co.paa"
		};
	};

	class H_HelmetB_Light;
	class TBW_Helm2_Multi : H_HelmetB_Light
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_HelmetMultiLightName";
		picture = "\TBW_Ausruestung\UI\TBW_Helm_Multi_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Helm2.rvmat"
		};
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Helm2_Multi_co.paa"
		};
	};	
	
// Helme Schnee

	class TBW_Helm_Schnee: H_HelmetIA
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_HelmetSchneeName";
		picture = "\TBW_Ausruestung\UI\TBW_Helm_Schnee_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Helm_Schnee_co.paa"
		};
	};
	class TBW_Helm2_Schnee : TBW_Helm2_Multi
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_HelmetSchneeLightName";
		picture = "\TBW_Ausruestung\UI\TBW_Helm_Schnee_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Helm2_Schnee_co.paa"
		};
	};		
	
// Barett	

	class H_Beret_Colonel;
	class TBW_Barett_San : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretSanName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_San_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_San.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_San_co.paa"
		};
	};	

	class TBW_Barett_Pio : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretPioName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_Pio_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Pio.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Pio_co.paa"
		};
	};		
	
	class TBW_Barett_MSich : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretMarineName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_MSich_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_MSich.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_MSich_co.paa"
		};
	};		
	
	class TBW_Barett_LWSich : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretLuftName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_LWSich_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_LWSich.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_LWSich_co.paa"
		};
	};		
	
	class TBW_Barett_Log : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretLogiName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_Log_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Log.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Log_co.paa"
		};
	};	

	class TBW_Barett_KSK : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretKSKName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_KSK_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_KSK.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_KSK_co.paa"
		};
	};		
	
	class TBW_Barett_KpfSchwim : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretKSName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_KpfSchwim_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_KpfSchwim.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_KpfSchwim_co.paa"
		};
	};		
	
	class TBW_Barett_Inst : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretInsName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_Inst_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Inst.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Inst_co.paa"
		};
	};		
	
	class TBW_Barett_HAufK : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretHeeresAufklName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_HAufK_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_HAufK.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_HAufK_co.paa"
		};
	};	

	class TBW_Barett_Fjg : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretFeldJaegerName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_Fjg_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Fjg.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Fjg_co.paa"
		};
	};		
	
	class TBW_Barett_FernSp : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretFernSpaeherName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_FernSp_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_FernSp.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_FernSp_co.paa"
		};
	};	

	class TBW_Barett_FernM : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretFernMelderName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_FernM_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_FernM.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_FernM_co.paa"
		};
	};		
	
	class TBW_Barett_EuCorp : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretEuCorpName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_EuCorp_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_EuCorp.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_EuCorp_co.paa"
		};
	};		
	
	class TBW_Barett_DeFranzB : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretDeuFrBrigName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_DeFranzB_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_DeFranzB.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_DeFranzB_co.paa"
		};
	};		
	
	class TBW_Barett_Art : H_Beret_Colonel
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BeretArtiName";
		picture = "\TBW_Ausruestung\UI\TBW_Barett_Art_UI.paa";
		hiddenSelectionsMaterials[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Art.rvmat"
		};
		
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Barett_Art_co.paa"
		};
	};	
	
// Booniehat

	class H_Booniehat_khk_hs;
	class H_Booniehat_khk;	
	class TBW_booniehat_Fleck : H_Booniehat_khk
	{			
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BooniehatFleckName";
		picture = "\TBW_Ausruestung\UI\TBW_booniehat_Fleck_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Fleck_co.paa"
		};
	}
	
	class TBW_booniehat_hs_Fleck : H_Booniehat_khk_hs
	{			
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BooniehatHeadsetFleckName";
		picture = "\TBW_Ausruestung\UI\TBW_booniehat_Fleck_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Fleck_co.paa"
		};
	}	
	class TBW_booniehat_Multi : H_Booniehat_khk
	{			
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BooniehatMultiName";
		picture = "\TBW_Ausruestung\UI\TBW_booniehat_Multi_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Multi_co.paa"
		};
	}
	
	class TBW_booniehat_hs_Multi : H_Booniehat_khk_hs
	{			
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BooniehatHeadsetMultiName";
		picture = "\TBW_Ausruestung\UI\TBW_booniehat_Multi_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Multi_co.paa"
		};
	}
	class TBW_booniehat_Tropen : H_Booniehat_khk
	{			
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BooniehatTropenName";
		picture = "\TBW_Ausruestung\UI\TBW_booniehat_Tropen_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Tropen_co.paa"
		};
	}
	
	class TBW_booniehat_hs_Tropen : H_Booniehat_khk_hs
	{			
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_BooniehatHeadsetTropenName";
		picture = "\TBW_Ausruestung\UI\TBW_booniehat_Tropen_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_booniehat_Tropen_co.paa"
		};
	}	
// Cap	

	class H_Cap_blk;
	class TBW_Marine_cap : H_Cap_blk
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_CapName";
		picture = "\TBW_Ausruestung\UI\TBW_Marine_Cap_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Marine_Cap_co.paa"
		};
	};

//Westen Multi

	class V_PlateCarrier1_blk;
	class TBW_Weste_Multi: V_PlateCarrier1_blk
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_VestName";
		picture = "\TBW_Ausruestung\UI\TBW_Weste_Multi_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Weste_Multi_co.paa"
		};
	};

	class V_TacVest_oli;
	class TBW_TacVest_Multi: V_TacVest_oli
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_Vest2Name";
		picture = "\TBW_Ausruestung\UI\TBW_TacVest_Multi_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_TacVest_Multi_co.paa"
		};
	};

//Westen Schnee

	class TBW_Weste_schnee: V_PlateCarrier1_blk
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_VestSchneeName";
		picture = "\TBW_Ausruestung\UI\TBW_Weste_schnee_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Weste_schnee_co.paa"
		};
	};

	class TBW_TacVest_schnee: V_TacVest_oli
	{
		Author = "TobiB";
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_VestSchnee2Name";
		picture = "\TBW_Ausruestung\UI\TBW_TacVest_schnee_UI.paa";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_TacVest_schnee_co.paa"
		};
	};	
};	