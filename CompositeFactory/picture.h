#pragma once
#include <vector>
#include "graphic.h"

class Picture : public Graphic
{
public:
	void draw() override;
	void save() override;
	void load() override;
	void add(Graphic * graphic);
	void remove(Graphic * graphic);
	Graphic* getGraphic(int index);

private:
	std::vector<Graphic*> graphics_;
};