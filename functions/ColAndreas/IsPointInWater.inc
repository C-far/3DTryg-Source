Tryg3D::Function:: IsPointInWater(Float:x,Float:y,Float:z=0.0){
	if(z > 0.0) return 0;
	new Float:tmpzA, Float:tmpzB;
	Tryg3D::MapAndreasFindZ(x,y,tmpzA);
	UndergroundFindZ(x,y,tmpzB);
	return ((z >= tmpzB) && (tmpzB <= 0.0) && (tmpzA > -0.001 && tmpzA < 0.001));
}