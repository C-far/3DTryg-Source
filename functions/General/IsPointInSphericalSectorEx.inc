//Abyss Morgan Algorithm Spherical Sector
Tryg3D::Function:: IsPointInSphericalSectorEx(Float:px,Float:py,Float:pz,Float:x,Float:y,Float:z,Float:rx,Float:rz,Float:radius,Float:vrx,Float:vrz,bool:testLOS=true,bool:veh_col=false){
	if(GetDistanceBetweenPoints3D(px,py,pz,x,y,z) > radius) return 0;
	
	#if defined Tryg3D_ColAndreas
		if(testLOS){
			new Float:T3D:x,Float:T3D:y,Float:T3D:z;
			if(ColAndreas::RayCastLine(x,y,z,px,py,pz,T3D:x,T3D:y,T3D:z)) return 0;
		}
	#else
		#pragma unused testLOS
	#endif
	
	#if defined Tryg3D_VehicleCollision
		if(veh_col && Tryg3D::VehicleCollisionSystem){
			new Float:T3D:x,Float:T3D:y,Float:T3D:z;
			if(MovePointColWithVehicle(x,y,z,px,py,pz,T3D:x,T3D:y,T3D:z) != INVALID_VEHICLE_ID) return 0;
		}
	#else
		#pragma unused veh_col
	#endif
	
	vrx /= 2.0;
	vrz /= 2.0;
	
	new Float:trx,Float:trz;
	
	if(!GetRotationFor2Point3D(x,y,z,px,py,pz,trx,trz)) return 0;
	return (IsRotationTest(trx,rx-vrx,rx+vrx) && IsRotationTest(trz,rz-vrz,rz+vrz));
}