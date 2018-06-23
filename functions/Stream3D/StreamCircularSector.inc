Tryg3D::Function:: Stream:StreamCircularSector(Float:x,Float:y,Float:rz,Float:radius,Float:view_angle){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_circularsector;
	StreamData[T3D:X] = x;
	StreamData[T3D:Y] = y;
	StreamData[T3D:minZ] = rz;
	StreamData[T3D:R] = radius;
	StreamData[T3D:maxZ] = view_angle;
	return StreamData;
}