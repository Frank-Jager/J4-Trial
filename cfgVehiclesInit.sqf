// This should notice when a box is placed, I assume it can actually be placed by this point.
_MystBox addEventHandler ["curatorObjectPlaced", {params["_curator", "_MysteryBox"];

//Spawn Weapon, this should randomly choose between the two options and place one of them into the box.
	_WpnAry = ["UK3CB_BAF_L7","UK3CB_BAF_L85A3"]; //Classnames incorrect, fix for V1.
	_RWpn = _WpnAry select floor random count _WpnAry;
	_RWpn = selectRandom _WpnAry
	_MysteryBox addWeaponCargoGlobal [_RWpn,1];