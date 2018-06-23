Tryg3D::Function:: Float:FCNPC::GetPointInFront(npcid,&Float:tx,&Float:ty,Float:radius){
	new Float:rz;
	FCNPC::GetPosition(npcid,tx,ty,rz);
	if(IsPlayerInAnyVehicle(npcid)){
		GetVehicleZAngle(FCNPC::GetVehicleID(npcid),rz);
	} else {
		rz = FCNPC::GetAngle(npcid);
	}
	GetPointInFront2D(tx,ty,rz,radius,tx,ty);
	return rz;
}