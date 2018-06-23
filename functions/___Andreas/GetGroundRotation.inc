Tryg3D::Function:: GetGroundRotation(Float:x,Float:y,Float:size,&Float:rx,&Float:ry){
	new Float:tpx1,Float:tpy1,Float:tpz1,
		Float:tpx2,Float:tpy2,Float:tpz2,
		Float:T3D:tmp;
	GetPointInFront2D(x,y,0.0,size,tpx1,tpy1);
	GetPointInFront2D(x,y,180.0,size,tpx2,tpy2);
	Tryg3D::MapAndreasFindZ(tpx1,tpy1,tpz1);
	Tryg3D::MapAndreasFindZ(tpx2,tpy2,tpz2);
	GetRotationFor2Point3D(tpx1,tpy1,tpz1,tpx2,tpy2,tpz2,rx,T3D:tmp);
	
	GetPointInFront2D(x,y,90.0,size,tpx1,tpy1);
	GetPointInFront2D(x,y,270.0,size,tpx2,tpy2);
	Tryg3D::MapAndreasFindZ(tpx1,tpy1,tpz1);
	Tryg3D::MapAndreasFindZ(tpx2,tpy2,tpz2);
	GetRotationFor2Point3D(tpx1,tpy1,tpz1,tpx2,tpy2,tpz2,ry,T3D:tmp);
}