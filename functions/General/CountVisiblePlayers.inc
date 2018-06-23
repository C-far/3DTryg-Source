Tryg3D::Function:: CountVisiblePlayers(playerid,bool:isplayer=true,bool:isnpc=true){
	new T3D:count = 0;
	Tryg3D::Foreach(i){
		if(i != playerid && IsPlayerStreamedIn(i,playerid)){
			if(IsPlayerNPC(i)){
				if(isnpc) T3D:count++;
			} else {
				if(isplayer) T3D:count++;
			}
		}
	}
	return T3D:count;
}