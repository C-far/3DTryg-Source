Tryg3D::Function:: GetRandomPointOnCircularSector(Float:x,Float:y,Float:rz,Float:radius,Float:view_angle,&Float:tx,&Float:ty){
	view_angle /= 2.0;
	new Float:rand_rz = CompRotationFloat(Tryg3D::RandomFloat(rz-view_angle+360.0,rz+view_angle+360.0,6));
	rand_rz = NMTV(rand_rz,(rz+view_angle));
	rand_rz = NLTV(rand_rz,(rz-view_angle));
	GetPointInFront2D(x,y,rand_rz,radius,tx,ty);
}