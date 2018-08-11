#pragma once
#include "graphic.h"
#include "point.h"

class Circle : public Graphic
{
public:
	Circle(Point center, double radius);
	void draw() override;
	void save(std::ostream & stream) const override;
	void load(std::istream & stream) override;

private:
	Point center_;
	double radius_;
};