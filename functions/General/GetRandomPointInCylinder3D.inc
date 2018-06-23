//GetRandomPointInCylinder3D by Abyss Morgan
Tryg3D::Function:: GetRandomPointInCylinder3D(Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:radius,&Float:tx,&Float:ty,&Float:tz){
	new Float:px,Float:py,Float:pz,Float:trx,Float:trz;
	GetRotationFor2Point3D(xA,yA,zA,xB,yB,zB,trx,trz);
	GetPointInFront3D(xA,yA,zA,trx,trz,Tryg3D::RandomFloat(0.0,GetDistanceBetweenPoints3D(xA,yA,zA,xB,yB,zB)),px,py,pz);
	GetPointInFront3DEx(px,py,pz,Tryg3D::RandomFloat(0.0,360.0),trx,CompRotationFloat(trz+90.0),Tryg3D::RandomFloat(0.0,radius),tx,ty,tz);
}