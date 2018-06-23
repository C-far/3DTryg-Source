Tryg3D::Function:: GetRandomPointInStream(Stream:StreamData[Stream3D],&Float:x,&Float:y,&Float:z){
	switch(StreamData[T3D:type]){
		case s_circle: {
			GetRandomPointInCircle(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:R],x,y);
			z = FLOAT_INFINITY;
			return 1;
		}
		case s_cylinder3d: {
			GetRandomPointInCylinder3D(StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],StreamData[T3D:R],x,y,z);
			return 1;
		}
		case s_cylinder2d: {
			GetRandomPointInCylinder2D(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:maxZ],StreamData[T3D:R],x,y,z);
			return 1;
		}
		case s_sphere: {
			GetRandomPointInSphere(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:R],x,y,z);
			return 1;
		}
		case s_rectangle: {
			GetRandomPointInRectangle(StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:maxX],StreamData[T3D:maxY],x,y);
			z = FLOAT_INFINITY;
			return 1;
		}
		case s_cube2d: {
			GetRandomPointInCube(StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],x,y,z);
			return 1;
		}
		case s_circularsector: {
			GetRandomPointInCircularSector(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:R],StreamData[T3D:maxZ],x,y);
			z = FLOAT_INFINITY;
			return 1;
		}
		case s_sphericalsector: {
			GetRandomPointInSphericalSector(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:minX],StreamData[T3D:minZ],StreamData[T3D:R],StreamData[T3D:maxX],StreamData[T3D:maxZ],x,y,z);
			return 1;
		}
		case s_cone: {
			GetRandomPointInCone3D(StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],StreamData[T3D:X],StreamData[T3D:Y],x,y,z);
			return 1;
		}
		case s_cube3d: {
			GetRandomPointInCube3D(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],x,y,z);
			return 1;
		}
		case s_ellipse: {
			GetRandomPointInEllipse(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minX],StreamData[T3D:minY],x,y);
			z = FLOAT_INFINITY;
			return 1;
		}
		case s_ellipticalcyl2d: {
			GetRandomPointInEllipticalCyl2D(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:maxZ],StreamData[T3D:minX],StreamData[T3D:minY],x,y,z);
			return 1;
		}
	}
	return 0;
}