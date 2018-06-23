Tryg3D::Function:: CountGangZone(){
	new T3D:count = 0;
	for(new i = 0; i < MAX_GANG_ZONES; i++){
		if(IsValidGangZone(i)) T3D:count++;
	}
	return T3D:count;
}