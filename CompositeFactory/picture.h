#pragma once
#include <vector>
#include "graphic.h"

class Picture : public Graphic
{
public:
	void draw() override;
	void save(std::ostream & stream) const override;
	void load(std::istream & stream) override;
	void add(Graphic * graphic);
	void remove(Graphic * graphic);
	Graphic* getGraphic(int index);

private:
	std::vector<Graphic*> graphics_;
};