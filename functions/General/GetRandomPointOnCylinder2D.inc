Tryg3D::Function:: GetRandomPointOnCylinder2D(Float:x,Float:y,Float:minz,Float:maxz,Float:radius,&Float:tx,&Float:ty,&Float:tz){
	GetRandomPointOnCircle(x,y,radius,tx,ty);
	tz = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minz-maxz,2)))+minz;
}