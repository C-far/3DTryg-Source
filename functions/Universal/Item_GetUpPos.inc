Tryg3D::Function:: Item::GetUpPos(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:radius,&Float:x,&Float:y,&Float:z,bool:reverse=false){
	new Float:vx,Float:vy,Float:vz,Float:rx,Float:rz;
	if(!Item::GetUpVector(elementid,element_type,vx,vy,vz)) return 0;
	ShiftVectorToRotation(vx,vy,vz,rx,rz);
	if(!Item::GetPos(elementid,element_type,vx,vy,vz)) return 0;
	if(!reverse){
		GetPointInFront3D(vx,vy,vz,rx,rz,radius,x,y,z);
	} else {
		GetPointInFront3D(vx,vy,vz,CompRotationFloat(rx-180.0),rz,radius,x,y,z);
	}
	return 1;
}