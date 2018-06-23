Tryg3D::Function:: GenerateGangZone(Float:x,Float:y,Float:radius,&Float:minx,&Float:miny,&Float:maxx,&Float:maxy){
	minx = x - radius;
	miny = y - radius;
	maxx = x + radius;
	maxy = y + radius;
}
