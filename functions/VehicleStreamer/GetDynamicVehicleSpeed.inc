Tryg3D::Function:: Float:GetDynamicVehicleSpeed(STREAMER_TAG_VEHICLE vehicleid){
	new Float:x,Float:y,Float:z;
	GetDynamicVehicleVelocity(vehicleid,x,y,z);
	return floatmul(VectorSize(x,y,z),VEHICLE_SPEED_MULTIPLIER);
}