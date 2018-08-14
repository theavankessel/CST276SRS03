#pragma once
#include <vector>
#include "graphic.h"
#include "point.h"

class Polygon : public Graphic
{
	friend void to_json(nlohmann::json& j, Polygon const& polygon);
	friend void from_json(const nlohmann::json& j, Polygon& polygon);

public:
	Polygon() = default;
	Polygon(Point point1, int numOfSides, double length, int angle);
	void draw() override;
	void save(nlohmann::json &j) const override;
	void load(const nlohmann::json &j) override;
	void to_json(nlohmann::json & j) const override;
	void from_json(const nlohmann::json & j) override;

private:
	int id_ = 4;
	Point point1_;
	int numOfSides_;
	double length_;
	int angle_;

	static auto constexpr pointOneName{ "pointOne" };
	static auto constexpr numOfSidesName{ "numOfSides" };
	static auto constexpr lengthName{ "length" };
	static auto constexpr angleName{ "angle" };
};