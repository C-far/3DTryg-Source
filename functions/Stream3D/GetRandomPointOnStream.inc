Tryg3D::Function:: GetRandomPointOnStream(Stream:StreamData[Stream3D],&Float:x,&Float:y,&Float:z){
	switch(StreamData[T3D:type]){
		case s_circle: {
			GetRandomPointOnCircle(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:R],x,y);
			z = FLOAT_INFINITY;
			return 1;
		}
		case s_cylinder3d: {
			GetRandomPointOnCylinder3D(StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],StreamData[T3D:R],x,y,z);
			return 1;
		}
		case s_cylinder2d: {
			GetRandomPointOnCylinder2D(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:maxZ],StreamData[T3D:R],x,y,z);
			return 1;
		}
		case s_sphere: {
			GetRandomPointOnSphere(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:R],x,y,z);
			return 1;
		}
		case s_rectangle: {
			GetRandomPointOnRectangle(StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:maxX],StreamData[T3D:maxY],x,y);
			z = FLOAT_INFINITY;
			return 1;
		}
		case s_cube2d: {
			GetRandomPointOnCube(StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],x,y,z);
			return 1;
		}
		case s_circularsector: {
			GetRandomPointOnCircularSector(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:R],StreamData[T3D:maxZ],x,y);
			z = FLOAT_INFINITY;
			return 1;
		}
		case s_sphericalsector: {
			GetRandomPointOnSphericalSector(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:minX],StreamData[T3D:minZ],StreamData[T3D:R],StreamData[T3D:maxX],StreamData[T3D:maxZ],x,y,z);
			return 1;
		}
		case s_cone: {
			GetRandomPointOnCone3D(StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],StreamData[T3D:X],StreamData[T3D:Y],x,y,z);
			return 1;
		}
		case s_cube3d: {
			GetRandomPointOnCube3D(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:Z],StreamData[T3D:minX],StreamData[T3D:minY],StreamData[T3D:minZ],StreamData[T3D:maxX],StreamData[T3D:maxY],StreamData[T3D:maxZ],x,y,z);
			return 1;
		}
		case s_ellipse: {
			GetRandomPointOnEllipse(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minX],StreamData[T3D:minY],x,y);
			z = FLOAT_INFINITY;
			return 1;
		}
		case s_ellipticalcyl2d: {
			GetRandomPointOnEllipticalCyl2D(StreamData[T3D:X],StreamData[T3D:Y],StreamData[T3D:minZ],StreamData[T3D:maxZ],StreamData[T3D:minX],StreamData[T3D:minY],x,y,z);
			return 1;
		}
	}
	return 0;
}