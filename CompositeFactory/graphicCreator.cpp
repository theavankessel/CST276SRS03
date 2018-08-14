#include "stdafx.h"
#include "graphicCreator.h"
#include "circle.h"
#include "line.h"
#include "polygon.h"
#include "rectangle.h"
#include "picture.h"

Graphic * GraphicCreator::createGraphic(std::string key) const
{
	Graphic * result = nullptr;
	if (key == "Circle")
	{
		result = new Circle();
	}
	else if (key == "Line")
	{
		result = new Line();
	}
	else if (key == "Polygon")
	{
		result = new Polygon();
	}
	else if (key == "Rectangle")
	{
		result = new Rectangle();
	}
	else if (key == "Picture")
	{
		result = new Picture();
	}

	return result;
}

// GoF Singleton
const GraphicCreator & GraphicCreator::getInstance()
{
	static GraphicCreator graphicCreator;
	return graphicCreator;
}
