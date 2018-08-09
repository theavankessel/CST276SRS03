#pragma once
#include "graphic.h"
#include "point.h"

class Circle : public Graphic
{
public:
	Circle(Point center, double radius);
	void draw() override;
	void save() override;
	void load() override;

private:
	Point center_;
	double radius_;
};