Tryg3D::Function:: GetPointFor2Point3DEx(Float:x1,Float:y1,Float:z1,Float:x2,Float:y2,Float:z2,Float:distance,&Float:tx,&Float:ty,&Float:tz){
	new Float:rx,Float:rz;
	GetRotationFor2Point3D(x1,y1,z1,x2,y2,z2,rx,rz);
	GetPointInFront3D(x1,y1,z1,rx,rz,distance,tx,ty,tz);
}
