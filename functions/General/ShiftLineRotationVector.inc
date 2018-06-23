//Original code by Crayder
Tryg3D::Function:: ShiftLineRotationVector(Float:sX,Float:sY,Float:sZ,Float:eX,Float:eY,Float:eZ,Float:rx,Float:ry,Float:rz,&Float:nX,&Float:nY,&Float:nZ){
	//Get difference
	eX -= sX, eY -= sY, eZ -= sZ;
	
	//Normalizing, but isn`t needed for the matrix rotation
	new Float:dist = VectorSize(eX,eY,eZ);
	if(dist <= 0.0){
		nX = eX, nY = eY, nZ = eZ;
		return 0;
	}
	eX /= dist, eY /= dist, eZ /= dist;
	
	//Get rotation matrix from degrees
	new Float:T3D:matrix[3][3];
	Tryg3D::GetRotationMatrixEuler(T3D:matrix,rx,ry,rz);
	Tryg3D::MatrixRotate(T3D:matrix,eX,eY,eZ,nX,nY,nZ);
	return 1;
}
