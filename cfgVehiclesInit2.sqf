// Box defence mechanism, when fired at and hit, creates a map marker of the player
// that damaged/shot it, visible to all players.

// This should notice when a box is placed, I assume it can actually be placed by this point.
// Spawn Weapon, this should randomly choose between the two options and place one of them into the box.
this addEventHandler ["curatorObjectPlaced",
    {
        params["_curator", "_MysteryBox"]
	    _WpnAry = ["UK3CB_BAF_L7","UK3CB_BAF_L85A3"]; //Classnames incorrect, fix for V1.
	    _RWpn = _WpnAry select floor random count _WpnAry;
	    _RWpn = selectRandom _WpnAry
	    _MysteryBox addWeaponCargoGlobal [_RWpn,1];
    };
	
// Requested extra functionality, get player name from damage state, create marker at position with name.
	this addMPEventHandler ["MPHit", {params ["_MysteryBox","_causedBy", "_damage", "_instigator"];}];
	_position = getPosATL (_instigator);
	_marker = createMarker ["_damage done by _instigator", _position, Global, player]; //For channel, None could be used instead of Global, as None is also visible in every channel, None is default if no input selected. Can't use Player as returns objNull on dedicated server, so getPosATL is needed
	_marker setMarkerType "hd_dot";