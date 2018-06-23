//GetPointInFrontOfVehicle2D (ColAndreas)
Tryg3D::Function:: Float:GetPointInFrontOfVehicle2DCol(vehicleid,&Float:tx,&Float:ty,Float:radius){
	new Float:rz,Float:x,Float:y,Float:z;
	GetVehiclePos(vehicleid,x,y,z);
	GetVehicleZAngle(vehicleid,rz);
	GetPointInFront3DCol(x,y,z,0.0,rz,radius,tx,ty,z);
	return rz;
}