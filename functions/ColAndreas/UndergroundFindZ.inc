Tryg3D::Function:: Float:UndergroundFindZ(Float:x,Float:y,&Float:z=0.0){
	z = 0.0;
	ColAndreas::RayCastLine(x,y,-0.002,x,y,-100.0,x,y,z);
	return z;
}