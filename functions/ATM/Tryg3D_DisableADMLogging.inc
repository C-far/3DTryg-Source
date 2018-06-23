Tryg3D::Function:: Tryg3D::DisableADMLogging(bool:disable){
	if(disable){
		SetSVarInt("ADM:Logging:Disable",1);
	} else {
		SetSVarInt("ADM:Logging:Disable",0);
	}
}