Tryg3D::Function:: IsPlayerStay(playerid){
	new T3D:index = GetPlayerAnimationIndex(playerid);
	return (T3D:index == 1189 || T3D:index == 1133);
}