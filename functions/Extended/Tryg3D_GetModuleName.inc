Tryg3D::Function:: Tryg3D::GetModuleName(Tryg3D::Module:moduleid,module_name[],maxdest=sizeof(module_name)){
	switch(moduleid){
		case TRYG3D_MODULEID_MAPANDREAS:	format(module_name,maxdest,"MapAndreas");
		case TRYG3D_MODULEID_COLANDREAS:	format(module_name,maxdest,"ColAndreas");
		case TRYG3D_MODULEID_YSF:			format(module_name,maxdest,"YSF");
		case TRYG3D_MODULEID_STREAMER:		format(module_name,maxdest,"Streamer");
		case TRYG3D_MODULEID_FOXFOREACH:	format(module_name,maxdest,"FoxForeach");
		case TRYG3D_MODULEID_YSIFOREACH:	format(module_name,maxdest,"YSIForeach");
		case TRYG3D_MODULEID_FCNPC:			format(module_name,maxdest,"FCNPC");
		case TRYG3D_MODULEID_STREAM3D:		format(module_name,maxdest,"Stream3D");
		case TRYG3D_MODULEID_ACTOR:			format(module_name,maxdest,"Actor");
		case TRYG3D_MODULEID_ATM:			format(module_name,maxdest,"ATM");
		case TRYG3D_MODULEID_ANIMS:			format(module_name,maxdest,"Anims");
		case TRYG3D_MODULEID_VEHSTREAMER:	format(module_name,maxdest,"VehicleStreamer");
		case TRYG3D_MODULEID_VEHICLECOL:	format(module_name,maxdest,"VehicleCollision");
	}
}
