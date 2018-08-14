#pragma once
#include "graphic.h"
#include "point.h"
#include "nlohmann/json.hpp"

class Rectangle : public Graphic
{
	friend void to_json(nlohmann::json& j, Rectangle const& rectangle);
	friend void from_json(const nlohmann::json& j, Rectangle& rectangle);

public:
	Rectangle() = default;
	Rectangle(Point upperLeftPoint, double height, double width);
	void draw() override;
	void save(nlohmann::json &j) const override;
	void load(const nlohmann::json &j) override;
	virtual void to_json(nlohmann::json & j) const override;
	void from_json(const nlohmann::json & j) override;

	double getHeight();
	double getWidth();
	void setHeight(double height);
	void setWidth(double width);

private:
	int id_ = 1;
	Point upperLeftPoint_;
	double height_ = 0;
	double width_ = 0;	
	static auto constexpr upperLeftPointName_{ "upperLeftPoint" };
	static auto constexpr heightName_{ "height" };
	static auto constexpr widthName_{ "width" };
};