Tryg3D::Function:: GetArcPoints3D(Float:x,Float:y,Float:z,Float:tx,Float:ty,Float:tz,Float:ry,Float:height,Float:points[][],max_points = sizeof(points)){
	if(max_points < 3) return 0;
	if(height <= 0.0) return 0;
	
	new Float:rx,Float:rz;
	if(!GetRotationFor2Point3D(x,y,z,tx,ty,tz,rx,rz)) return 0;
	CompRotationFloat(ry,ry);
	
	new Float:px, Float:py, Float:pz,
		Float:cx, Float:cy, Float:cz,
		Float:center_dist = (GetDistanceBetweenPoints3D(x,y,z,tx,ty,tz)/2.0),
		Float:mercury = (180.0/max_points),
		Float:omega,
		idx = 0;
	
	GetPointInFront3D(x,y,z,rx,rz,center_dist,cx,cy,cz);
	for(new i = max_points-1; i >= 0; i--){
		CompRotationFloat(180.0-(mercury*idx),omega);
		GetPointInFront3D(0.0,0.0,0.0,omega,0.0,GetEllipseRadius(height,center_dist,omega),px,py,pz);
		ShiftOffsetToPosition(cx,cy,cz,rx,ry,rz,px,py,pz,points[idx][0],points[idx][1],points[idx][2]);
		idx++;
	}
	return 1;
}