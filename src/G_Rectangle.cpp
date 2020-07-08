#include "G_Rectangle.h"

G_Rectangle::G_Rectangle(float* p)
{
	// two of the vertices will be shared.
	//there are 4 vertices in p

	a.setVertex(p);
	b.setVertex(&p[2/* the beginning of the second vertex*/]);

}

G_Rectangle::G_Rectangle()
{
}

G_Rectangle G_Rectangle::setVertex(float* p)
{
	// two of the vertices will be shared.
	//there are 4 vertices in p

	a.setVertex(p);
	b.setVertex(&p[2]);

	return *this;
}	

G_Rectangle G_Rectangle::setVertexIndex(int i, float x, float y)
{
	return *this;
}

G_Rectangle G_Rectangle::update()
{
	a.update();
	b.update();

	return *this;
}

void G_Rectangle::draw()
{
	a.draw();
	b.draw();
}
