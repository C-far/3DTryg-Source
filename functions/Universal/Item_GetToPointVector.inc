Tryg3D::Function:: Item::GetToPointVector(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,Float:tx,Float:ty,Float:tz,&Float:vx,&Float:vy,&Float:vz){
	new Float:px,Float:py,Float:pz,Float:rx,Float:rz;
	if(!Item::GetPos(elementid,element_type,px,py,pz)) return 0;
	if(GetRotationFor2Point3D(px,py,pz,tx,ty,tz,rx,rz)){
		ShiftRotationToVector(rx,rz,vx,vy,vz);
		return 1;
	} else {
		vx = vy = vz = 0.0;
		return 0;
	}
}