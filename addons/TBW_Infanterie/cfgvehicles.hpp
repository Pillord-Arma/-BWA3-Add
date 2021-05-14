#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class CfgVehicles
{
	class I_Soldier_F;
	class TBW_Schtz_Schnee : I_Soldier_F
	{
		author = "TobiB";
		displayName = "$STR_UniformSchneeName";
		scope =1;
		scopeCurator = 2;
		uniformClass = "TBW_U_Kampfanzug_Schnee";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\data\TBW_Kampfanzug_Schnee_co.paa"
		};	
	};

// Taucher

	class B_diver_F;
	class TBW_Taucher_Fleck: B_diver_F
	{
		author = "TobiB";
		displayName = "$STR_Combat_Diver";
		Faction = "BWadd_Faction_Marine";
		editorPreview ="\TBW_Infanterie\EditorPreview\TBW_Taucher_Fleck.jpg";		
		role = "Rifleman";
		nakedUniform = "U_BasicBody";
		UniformClass = "TBW_U_Taucher";
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
		
		weapons[] = 
		{
			arifle_SDAR_F,
			BWA3_P8,
			Throw,
			Put
		};
		
		Respawnweapons[] = 
		{
			arifle_SDAR_F,
			BWA3_P8,
			Throw,
			Put
		};	

		Magazines[] = 
		{
			mag_5(20Rnd_556x45_UW_mag),
			mag_5(30Rnd_556x45_STANAG_Tracer_Red),
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(BWA3_DM51A1),
			BWA3_DM25,
			BWA3_DM32_Green,
			mag_2(Chemlight_green)
		};
		
		RespawnMagazines[] = 
		{
			mag_10(BWA3_30Rnd_556x45_G36),
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(BWA3_DM51A1),
			BWA3_DM25,
			BWA3_DM32_Green,
			mag_2(Chemlight_green)
		};
		LinkedItems[] = 
		{
			BWA3_ItemNavipad
		};
		
		RespawnLinkedItems[] = 
		{
			BWA3_ItemNavipad
		};
	};	

