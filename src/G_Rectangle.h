#pragma once
#include "G_Triangle.h"
class G_Rectangle: public G_Shape<G_Rectangle>
{
public:
	G_Triangle a;
	G_Triangle b;


	G_Rectangle(float* p);

	G_Rectangle();

	G_Rectangle setVertex(float* p);

	G_Rectangle setVertexIndex(int i, float x, float y);

	G_Rectangle update();

	void draw();
};

