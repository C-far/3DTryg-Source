Tryg3D::Function:: CountVisibleVehicles(playerid){
	new T3D:count = 0;
	for(new i = 0, j = GetVehiclePoolSize(); i <= j; i++){
		if(IsValidVehicle(i) && IsVehicleStreamedIn(i,playerid)){
			T3D:count++;
		}
	}
	return T3D:count;
}