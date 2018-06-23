/************************************************************************************************************************************
 *                                                                                                                                  *
 * MapAndreas Update                                                                                                                *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#if defined Tryg3D_ColAndreas
	
	#define Tryg3D_MapAndreasFindZ						CA_FindZ_For2DCoord
	
#elseif defined Tryg3D_MapAndreas
	
	Tryg3D::Function:: Float:Tryg3D::MapAndreasFindZ(Float:x,Float:y,&Float:z=0.0){
		if(x <= -3000.0 || x >= 3000.0 || y <= -3000.0 || y >= 3000.0){
			z = 0.0;
		} else {
			MapAndreas_FindZ_For2DCoord(x,y,z);
		}
		return z;
	}
	
#endif