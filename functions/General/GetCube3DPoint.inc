Tryg3D::Function:: GetCube3DPoint(OrientationCube3D:orientation,Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,Float:size_x,Float:size_y,Float:size_z,&Float:tx,&Float:ty,&Float:tz){
	ShiftOffsetToPosition(x,y,z,rx,ry,rz,(Cube3DOffset[orientation][0]*size_x),(Cube3DOffset[orientation][1]*size_y),(Cube3DOffset[orientation][2]*size_z),tx,ty,tz);
}