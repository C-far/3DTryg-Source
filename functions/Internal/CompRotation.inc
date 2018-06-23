Tryg3D::Function:: CompRotation(rotation,&crotation=0){
	crotation = rotation;
	while(crotation < 0) crotation += 360;
	while(crotation >= 360) crotation -= 360;
	return crotation;
}