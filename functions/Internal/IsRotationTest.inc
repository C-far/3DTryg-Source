Tryg3D::Function:: IsRotationTest(Float:rotation,Float:r_min,Float:r_max){
	rotation = CompRotationFloat(rotation);
	r_min = CompRotationFloat(r_min);
	r_max = CompRotationFloat(r_max);
	if(r_min > r_max){
		if((rotation >= 0.0 && rotation <= r_max) || (rotation >= r_min && rotation <= 360.0)) return 1;
	} else {
		if(rotation >= r_min && rotation <= r_max) return 1;
	}
	return 0;
}