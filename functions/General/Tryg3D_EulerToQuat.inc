Tryg3D::Function:: Tryg3D::EulerToQuat(Float:rx,Float:ry,Float:rz,&Float:qw,&Float:qx,&Float:qy,&Float:qz){
	rx /= 2.0;
	ry /= 2.0;
	rz /= 2.0;

	new	Float:cosX = floatcos(rx,degrees),
		Float:cosY = floatcos(ry,degrees),
		Float:cosZ = floatcos(rz,degrees),
		Float:sinX = floatsin(rx,degrees),
		Float:sinY = floatsin(ry,degrees),
		Float:sinZ = floatsin(rz,degrees);

	qw = sinX * sinY * sinZ - cosX * cosY * cosZ;
	qx = sinX * cosY * cosZ - cosX * sinY * sinZ;
	qy = cosX * sinY * cosZ + sinX * cosY * sinZ;
	qz = cosX * cosY * sinZ + sinX * sinY * cosZ;
}