class CfgPatches
{
	class BW_Flags
	{
		author="[JgBtl533]Patrick";
		units[]=
		{
			"BW_Flag_533_F",
			"BW_Flag_Bund_F",
			"BW_Flag_Euro_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Structures_F_Mil_Flags"
		};
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class BW_Flag_533_F: FlagCarrier
	{
		author="[JgBtl533]Patrick";
		_generalMacro="BW_Flag_533_F";
		scope=2;
		scopeCurator=2;
		displayName="$STR_BWadd_Flag_Clan";
		editorPreview="\bw_flags\editorPreview\BW_Flag_533_F.jpg";
		hiddenSelectionsTextures[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
		};
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\bw_flags\data\flagge_533_CO.paa'";
		};
	};
	class BW_Flag_Bund_F: BW_Flag_533_F
	{
		_generalMacro="BW_Flag_Bund_F";
		displayName="$STR_BWadd_Flag_Bund";
		editorPreview="\bw_flags\editorPreview\BW_Flag_Bund_F.jpg";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\bw_flags\data\flagge_bund_CO.paa'";
		};
	};
	class BW_Flag_Euro_F: BW_Flag_533_F
	{
		_generalMacro="BW_Flag_Euro_F";
		displayName="$STR_BWadd_Flag_Europe";
		editorPreview="\bw_flags\editorPreview\BW_Flag_Euro_F.jpg";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\bw_flags\data\flagge_euro_CO.paa'";
		};
	};
};
