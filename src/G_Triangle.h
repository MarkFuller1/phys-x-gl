#pragma once
#include "G_Shape.h"

class G_Triangle: public G_Shape<G_Triangle>
{

public:
	const static int _POINT_COUNT = 6;
	unsigned int triangle_id;

	struct vertex
	{
	public:
		float point[G_Triangle::_POINT_COUNT];
	} _vertex;


	G_Triangle(float* p);

	G_Triangle();

	G_Triangle setVertex(float* p);

	G_Triangle setVertexIndex(int i ,float x, float y);

	G_Triangle update();

	void draw();
};

