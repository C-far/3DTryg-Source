Tryg3D::Function:: Item::InRangeOfItem(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:range,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type=item_player,bool:testLOS=true,bool:veh_col=false){
	new Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz;
	if(!Item::GetPos(elementid,element_type,x,y,z)) return 0;
	if(!Item::GetPos(targetid,target_type,tx,ty,tz)) return 0;
	if(testLOS){
		new Float:T3D:x,Float:T3D:y,Float:T3D:z;
		if(ColAndreas::RayCastLine(tx,ty,tz,x,y,z,T3D:x,T3D:y,T3D:z)) return 0;
	}
	#if defined Tryg3D_VehicleCollision
		if(veh_col && Tryg3D::VehicleCollisionSystem){
			new Float:T3D:x,Float:T3D:y,Float:T3D:z;
			if(MovePointColWithVehicle(tx,ty,tz,x,y,z,T3D:x,T3D:y,T3D:z) != INVALID_VEHICLE_ID) return 0;
		}
	#else
		#pragma unused veh_col
	#endif
	
	return (GetDistanceBetweenPoints3D(x,y,z,tx,ty,tz) <= range);
}