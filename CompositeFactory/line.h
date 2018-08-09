#pragma once
#include "graphic.h"
#include "point.h"

class Line : public Graphic
{
public:
	void draw() override;
	void save() override;
	void load() override;

private:
	Point point1_;
	Point point2_;
};