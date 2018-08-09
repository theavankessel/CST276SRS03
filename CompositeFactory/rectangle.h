#pragma once
#include "graphic.h"
#include "point.h"

class Rectangle : public Graphic
{
public:
	Rectangle(Point upperLeftPoint, double height, double width);
	void draw() override;
	void save() override;
	void load() override;

private:
	Point upperLeftPoint_;
	double height_ = 0;
	double width_ = 0;
};