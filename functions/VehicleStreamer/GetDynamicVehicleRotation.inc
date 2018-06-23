//GetVehicleRotation Created by IllidanS4
Tryg3D::Function:: GetDynamicVehicleRotation(STREAMER_TAG_VEHICLE vehicleid,&Float:rx,&Float:ry,&Float:rz){
	new Float:qw,Float:qx,Float:qy,Float:qz;
	GetDynamicVehicleRotationQuat(vehicleid,qw,qx,qy,qz);
	Tryg3D::QuatToEuler(rx,ry,rz,qw,qx,qy,qz);
}