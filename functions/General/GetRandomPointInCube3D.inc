Tryg3D::Function:: GetRandomPointInCube3D(Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,Float:size_x,Float:size_y,Float:size_z,&Float:tx,&Float:ty,&Float:tz){
	if(size_x <= 0 || size_y <= 0 || size_z <= 0.0) return 0;
	new Float:offset_x,Float:offset_y,Float:offset_z;
	size_x /= 2.0, size_y /= 2.0, size_z /= 2.0;
	GetRandomPointInCube(-size_x,-size_y,-size_z,size_x,size_y,size_z,offset_x,offset_y,offset_z);
	ShiftOffsetToPosition(x,y,z,rx,ry,rz,offset_x,offset_y,offset_z,tx,ty,tz);
	return 1;
}