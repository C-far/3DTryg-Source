//Abyss Morgan Algorithm Circular Sector
Tryg3D::Function:: IsPointInCircularSector(Float:px,Float:py,Float:x,Float:y,Float:rz,Float:radius,Float:view_angle){
	if(GetDistanceBetweenPoints2D(px,py,x,y) > radius) return 0;
	new Float:trz;
	view_angle /= 2.0;
	GetRotationFor2Point2D(x,y,px,py,trz);
	return (IsRotationTest(trz,rz-view_angle,rz+view_angle));
}