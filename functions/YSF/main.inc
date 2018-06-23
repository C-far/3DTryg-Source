/************************************************************************************************************************************
 *                                                                                                                                  *
 * YSF Functions                                                                                                                    *
 *                                                                                                                                  *
 ************************************************************************************************************************************/


#define GetPlayerHydraReactorRX(%0) 				CompRotationFloat((GetPlayerHydraReactorAngle(%0)/55.5555555))
#define IsPlayerHydraReactorBoost(%0)				(GetPlayerHydraReactorAngle(%0) == 0)