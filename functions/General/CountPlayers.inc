Tryg3D::Function:: CountPlayers(bool:isplayer=true,bool:isnpc=true){
	new T3D:count = 0;
	Tryg3D::Foreach(i){
		if(IsPlayerNPC(i)){
			if(isnpc) T3D:count++;
		} else {
			if(isplayer) T3D:count++;
		}
	}
	return T3D:count;
}