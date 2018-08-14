#include "stdafx.h"
#include "line.h"

Line::Line(Point point1, Point point2) : point1_(point1), point2_(point2)
{
}

void to_json(nlohmann::json & j, Line const & line)
{
	j["Line"] = { { Line::pointOneName, line.point1_ },{ Line::pointTwoName, line.point2_ } };
}

void Line::to_json(nlohmann::json & j) const
{
	::to_json(j, *this);
}

void from_json(const nlohmann::json & j, Line & line)
{
	line.point1_ = j["Line"].at(Line::pointOneName).get<decltype(line.point1_)>();
	line.point2_ = j["Line"].at(Line::pointTwoName).get<decltype(line.point2_)>();
}

void Line::from_json(const nlohmann::json & j)
{
	::from_json(j, *this);
}

void Line::draw()
{
	// draw
}

void Line::save(nlohmann::json &j) const
{
	::to_json(j, *this);
}

void Line::load(const nlohmann::json &j)
{
	::from_json(j, *this);
}




