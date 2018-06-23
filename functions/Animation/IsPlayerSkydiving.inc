Tryg3D::Function:: IsPlayerSkydiving(playerid){
	new T3D:index = GetPlayerAnimationIndex(playerid);
	return (T3D:index >= 958 && T3D:index <= 962);
}