Tryg3D::Function:: Stream:StreamCylinder2D(Float:x,Float:y,Float:minz,Float:maxz,Float:radius){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_cylinder2d;
	StreamData[T3D:X] = x;
	StreamData[T3D:Y] = y;
	StreamData[T3D:minZ] = minz;
	StreamData[T3D:maxZ] = maxz;
	StreamData[T3D:R] = radius;
	return StreamData;
}