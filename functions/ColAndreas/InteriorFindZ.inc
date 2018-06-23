Tryg3D::Function:: Float:InteriorFindZ(Float:px,Float:py,Float:pz=1000.0,Float:size=2.0,&Float:z=0.0){
	z = 0.0;
	ColAndreas::RayCastLine(px,py,pz+size,px,py,pz-100.0,px,py,z);
	return z;
}