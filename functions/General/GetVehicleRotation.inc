//GetVehicleRotation Created by IllidanS4
Tryg3D::Function:: Tryg3D::GetVehicleRotation(vehicleid,&Float:rx,&Float:ry,&Float:rz){
	new Float:qw,Float:qx,Float:qy,Float:qz;
	GetVehicleRotationQuat(vehicleid,qw,qx,qy,qz);
	Tryg3D::QuatToEuler(rx,ry,rz,qw,qx,qy,qz);
}

#if !defined Tryg3D_i_quat
	#define GetVehicleRotation			Tryg3D_GetVehicleRotation
#endif