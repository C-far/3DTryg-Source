Tryg3D::Function:: IsPointInUnderground(Float:x,Float:y,Float:z){
	new Float:tmpzA;
	Tryg3D::MapAndreasFindZ(x,y,tmpzA);
	return (z < tmpzA && !IsPointInWater(x,y,z));
}