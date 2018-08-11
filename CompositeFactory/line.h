#pragma once
#include "graphic.h"
#include "point.h"

class Line : public Graphic
{
public:
	void draw() override;
	void save(std::ostream & stream) const override;
	void load(std::istream & stream) override;

private:
	Point point1_;
	Point point2_;
};