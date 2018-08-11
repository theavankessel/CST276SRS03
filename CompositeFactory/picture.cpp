#include "stdafx.h"
#include <algorithm>
#include "picture.h"

void Picture::draw()
{
	for (auto graphic : graphics_)
	{
		graphic->draw();
	}
}

void Picture::add(Graphic * graphic)
{
	graphics_.emplace_back(graphic);
}

void Picture::remove(Graphic * graphic)
{
	graphics_.erase(std::remove(graphics_.begin(), graphics_.end(), graphic), graphics_.end());
}

Graphic * Picture::getGraphic(int index)
{
	return graphics_[index];
}
