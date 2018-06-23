//Author: hesambia random.inc
Tryg3D::Function:: Float:Tryg3D::RandomFloat(Float:min,Float:max,accuracy = 4){
	if(min >= max) return 0.0;
	if(min < 0.0 || max < 0.0) return 0.0;
	if(accuracy < 1 || accuracy > 6) accuracy = 4;
	new T3D:divValue = floatround(floatpower(10.0,accuracy));
	return random(floatround(max)-floatround(min))+min+(random(T3D:divValue)/T3D:divValue);
}

#if (defined ENABLE_3D_TRYG_YSI_SUPPORT)
	#if !defined RandomFloat
		#define RandomFloat Tryg3D_RandomFloat
	#endif
#else
	#define RandomFloat Tryg3D_RandomFloat
#endif
