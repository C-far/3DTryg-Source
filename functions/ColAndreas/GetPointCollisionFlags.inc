Tryg3D::Function:: GetPointCollisionFlags(Float:x,Float:y,Float:z,interiorid=0){
	new bool:isinterior = false, flag_value;
	if(interiorid != 0){
		flag_value |= POSITION_FLAG_INTERIOR;
		isinterior = true;
	} else {
		flag_value |= POSITION_FLAG_WORLD;
	}
	
	if(IsPointInUnderwater(x,y,z)){
		flag_value |= POSITION_FLAG_WATER;
		flag_value |= POSITION_FLAG_UNDERWATER;
	} else if(IsPointInWater(x,y,z)){
		flag_value |= POSITION_FLAG_WATER;
	} else if(IsPointInAir(x,y,z,isinterior,2.2)){
		flag_value |= POSITION_FLAG_AIR;
	} else if(IsPointInUnderground(x,y,z)){
		flag_value |= POSITION_FLAG_UNDERGROUND;
	} else {
		flag_value |= POSITION_FLAG_GROUND;
	}
	return flag_value;
}