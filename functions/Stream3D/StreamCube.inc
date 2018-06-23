Tryg3D::Function:: Stream:StreamCube(Float:minx,Float:miny,Float:minz,Float:maxx,Float:maxy,Float:maxz){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_cube2d;
	StreamData[T3D:minX] = minx;
	StreamData[T3D:minY] = miny;
	StreamData[T3D:minZ] = minz;
	StreamData[T3D:maxX] = maxx;
	StreamData[T3D:maxY] = maxy;
	StreamData[T3D:maxZ] = maxz;
	return StreamData;
}