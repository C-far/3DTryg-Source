Tryg3D::Function:: GetRandomPointOnCube(Float:minx,Float:miny,Float:minz,Float:maxx,Float:maxy,Float:maxz,&Float:tx,&Float:ty,&Float:tz){
	switch(random(12)){
		case 0: {
			tx = minx;
			ty = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(miny-maxy,2)),6)+miny;
			tz = minz;
		}
		case 1: {
			tx = maxx;
			ty = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(miny-maxy,2)),6)+miny;
			tz = minz;
		}
		case 2: {
			tx = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minx-maxx,2)),6)+minx;
			ty = miny;
			tz = minz;
		}
		case 3: {
			tx = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minx-maxx,2)),6)+minx;
			ty = maxy;
			tz = minz;
		}
		case 4: {
			tx = minx;
			ty = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(miny-maxy,2)),6)+miny;
			tz = maxz;
		}
		case 5: {
			tx = maxx;
			ty = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(miny-maxy,2)),6)+miny;
			tz = maxz;
		}
		case 6: {
			tx = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minx-maxx,2)),6)+minx;
			ty = miny;
			tz = maxz;
		}
		case 7: {
			tx = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minx-maxx,2)),6)+minx;
			ty = maxy;
			tz = maxz;
		}
		case 8: {
			tx = minx;
			ty = miny;
			tz = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minz-maxz,2)),6)+minz;
		}
		case 9: {
			tx = maxx;
			ty = miny;
			tz = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minz-maxz,2)),6)+minz;
		}
		case 10: {
			tx = minx;
			ty = maxy;
			tz = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minz-maxz,2)),6)+minz;
		}
		case 11: {
			tx = maxx;
			ty = maxy;
			tz = Tryg3D::RandomFloat(0.0,floatsqroot(floatpower(minz-maxz,2)),6)+minz;
		}
	}
}