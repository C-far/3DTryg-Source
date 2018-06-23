Tryg3D::Function:: Item::ToItemIsWall(TRYG3D_ELEMENT_TAG elementid,Item3D_Type:element_type,TRYG3D_ELEMENT_TAG targetid,Item3D_Type:target_type){
	new Float:xA,Float:yA,Float:zA,Float:xB,Float:yB,Float:zB,Float:T3D:tmp;
	if(!Item::GetPos(elementid,element_type,xA,yA,zA)) return false;
	if(!Item::GetPos(targetid,target_type,xB,yB,zB)) return false;
	return ColAndreas::RayCastLine(xA,yA,zA,xB,yB,zB,T3D:tmp,T3D:tmp,T3D:tmp);
}