class CfgVehicles
{
	class B_Radar_System_01_F;
	class TBW_MEADS_Radar_Fleck : B_Radar_System_01_F
	{
		author = "TobiB";
		displayName = "MEADS Radar";
		editorPreview ="\TBW_MEADS\editorPreview\TBW_MEADS_Launcher_Fleck.jpg";
		Faction = "BWA3_Faction_Fleck";		
		hiddenSelectionsTextures[]=
			{
				"TBW_MEADS\Data\TBW_MEADS_Radar_Fleck_01_co.paa",
				"TBW_MEADS\Data\TBW_MEADS_Radar_Fleck_02_co.paa"
			};
	};
	
	class B_SAM_System_03_F;
	class TBW_MEADS_Launcher_Fleck : B_SAM_System_03_F
	{
		author = "TobiB";
		displayName = "MEADS Werfer";
		editorPreview ="\TBW_MEADS\editorPreview\TBW_MEADS_Launcher_Fleck.jpg";
		Faction = "BWA3_Faction_Fleck";
		hiddenSelectionsTextures[]=
			{
				"TBW_MEADS\Data\TBW_MEADS_Werfer_Fleck_01_co.paa",
				"TBW_MEADS\Data\TBW_MEADS_Werfer_Fleck_02_co.paa"
			};
	};
};