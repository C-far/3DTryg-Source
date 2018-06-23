//QuatUpVector by Nero_3D
Tryg3D::Function:: GetQuatUpVector(Float:qw,Float:qx,Float:qy,Float:qz,&Float:vx,&Float:vy,&Float:vz){
	vx = 2.0*(qy*qw+qz*qx);
	vy = 2.0*(qz*qy-qx*qw);
	vz = 1.0-(2.0*(qx*qx+qy*qy));
}