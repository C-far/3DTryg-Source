/************************************************************************************************************************************
 *                                                                                                                                  *
 * Symbols                                                                                                                          *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#if !defined TRYG3D_ELEMENT_TAG
	#define TRYG3D_ELEMENT_TAG							{Text3D,DynamicObject,DynamicPickup,DynamicCP,DynamicRaceCP,DynamicMapIcon,DynamicText3D,DynamicArea,DynamicActor,DynamicVehicle,_}:
#endif

#if !defined FLOAT_PI
	#define FLOAT_PI		 							(3.14159265358979323846)
#endif

#if !defined FLOAT_EULER
	#define FLOAT_EULER									(2.718281828459)
#endif

#if !defined FLOAT_NAN
	#define FLOAT_NAN 									(Float:0xFFFFFFFF)
#endif

#if !defined FLOAT_DEFECT
	#define FLOAT_DEFECT								(0.000001)
#endif

#if !defined INVALID_ROTATION
	#define INVALID_ROTATION							(-1000.0)
#endif

#if !defined VBTP
	#define VBTP 										(0x7FFFFFFF)
#endif

#if !defined VLTP
	#define VLTP 										(0x80000000)
#endif

#if !defined FLOAT_INFINITY
    #define FLOAT_INFINITY 								(Float:0x7F800000)
#endif

#if !defined MAX_POLYGON_POINTS
	#define MAX_POLYGON_POINTS 							(256)
#endif

#if !defined VEHICLE_SPEED_MULTIPLIER
	#define VEHICLE_SPEED_MULTIPLIER 					(170.0)
#endif

#if !defined PLAYER_SPEED_MULTIPLIER
	#define PLAYER_SPEED_MULTIPLIER						(1.0)
#endif

#if !defined INVALID_MOVE_TIME
	#define INVALID_MOVE_TIME 							(-1)
#endif

#if !defined INVALID_MOVE_SPEED
	#define INVALID_MOVE_SPEED							(-1.0)
#endif

#if !defined VERTICAL_CAMERA_RADIUS
	#define VERTICAL_CAMERA_RADIUS 						(55.0) // 27.5 * 2
#endif

#if !defined HORIZONTAL_CAMERA_RADIUS
	#define HORIZONTAL_CAMERA_RADIUS					(70.0) // 35.0 * 2
#endif

#if !defined INVALID_VIRTUAL_WORLD
	#define	INVALID_VIRTUAL_WORLD						(-2000)
#endif

//Vehicle Flags
#define VF_STREET										(0b0000000000000001)
#define VF_AIRBORNE										(0b0000000000000010)
#define VF_NATATORIAL									(0b0000000000000100)
#define VF_MILITARY										(0b0000000000001000)
#define VF_TRAIN										(0b0000000000010000)
#define VF_RC		 									(0b0000000000100000)
#define VF_CARRIAGE 									(0b0000000001000000)
#define VF_AIRPLANE										(0b0000000010000000)
#define VF_HELICOPTER 									(0b0000000100000000)
#define VF_BIKES	 									(0b0000001000000000)
#define VF_TRAILER										(0b0000010000000000)
#define VF_TOWABLE										(0b0000100000000000)
#define VF_POLICE		 								(0b0001000000000000)

//Player Position Flag
#if defined Tryg3D_ColAndreas
	#define POSITION_FLAG_WORLD							(0b0000000000000001)
	#define POSITION_FLAG_INTERIOR						(0b0000000000000010)
	#define POSITION_FLAG_AIR							(0b0000000000000100)
	#define POSITION_FLAG_GROUND						(0b0000000000001000)
	#define POSITION_FLAG_WATER							(0b0000000000010000)
	#define POSITION_FLAG_UNDERWATER					(0b0000000000100000)
	#define POSITION_FLAG_UNDERGROUND					(0b0000000001000000)
#endif

#if (!defined VEHICLE_PART_RFTIRE)
	#define VEHICLE_PART_RFTIRE 						(1)	// Right Front tire
	#define VEHICLE_PART_LFTIRE 						(2)	// Left Front tire
	#define VEHICLE_PART_RRTIRE 						(3)	// Right Rear tire
	#define VEHICLE_PART_LRTIRE 						(4)	// Left Rear tire
	#define VEHICLE_PART_HOOD 							(5)	// In Front
	#define VEHICLE_PART_TRUNK 							(6)	// Behind
#endif

#define VEHICLE_PART_ROOF 								(7)	// Roof
#define VEHICLE_PART_CHASSIS							(8)	// Chassis
#define VEHICLE_PART_PETROLCAP							(9) // Petrolcap
