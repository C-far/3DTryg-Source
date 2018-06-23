Tryg3D::Function:: IsPlayerSwim(playerid){
	new T3D:index = GetPlayerAnimationIndex(playerid);
	return (T3D:index == 1538 || T3D:index == 1539 || T3D:index == 1541 || T3D:index == 1544);
}