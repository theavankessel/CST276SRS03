#include "stdafx.h"
#include "point.h"
#include "nlohmann/json.hpp"

Point::Point(int x, int y) : x_(x), y_(y)
{
}

int Point::getX()
{
	return x_;
}

int Point::getY()
{
	return y_;
}

void Point::setX(int x)
{
	x_ = x;
}

void Point::setY(int y)
{
	y_ = y;
}

void to_json(nlohmann::json & j, Point const & point)
{
	j = nlohmann::json{ { "x", point.x_ },{ "y", point.y_ } };
}

void from_json(nlohmann::json const & j, Point & point)
{
	point.x_ = j.at("x").get<decltype(point.x_)>();
	point.y_ = j.at("y").get<decltype(point.x_)>();
}

std::ostream & operator<<(std::ostream & os, const Point & point)
{
	os << "(" << point.x_ << ", " << point.y_ << ")";
	return os;
}
