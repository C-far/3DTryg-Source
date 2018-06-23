Tryg3D::Function:: IsPointInGround(Float:x,Float:y,Float:z,bool:interior=false,Float:max_distance=2.2){
	if(z <= 0.0) return 0;
	new Float:tmpzA;
	if(interior){
		InteriorFindZ(x,y,z,2.0,tmpzA);
	} else {
		Tryg3D::MapAndreasFindZ(x,y,tmpzA);
	}
	return (z <= tmpzA+max_distance);
}