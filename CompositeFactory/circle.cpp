#include "stdafx.h"
#include "circle.h"

Circle::Circle(Point center, double radius) : center_(center), radius_(radius)
{
}

void to_json(nlohmann::json & j, Circle const & circle)
{
	j["Circle"] = { { Circle::centerName, circle.center_ },{ Circle::radiusName, circle.radius_ } };
}

void Circle::to_json(nlohmann::json & j) const
{
	::to_json(j, *this);
}

void from_json(const nlohmann::json & j, Circle& circle)
{
	circle.center_ = j["Circle"].at(Circle::centerName).get<decltype(circle.center_)>();
	circle.radius_ = j["Circle"].at(Circle::radiusName).get<decltype(circle.radius_)>();
}

void Circle::from_json(const nlohmann::json & j)
{
	::from_json(j, *this);
}

void Circle::draw()
{
	// draw
}

void Circle::save(nlohmann::json &j) const
{
	::to_json(j, *this);
}

void Circle::load(const nlohmann::json &j)
{
	::from_json(j, *this);
}




