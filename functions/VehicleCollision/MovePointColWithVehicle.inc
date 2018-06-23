Tryg3D::Public:: MovePointColWithVehicle(Float:StartX,Float:StartY,Float:StartZ,Float:EndX,Float:EndY,Float:EndZ,&Float:x,&Float:y,&Float:z){
	x = y = z = 0.0;
	ColAndreas::RayCastLine(StartX,StartY,StartZ,EndX,EndY,EndZ,x,y,z); //first find wall collision
	if(x == 0.0) x = EndX;
	if(y == 0.0) y = EndY;
	if(z == 0.0) z = EndZ;
	if(Tryg3D::VehicleCollisionSystem){
		new Float:vx, Float:vy, Float:vz, Tryg3D::AreaCount;
		Tryg3D::AreaCount = GetNumberDynamicAreasForLine(StartX,StartY,StartZ,x,y,z);
		if(Tryg3D::AreaCount){
			new STREAMER_TAG_AREA Tryg3D::Area[128], T3D:vehicleid, Float:T3D:sx, Float:T3D:sy, Float:T3D:sz, Float:T3D:last_dist = 20000.0, Float:T3D:dist, T3D:near_vehicleid = INVALID_VEHICLE_ID;
			GetDynamicAreasForLine(StartX,StartY,StartZ,x,y,z,Tryg3D::Area,sizeof(Tryg3D::Area));
			for(new k = 0; k < Tryg3D::AreaCount; k++){
				if(Tryg3D::AreaCount > 128) break;
				T3D:vehicleid = Streamer::GetIntData(STREAMER_TYPE_AREA,Tryg3D::Area[k],E_STREAMER_EXTRA_ID) - VCOLLISION_EXTRA_ID_OFFSET;
				if(T3D:vehicleid >= 1 && T3D:vehicleid < MAX_VEHICLES && IsValidVehicle(T3D:vehicleid)){
					if(Tryg3D::Area[k] == Tryg3D::VehicleCollisionZone[T3D:vehicleid] && Tryg3D::VehicleCollisionUsed[T3D:vehicleid]){
						GetVehiclePos(T3D:vehicleid,vx,vy,vz);
						if((T3D:dist = GetDistanceBetweenPoints3D(StartX,StartY,StartZ,vx,vy,vz)) < T3D:last_dist){
							T3D:last_dist = T3D:dist;
							T3D:near_vehicleid = T3D:vehicleid;
						}
					}
				}
			}
			if(T3D:near_vehicleid != INVALID_VEHICLE_ID){
				GetVehiclePos(T3D:near_vehicleid,vx,vy,vz);
				GetVehicleModelInfo(GetVehicleModel(T3D:near_vehicleid),VEHICLE_MODEL_INFO_SIZE,T3D:sx,T3D:sy,T3D:sz);
				GetPointFor2Point3DEx(StartX,StartY,StartZ,vx,vy,vz,GetDistanceBetweenPoints3D(StartX,StartY,StartZ,vx,vy,vz)-VectorSize((T3D:sx/2.0),(T3D:sy/2.0),(T3D:sz/2.0)),x,y,z);
				return T3D:near_vehicleid;
			}
		}
	}
	return INVALID_VEHICLE_ID;
}