Tryg3D::Function:: Item::ToItemIsVeh(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type){
	new Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:T3D:x,Float:T3D:y,Float:T3D:z;
	if(!Item::GetPos(elementid,element_type,xA,yA,zA)) return 0;
	if(!Item::GetPos(targetid,target_type,xB,yB,zB)) return 0;
	return (ColAndreas::RayCastLine(xA,yA,zA,xB,yB,zB,T3D:x,T3D:y,T3D:z) || (MovePointColWithVehicle(xA,yA,zA,xB,yB,zB,T3D:x,T3D:y,T3D:z) != INVALID_VEHICLE_ID));
}