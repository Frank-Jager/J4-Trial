// J4 Mystery Box
// Zeus placed.
// Spawns either GPMG or L85A3, one each.
// Box defence mechanism, when fired at and hit, creates a map marker of the player
// that damaged/shot it, visible to all players.
// Upload to Git Repo, 2 branches
// Main Branch: Box and Spawn Function
// Dev Branch: Defense Mechanism.

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

class CfgAddons
{
	class A3_Weapons_F_Ammoboxes;
	{
		list []=
		"MystBox"
	};
};

class CfgVehicles
{
	class Box_NATO_WpsSpecial_F;
	class MystBox: Box_NATO_WpsSpecial_F
	{
		scope = 2; scopeCurator = 2; side = 3;
		vehicleClass = "MystBox";
		editorSubCategory = "Mystery";
		editorCategory = "Supplies";
		displayName = "J4 Mystery Box"
	}:
}:


// This should notice when a box is placed, I assume it can actually be placed by this point.
_MystBox addEventHandler ["curatorObjectPlaced", {params["_curator", "_MysteryBox"];

//Spawn Weapon, this should randomly choose between the two options and place one of them into the box.
	_WpnAry = ["UK3CB_BAF_L7","UK3CB_BAF_L85A3"]; //Classnames incorrect, fix for V1.
	_RWpn = _WpnAry select floor random count _WpnAry;
	_RWpn = selectRandom _WpnAry
	_MysteryBox addWeaponCargoGlobal [_RWpn,1];

// Requested extra functionality, get player name from damage state, create marker at position with name.
	this addMPEventHandler ["MPHit", {params ["_MysteryBox","_causedBy", "_damage", "_instigator"];}];
	_position = getPosATL (_instigator);
	_marker = createMarker ["_damage done by _instigator", _position, Global, player]; //For channel, None could be used instead of Global, as None is also visible in every channel, None is default if no input selected. Can't use Player as returns objNull on dedicated server, so getPosATL is needed
	_marker setMarkerType "hd_dot";