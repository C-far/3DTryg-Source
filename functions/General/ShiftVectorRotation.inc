Tryg3D::Function:: ShiftVectorRotation(Float:x,Float:y,Float:z,Float:rx,Float:ry,Float:rz,&Float:tx,&Float:ty,&Float:tz){
	//Normalizing, but isn`t needed for the matrix rotation
	new Float:dist = VectorSize(x,y,z);
	if(dist <= 0.0){
		tx = x, ty = y, tz = z;
		return 0;
	}
	x /= dist, y /= dist, z /= dist;
	
	//Get rotation matrix from degrees
	new Float:T3D:matrix[3][3];
	Tryg3D::GetRotationMatrixEuler(T3D:matrix,rx,ry,rz);
	Tryg3D::MatrixRotate(T3D:matrix,x,y,z,tx,ty,tz);
	return 1;
}

