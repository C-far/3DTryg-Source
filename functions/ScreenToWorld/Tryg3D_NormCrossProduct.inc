Tryg3D::Function:: Tryg3D::NormCrossProduct(&Float:x,&Float:y,&Float:z,Float:v1x,Float:v1y,Float:v1z,Float:v2x,Float:v2y,Float:v2z){
	x = v1y * v2z - v2y * v1z;
	y = v1z * v2x - v2z * v1x;
	z = v1x * v2y - v2x * v1y;
	
	v1x = VectorSize(x,y,z);
	
	x /= v1x;
	y /= v1x;
	z /= v1x;
}