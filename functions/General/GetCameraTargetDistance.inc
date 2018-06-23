Tryg3D::Function:: Float:GetCameraTargetDistance(Float:CamX,Float:CamY,Float:CamZ,Float:ObjX,Float:ObjY,Float:ObjZ,Float:FrX,Float:FrY,Float:FrZ){
	new Float:T3D:dist = GetDistanceBetweenPoints3D(CamX,CamY,CamZ,ObjX,ObjY,ObjZ);
	return GetDistanceBetweenPoints3D(ObjX,ObjY,ObjZ,(FrX * T3D:dist + CamX),(FrY * T3D:dist + CamY),(FrZ * T3D:dist + CamZ));
}