Tryg3D::Function:: IPL_CreateObject(modelid,Float:x,Float:y,Float:z,Float:qx,Float:qy,Float:qz,Float:qw,Float:drawdistance=0.0){
	new Float:rx,Float:ry,Float:rz;
	Tryg3D::QuatToEuler(rx,ry,rz,qw,qx,qy,qz);
	return CreateObject(modelid,x,y,z,rx,ry,rz,drawdistance);
}