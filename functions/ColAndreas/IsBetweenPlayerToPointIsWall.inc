Tryg3D::Function:: IsBetweenPlayerToPointIsWall(playerid,Float:x,Float:y,Float:z){
	new Float:xA,Float:yA,Float:zA,Float:T3D:tmp;
	GetPlayerPos(playerid,xA,yA,zA);
	return ColAndreas::RayCastLine(xA,yA,zA,x,y,z,T3D:tmp,T3D:tmp,T3D:tmp);
}