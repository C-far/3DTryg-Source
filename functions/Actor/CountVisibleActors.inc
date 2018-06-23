Tryg3D::Function:: CountVisibleActors(playerid){
	new T3D:count = 0;
	for(new i = 0, j = GetActorPoolSize(); i <= j; i++){
		if(IsValidActor(i) && IsActorStreamedIn(i,playerid)){
			T3D:count++;
		}
	}
	return T3D:count;
}