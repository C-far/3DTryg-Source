Tryg3D::Function:: IsBetweenPlayersIsWall(playerid,targetid){
	new Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:T3D:tmp;
	GetPlayerPos(playerid,xA,yA,zA);
	GetPlayerPos(targetid,xB,yB,zB);
	return ColAndreas::RayCastLine(xA,yA,zA,xB,yB,zB,T3D:tmp,T3D:tmp,T3D:tmp);
}