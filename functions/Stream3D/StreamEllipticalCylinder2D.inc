Tryg3D::Function:: Stream:StreamEllipticalCylinder2D(Float:cx,Float:cy,Float:minz,Float:maxz,Float:size_x,Float:size_y){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_ellipticalcyl2d;
	StreamData[T3D:X] = cx;
	StreamData[T3D:Y] = cy;
	StreamData[T3D:minZ] = minz;
	StreamData[T3D:maxZ] = maxz;
	StreamData[T3D:minX] = size_x;
	StreamData[T3D:minY] = size_y;
	return StreamData;
}