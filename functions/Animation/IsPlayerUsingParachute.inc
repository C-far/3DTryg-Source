Tryg3D::Function:: IsPlayerUsingParachute(playerid){
	new T3D:index = GetPlayerAnimationIndex(playerid);
	return (T3D:index >= 963 && T3D:index <= 979);
}