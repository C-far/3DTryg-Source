Tryg3D::Function:: GetRandomPointInEllipticalCyl2D(Float:cx,Float:cy,Float:minz,Float:maxz,Float:size_x,Float:size_y,&Float:tx,&Float:ty,&Float:tz){
	new Float:omega = Tryg3D::RandomFloat(0.0,360.0,6);
	GetPointInFront2D(cx,cy,omega,Tryg3D::RandomFloat(0.0,GetEllipseRadius(size_x,size_y,omega),6),tx,ty);
	tz = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minz-maxz,2)),6)+minz;
}