Tryg3D::Function:: Tryg3D::QuatToEuler(&Float:rx,&Float:ry,&Float:rz,Float:qw,Float:qx,Float:qy,Float:qz){
	CompRotationFloat(asin(2*qy*qz-2*qx*qw),rx);
	CompRotationFloat(-atan2(qx*qz+qy*qw,0.5-qx*qx-qy*qy),ry);
	CompRotationFloat(-atan2(qx*qy+qz*qw,0.5-qx*qx-qz*qz),rz);
}