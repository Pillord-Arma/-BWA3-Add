class DefaultEventhandlers;
class CfgPatches
{
	class BW_Car
	{
		units[]=
		{
			"BW_LKW_Geraet_Fleck",
			"BW_LKW_Transport_offen_Fleck",
			"BW_LKW_Transport_Fleck",
			"BW_LKW_Reparatur_Fleck",
			"BW_LKW_Munition_Fleck",
			"BW_LKW_Treibstoff_Fleck",
			"BW_LKW_Medic_Fleck",
			"BW_LKW_Geraet_Trop",
			"BW_LKW_Transport_offen_Tropen",
			"BW_LKW_Transport_Tropen",
			"BW_LKW_Reparatur_Tropen",
			"BW_LKW_Munition_Tropen",
			"BW_LKW_Treibstoff_Tropen",
			"BW_LKW_Medic_Tropen",
			"BW_LKW_Transport_offen_Winter",
			"BW_LKW_Transport_Winter",
			"BW_LKW_Geraet_Winter",
			"BW_LKW_Munition_Winter",
			"BW_LKW_Reparatur_Winter",
			"BW_LKW_Treibstoff_Winter",
			"BW_LKW_Medic_Winter"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F",
			"A3_Soft_F_EPC",
			"BWA3_Common",
			"BWA3_Units",
			"bwa3_g36",
			"bwa3_mg4",
			"bwa3_pzf3",
			"bwa3_backpacks",
			"bwa3_handgrenades"
		};
	};
};
class CfgVehicles
{
	class Truck_03_base_F;
	class O_Truck_03_transport_F;
	class O_Truck_03_covered_F;
	class O_Truck_03_repair_F;
	class O_Truck_03_ammo_F;
	class O_Truck_03_fuel_F;
	class O_Truck_03_medical_F;
	class O_Truck_03_device_F;
	class BW_LKW_Transport_offen_fleck: O_Truck_03_transport_F
	{
		displayName="$STR_BW_Truck7TTransportFleckName";
		scopeArsenal=2;
		forceInGarage=1;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Fleck";
		crew="BWA3_Rifleman_Fleck";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Transport_offen_fleck.jpg";
		tf_isolatedAmount=0.5;
		typicalCargo[]=
		{
			"BWA3_Rifleman_Fleck"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\Bw_Retex_Pack_vehicles\textures\truck_03_ext01_co.paa",
			"\Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa",
			"\Bw_Retex_Pack_vehicles\textures\truck_03_cargo_co.paa"
		};
	};
	class BW_LKW_Transport_Fleck: O_Truck_03_covered_F
	{
		displayName="$STR_BW_Truck7TTransportCoveredFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Fleck";
		crew="BWA3_Rifleman_Fleck";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Transport_Fleck.jpg";
		tf_isolatedAmount=0.5;
		typicalCargo[]=
		{
			"BWA3_Rifleman_Fleck"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cover_co.paa"
		};
	};
	class BW_LKW_Geraet_Fleck: O_Truck_03_device_F
	{
		displayName="$STR_BW_Truck7TDeviceFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Fleck";
		crew="BWA3_Rifleman_Fleck";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Geraet_Fleck.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Munition_Fleck: O_Truck_03_ammo_F
	{
		displayName="$STR_BW_Truck7TAmmoFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Fleck";
		crew="BWA3_Rifleman_Fleck";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Munition_Fleck.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=30;
			};
			class _xx_BWA3_100Rnd_556x45
			{
				count=10;
				magazine="BWA3_200Rnd_556x45";
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=10;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=20;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=10;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=30;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=30;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=10;
			};
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=10;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				count=10;
				weapon="BWA3_MG4_ZO4x30_pointer";
			};
		};
	};
	class BW_LKW_Reparatur_Fleck: O_Truck_03_repair_F
	{
		displayName="$STR_BW_Truck7TRepairFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Fleck";
		crew="BWA3_Rifleman_Fleck";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Reparatur_Fleck.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_fuel2_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Treibstoff_Fleck: O_Truck_03_fuel_F
	{
		displayName="$STR_BW_Truck7TFuelFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Fleck";
		crew="BWA3_Rifleman_Fleck";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Treibstoff_Fleck.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_fuel_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_fuel_fleck_co.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Medic_Fleck: O_Truck_03_covered_F
	{
		mapSize=11.48;
		forceInGarage=1;
		displayName="$STR_BW_Truck7TMedevacCoveredFleckName";
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Fleck";
		crew="BWA3_Rifleman_Fleck";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Medic_Fleck.jpg";
		tf_isolatedAmount=0.5;
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_leanright",
			"passenger_apc_generic03",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_leanright",
			"passenger_apc_generic03",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_generic01",
			"passenger_generic01_foldhands",
			"passenger_apc_generic04",
			"passenger_generic01_leanleft"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_medic_fleck_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=2;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=2;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=2;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
		};
		attendant="true";
		threat[]={0,0,0};
	};
	class BW_LKW_Transport_offen_Tropen: O_Truck_03_transport_F
	{
		displayName="$STR_BW_Truck7TTransportFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Tropen";
		crew="BWA3_Rifleman_Tropen";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Transport_offen_Tropen.jpg";
		tf_isolatedAmount=0.5;
		typicalCargo[]=
		{
			"BWA3_Rifleman_Tropen"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_trop_co.paa"
		};
	};
	class BW_LKW_Transport_Tropen: O_Truck_03_covered_F
	{
		displayName="$STR_BW_Truck7TTransportCoveredFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Tropen";
		crew="BWA3_Rifleman_Tropen";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Transport_Tropen.jpg";
		tf_isolatedAmount=0.5;
		typicalCargo[]=
		{
			"BWA3_Rifleman_Tropen"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cover_trop_co.paa"
		};
	};
	class BW_LKW_Geraet_Tropen: O_Truck_03_device_F
	{
		displayName="$STR_BW_Truck7TDeviceFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Tropen";
		crew="BWA3_Rifleman_Tropen";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Geraet_Tropen.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Munition_Tropen: O_Truck_03_ammo_F
	{
		displayName="$STR_BW_Truck7TAmmoFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Tropen";
		crew="BWA3_Rifleman_Tropen";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Munition_Tropen.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_trop_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Tropentarn
			{
				backpack="BW_Backpack_compact_Tropentarn";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=30;
			};
			class _xx_BWA3_100Rnd_556x45
			{
				count=10;
				magazine="BWA3_200Rnd_556x45";
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=10;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=20;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=10;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=30;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=30;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=10;
			};
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=10;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				count=10;
				weapon="BWA3_MG4_ZO4x30_pointer";
			};
		};
	};
	class BW_LKW_Reparatur_Tropen: O_Truck_03_repair_F
	{
		displayName="$STR_BW_Truck7TRepairFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Tropen";
		crew="BWA3_Rifleman_Tropen";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Reparatur_Tropen.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_fuel2_trop_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Tropentarn
			{
				backpack="BW_Backpack_compact_Tropentarn";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Treibstoff_Tropen: O_Truck_03_fuel_F
	{
		displayName="$STR_BW_Truck7TFuelFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Tropen";
		crew="BWA3_Rifleman_Tropen";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Treibstoff_Tropen.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_fuel_trop_co",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_fuel_trop_co.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Medic_Tropen: O_Truck_03_covered_F
	{
		mapSize=11.48;
		forceInGarage=1;
		scopeArsenal=2;
		displayName="$STR_BW_Truck7TMedevacCoveredFleckName";
		author="Tobib";
		side=1;
		faction="BWA3_Faction_Tropen";
		crew="BWA3_Rifleman_Tropen";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Medic_Tropen.jpg";
		tf_isolatedAmount=0.5;
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_leanright",
			"passenger_apc_generic03",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_generic01",
			"passenger_generic01_foldhands",
			"passenger_apc_generic04",
			"passenger_generic01_leanleft"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_trop_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_medic_trop_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Tropentarn
			{
				backpack="BW_Backpack_compact_Tropentarn";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=2;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=2;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=2;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
		};
		attendant="true";
		threat[]={0,0,0};
	};
	class BW_LKW_Transport_offen_Winter: O_Truck_03_transport_F
	{
		displayName="$STR_BW_Truck7TTransportFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="TobiB";
		side=1;
		faction="BWadd_Faction_Schnee";
		crew="PzBrig17_Rifleman_Snow";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Transport_offen_Tropen.jpg";
		tf_isolatedAmount=0.5;
		typicalCargo[]=
		{
			"PzBrig17_Rifleman_Snow"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_win_co.paa"
		};
	};
	class BW_LKW_Transport_Winter: O_Truck_03_covered_F
	{
		displayName="$STR_BW_Truck7TTransportCoveredFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWadd_Faction_Schnee";
		crew="PzBrig17_Rifleman_Snow";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Transport_Tropen.jpg";
		tf_isolatedAmount=0.5;
		typicalCargo[]=
		{
			"PzBrig17_Rifleman_Snow"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cover_win_co.paa"
		};
	};
	class BW_LKW_Geraet_Winter: O_Truck_03_device_F
	{
		displayName="$STR_BW_Truck7TDeviceFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWadd_Faction_Schnee";
		crew="PzBrig17_Rifleman_Snow";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Geraet_Tropen.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_win_co.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Munition_Winter: O_Truck_03_ammo_F
	{
		displayName="$STR_BW_Truck7TAmmoFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWadd_Faction_Schnee";
		crew="PzBrig17_Rifleman_Snow";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Munition_Tropen.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_win_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=1;
			};
		};
		class TransportMagazines
		{
			class _xx_BWA3_30Rnd_556x45_G36
			{
				magazine="BWA3_30Rnd_556x45_G36";
				count=30;
			};
			class _xx_BWA3_100Rnd_556x45
			{
				count=10;
				magazine="BWA3_200Rnd_556x45";
			};
			class _xx_BWA3_200Rnd_556x45
			{
				magazine="BWA3_200Rnd_556x45";
				count=10;
			};
			class _xx_BWA3_DM51A1
			{
				magazine="BWA3_DM51A1";
				count=20;
			};
			class _xx_BWA3_DM25
			{
				magazine="BWA3_DM25";
				count=10;
			};
			class _xx_BWA3_DM32_Orange
			{
				magazine="BWA3_DM32_Orange";
				count=10;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine="3Rnd_HE_Grenade_shell";
				count=30;
			};
			class _xx_BWA3_10Rnd_762x51_G2
			{
				magazine="BWA3_10Rnd_762x51_G28";
				count=30;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_BWA3_PzF3_Tandem_Loaded
			{
				weapon="BWA3_PzF3_Tandem_Loaded";
				count=10;
			};
			class _xx_BWA3_G36KA2_RSAS_pointer
			{
				count=10;
				weapon="BWA3_G36KA2_RSAS_pointer";
			};
			class _xx_BWA3_MG4_ZO4x30_pointer
			{
				count=10;
				weapon="BWA3_MG4_ZO4x30_pointer";
			};
		};
	};
	class BW_LKW_Reparatur_Winter: O_Truck_03_repair_F
	{
		displayName="$STR_BW_Truck7TRepairFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWadd_Faction_Schnee";
		crew="PzBrig17_Rifleman_Snow";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Reparatur_Tropen.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_fuel2_win_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=2;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Treibstoff_Winter: O_Truck_03_fuel_F
	{
		displayName="$STR_BW_Truck7TFuelFleckName";
		forceInGarage=1;
		scopeArsenal=2;
		author="Tobib";
		side=1;
		faction="BWadd_Faction_Schnee";
		crew="PzBrig17_Rifleman_Snow";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Treibstoff_Tropen.jpg";
		tf_isolatedAmount=0.5;
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_fuel_win_co",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_fuel_win_co.paa"
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	class BW_LKW_Medic_Winter: O_Truck_03_covered_F
	{
		mapSize=11.48;
		forceInGarage=1;
		scopeArsenal=2;
		displayName="$STR_BW_Truck7TMedevacCoveredFleckName";
		author="Tobib";
		side=1;
		faction="BWadd_Faction_Schnee";
		crew="PzBrig17_Rifleman_Snow";
		editorPreview="\BW_Retex_Pack_vehicles\editorPreview\BW_LKW_Medic_Tropen.jpg";
		tf_isolatedAmount=0.5;
		cargoAction[]=
		{
			"passenger_low01",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic03",
			"passenger_generic01_leanright",
			"passenger_apc_generic03",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanleft",
			"passenger_apc_generic01",
			"passenger_generic01_foldhands",
			"passenger_apc_generic04",
			"passenger_generic01_leanleft"
		};
		textureList[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext01_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_ext02_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_cargo_win_co.paa",
			"Bw_Retex_Pack_vehicles\textures\truck_03_medic_win_co.paa"
		};
		class TransportBackpacks
		{
			class _xx_BW_Backpack_compact_Flecktarn
			{
				backpack="BW_Backpack_compact_Flecktarn";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=2;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=20;
			};
			class _xx_ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=2;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=2;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=20;
			};
		};
		attendant="true";
		threat[]={0,0,0};
	};
};
