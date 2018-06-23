Tryg3D::Function:: MovePointColCutLine(Float:sX,Float:sY,Float:sZ,Float:eX,Float:eY,Float:eZ,&Float:x,&Float:y,&Float:z,Float:cut_size=0.0){
	new Float:radius, Float:rx, Float:rz;
	x = y = z = 0.0;
	ColAndreas::RayCastLine(sX,sY,sZ,eX,eY,eZ,x,y,z);
	if(x == 0.0) x = eX;
	if(y == 0.0) y = eY;
	if(z == 0.0) z = eZ;
	if((radius = GetDistanceBetweenPoints3D(sX,sY,sZ,x,y,z)) <= 0.0) return 0;
	CompRotationFloat(-(acos((z-sZ)/radius)-90.0),rx);
	CompRotationFloat((atan2(y-sY,x-sX)-90.0),rz);
	if(radius-cut_size > 0.0) radius -= cut_size;
	GetPointInFront3D(sX,sY,sZ,rx,rz,radius,x,y,z);
	return 1;
}