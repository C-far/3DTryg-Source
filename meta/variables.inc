/************************************************************************************************************************************
 *                                                                                                                                  *
 * Enums/Variables                                                                                                                  *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

 //Tryg3D Plugin Module List
enum Tryg3D_Module {
	TRYG3D_MODULEID_MAPANDREAS,
	TRYG3D_MODULEID_COLANDREAS,
	TRYG3D_MODULEID_YSF,
	TRYG3D_MODULEID_STREAMER,
	TRYG3D_MODULEID_FOXFOREACH,
	TRYG3D_MODULEID_YSIFOREACH,
	TRYG3D_MODULEID_FCNPC,
	TRYG3D_MODULEID_STREAM3D,
	TRYG3D_MODULEID_ACTOR,
	TRYG3D_MODULEID_ATM,
	TRYG3D_MODULEID_ANIMS,
	TRYG3D_MODULEID_VEHSTREAMER,
	TRYG3D_MODULEID_VEHICLECOL
}

enum element_orientation {
	o_left,
	o_right,
	o_up,
	o_down,
	o_front,
	o_back
}

enum Item3D_Type {
	item_player,
	item_npc,
	item_actor,
	item_object,
	item_vehicle,
	item_dynamic_object,
	item_dynamic_pickup,
	item_dynamic_cp,
	item_dynamic_racecp,
	item_dynamic_mapicon,
	item_dynamic_3dtext,
	item_dynamic_actor,
	item_dynamic_vehicle,
	item_fcnpc
}

enum Vectors3D {
	Float:T3D:X, Float:T3D:Y, Float:T3D:Z, Float:T3D:A
}

enum Float3D {
	Float:T3D:X, Float:T3D:Y, Float:T3D:Z,
	Float:T3D:rX, Float:T3D:rY, Float:T3D:rZ,
	
	Float:T3D:tX, Float:T3D:tY, Float:T3D:tZ,
	
	T3D:VW, T3D:INT, Float:T3D:SPEED
}

enum LongFloat3D {
	Float:T3D:X, Float:T3D:Y, Float:T3D:Z,
	Float:T3D:rX, Float:T3D:rY, Float:T3D:rZ,
	
	Float:T3D:tX, Float:T3D:tY, Float:T3D:tZ,
	Float:T3D:trX, Float:T3D:trY, Float:T3D:trZ,
	
	Float:T3D:VecX, Float:T3D:VecY, Float:T3D:VecZ,
	
	T3D:VW, T3D:INT, Float:T3D:SPEED
}

enum OrientationCube3D {
	o_left_back_down,
	o_right_back_down,
	o_right_front_down,
	o_left_front_down,
	o_left_back_up,
	o_right_back_up,
	o_right_front_up,
	o_left_front_up
}

#if defined Tryg3D_Stream3D
	enum StreamType {
		s_invalid,
		s_circle,
		s_cylinder2d,
		s_cylinder3d,
		s_sphere,
		s_rectangle,
		s_cube2d,
		s_cube3d,
		s_circularsector,
		s_sphericalsector,
		s_cone,
		s_ellipse,
		s_ellipticalcyl2d
	}

	enum Stream3D {
		StreamType:T3D:type,
		
		Float:T3D:X,	Float:T3D:Y,	Float:T3D:Z,
		
		Float:T3D:minX,	Float:T3D:minY,	Float:T3D:minZ,
		Float:T3D:maxX,	Float:T3D:maxY,	Float:T3D:maxZ,
		
		Float:T3D:R
	}
#endif

static const Float:Cube3DOffset[OrientationCube3D][3] = {
	{-1.0,-1.0,-1.0},	//left - back - down
	{1.0,-1.0,-1.0},	//right - back - down
	{1.0,1.0,-1.0},		//right - front - down
	{-1.0,1.0,-1.0},	//left - front - down
	{-1.0,-1.0,1.0},	//left - back - up
	{1.0,-1.0,1.0},		//right - back - up
	{1.0,1.0,1.0},		//right - front - up
	{-1.0,1.0,1.0}		//left - front - up
};

new Float:Tryg3D::StreamDistance = 300.0;

new const Float:Tryg3D::WeaponDamage[] = {
	1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,82.5,0.0,1.0,9.9,46.2,0.0,8.25,13.2,46.2,3.3,3.3,4.95,6.6,8.25,
	9.9,9.9,6.6,24.75,41.25,82.5,82.5,1.0,46.2,82.5,0.0,0.33,0.33,0.0,0.0,0.0,0.0,0.0,2.64,9.9,330.0,82.5,1.0,1.0,165.0
};

new Tryg3D::VehicleFlags[212],
	Tryg3D::DeatchTick[MAX_PLAYERS];
