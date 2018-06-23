Tryg3D::Function:: GetRandomPointInCircularSector(Float:x,Float:y,Float:rz,Float:radius,Float:view_angle,&Float:tx,&Float:ty){
	view_angle /= 2.0;
	new Float:rand_rz = CompRotationFloat(Tryg3D::RandomFloat(rz-view_angle+360.0,rz+view_angle+360.0,6)),
		Float:rand_rad = Tryg3D::RandomFloat(0.0,radius,6);
	if(rand_rad > radius) rand_rad = radius;
	rand_rz = NMTV(rand_rz,(rz+view_angle));
	rand_rz = NLTV(rand_rz,(rz-view_angle));
	GetPointInFront2D(x,y,rand_rz,rand_rad,tx,ty);
}