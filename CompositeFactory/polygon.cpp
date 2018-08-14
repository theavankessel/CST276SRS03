#include "stdafx.h"
#include "polygon.h"

Polygon::Polygon(Point point1, int numOfSides, double length, int angle) : point1_(point1), numOfSides_(numOfSides), length_(length), angle_(angle)
{
}

void to_json(nlohmann::json & j, Polygon const & polygon)
{
	j["Polygon"] = { { Polygon::pointOneName, polygon.point1_ },{ Polygon::numOfSidesName, polygon.numOfSides_ },{ Polygon::lengthName, polygon.length_ },{ Polygon::angleName, polygon.angle_ } };
}

void Polygon::to_json(nlohmann::json & j) const
{
	::to_json(j, *this);
}

void from_json(const nlohmann::json & j, Polygon & polygon)
{
	polygon.point1_ = j.at(Polygon::pointOneName).get<decltype(polygon.point1_)>();
	polygon.numOfSides_ = j.at(Polygon::numOfSidesName).get<decltype(polygon.numOfSides_)>();
	polygon.length_ = j.at(Polygon::lengthName).get<decltype(polygon.length_)>();
	polygon.angle_ = j.at(Polygon::angleName).get<decltype(polygon.angle_)>();
}

void Polygon::from_json(const nlohmann::json & j)
{
	::from_json(j, *this);
}

void Polygon::draw()
{
	// draw
}

void Polygon::save(nlohmann::json &j) const
{
	::to_json(j, *this);
}

void Polygon::load(const nlohmann::json &j)
{
	::from_json(j, *this);
}




