//Beta Algorithm by Abyss Morgan
Tryg3D::Function:: GetRandomPointOnSphericalSector(Float:x,Float:y,Float:z,Float:rx,Float:rz,Float:radius,Float:vrx,Float:vrz,&Float:tx,&Float:ty,&Float:tz){
	vrx /= 2.0;
	vrz /= 2.0;
	new Float:rand_rx = CompRotationFloat(Tryg3D::RandomFloat(rx-vrx+360.0,rx+vrx+360.0,6)),
		Float:rand_rz = CompRotationFloat(Tryg3D::RandomFloat(rz-vrz+360.0,rz+vrz+360.0,6));
	
	if(rand_rx > rx+vrx) rand_rx = rx+vrx;
	if(rand_rx < rx-vrx) rand_rx = rx-vrx;
	
	if(rand_rz > rz+vrz) rand_rz = rz+vrz;
	if(rand_rz < rz-vrz) rand_rz = rz-vrz;
	
	GetPointInFront3D(x,y,z,rand_rx,rand_rz,radius,tx,ty,tz);
}