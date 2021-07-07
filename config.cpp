// The following code should add a new item to zeus list. Hopefully!
class CfgPatches
{
	class J4_Mystery_Box
	{
		author="F. Jager";
		requiredVersion = 0.0.1;
		requiredAddons[]={			
			"A3_Weapons_F_Ammoboxes"
			};
        version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
		units[] = 
		{
			"MystBox"
		};
	};
};

class CfgFunctions
{
	class Jagers_Box
	{
		class FUNCTIONS
		{
			file = "J4-trial\functions";
			class spawnWeapon{};
			class spawnDefense{};
		};
	};

};

class CfgVehicles
{
	class Box_NATO_WpsSpecial_F;
	class MystBox: Box_NATO_WpsSpecial_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 3;
		editorCategory = "Supplies";
		displayName = "J4 Mystery Box";
		class EventHandlers
		{
			init = "_this call Jagers_Box_fnc_spawnWeapon;";
		};
	}:
}: