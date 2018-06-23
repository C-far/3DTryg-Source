Tryg3D::Function:: CountVisiblePlayerGangZone(playerid){
	new T3D:count = 0;
	for(new i = 0; i < MAX_GANG_ZONES; i++){
		if(IsValidPlayerGangZone(playerid,i) && IsPlayerGangZoneVisible(playerid,i)) T3D:count++;
	}
	return T3D:count;
}