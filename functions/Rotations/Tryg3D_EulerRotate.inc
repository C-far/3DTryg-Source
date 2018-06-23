//EulerRotate by Nero_3D
Tryg3D::Function:: Tryg3D::EulerRotate(Float:rx,Float:ry,Float:rz,Float:oX,Float:oY,Float:oZ,&Float:tx,&Float:ty,&Float:tz,T3D:eulermode:mode=T3D:euler_default){
	Tryg3D::GetQuatFromEuler(rx,ry,rz,Float:mode,rx,ry,rz,mode);
	Tryg3D::QuatRotate(Float:mode,rx,ry,rz,oX,oY,oZ,tx,ty,tz);
}