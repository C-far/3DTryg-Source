Tryg3D::Function:: GetRandomPointInRectangle(Float:minx,Float:miny,Float:maxx,Float:maxy,&Float:tx,&Float:ty){
	tx = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minx-maxx,2)),6)+minx;
	ty = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(miny-maxy,2)),6)+miny;
}