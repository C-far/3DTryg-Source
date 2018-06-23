/************************************************************************************************************************************
 *                                                                                                                                  *
 * Streamer Functions                                                                                                               *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#define IsDynamicObjectInRangeOfPoint(%0,%1,%2,%3,%4) 	(Item::GetDistanceFromPoint((%0),item_dynamic_object,(%2),(%3),(%4)) <= (%1))
#define IsDynamicActorInRangeOfPoint(%0,%1,%2,%3,%4)	(Item::GetDistanceFromPoint((%0),item_dynamic_actor,(%2),(%3),(%4)) <= (%1))
