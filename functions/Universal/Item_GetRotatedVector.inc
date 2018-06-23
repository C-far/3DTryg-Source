Tryg3D::Function:: Item::GetRotatedVector(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:tx,Float:ty,Float:tz,&Float:vx,&Float:vy,&Float:vz,bool:return_vector=true,Float:rx=0.0,Float:ry=0.0,Float:rz=0.0){
	new Float:px,Float:py,Float:pz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	if(return_vector){
		ShiftLineRotationVector(px,py,pz,tx,ty,tz,rx,ry,rz,vx,vy,vz);
	} else {
		ShiftLineRotation(px,py,pz,tx,ty,tz,rx,ry,rz,vx,vy,vz);
	}
	return 1;
}