Tryg3D::Function:: IsPlayerJump(playerid){
	new T3D:index = GetPlayerAnimationIndex(playerid);
	return (T3D:index == 1195 || T3D:index == 1198);
}