#pragma once
#include "nlohmann/json.hpp"
#include "graphic.h"
#include "point.h"

class Circle : public Graphic
{
	friend void to_json(nlohmann::json& j, Circle const& circle);
	friend void from_json(const nlohmann::json& j, Circle& circle);

public:
	Circle() = default;
	Circle(Point center, double radius);
	void draw() override;
	void save(nlohmann::json &j) const override;
	void load(const nlohmann::json &j) override;
	void to_json(nlohmann::json & j) const override;
	void from_json(const nlohmann::json & j) override;

private:
	int id_ = 2;
	Point center_; 
	double radius_;

	static auto constexpr centerName{ "center" };
	static auto constexpr radiusName{ "radius" };
};