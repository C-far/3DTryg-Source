//x,y,z - cube center point, rx,ry,rz - cube rotations
Tryg3D::Function:: IsPointInCube3D(Float:px,Float:py,Float:pz,Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,Float:size_x,Float:size_y,Float:size_z){
	if(size_x <= 0.0 || size_y <= 0.0 || size_z <= 0.0) return 0;
	new Float:offset_x,Float:offset_y,Float:offset_z;
	size_x /= 2.0, size_y /= 2.0, size_z /= 2.0;
	ShiftPositionToOffset(x,y,z,rx,ry,rz,offset_x,offset_y,offset_z,px,py,pz);
	return IsPointInCube(offset_x,offset_y,offset_z,-size_x,-size_y,-size_z,size_x,size_y,size_z); 
}