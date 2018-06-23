//Original by Ivan_Ino Updated by Abyss Morgan SRC:https://github.com/Ino42O/VehiclePartPosition/blob/master/VehiclePartPosition.inc
Tryg3D::Function:: GetVehiclePartPos(vehicleid,partid,&Float:tx,&Float:ty,&Float:tz,Float:offset_x=0.0,Float:offset_y=0.0,Float:offset_z=0.0){
	new Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz;
	GetVehiclePos(vehicleid,x,y,z);
	Tryg3D::GetVehicleRotation(vehicleid,rx,ry,rz);
	GetVehicleZAngle(vehicleid,rz);
	return Tryg3D::GetPartPos(GetVehicleModel(vehicleid),partid,x,y,z,rx,ry,rz,tx,ty,tz,offset_x,offset_y,offset_z);
}
