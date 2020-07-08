#include "G_Triangle.h"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

G_Triangle::G_Triangle(float* p)
{
	glGenBuffers(1, &triangle_id);

	for (int i = 0; i < G_Triangle::_POINT_COUNT; i++) {
		_vertex.point[i] = p[i];
	}
}

G_Triangle::G_Triangle()
{
}

G_Triangle G_Triangle::setVertex(float* p)
{
	for (int i = 0; i < G_Triangle::_POINT_COUNT; i++) {
		_vertex.point[i] = p[i];
	}
	return *this;
}

G_Triangle G_Triangle::setVertexIndex(int i, float x, float y)
{
	_vertex.point[i * 2] = x;
	_vertex.point[i * 2 + 1] = y;
	
	return *this;
}

G_Triangle G_Triangle::update()
{
	glBindBuffer(GL_ARRAY_BUFFER, triangle_id);

	glBufferData(GL_ARRAY_BUFFER, G_Triangle::_POINT_COUNT * sizeof(float), _vertex.point, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0);

	glBindBuffer(GL_ARRAY_BUFFER, 0);

	return *this;
}

void G_Triangle::draw()
{
	glBindBuffer(GL_ARRAY_BUFFER, triangle_id);

	glEnableVertexAttribArray(0);

	glDrawArrays(GL_TRIANGLES, 0, 3);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
}
