#pragma once
#include <vector>
#include "graphic.h"
#include "point.h"

class Polygon : public Graphic
{
public:
	Polygon(std::vector<Point> vertices);
	void draw() override;
	void save() override;
	void load() override;

private:
	std::vector<Point> vertices_;
}