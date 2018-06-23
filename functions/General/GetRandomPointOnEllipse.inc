Tryg3D::Function:: GetRandomPointOnEllipse(Float:cx,Float:cy,Float:size_x,Float:size_y,&Float:tx,&Float:ty){
	new Float:omega = Tryg3D::RandomFloat(0.0,360.0,6);
	GetPointInFront2D(cx,cy,omega,GetEllipseRadius(size_x,size_y,omega),tx,ty);
}