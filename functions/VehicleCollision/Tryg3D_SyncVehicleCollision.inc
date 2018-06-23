Tryg3D::Public:: Tryg3D::SyncVehicleCollision(vehicleid){
	if(!Tryg3D::VehicleCollisionSystem) return 0;
	new Float:T3D:sx,Float:T3D:sy,Float:T3D:sz;
	GetVehicleModelInfo(GetVehicleModel(vehicleid),VEHICLE_MODEL_INFO_SIZE,T3D:sx,T3D:sy,T3D:sz);
	
	T3D:sx /= 2.0;
	T3D:sy /= 2.0;
	T3D:sz /= 2.0;
	
	Streamer::SetFloatData(STREAMER_TYPE_AREA,Tryg3D::VehicleCollisionZone[vehicleid],E_STREAMER_MIN_X,-T3D:sx);
	Streamer::SetFloatData(STREAMER_TYPE_AREA,Tryg3D::VehicleCollisionZone[vehicleid],E_STREAMER_MIN_Y,-T3D:sy);
	Streamer::SetFloatData(STREAMER_TYPE_AREA,Tryg3D::VehicleCollisionZone[vehicleid],E_STREAMER_MIN_Z,-T3D:sz);
	Streamer::SetFloatData(STREAMER_TYPE_AREA,Tryg3D::VehicleCollisionZone[vehicleid],E_STREAMER_MAX_X,T3D:sx);
	Streamer::SetFloatData(STREAMER_TYPE_AREA,Tryg3D::VehicleCollisionZone[vehicleid],E_STREAMER_MAX_Y,T3D:sy);
	Streamer::SetFloatData(STREAMER_TYPE_AREA,Tryg3D::VehicleCollisionZone[vehicleid],E_STREAMER_MAX_Z,T3D:sz);
	
	AttachDynamicAreaToVehicle(Tryg3D::VehicleCollisionZone[vehicleid],vehicleid);
	return 1;
}