//Original by Ivan_Ino Updated by Abyss Morgan SRC:https://github.com/Ino42O/DynamicVehiclePartPosition/blob/master/DynamicVehiclePartPosition.inc
Tryg3D::Function:: GetDynamicVehiclePartPos(STREAMER_TAG_VEHICLE vehicleid,partid,&Float:tx,&Float:ty,&Float:tz,Float:offset_x=0.0,Float:offset_y=0.0,Float:offset_z=0.0){
	new Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz;
	GetDynamicVehiclePos(vehicleid,x,y,z);
	GetDynamicVehicleRotation(vehicleid,rx,ry,rz);
	GetDynamicVehicleZAngle(vehicleid,rz);
	return Tryg3D::GetPartPos(GetDynamicVehicleModel(vehicleid),partid,x,y,z,rx,ry,rz,tx,ty,tz,offset_x,offset_y,offset_z);
}
