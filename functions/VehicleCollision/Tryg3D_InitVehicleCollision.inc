Tryg3D::Public:: Tryg3D::InitVehicleCollision(){
	if(Tryg3D::VehicleCollisionSystem) return 0;
	
	for(new vehicleid = 1; vehicleid < MAX_VEHICLES; vehicleid++){
		Tryg3D::VehicleCollisionZone[vehicleid] = CreateDynamicCube(-1.0,-1.0,-6000.0,1.0,1.0,-5000.0);
		Tryg3D::VehicleCollisionUsed[vehicleid] = true;
		Streamer::SetIntData(STREAMER_TYPE_AREA,Tryg3D::VehicleCollisionZone[vehicleid],E_STREAMER_EXTRA_ID,(vehicleid+VCOLLISION_EXTRA_ID_OFFSET));
		if(IsValidVehicle(vehicleid)){
			Tryg3D::SyncVehicleCollision(vehicleid);
		}
	}
	
	Tryg3D::VehicleCollisionSystem = true;
	print("[ADM] Info: Vehicle Collision successfully init.");
	return 1;
}