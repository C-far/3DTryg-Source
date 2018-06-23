Tryg3D::Function:: Stream:StreamSphericalSector(Float:x,Float:y,Float:z,Float:rx,Float:rz,Float:radius,Float:vrx,Float:vrz){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_sphericalsector;
	StreamData[T3D:X] = x;
	StreamData[T3D:Y] = y;
	StreamData[T3D:Z] = z;
	StreamData[T3D:minX] = rx;
	StreamData[T3D:minZ] = rz;
	StreamData[T3D:R] = radius;
	StreamData[T3D:maxX] = vrx;
	StreamData[T3D:maxZ] = vrz;
	return StreamData;
}