Tryg3D::Function:: IsDynamicVehicleOnSpawn(STREAMER_TAG_VEHICLE vehicleid,Float:check_radius=1.0){
	new Float:x,Float:y,Float:z,Float:rz,color1,color2,siren;
	GetDynamicVehicleSpawnInfo(vehicleid,x,y,z,rz,color1,color2,siren);
	return IsDynVehInRangeOfPoint(vehicleid,check_radius,x,y,z);
}