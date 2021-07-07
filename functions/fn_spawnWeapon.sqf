//Spawn Weapon, this is currently locked to spawning either one GPMG, or one L85. To be expanded line 5 integer to be replaced with a parameter passed when function is called, and classname(s) of weapons to also function as parameters.
    _WpnAry = ["UK3CB_BAF_L7A2","UK3CB_BAF_L85A3"]; // Currently a fixed array of weapon classnames to be spawned.
    _RWpn = _WpnAry select floor random count _WpnAry; // This determines the floor of the randomiser
    _RWpn = selectRandom _WpnAry // This selects one of the classnames from the array.
    _this addWeaponCargoGlobal [_RWpn,1]; // This currently adds one of the random weapons from the array above.