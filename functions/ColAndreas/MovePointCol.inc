Tryg3D::Function:: MovePointCol(Float:StartX,Float:StartY,Float:StartZ,Float:EndX,Float:EndY,Float:EndZ,&Float:x,&Float:y,&Float:z){
	x = y = z = 0.0;
	ColAndreas::RayCastLine(StartX,StartY,StartZ,EndX,EndY,EndZ,x,y,z);
	if(x == 0.0) x = EndX;
	if(y == 0.0) y = EndY;
	if(z == 0.0) z = EndZ;
}