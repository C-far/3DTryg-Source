/************************************************************************************************************************************
 *                                                                                                                                  *
 * VehicleStreamer Functions                                                                                                        *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#define GetDynamicVehicleFlags(%0)						GetVehicleFlagsByModel(GetDynamicVehicleModel(%0))
#define IsDynVehInRangeOfPoint(%0,%1,%2,%3,%4)			(GetDynamicVehDistanceFromPoint((%0),(%2),(%3),(%4)) <= (%1))

