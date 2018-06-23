Tryg3D::Function:: Float:GetRandomPointOnClock(Float:x,Float:y,Float:radius,&Float:tx,&Float:ty,&Float:trz,Float:rz = INVALID_ROTATION){
	if(rz == INVALID_ROTATION) rz = Tryg3D::RandomFloat(0.0,360.0);
	GetPointInFront2D(x,y,rz,radius,tx,ty);
	return CompRotationFloat(rz-180.0,trz);
}