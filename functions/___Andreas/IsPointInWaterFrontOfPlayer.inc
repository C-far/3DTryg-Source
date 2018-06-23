Tryg3D::Deprecated:: IsPointInWaterFrontOfPlayer(playerid,Float:radius){
	new Float:x, Float:y, Float:z;
	GetPlayerPos(playerid,x,y,z);
	GetPointInFrontOfPlayer(playerid,x,y,radius);
	return IsPointInWater(x,y,0.0);
}