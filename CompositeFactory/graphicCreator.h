#pragma once
#include "graphic.h"

class GraphicCreator
{
public:
	Graphic * createGraphic(std::string key) const;
	static const GraphicCreator& getInstance(); // static says there is only one

private:
	GraphicCreator() = default;
};