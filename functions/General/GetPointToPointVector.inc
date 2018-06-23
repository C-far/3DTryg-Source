Tryg3D::Function:: GetPointToPointVector(Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz,&Float:vx,&Float:vy,&Float:vz){
	new Float:rx,Float:rz;
	if(GetRotationFor2Point3D(x,y,z,tx,ty,tz,rx,rz)){
		ShiftRotationToVector(rx,rz,vx,vy,vz);
		return 1;
	} else {
		vx = vy = vz = 0.0;
		return 0;
	}
}