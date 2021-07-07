class CfgPatches
{
	class J4_Mystery_Box
	{
		units[] = 
		{
			"MystBox"
		};
	};
};	

class CfgVehicles
{
	class Box_NATO_WpsSpecial_F;
	class MystBox : Box_NATO_WpsSpecial_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 3;
		editorCategory = "Supplies";
<<<<<<< Updated upstream
		displayName = "J4 Mystery Box"
	}:
}:
=======
		displayName = "J4 Mystery Box";
		class EventHandlers
		{
			init = "_this call Jagers_Box_fnc_spawnWeapon;";
		};
	};
};
>>>>>>> Stashed changes
