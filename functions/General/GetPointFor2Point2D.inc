Tryg3D::Function:: GetPointFor2Point2D(Float:x1,Float:y1,Float:x2,Float:y2,Float:percent_size,&Float:tx,&Float:ty){
	new Float:rz;
	GetRotationFor2Point2D(x1,y1,x2,y2,rz);
	GetPointInFront2D(x1,y1,rz,(GetDistanceBetweenPoints2D(x1,y1,x2,y2)*(percent_size/100.0)),tx,ty);
}