Tryg3D::Function:: IsPointInWater(Float:x,Float:y,Float:z=0.0){
	if(z > 0.0) return 0;
	new Float:tmpz;
	Tryg3D::MapAndreasFindZ(x,y,tmpz);
	return (tmpz == 0.0);
}