Tryg3D::Function:: Item::ToPointIsVeh(Float:x,Float:y,Float:z,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type){
	new Float:xB,Float:yB,Float:zB,Float:T3D:x,Float:T3D:y,Float:T3D:z;
	if(!Item::GetPos(targetid,target_type,xB,yB,zB)) return 0;
	return (ColAndreas::RayCastLine(xB,yB,zB,x,y,z,T3D:x,T3D:y,T3D:z) || (MovePointColWithVehicle(x,y,z,xB,yB,zB,T3D:x,T3D:y,T3D:z) != INVALID_VEHICLE_ID));
}