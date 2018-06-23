Tryg3D::Function:: IsPlayerRunning(playerid){
	new T3D:index = GetPlayerAnimationIndex(playerid);
	return (T3D:index == 1231 || T3D:index == 1266 || T3D:index == 1196);
}