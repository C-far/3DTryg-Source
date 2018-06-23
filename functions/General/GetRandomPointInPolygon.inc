//Abyss Morgan Algorithm Polygon
Tryg3D::Function:: GetRandomPointInPolygon(Float:points[],&Float:tx,&Float:ty,maxpoints = sizeof(points)){
	new Float:minx, Float:miny, Float:maxx, Float:maxy, recheck = 1;
	
	minx = maxx = points[0];
	miny = maxy = points[1];
	
	for(new i = 2; i < maxpoints; i += 2){
		if(points[i] < minx)	minx = points[i];
		if(points[i] > maxx)	maxx = points[i];
		if(points[i+1] < miny) 	miny = points[i+1];
		if(points[i+1] > maxy)	maxy = points[i+1];
	}
	
	GetRandomPointInRectangle(minx,miny,maxx,maxy,tx,ty);
	while(!IsPointInPolygon(tx,ty,points,maxpoints)){
		GetRandomPointInRectangle(minx,miny,maxx,maxy,tx,ty);
		recheck++;
	}
	
	return recheck;
}