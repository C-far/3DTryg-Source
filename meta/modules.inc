/************************************************************************************************************************************
 *                                                                                                                                  *
 * Modules                                                                                                                          *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

//Detect MapAndreas Plugin
#if ((defined MapAndreas_FindZ_For2DCoord) && (!defined DISABLE_3D_TRYG_MAPANDREAS))
	#define Tryg3D_MapAndreas
	#define Tryg3D_MapAndreasVersion					(10201) //a.b.c 10000*a+100*b+c
	#define Tryg3D_Module_MapAndreas					(1)
	#if (!defined MapAndreas_GetAddress)
		#error [ADM] You need MapAndreas v1.2.1 (8.ct8.pl/d/MapAndreas%201.2.1)
	#endif
#else
	#define Tryg3D_Module_MapAndreas					(0)
#endif

//Detect ColAndreas Plugin
#if ((defined COLANDREAS_VERSION) && (!defined COLANDREAS))
	#define COLANDREAS									COLANDREAS_VERSION
#endif

#if ((defined COLANDREAS) && (!defined DISABLE_3D_TRYG_COLANDREAS))
	#define Tryg3D_ColAndreas
	#define Tryg3D_ColAndreasVersion					(10400) //a.b.c 10000*a+100*b+c
	#define Tryg3D_Module_ColAndreas					(1)
	
	#if !defined COLANDREAS_VERSION
		#define COLANDREAS_VERSION						(0)
	#endif
#else
	#define Tryg3D_Module_ColAndreas					(0)
#endif

//Detect YSF Plugin
#if ((defined _YSF_included) && (!defined DISABLE_3D_TRYG_YSF))
	#define Tryg3D_YSF
	#define Tryg3D_Module_YSF							(1)
	#if (!defined RemovePlayerForPlayer)
		#error [ADM] You need YSF R19 (github.com/kurta999/YSF/releases)
	#endif
#else
	#define Tryg3D_Module_YSF							(0)
#endif

//Detect Streamer Plugin
#if ((defined Streamer_AppendArrayData) && (defined INVALID_STREAMER_ID) && (!defined DISABLE_3D_TRYG_STREAMER))
	#define Tryg3D_Streamer
	#define Tryg3D_StreamerVersion						(0x293)
	#define Tryg3D_Module_Streamer						(1)
	#if (!defined Streamer_GetItemPos)
		#error [ADM] You need Streamer v2.9.3 (github.com/samp-incognito/samp-streamer-plugin/releases)
	#endif
#else
	#define Tryg3D_Module_Streamer						(0)
#endif

//Detect Streamer Plugin
#if ((defined Tryg3D_Streamer) && (defined STREAMER_TYPE_VEHICLE) && (!defined DISABLE_3D_TRYG_VEHSTREAMER))
	#define Tryg3D_VehicleStreamer
	#define Tryg3D_Module_VehicleStreamer				(1)
#else
	#define Tryg3D_Module_VehicleStreamer				(0)
#endif

//Detect FoxForeach Include
//Detect YSIForeach Include
#if ((defined _FoX_Foreach) && (!defined DISABLE_3D_TRYG_FOXFOREACH))
	#define Tryg3D_Foreach(%0) 							FoxForeach(%0,Character)
	#define Tryg3D_FoxForeach
	
	#define Tryg3D_Module_FoxForeach					(1)
	#define Tryg3D_Module_YSIForeach					(0)
#elseif ((defined _FOREACH_LOCAL_VERSION) && (!defined DISABLE_3D_TRYG_YSIFOREACH))
	#define Tryg3D_Foreach(%0)							foreach(new %0 : Character)
	#define Tryg3D_YSIForeach
	
	#define Tryg3D_Module_FoxForeach					(0)
	#define Tryg3D_Module_YSIForeach					(1)
#else
	#define Tryg3D_Foreach(%0)							for(new %0 = 0, p_%0 = GetPlayerPoolSize(); %0 <= p_%0; %0++) if(IsPlayerConnected(%0))
	
	#define Tryg3D_Module_FoxForeach					(0)
	#define Tryg3D_Module_YSIForeach					(0)
#endif

#define Tryg3DForeach									Tryg3D_Foreach

//Detect FCNPC Plugin
#if ((defined _FCNPC_included) && (defined FCNPC_INCLUDE_VERSION) && (!defined DISABLE_3D_TRYG_FCNPC))
	#define Tryg3D_FCNPC
	#define Tryg3D_FCNPC_Version						(180) //a.b.c 100*a+10*b+c
	#define Tryg3D_Module_FCNPC							(1)
	#if (FCNPC_INCLUDE_VERSION < Tryg3D_FCNPC_Version)
		#error [ADM] You need FCNPC v1.8.0 (github.com/ziggi/FCNPC/releases)
	#endif
#else
	#define Tryg3D_Module_FCNPC							(0)
#endif

//Detect Stream3D Module
#if defined ENABLE_3D_TRYG_STREAM3D
	#define Tryg3D_Stream3D
	#define Tryg3D_Module_Stream3D						(1)
#else
	#define Tryg3D_Module_Stream3D						(0)
#endif

//Detect a_actor Include
#if ((defined _actor_included) && (!defined DISABLE_3D_TRYG_ACTOR))
	#define Tryg3D_Actor
	#define Tryg3D_Module_Actor							(1)
#else
	#define Tryg3D_Module_Actor							(0)
#endif

//Detect ATM Module
#if !defined DISABLE_3D_TRYG_ATM
	#define Tryg3D_ATM
	#define Tryg3D_Module_ATM							(1)
#else
	#define Tryg3D_Module_ATM							(0)
#endif

//Detect Anims Module
#if defined ENABLE_3D_TRYG_ANIMS
	#define Tryg3D_Anims
	#define Tryg3D_Module_Anims							(1)
#else
	#define Tryg3D_Module_Anims							(0)
#endif

//Detect VehicleCollision Module
#if ((defined Tryg3D_Streamer) && (defined Tryg3D_ColAndreas) && (!defined DISABLE_3D_TRYG_VEHICLECOL))
	#define Tryg3D_VehicleCollision
	#define Tryg3D_Module_VehicleCollision				(1)
#else
	#define Tryg3D_Module_VehicleCollision				(0)
#endif

//Detect i_quat Include by IllidanS4
#if ((defined GetVehicleRotation) && (defined VectorRelToAbsQuat))
	#define Tryg3D_i_quat
#endif

#if (defined _INC_y_utils && defined RandomFloat && !defined ENABLE_3D_TRYG_YSI_SUPPORT)
	#error [ADM] Include collision detected 'YSI/YSI_Core/y_utils.inc' use #define ENABLE_3D_TRYG_YSI_SUPPORT before 3DTryg.inc for fix this
#endif

#define Tryg3D_Function::								stock
#define Tryg3D_Deprecated::								stock
#define Tryg3D_Public::%0(%1)							forward %0(%1); public %0(%1)
#define T3D:											v3D
#define Tryg3D::										Tryg3D_
#define FCNPC::											FCNPC_
#define ColAndreas:: 									CA_
#define Streamer:: 										Streamer_
#define Item:: 											Item_
