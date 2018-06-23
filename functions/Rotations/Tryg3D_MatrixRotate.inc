//MatrixRotate by Nero_3D
Tryg3D::Function:: Tryg3D::MatrixRotate(Float:matrix[][],Float:oX,Float:oY,Float:oZ,&Float:x,&Float:y,&Float:z){
	x += oX * matrix[0][0] + oY * matrix[0][1] + oZ * matrix[0][2]; // M * v | v = [oX, oY, oZ]
	y += oX * matrix[1][0] + oY * matrix[1][1] + oZ * matrix[1][2];
	z += oX * matrix[2][0] + oY * matrix[2][1] + oZ * matrix[2][2];
}