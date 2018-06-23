Tryg3D::Function:: IsPlayerAiming(playerid){
	switch(GetPlayerAnimationIndex(playerid)){
		case 1160..1163,1167,1365,1643,1453,220: return 1;
	}
	return 0;
}