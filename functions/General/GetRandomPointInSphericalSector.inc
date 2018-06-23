//Beta Algorithm by Abyss Morgan
Tryg3D::Function:: GetRandomPointInSphericalSector(Float:x,Float:y,Float:z,Float:rx,Float:rz,Float:radius,Float:vrx,Float:vrz,&Float:tx,&Float:ty,&Float:tz){
	new Float:rand_rx = CompRotationFloat(Tryg3D::RandomFloat(rx-vrx+360.0,rx+vrx+360.0,6)),
		Float:rand_rz = CompRotationFloat(Tryg3D::RandomFloat(rz-vrz+360.0,rz+vrz+360.0,6)),
		Float:rand_rad = Tryg3D::RandomFloat(0.0,radius,6);
		
	vrx /= 2.0;
	vrz /= 2.0;

	if(rand_rad > radius) rand_rad = radius;
	
	if(rand_rx > rx+vrx) rand_rx = rx+vrx;
	if(rand_rx < rx-vrx) rand_rx = rx-vrx;
	
	if(rand_rz > rz+vrz) rand_rz = rz+vrz;
	if(rand_rz < rz-vrz) rand_rz = rz-vrz;
	
	GetPointInFront3D(x,y,z,rand_rx,rand_rz,rand_rad,tx,ty,tz);
}