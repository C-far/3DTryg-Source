//Abyss Morgan Algorithm Spherical Sector
Tryg3D::Function:: IsPointInSphericalSector(Float:px,Float:py,Float:pz,Float:x,Float:y,Float:z,Float:rx,Float:rz,Float:radius,Float:vrx,Float:vrz){
	if(GetDistanceBetweenPoints3D(px,py,pz,x,y,z) > radius) return 0;
	new Float:trx,Float:trz;
	vrx /= 2.0;
	vrz /= 2.0;
	if(!GetRotationFor2Point3D(x,y,z,px,py,pz,trx,trz)) return 0;
	return (IsRotationTest(trx,rx-vrx,rx+vrx) && IsRotationTest(trz,rz-vrz,rz+vrz));
}