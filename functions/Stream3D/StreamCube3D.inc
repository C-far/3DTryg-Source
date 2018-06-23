Tryg3D::Function:: Stream:StreamCube3D(Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,Float:size_x,Float:size_y,Float:size_z){
	new StreamCreate(StreamData);
	StreamData[T3D:type] = s_cube3d;
	StreamData[T3D:X] = x;
	StreamData[T3D:Y] = y;
	StreamData[T3D:Z] = z;
	StreamData[T3D:minX] = rx;
	StreamData[T3D:minY] = ry;
	StreamData[T3D:minZ] = rz;
	StreamData[T3D:maxX] = size_x;
	StreamData[T3D:maxY] = size_y;
	StreamData[T3D:maxZ] = size_z;
	return StreamData;
}