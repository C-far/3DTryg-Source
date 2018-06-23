Tryg3D::Function:: IsPlayerParaFall(playerid){
	new T3D:index = GetPlayerAnimationIndex(playerid);
	return (T3D:index == 958 || T3D:index == 959 || T3D:index == 961 || T3D:index == 962 || T3D:index == 1134);
}
