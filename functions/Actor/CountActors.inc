Tryg3D::Function:: CountActors(){
	new T3D:count = 0;
	for(new i = 0, j = GetActorPoolSize(); i <= j; i++){
		if(IsValidActor(i)){
			T3D:count++;
		}
	}
	return T3D:count;
}