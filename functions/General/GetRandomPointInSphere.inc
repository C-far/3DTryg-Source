Tryg3D::Function:: GetRandomPointInSphere(Float:x,Float:y,Float:z,Float:radius,&Float:tx,&Float:ty,&Float:tz){
	GetPointInFront3D(x,y,z,Tryg3D::RandomFloat(0.0,360.0),Tryg3D::RandomFloat(0.0,360.0),Tryg3D::RandomFloat(0.0,radius),tx,ty,tz);
}