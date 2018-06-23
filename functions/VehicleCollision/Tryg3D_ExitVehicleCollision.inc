Tryg3D::Public:: Tryg3D::ExitVehicleCollision(){
	if(!Tryg3D::VehicleCollisionSystem) return 0;
	for(new vehicleid = 1; vehicleid < MAX_VEHICLES; vehicleid++){
		if(IsValidDynamicArea(Tryg3D::VehicleCollisionZone[vehicleid])) DestroyDynamicArea(Tryg3D::VehicleCollisionZone[vehicleid]);
		Tryg3D::VehicleCollisionZone[vehicleid] = STREAMER_TAG_AREA INVALID_STREAMER_ID;
		Tryg3D::VehicleCollisionUsed[vehicleid] = false;
	}
	Tryg3D::VehicleCollisionSystem = false;
	print("[ADM] Info: Vehicle Collision successfully exit.");
	return 1;
}