class CfgPatches
{
	class bw_main
	{
		author = "Pillord";
		name = "BWA3Add";
		url = "";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"bwa3_common"};
		version = "3.0.0";
		versionStr = "3.0.0";
		versionDesc = "BWA3Add";
		versionAr[] = {3,0};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class BWA3Add
		{
			list[] = {"bw_a3_dingo","bw_additional_camo","bw_bo105","bw_ec135","bw_flags","bw_nh90","Bw_Retex_Pack_items","BW_Retex_Pack_vehicles","bw_snow_rifles","bw_unimog","KGB_ReTex_Pack","kyo_MH47E","luciea3","TBW_Ausruestung","TBW_Fregatte","TBW_Infanterie","TBW_Insignia","TBW_MEADS","TBW_Obj","TBW_Rad"};
		};
	};
};

class cfgMods
{
	author="76561198085579783";
	timepacked="1425337166";
};

class CfgFactionClasses
{
	class BWadd_Faction_Marine
	{
		displayName="Bundeswehr (Marine)";
		side=1;
	};

	class BWadd_Faction_Rettung
	{
		displayName="Bundeswehr (Rettungsdienst)";
		side=1;
	};

	class BWadd_Faction_Schnee
	{
		displayName="$STR_BWadd_FactionClassBundeswehrSchneeName";
		side=1;
	};

};
