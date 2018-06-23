Tryg3D::Function:: Float:FCNPC::SetTargetAngle(npcid,Float:x,Float:y,&Float:rz=0.0){
	new Float:mx,Float:my;
	FCNPC::GetPosition(npcid,mx,my,rz);
	GetRotationFor2Point2D(mx,my,x,y,rz);
	FCNPC::SetAngle(npcid,rz);
	return rz;
}