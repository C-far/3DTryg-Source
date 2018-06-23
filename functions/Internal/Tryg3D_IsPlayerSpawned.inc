Tryg3D::Function:: Tryg3D::IsPlayerSpawned(playerid){
	new T3D:pstate = GetPlayerState(playerid);
	if(T3D:pstate != 1 && T3D:pstate != 2 && T3D:pstate != 3) return false;
	return true;
}