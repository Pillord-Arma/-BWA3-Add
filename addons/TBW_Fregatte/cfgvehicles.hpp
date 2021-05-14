class CfgVehicles
{
	class Land_Destroyer_01_base_F;
	class TBW_Fregatte01 : Land_Destroyer_01_base_F
	{
		displayName = "$STR_Frigate";
		author = "TobiB";
		
		multiStructureParts[]=
		{
			
			{
				"TBW_Fregatte_Nummern",
				"pos_hull_1"
			},
			
			{
				"TBW_Fregatte_01_hull_02_F",
				"pos_hull_2"
			},
			
			{
				"TBW_Fregatte_01_hull_03_F",
				"pos_hull_3"
			},
			
			{
				"TBW_Fregatte_01_hull_04_F",
				"pos_hull_4"
			},
			
			{
				"TBW_Fregatte_Name",
				"pos_hull_5"
			},
			
			{
				"TBW_Fregatte_01_interior_02_F",
				"pos_hull_2"
			},
			
			{
				"TBW_Fregatte_01_interior_03_F",
				"pos_hull_3"
			},
			
			{
				"TBW_Fregatte_01_interior_04_F",
				"pos_hull_4"
			},
			
			{
				"TBW_Fregatte_HelipadEmpty_F",
				"pos_heliPad"
			},
			
			{
				"TBW_Fregatte_Flagge",
				"pos_Flag"
			}
		};		
			
		class Attributes
		{
			class CustomShipNameTexture0
			{
				displayName="$STR_3den_object_attribute_CustomShipNameTexture0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="CustomShipNameTexture0";
				control="Edit";
				expression="([_this, 'TBW_Fregatte_Name'] call bis_fnc_destroyer01GetShipPart) setObjectTextureGlobal [0, _value];";
				typeName="STRING";
				defaultValue="'\TBW_Fregatte\Data\TBW_Fregatte_Baden_Wuerttemberg.paa'";
			};
			
			class CustomShipFlagTexture0
			{
				displayName="$STR_3den_object_attribute_CustomShipFlagTexture0_displayname";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="CustomShipFlagTexture0";
				control="Edit";
				expression="([_this, 'TBW_Fregatte_Flagge'] call bis_fnc_destroyer01GetShipPart) setFlagTexture _value;";
				typeName="STRING";
				defaultValue="'\TBW_Fregatte\Data\TBW_Fregatte_Flagge.paa'";
			};
			
			class ShipHangarDoorState
			{
				displayName="$STR_3den_object_attribute_ShipHangarDoorState_displayname";
				tooltip="$STR_3den_object_attribute_ShipHangarDoorState_tooltip";
				property="ShipHangarDoorState";
				control="CheckboxNumber";
				expression="[([_this, 'TBW_Fregatte_01_hull_04_F'] call bis_fnc_destroyer01GetShipPart), _value, true] spawn bis_fnc_destroyer01AnimateHangarDoors;";
				defaultValue="0";
				typeName="NUMBER";
			};
			
			class CustomShipNumber1
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber1_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber1_tooltip";
				property="CustomShipNumber1";
				control="EditShort";
				expression="[([_this, 'TBW_Fregatte_Nummern'] call bis_fnc_destroyer01GetShipPart), _value, 0] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="2";
				validate="number";
				typeName="NUMBER";
			};
			
			class CustomShipNumber2
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber2_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber2_tooltip";
				property="CustomShipNumber2";
				control="EditShort";
				expression="[([_this, 'TBW_Fregatte_Nummern'] call bis_fnc_destroyer01GetShipPart), _value, 1] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="2";
				validate="number";
				typeName="NUMBER";
			};
			
			class CustomShipNumber3
			{
				displayName="$STR_3den_object_attribute_CustomShipNumber3_displayname";
				tooltip="$STR_3den_object_attribute_CustomShipNumber3_tooltip";
				property="CustomShipNumber3";
				control="EditShort";
				expression="[([_this, 'TBW_Fregatte_Nummern'] call bis_fnc_destroyer01GetShipPart), _value, 2] spawn bis_fnc_destroyer01InitHullNumbers;";
				defaultValue="2";
				validate="number";
				typeName="NUMBER";
			};
		};
	};
	
	class Land_Destroyer_01_hull_01_F;
	class TBW_Fregatte_Nummern : Land_Destroyer_01_hull_01_F
	{
		hiddenSelectionsTextures[] = 
		{
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_02_co.paa",
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_02_co.paa",
			"A3\Boat_F_Destroyer\Destroyer_01\Data\Destroyer_01_N_02_co.paa"
		};
	}
	
	class Land_Destroyer_01_hull_02_F;
	class TBW_Fregatte_01_hull_02_F : Land_Destroyer_01_hull_02_F
		{
		};
	class Land_Destroyer_01_hull_03_F;
	class TBW_Fregatte_01_hull_03_F : Land_Destroyer_01_hull_03_F
		{
		};
	class Land_Destroyer_01_hull_04_F;
	class TBW_Fregatte_01_hull_04_F : Land_Destroyer_01_hull_04_F
		{
		};	
	class Land_Destroyer_01_interior_02_F;
	class TBW_Fregatte_01_interior_02_F : Land_Destroyer_01_interior_02_F
		{
		};
	class Land_Destroyer_01_interior_03_F;
	class TBW_Fregatte_01_interior_03_F : Land_Destroyer_01_interior_03_F
		{
		};
	class Land_Destroyer_01_interior_04_F;
	class TBW_Fregatte_01_interior_04_F : Land_Destroyer_01_interior_04_F
		{
		};
	class Land_HelipadEmpty_F;
	class TBW_Fregatte_HelipadEmpty_F : Land_HelipadEmpty_F
		{
		};
		
	class Land_Destroyer_01_hull_05_F;
	class TBW_Fregatte_Name : Land_Destroyer_01_hull_05_F
	{
			hiddenSelectionsTextures[] = 
			{
				"\TBW_Fregatte\Data\TBW_Fregatte_Baden_Wuerttemberg.paa"
			};

	};
	
	class ShipFlag_US_F;
	class TBW_Fregatte_Flagge : ShipFlag_US_F
	{
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\TBW_Fregatte\Data\TBW_Fregatte_Flagge.paa'";
		};			
	};
};