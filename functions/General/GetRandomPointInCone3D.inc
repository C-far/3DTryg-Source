//GetRandomPointInCone3D by Abyss Morgan
Tryg3D::Function:: GetRandomPointInCone3D(Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:pointA_radius,Float:pointB_radius,&Float:tx,&Float:ty,&Float:tz){
	new Float:px,Float:py,Float:pz,Float:trx,Float:trz,
		Float:dist = GetDistanceBetweenPoints3D(xA,yA,zA,xB,yB,zB),
		Float:rand_dist = Tryg3D::RandomFloat(0.0,dist),
		Float:radius = rand_dist*((pointB_radius-pointA_radius)*(1.0/dist))+pointA_radius;
	GetRotationFor2Point3D(xA,yA,zA,xB,yB,zB,trx,trz);
	GetPointInFront3D(xA,yA,zA,trx,trz,rand_dist,px,py,pz);
	GetPointInFront3DEx(px,py,pz,Tryg3D::RandomFloat(0.0,360.0),trx,CompRotationFloat(trz+90.0),Tryg3D::RandomFloat(0.0,radius),tx,ty,tz);
}