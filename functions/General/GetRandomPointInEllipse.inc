Tryg3D::Function:: GetRandomPointInEllipse(Float:cx,Float:cy,Float:size_x,Float:size_y,&Float:tx,&Float:ty){
	new Float:omega = Tryg3D::RandomFloat(0.0,360.0,6);
	GetPointInFront2D(cx,cy,omega,Tryg3D::RandomFloat(0.0,GetEllipseRadius(size_x,size_y,omega),6),tx,ty);
}