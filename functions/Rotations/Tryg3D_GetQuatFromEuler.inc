//GetQuatFromEuler by Nero_3D
Tryg3D::Function:: Tryg3D::GetQuatFromEuler(Float:rx,Float:ry,Float:rz,&Float:qw,&Float:qx,&Float:qy,&Float:qz,T3D:eulermode:mode=T3D:euler_default){
	rx /= 2.0; // could be done with multiplication but would be slower
	ry /= 2.0;
	rz /= 2.0;

	new	Float:cosX = floatcos(rx,degrees),
		Float:cosY = floatcos(ry,degrees),
		Float:cosZ = floatcos(rz,degrees),
		Float:sinX = floatsin(rx,degrees),
		Float:sinY = floatsin(ry,degrees),
		Float:sinZ = floatsin(rz,degrees);

	switch(mode) {
		case T3D:euler_xzx: {
			qw = sinX * cosY * sinZ - cosX * cosY * cosZ;
			qx = cosX * cosY * sinZ + sinX * cosY * cosZ;
			qy = cosX * sinY * sinZ - sinX * sinY * cosZ;
			qz = cosX * sinY * cosZ + sinX * sinY * sinZ;
		}
		case T3D:euler_xyx: {
			qw = sinX * cosY * sinZ - cosX * cosY * cosZ;
			qx = cosX * cosY * sinZ + sinX * cosY * cosZ;
			qy = cosX * sinY * cosZ + sinX * sinY * sinZ;
			qz = sinX * sinY * cosZ - cosX * sinY * sinZ;
		}
		case T3D:euler_yxy: {
			qw = sinX * cosY * sinZ - cosX * cosY * cosZ;
			qx = cosX * sinY * cosZ + sinX * sinY * sinZ;
			qy = cosX * cosY * sinZ + sinX * cosY * cosZ;
			qz = cosX * sinY * sinZ - sinX * sinY * cosZ;
		}
		case T3D:euler_yzy: {
			qw = sinX * cosY * sinZ - cosX * cosY * cosZ;
			qx = sinX * sinY * cosZ - cosX * sinY * sinZ;
			qy = cosX * cosY * sinZ + sinX * cosY * cosZ;
			qz = cosX * sinY * cosZ + sinX * sinY * sinZ;
		}
		case T3D:euler_zyz: {
			qw = sinX * cosY * sinZ - cosX * cosY * cosZ;
			qx = cosX * sinY * sinZ - sinX * sinY * cosZ;
			qy = cosX * sinY * cosZ + sinX * sinY * sinZ;
			qz = cosX * cosY * sinZ + sinX * cosY * cosZ;
		}
		case T3D:euler_zxz: {
			qw = sinX * cosY * sinZ - cosX * cosY * cosZ;
			qx = cosX * sinY * cosZ + sinX * sinY * sinZ;
			qy = sinX * sinY * cosZ - cosX * sinY * sinZ;
			qz = cosX * cosY * sinZ + sinX * cosY * cosZ;
		}
		case T3D:euler_xzy: {
			qw = cosX * cosY * cosZ + sinX * sinY * sinZ;
			qx = cosX * sinY * sinZ - sinX * cosY * cosZ;
			qy = sinX * cosY * sinZ - cosX * sinY * cosZ;
			qz = -(cosX * cosY * sinZ + sinX * sinY * cosZ);
		}
		case T3D:euler_xyz: {
			qw = sinX * sinY * sinZ - cosX * cosY * cosZ;
			qx = sinX * cosY * cosZ + cosX * sinY * sinZ;
			qy = cosX * sinY * cosZ - sinX * cosY * sinZ;
			qz = cosX * cosY * sinZ + sinX * sinY * cosZ;
		}
		case T3D:euler_yxz: {
			qw = cosX * cosY * cosZ + sinX * sinY * sinZ;
			qx = -(sinX * cosY * cosZ + cosX * sinY * sinZ);
			qy = sinX * cosY * sinZ - cosX * sinY * cosZ;
			qz = sinX * sinY * cosZ - cosX * cosY * sinZ;
		}
		case T3D:euler_yzx: {
			qw = sinX * sinY * sinZ - cosX * cosY * cosZ;
			qx = sinX * cosY * cosZ + cosX * sinY * sinZ;
			qy = cosX * sinY * cosZ + sinX * cosY * sinZ;
			qz = cosX * cosY * sinZ - sinX * sinY * cosZ;
		}
		case T3D:euler_zyx: {
			qw = cosX * cosY * cosZ + sinX * sinY * sinZ;
			qx = cosX * sinY * sinZ - sinX * cosY * cosZ;
			qy = -(cosX * sinY * cosZ + sinX * cosY * sinZ);
			qz = sinX * sinY * cosZ - cosX * cosY * sinZ;
		}
		case T3D:euler_zxy: {
			qw = sinX * sinY * sinZ - cosX * cosY * cosZ;
			qx = sinX * cosY * cosZ - cosX * sinY * sinZ;
			qy = cosX * sinY * cosZ + sinX * cosY * sinZ;
			qz = cosX * cosY * sinZ + sinX * sinY * cosZ;
		}
	}
}