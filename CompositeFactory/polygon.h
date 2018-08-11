#pragma once
#include <vector>
#include "graphic.h"
#include "point.h"

class Polygon : public Graphic
{
public:
	Polygon(std::vector<Point> vertices);
	void draw() override;
	void save(std::ostream & stream) const override;
	void load(std::istream & stream) override;

private:
	std::vector<Point> vertices_;
};