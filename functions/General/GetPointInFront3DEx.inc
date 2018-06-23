Tryg3D::Function:: GetPointInFront3DEx(Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,Float:radius,&Float:tx,&Float:ty,&Float:tz){
	new Float:vx,Float:vy,Float:vz,Float:trx,Float:trz;
	Tryg3D::EulerRotate(rx,ry,rz,0.0,1.0,0.0,vx,vy,vz,T3D:euler_zyx);
	GetRotationFor2Point3D(0.0,0.0,0.0,vx,vy,vz,trx,trz);
	GetPointInFront3D(x,y,z,trx,trz,radius,tx,ty,tz); 
}