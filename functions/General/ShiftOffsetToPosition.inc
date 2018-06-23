Tryg3D::Function:: ShiftOffsetToPosition(Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,Float:offset_x,Float:offset_y,Float:offset_z,&Float:tx,&Float:ty,&Float:tz){
	new Float:px,Float:py,Float:pz;
	if(!ShiftVectorRotation(offset_x,offset_y,offset_z,rx,ry,rz,px,py,pz)){
		tx = x, ty = y, tz = z;
	} else {
		GetRotationFor2Point3D(0.0,0.0,0.0,px,py,pz,rx,rz);
		GetPointInFront3D(x,y,z,rx,rz,VectorSize(offset_x,offset_y,offset_z),tx,ty,tz);
	}
}