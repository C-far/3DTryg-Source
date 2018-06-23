Tryg3D::Function:: IsPointInEllipticalCylinder2D(Float:px,Float:py,Float:pz,Float:cx,Float:cy,Float:minz,Float:maxz,Float:size_x,Float:size_y){
	if(!((pz >= minz) && (pz <= maxz))) return 0;
	new Float:rz;
	GetRotationFor2Point2D(cx,cy,px,py,rz);
	return (GetDistanceBetweenPoints2D(px,py,cx,cy) <= GetEllipseRadius(size_x,size_y,rz));
}