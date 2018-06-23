Tryg3D::Function:: ColAndreas::FindGroundZ(Float:x,Float:y,Float:z,&Float:gZ){
	new Float:gX,Float:gY;
	ColAndreas::RayCastLine(x,y,z,x,y,z-1000.0,gX,gY,gZ);
}