#include "stdafx.h"
#include "rectangle.h"
#include "stdafx.h"
#include "rectangle.h"

Rectangle::Rectangle(Point upperLeftPoint, double height, double width) : upperLeftPoint_(upperLeftPoint), height_(height), width_(width)
{
}

void to_json(nlohmann::json & j, Rectangle const & rectangle)
{
	j["Rectangle"] = { { Rectangle::upperLeftPointName_, rectangle.upperLeftPoint_ },{ Rectangle::heightName_, rectangle.height_ },{ Rectangle::widthName_, rectangle.width_ } };
}

void from_json(const nlohmann::json & j, Rectangle & rectangle)
{
	rectangle.upperLeftPoint_ = j.at(Rectangle::upperLeftPointName_).get<Point>();
	rectangle.height_ = j.at(Rectangle::heightName_).get<decltype(rectangle.height_)>();
	rectangle.width_ = j.at(Rectangle::widthName_).get<decltype(rectangle.width_)>();
}

void Rectangle::to_json(nlohmann::json & j) const
{
	::to_json(j, *this);
}

void Rectangle::from_json(const nlohmann::json & j)
{
	::from_json(j, *this);
}

void Rectangle::draw()
{
	// draw
}

void Rectangle::save(nlohmann::json &j) const
{
	::to_json(j, *this);
}

void Rectangle::load(const nlohmann::json &j)
{
	::from_json(j, *this);
}

double Rectangle::getHeight()
{
	return height_;
}

double Rectangle::getWidth()
{
	return width_;
}

void Rectangle::setHeight(double height)
{
	height_ = height;
}

void Rectangle::setWidth(double width)
{
	width_ = width;
}


