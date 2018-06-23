Tryg3D::Function:: Tryg3D::IsModuleLoaded(Tryg3D::Module:moduleid){
	switch(moduleid){
		case TRYG3D_MODULEID_MAPANDREAS:	return Tryg3D_Module_MapAndreas;
		case TRYG3D_MODULEID_COLANDREAS:	return Tryg3D_Module_ColAndreas;
		case TRYG3D_MODULEID_YSF:			return Tryg3D_Module_YSF;
		case TRYG3D_MODULEID_STREAMER:		return Tryg3D_Module_Streamer;
		case TRYG3D_MODULEID_FOXFOREACH:	return Tryg3D_Module_FoxForeach;
		case TRYG3D_MODULEID_YSIFOREACH:	return Tryg3D_Module_YSIForeach;
		case TRYG3D_MODULEID_FCNPC:			return Tryg3D_Module_FCNPC;
		case TRYG3D_MODULEID_STREAM3D:		return Tryg3D_Module_Stream3D;
		case TRYG3D_MODULEID_ACTOR:			return Tryg3D_Module_Actor;
		case TRYG3D_MODULEID_ATM:			return Tryg3D_Module_ATM;
		case TRYG3D_MODULEID_ANIMS:			return Tryg3D_Module_Anims;
		case TRYG3D_MODULEID_VEHSTREAMER:	return Tryg3D_Module_VehicleStreamer;
		case TRYG3D_MODULEID_VEHICLECOL:	return Tryg3D_Module_VehicleCollision;
	}
	return 0;
}
