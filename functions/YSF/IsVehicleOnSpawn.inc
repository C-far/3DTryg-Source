Tryg3D::Function:: IsVehicleOnSpawn(vehicleid,Float:check_radius=1.0){
	new Float:x,Float:y,Float:z,Float:rz,color1,color2;
	GetVehicleSpawnInfo(vehicleid,x,y,z,rz,color1,color2);
	return IsVehicleInRangeOfPoint(vehicleid,check_radius,x,y,z);
}