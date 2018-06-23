Tryg3D::Function:: CountVisibleGangZone(playerid){
	new T3D:count = 0;
	for(new i = 0; i < MAX_GANG_ZONES; i++){
		if(IsValidGangZone(i) && IsGangZoneVisibleForPlayer(playerid,i)) T3D:count++;
	}
	return T3D:count;
}
