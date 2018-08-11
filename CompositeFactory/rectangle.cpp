#include "stdafx.h"
#include "rectangle.h"
#include "stdafx.h"
#include "rectangle.h"

Rectangle::Rectangle(Point upperLeftPoint, double height, double width) : upperLeftPoint_(upperLeftPoint), height_(height), width_(width)
{
}

void Rectangle::draw()
{
	std::cout << upperLeftPoint_ << " height: " << height_ << " width: " << width_;
}

void Rectangle::save(std::ostream & stream) const
{
	nlohmann::json j{ *this };
	stream << j;
}

void Rectangle::load(std::istream & stream)
{
	nlohmann::json j;
	stream >> j;
	*this = j;
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

void to_json(nlohmann::json & j, Rectangle const & rectangle)
{
	j = nlohmann::json{ {Rectangle::upperLeftPointName_, rectangle.upperLeftPoint_},  {Rectangle::heightName_, rectangle.height_}, {Rectangle::widthName_, rectangle.width_} };
}

void from_json(nlohmann::json const & j, Rectangle & rectangle)
{
	rectangle.height_ = j.at(Rectangle::heightName_).get<decltype(rectangle.height_)>();
	rectangle.width_ = j.at(Rectangle::widthName_).get<decltype(rectangle.width_)>();
	rectangle.upperLeftPoint_ = j.at(Rectangle::upperLeftPointName_).get<Point>();
}
