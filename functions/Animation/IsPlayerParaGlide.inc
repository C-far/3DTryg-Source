Tryg3D::Function:: IsPlayerParaGlide(playerid){
	new T3D:index = GetPlayerAnimationIndex(playerid);
	return (T3D:index == 963 || T3D:index == 965 || T3D:index == 971 || T3D:index == 976 || T3D:index == 978);
}