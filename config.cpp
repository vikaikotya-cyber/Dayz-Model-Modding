class CfgPatches
{
	class Dverka
	{
		units[] = {"Land_Dverka"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Gear_Medical",
			"DZ_Structures_Furniture",
			"DZ_Data",
			"DZ_Characters",
			"DZ_Scripts",
			"DZ_gear_food",
			"DZ_Gear_Consumables"
		};
	};
};

class CfgMods
{
	class Dverka
	{
		dir = "Dverka";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "";
		credits = "";
		author = "";
		authorID = "";
		version = "";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};

		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Dverka/scripts/4_world"};
			};
		};
	};
};

class CfgVehicles
{
	class HouseNoDestruct;

	class Land_Dverka: HouseNoDestruct
	{
		scope = 2;
		displayName = "Door Dverka";
		model = "Dverka/Dverka.p3d";

		class Doors
		{
			// Должно соответствовать source = "door1" в model.cfg.
			class door1
			{
				displayName = "Door 1";
				component = "door1";       // Selection во View Geometry.
				soundPos = "door1_action"; // Точка в Memory LOD.
				animPeriod = 1.0;
				initPhase = 0.0;
				initOpened = 0.5; // 50% вероятности открытия при включённой рандомизации.
				soundOpen = "doorMetalSmallOpen";
				soundClose = "doorMetalSmallClose";
				soundLocked = "doorMetalSmallRattle";
				soundOpenABit = "doorMetalSmallOpenABit";
			};
		};
	};
};
