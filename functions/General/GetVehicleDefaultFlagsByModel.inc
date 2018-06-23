Tryg3D::Function:: GetVehicleDefaultFlagsByModel(modelid){
	new flag_value = 0;
	switch(modelid){
		case 425,548,417,487,497,563,469,447,488: flag_value += VF_AIRBORNE + VF_HELICOPTER;
		case 460,476,511,512,520,593,592,553,519,513,577: flag_value += VF_AIRBORNE + VF_AIRPLANE;
		case 539: flag_value += VF_AIRBORNE;
	}
	switch(modelid){
		case 425,520,432: flag_value += VF_MILITARY;
	}
	switch(modelid){
		case 472,473,493,595,484,430,453,452,446,454,539,447,460: flag_value += VF_NATATORIAL;
	}
	switch(modelid){
		case 441,464,465,501,564,594: flag_value += VF_RC;
	}
	switch(modelid){
		case 471,468,586,463,523,521,461,522,581,448,462,510,481,509: flag_value += VF_BIKES;
	}
	switch(modelid){
		case 435,450,584,590,591,606,607,608,610,611: flag_value += VF_TRAILER;
	}
	switch(modelid){
		case 449,537,538: flag_value += VF_TRAIN;
	}
	switch(modelid){
		case 569,570,590: flag_value += VF_CARRIAGE;
	}
	if(modelid == 539 || ((flag_value & VF_NATATORIAL != VF_NATATORIAL) && (flag_value & VF_AIRBORNE != VF_AIRBORNE))) flag_value += VF_STREET;
	switch(modelid){
		case 437,544,431,407,408,570,569,538,537,449,532,524,403,514,515,443,435,433,432,406: {	}

		default: {
			if(flag_value&VF_NATATORIAL!=VF_NATATORIAL && flag_value&VF_AIRBORNE!=VF_AIRBORNE && flag_value&VF_RC!=VF_RC && flag_value&VF_BIKES!=VF_BIKES){
				flag_value += VF_TOWABLE;
			}
		}

	}
	switch(modelid){
		case 416,523,427,490,407,544,596,598,597,599: flag_value += VF_POLICE;
	}
	return flag_value;
}