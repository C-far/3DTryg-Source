//GetPointInFrontOfVehicle3D (ColAndreas)
Tryg3D::Function:: GetPointInFrontOfVehicle3DCol(vehicleid,&Float:tx,&Float:ty,&Float:tz,Float:radius,&Float:rx=0.0,&Float:rz=0.0){
	new Float:ry,Float:x,Float:y,Float:z;
	GetVehiclePos(vehicleid,x,y,z);
	Tryg3D::GetVehicleRotation(vehicleid,rx,ry,rz);
	GetPointInFront3DCol(x,y,z,rx,rz,radius,tx,ty,tz);
}