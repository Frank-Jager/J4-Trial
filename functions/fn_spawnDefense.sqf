// Requested extra functionality, get player name from damage state, create marker at position with name.
_this addMPEventHandler	["MPHit",
	{params ["_MysteryBox","_causedBy", "_damage", "_instigator"]; //addEventHandler is fine as the entire server does not need to know it's been hit, only the box. 
		_position = getPosATL (_instigator);
		_marker = createMarker ["Box Damaged", _position, Global]; //For channel, None could be used instead of Global, as None is also visible in every channel, None is default if no input selected. Can't use Player as returns objNull on dedicated server, so getPosATL is needed
		_marker setMarkerType "hd_dot";
	}
];