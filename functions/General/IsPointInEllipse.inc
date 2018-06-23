Tryg3D::Function:: IsPointInEllipse(Float:px,Float:py,Float:cx,Float:cy,Float:size_x,Float:size_y){
	new Float:rz;
	GetRotationFor2Point2D(cx,cy,px,py,rz);
	return (GetDistanceBetweenPoints2D(px,py,cx,cy) <= GetEllipseRadius(size_x,size_y,rz));
}