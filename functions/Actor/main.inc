/************************************************************************************************************************************
 *                                                                                                                                  *
 * Actor Functions                                                                                                                  *
 *                                                                                                                                  *
 ************************************************************************************************************************************/

#define GetActorDistanceFromPoint(%0,%1,%2,%3)	Item::GetDistanceFromPoint((%0),item_actor,(%1),(%2),(%3))
#define GetPlayerActorDistance(%1,%2)			Item::GetDistance((%1),item_player,(%1),item_actor)
#define IsActorInRangeOfPoint(%0,%1,%2,%3,%4)	(Item::GetDistanceFromPoint((%0),item_actor,(%2),(%3),(%4)) <= (%1))	
