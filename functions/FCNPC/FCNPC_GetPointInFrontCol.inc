Tryg3D::Function:: Float:FCNPC::GetPointInFrontCol(npcid,&Float:tx,&Float:ty,Float:radius){
	new Float:rz,Float:z;
	FCNPC::GetPosition(npcid,tx,ty,z);
	if(IsPlayerInAnyVehicle(npcid)){
		GetVehicleZAngle(FCNPC::GetVehicleID(npcid),rz);
	} else {
		rz = FCNPC::GetAngle(npcid);
	}
	GetPointInFront3DCol(tx,ty,z,0.0,rz,radius,tx,ty,z);
	return rz;
}