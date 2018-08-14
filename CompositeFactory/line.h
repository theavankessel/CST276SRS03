#pragma once
#include "graphic.h"
#include "point.h"

class Line : public Graphic
{
	friend void to_json(nlohmann::json& j, Line const& line);
	friend void from_json(const nlohmann::json& j, Line& line);

public:
	Line() = default;
	Line(Point point1, Point point2);
	void draw() override;
	void save(nlohmann::json &j) const override;
	void load(const nlohmann::json &j) override;
	void to_json(nlohmann::json & j) const override;
	void from_json(const nlohmann::json & j) override;

private:
	int id_ = 3;
	Point point1_;
	Point point2_;

	static auto constexpr pointOneName{ "point1" };
	static auto constexpr pointTwoName{ "point2" };
};