// Marine

	class B_GEN_Commander_F;
	class TBW_Marine_Besatzung: B_GEN_Commander_F
	{
		author = "TobiB";
		displayName = "$STR_Crew_Pullover";
		Faction = "BWadd_Faction_Marine";
		editorPreview ="\TBW_Infanterie\EditorPreview\TBW_Marine_Besatzung.jpg";
		nakedUniform = "U_BasicBody";
		UniformClass = "TBW_U_Marine_Pullover";
		hiddenSelections[] = 
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Pullover_co.paa"
		};
		identityTypes[] = 
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		weapons[] = 
		{
			BWA3_P8,
			Throw,
			Put
		};
		
		Respawnweapons[] = 
		{
			BWA3_P8,
			Throw,
			Put
		};
		
		Items[] = 
		{
			FirstAidKit
		};
		
		RespawnItems[] = 
		{
			FirstAidKit
		};
		
		Magazines[] = 
		{

			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(Chemlight_green)
		};
		
		RespawnMagazines[] = 
		{
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(Chemlight_green)
		};
	
		LinkedItems[] = 
		{
			TBW_Marine_cap,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio
		};
		
		RespawnLinkedItems[] = 
		{
			TBW_Marine_cap,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio
		};				
	};

	class TBW_Marine_Besatzung_Helm: B_GEN_Commander_F
	{
		author = "TobiB";
		displayName = "$STR_Crew_Helmet";
		Faction = "BWadd_Faction_Marine";
		editorPreview ="\TBW_Infanterie\EditorPreview\TBW_Marine_Besatzung_Helm.jpg";
		nakedUniform = "U_BasicBody";
		UniformClass = "TBW_U_Marine_Pullover";
		hiddenSelections[] = 
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Pullover_co.paa"
		};
		identityTypes[] = 
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		weapons[] = 
		{
			BWA3_P8,
			Throw,
			Put
		};
		
		Respawnweapons[] = 
		{
			BWA3_P8,
			Throw,
			Put
		};
		
		Items[] = 
		{
			FirstAidKit
		};
		
		RespawnItems[] = 
		{
			FirstAidKit
		};
		
		Magazines[] = 
		{

			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(Chemlight_green)
		};
		
		RespawnMagazines[] = 
		{
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(Chemlight_green)
		};
	
		LinkedItems[] = 
		{
			H_PASGT_basic_black_F,
			BWA3_Vest_Fleck,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio
		};
		
		RespawnLinkedItems[] = 
		{
			H_PASGT_basic_black_F,
			BWA3_Vest_Fleck,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio
		};				
	};	
	
	class TBW_Marine_Besatzung_Hemd_blau: TBW_Marine_Besatzung
	{
		author = "TobiB";
		displayName = "$STR_Crew_Shirt";
		Faction = "BWadd_Faction_Marine";
		editorPreview = "\TBW_Infanterie\EditorPreview\TBW_Marine_Besatzung_Hemd_blau.jpg";
		model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
		nakedUniform = "U_BasicBody";
		UniformClass = "TBW_U_Marine_Hemd_blau";
		hiddenSelections[] = 
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Hemd_blau_co.paa"
		};
		identityTypes[] = 
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		weapons[] = 
		{
			BWA3_P8,
			Throw,
			Put
		};
		
		Respawnweapons[] = 
		{
			BWA3_P8,
			Throw,
			Put
		};
		
		Items[] = 
		{
			FirstAidKit
		};
		
		RespawnItems[] = 
		{
			FirstAidKit
		};
		
		Magazines[] = 
		{

			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(Chemlight_green)
		};
		
		RespawnMagazines[] = 
		{
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(Chemlight_green)
		};
	
		LinkedItems[] = 
		{
			TBW_Marine_cap,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio
		};
		
		RespawnLinkedItems[] = 
		{
			TBW_Marine_cap,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio
		};				
	};	
	
	class TBW_Marine_Besatzung_Hemd_tropen: TBW_Marine_Besatzung_Hemd_blau
	{
		displayName = "$STR_Crew_Shirt_Brown";
		editorPreview = "\TBW_Infanterie\EditorPreview\TBW_Marine_Besatzung_Hemd_tropen.jpg";
		UniformClass = "TBW_U_Marine_Hemd_tropen";
		hiddenSelectionsTextures[] = 
		{
			"\TBW_Ausruestung\Data\TBW_Marine_Hemd_tropen_co.paa"
		};
	};	
	
