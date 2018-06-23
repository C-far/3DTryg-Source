Tryg3D::Function:: GetWallRotation(Float:sx,Float:sy,Float:sz,Float:ex,Float:ey,Float:ez,&Float:rx,&Float:rz,&Float:px=0.0,&Float:py=0.0,&Float:pz=0.0,Float:size=1.0,Float:cut_size=0.0){
	new Float:line_rx, Float:line_rz, Float:T3D:tmp;
	if(!GetRotationFor2Point3D(sx,sy,sz,ex,ey,ez,line_rx,line_rz)) return 0;
	
	new VecStart[4][Vectors3D], VecEnd[4][Vectors3D], VecProduct[4][Vectors3D];
	
	//Start: Right -> Left
	GetPointInFront3D(sx,sy,sz,line_rx,CompRotationFloat(line_rz-90.0),size,VecStart[0][T3D:X],VecStart[0][T3D:Y],VecStart[0][T3D:Z]);
	GetPointInFront3D(sx,sy,sz,line_rx,CompRotationFloat(line_rz+90.0),size,VecStart[1][T3D:X],VecStart[1][T3D:Y],VecStart[1][T3D:Z]);
	
	//Start: Down -> Up
	GetPointInFront3D(sx,sy,sz,CompRotationFloat(line_rx-90.0),line_rz,size,VecStart[2][T3D:X],VecStart[2][T3D:Y],VecStart[2][T3D:Z]);
	GetPointInFront3D(sx,sy,sz,CompRotationFloat(line_rx+90.0),line_rz,size,VecStart[3][T3D:X],VecStart[3][T3D:Y],VecStart[3][T3D:Z]);
	
	//End: Right -> Left
	GetPointInFront3D(ex,ey,ez,line_rx,CompRotationFloat(line_rz-90.0),size,VecEnd[0][T3D:X],VecEnd[0][T3D:Y],VecEnd[0][T3D:Z]);
	GetPointInFront3D(ex,ey,ez,line_rx,CompRotationFloat(line_rz+90.0),size,VecEnd[1][T3D:X],VecEnd[1][T3D:Y],VecEnd[1][T3D:Z]);
	
	//End: Down -> Up
	GetPointInFront3D(ex,ey,ez,CompRotationFloat(line_rx-90.0),line_rz,size,VecEnd[2][T3D:X],VecEnd[2][T3D:Y],VecEnd[2][T3D:Z]);
	GetPointInFront3D(ex,ey,ez,CompRotationFloat(line_rx+90.0),line_rz,size,VecEnd[3][T3D:X],VecEnd[3][T3D:Y],VecEnd[3][T3D:Z]);

	for(new i = 0; i < 4; i++){
		GetPointFor2Point3DEx(VecStart[1][T3D:X],VecStart[1][T3D:Y],VecStart[1][T3D:Z],VecEnd[i][T3D:X],VecEnd[i][T3D:Y],VecEnd[i][T3D:Z],20000.0,VecEnd[i][T3D:X],VecEnd[i][T3D:Y],VecEnd[i][T3D:Z]);
		MovePointCol(VecStart[i][T3D:X],VecStart[i][T3D:Y],VecStart[i][T3D:Z],VecEnd[i][T3D:X],VecEnd[i][T3D:Y],VecEnd[i][T3D:Z],VecProduct[i][T3D:X],VecProduct[i][T3D:Y],VecProduct[i][T3D:Z]);
	}
	
	MovePointColCutLine(sx,sy,sz,ex,ey,ez,px,py,pz,cut_size);
	
	if(!GetRotationFor2Point3D(VecProduct[0][T3D:X],VecProduct[0][T3D:Y],VecProduct[0][T3D:Z],VecProduct[1][T3D:X],VecProduct[1][T3D:Y],VecProduct[1][T3D:Z],T3D:tmp,rz)) return 0;
	if(!GetRotationFor2Point3D(VecProduct[2][T3D:X],VecProduct[2][T3D:Y],VecProduct[2][T3D:Z],VecProduct[3][T3D:X],VecProduct[3][T3D:Y],VecProduct[3][T3D:Z],rx,T3D:tmp)) return 0;
	return 1;
}
