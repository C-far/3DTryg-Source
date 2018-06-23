/************************************************************************************************************************************
 *                                                                                                                                  *
 * Vehicle Collision Module                                                                                                         *
 *                                                                                                                                  *
 ************************************************************************************************************************************/
 
#define VCOLLISION_EXTRA_ID_OFFSET				(800000)

new STREAMER_TAG_AREA Tryg3D::VehicleCollisionZone[MAX_VEHICLES],
	bool:Tryg3D::VehicleCollisionUsed[MAX_VEHICLES],
	bool:Tryg3D::VehicleCollisionSystem = false;

//Hook: OnVehicleSpawn
public OnVehicleSpawn(vehicleid){
	if(Tryg3D::VehicleCollisionSystem){
		Tryg3D::SyncVehicleCollision(vehicleid);
	}
	#if defined Tryg3D_OnVehicleSpawn
		Tryg3D_OnVehicleSpawn(vehicleid);
	#endif
	return 1;
}

#if defined Tryg3D_OnVehicleSpawn
	forward Tryg3D_OnVehicleSpawn(vehicleid);
#endif
#if defined _ALS_OnVehicleSpawn
	#undef OnVehicleSpawn
#else
	#define _ALS_OnVehicleSpawn
#endif
#define OnVehicleSpawn Tryg3D_OnVehicleSpawn