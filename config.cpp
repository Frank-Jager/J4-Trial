// The following code should add a new item to zeus list. Hopefully!
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
	class MystBox: Box_NATO_WpsSpecial_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 3;
		editorCategory = "Supplies";
		displayName = "J4 Mystery Box"
	}:
}: