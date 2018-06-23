Tryg3D::Function:: GetRandomPointInGangZone(zoneid,&Float:tx,&Float:ty){
	new Float:minx,Float:miny,Float:maxx,Float:maxy;
	GangZoneGetPos(zoneid,minx,miny,maxx,maxy);
	GetRandomPointInRectangle(minx,miny,maxx,maxy,tx,ty);
}
