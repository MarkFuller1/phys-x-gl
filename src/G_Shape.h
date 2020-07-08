#pragma once
template <typename T>
class G_Shape
{
	virtual T update() = 0;
	virtual void draw() = 0;
};

