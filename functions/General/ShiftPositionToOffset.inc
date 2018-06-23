Tryg3D::Function:: ShiftPositionToOffset(Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,&Float:offset_x,&Float:offset_y,&Float:offset_z,Float:tx,Float:ty,Float:tz){
	new Float:px,Float:py,Float:pz,Float:trx,Float:trz,Float:dist = GetDistanceBetweenPoints3D(x,y,z,tx,ty,tz);
	if(!GetRotationFor2Point3D(x,y,z,tx,ty,tz,trx,trz)){
		offset_x = x, offset_y = y, offset_z = z;
	} else {
		new Float:ex,Float:ey,Float:ez;
		GetPointInFront3D(0.0,0.0,0.0,trx,trz,1.0,px,py,pz);
		ShiftVectorRotation(px,py,pz,CompRotationFloat(-rx),CompRotationFloat(-ry),CompRotationFloat(-rz),ex,ey,ez);
		GetPointFor2Point3DEx(0.0,0.0,0.0,ex,ey,ez,dist,offset_x,offset_y,offset_z);
	}
}