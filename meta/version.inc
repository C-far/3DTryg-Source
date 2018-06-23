/*
//Check Version 3DTryg.inc
#if !defined _3D_Tryg
	#error [ADM] You need 3DTryg.inc v4.6.1 (8.ct8.pl/d/3DTryg.inc)
#elseif !defined Tryg3D_Version
	#error [ADM] Update you 3DTryg.inc to v4.6.1 (8.ct8.pl/d/3DTryg.inc)
#elseif (Tryg3D_Version < 40601)
	#error [ADM] Update you 3DTryg.inc to v4.6.1 (8.ct8.pl/d/3DTryg.inc)
#endif
*/

/************************************************************************************************************************************
 *                                                                                                                                  *
 * Version                                                                                                                          *
 *                                                                                                                                  *
 ************************************************************************************************************************************/
 
#if defined _3D_Tryg
	#endinput
#endif
#define _3D_Tryg

#define Tryg3D_Version									(40601) //a.b.c 10000*a+100*b+c
#define Tryg3D_SAMP_Version								"0.3.7"

#if defined _samp_included
	#if (!defined GetPlayerPoolSize || !defined GetSVarInt)
		#error [ADM] This include requires SA:MP version 0.3.7 (8.ct8.pl/r/download)
	#endif
#elseif defined _rwmp_included
	#error [ADM] This game currently is not supported
#else
	#error [ADM] Not found any general game includes
#endif

#if defined _Text_Draw_Ex
	#error [ADM] Please remove deprecated file TextDrawEx.inc (already implemented)
#endif

#if defined _Map_Andreas_Ex
	#error [ADM] Please remove deprecated file MapAndreasEx.inc (already implemented)
#endif

#if defined _INC_VEHPARTS
	#error [ADM] Please remove deprecated file VehiclePartPosition.inc (already implemented, check: GetVehiclePartPos)
#endif

//Update Checker
#if !defined HTTP
	#tryinclude <a_http>
#endif

#if !defined HTTP
	#error [ADM] Please include a_http.inc before 3DTryg.inc
#endif

#if defined _EVF_include
	#error [ADM] Please include EVF.inc after 3DTryg.inc for improvements
#endif