//Kampfschwimmer

	class b_soldier_survival_F;
	class TBW_Kampfschwimmer_Fleck: b_soldier_survival_F
	{
		author = "TobiB";
		displayName = "$STR_Combat_Swimmer_Fleck";
		scope = 2;
		scopeCurator = 2;
		Faction = "BWadd_Faction_Marine";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		editorPreview ="\TBW_Infanterie\EditorPreview\TBW_Kampfschwimmer_Fleck.jpg";
		nakedUniform = "U_BasicBody";
		UniformClass = "TBW_U_Kampfschwimmer_Fleck";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\TBW_Ausruestung\Data\TBW_Kampfschwimmer_Fleck_co.paa"};
		weapons[] = 
		{
			BWA3_G38_ZO4x30_RSAS_pointer_snds,
			BWA3_P8,
			Throw,
			Put
		};
		
		Respawnweapons[] = 
		{
			BWA3_G38_ZO4x30_RSAS_pointer_snds,
			BWA3_P8,
			Throw,
			Put
		};
		
		Items[] = 
		{
			FirstAidKit
		};
		
		RespawnItems[] = 
		{
			FirstAidKit
		};
		
		Magazines[] = 
		{
			mag_8(BWA3_30Rnd_556x45_G36_SD),
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(BWA3_DM51A1),
			BWA3_DM25,
			BWA3_DM32_Green,
			mag_2(Chemlight_green)
		};
		
		RespawnMagazines[] = 
		{
			mag_8(BWA3_30Rnd_556x45_G36_SD),
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(BWA3_DM51A1),
			BWA3_DM25,
			BWA3_DM32_Green,
			mag_2(Chemlight_green)
		};
	
		LinkedItems[] = 
		{
			BWA3_Vest_Rifleman_Fleck,
			BWA3_OpsCore_Fleck_Camera,
			BWA3_ItemNavipad,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio,
			dsk_nsv
		};
		
		RespawnLinkedItems[] = 
		{
			BWA3_Vest_Rifleman_Fleck,
			BWA3_OpsCore_Fleck_Camera,
			BWA3_ItemNavipad,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio,
			dsk_nsv
		};				
	};	
	
	class TBW_Kampfschwimmer_Multi: TBW_Kampfschwimmer_Fleck
	{
		displayName = "$STR_Combat_Swimmer_Multi";
		Faction = "BWadd_Faction_Marine";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		editorPreview ="\TBW_Infanterie\EditorPreview\TBW_Kampfschwimmer_Multi.jpg";		
		UniformClass = "TBW_U_Kampfschwimmer_Multi";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\TBW_Ausruestung\Data\TBW_Kampfschwimmer_Multi_co.paa"};
		weapons[] = 
		{
			BWA3_G38_tan_ZO4x30_RSAS_pointer_snds,
			BWA3_P8,
			Throw,
			Put
		};
		
		Respawnweapons[] = 
		{
			BWA3_G38_tan_ZO4x30_RSAS_pointer_snds,
			BWA3_P8,
			Throw,
			Put
		};
		
		Items[] = 
		{
			FirstAidKit
		};
		
		RespawnItems[] = 
		{
			FirstAidKit
		};
		
		Magazines[] = 
		{
			mag_10(BWA3_30Rnd_556x45_G36_SD),
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(BWA3_DM51A1),
			BWA3_DM25,
			BWA3_DM32_Green,
			mag_2(Chemlight_green)
		};
		
		RespawnMagazines[] = 
		{
			mag_10(BWA3_30Rnd_556x45_G36_SD),
			mag_3(BWA3_15Rnd_9x19_P8),
			mag_2(BWA3_DM51A1),
			BWA3_DM25,
			BWA3_DM32_Green,
			mag_2(Chemlight_green)
		};
	
		LinkedItems[] = 
		{
			TBW_TacVest_Multi,
			BWA3_OpsCore_Fleck_Camera,
			BWA3_ItemNavipad,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio,
			dsk_nsv
		};
		
		RespawnLinkedItems[] = 
		{
			TBW_TacVest_Multi,
			BWA3_OpsCore_Fleck_Camera,
			BWA3_ItemNavipad,
			ItemMap,
			ItemCompass,
			ItemWatch,
			ItemRadio,
			dsk_nsv
		};			
	};
	
// Feldjäger

	class BWA3_Officer_Fleck;
	class TBW_Feldjaeger: BWA3_Officer_Fleck
	{
		
		displayName="$STR_Feldjaeger";
		linkedItems[]=
		{
			"BWA3_Vest_Leader_Fleck",
			"TBW_Barett_Fjg",
			"BWA3_ItemNaviPad",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"BWA3_Vest_Leader_Fleck",
			"TBW_Barett_Fjg",
			"BWA3_ItemNaviPad",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

// Retter

	class C_Man_casual_2_F;
	class TBW_Retter : C_Man_casual_2_F
	{
		author = "TobiB";
		editorPreview ="\TBW_Infanterie\EditorPreview\TBW_Retter.jpg";
		displayName="$STR_San";
		faction="BWadd_Faction_Rettung";
		role = "CombatLifeSaver";
		nakedUniform = "U_BasicBody";
		UniformClass = "TBW_U_Retter";
		hiddenSelectionsTextures[] = {"\TBW_Ausruestung\Data\TBW_Retter_CO.paa"};
		weapons[] = 
		{
			Throw,
			Put
		};
		
		Respawnweapons[] = 
		{
			Throw,
			Put
		};
	
		LinkedItems[] = 
		{
			V_LegStrapBag_black_F,
			ItemGPS,
			ItemMap,
			ItemCompass,
			ItemWatch
		};
		
		RespawnLinkedItems[] = 
		{
			V_LegStrapBag_black_F,
			ItemGPS,
			ItemMap,
			ItemCompass,
			ItemWatch
		};	
	};
};
