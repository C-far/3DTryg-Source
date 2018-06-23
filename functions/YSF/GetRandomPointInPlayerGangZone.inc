Tryg3D::Function:: GetRandomPointInPlayerGangZone(playerid,zoneid,&Float:tx,&Float:ty){
	new Float:minx,Float:miny,Float:maxx,Float:maxy;
	PlayerGangZoneGetPos(playerid,zoneid,minx,miny,maxx,maxy);
	GetRandomPointInRectangle(minx,miny,maxx,maxy,tx,ty);
}